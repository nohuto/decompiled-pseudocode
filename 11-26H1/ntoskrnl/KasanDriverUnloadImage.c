/*
 * XREFs of KasanDriverUnloadImage @ 0x1405DD480
 * Callers:
 *     MiUnloadSystemImage @ 0x140AC76E8 (MiUnloadSystemImage.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402BDFEC (KiReleaseSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x14032F380 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x14032F490 (KxWaitForSpinLockAndAcquire.c)
 *     RtlRbRemoveNode @ 0x140377C60 (RtlRbRemoveNode.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KasanMarkAddressValidNoInline @ 0x140523160 (KasanMarkAddressValidNoInline.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall KasanDriverUnloadImage(__int64 a1)
{
  unsigned __int64 v1; // rdi
  unsigned __int8 CurrentIrql; // bp
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rsi
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  ULONG_PTR *v7; // rdi
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( !byte_140FC7BE8 )
    return;
  v1 = *(_QWORD *)(a1 + 48);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
  {
    if ( _interlockedbittestandset64((volatile signed __int32 *)((char *)&KdDebuggerEnabled + 7), 0LL) )
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)((char *)&KdDebuggerEnabled + 7));
  }
  else
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)((char *)&KdDebuggerEnabled + 7));
  }
  v3 = (unsigned __int64)KasanDriverUnloadInfos;
  v4 = 0LL;
  if ( (qword_140E66290 & 1) == 0 )
    goto LABEL_14;
  if ( KasanDriverUnloadInfos )
  {
    v3 = (unsigned __int64)&KasanDriverUnloadInfos ^ (unsigned __int64)KasanDriverUnloadInfos;
LABEL_14:
    if ( v3 )
    {
      while ( 1 )
      {
        v5 = *(_QWORD *)(v3 + 24);
        if ( v1 >= *(_QWORD *)(v5 + 48) )
        {
          if ( v1 == *(_QWORD *)(v5 + 48) )
          {
            RtlRbRemoveNode((__int64)&KasanDriverUnloadInfos, v3);
            goto LABEL_27;
          }
          v6 = *(_QWORD *)(v3 + 8);
        }
        else
        {
          v6 = *(_QWORD *)v3;
        }
        if ( (qword_140E66290 & 1) != 0 && v6 )
          v3 ^= v6;
        else
          v3 = v6;
        if ( !v3 )
          goto LABEL_27;
      }
    }
    goto LABEL_27;
  }
  v3 = 0LL;
LABEL_27:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
    _InterlockedAnd64((volatile signed __int64 *)((char *)&KdDebuggerEnabled + 7), 0LL);
  else
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)((char *)&KdDebuggerEnabled + 7), retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( v3 )
  {
    if ( *(_QWORD *)(v3 + 32) )
    {
      v7 = (ULONG_PTR *)(v3 + 40);
      do
      {
        if ( byte_140FC7BE8 )
          KasanMarkAddressValidNoInline(*v7, v7[1]);
        ++v4;
        v7 += 2;
      }
      while ( v4 < *(_QWORD *)(v3 + 32) );
    }
    ExFreePoolWithTag((PVOID)v3, 0);
  }
}
