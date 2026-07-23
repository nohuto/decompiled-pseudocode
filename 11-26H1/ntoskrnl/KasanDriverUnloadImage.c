/*
 * XREFs of KasanDriverUnloadImage @ 0x1405DFDF0
 * Callers:
 *     MiUnloadSystemImage @ 0x140AC92D8 (MiUnloadSystemImage.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiReleaseSpinLockInstrumented @ 0x140308CAC (KiReleaseSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x1403313B0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1403314C0 (KxWaitForSpinLockAndAcquire.c)
 *     RtlRbRemoveNode @ 0x140379A10 (RtlRbRemoveNode.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KasanMarkAddressValidNoInline @ 0x1405257D0 (KasanMarkAddressValidNoInline.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall KasanDriverUnloadImage(__int64 a1)
{
  _RTL_BALANCED_NODE *v1; // rdi
  unsigned __int8 CurrentIrql; // bp
  unsigned __int64 Root; // rbx
  _RTL_BALANCED_NODE *v4; // rsi
  _RTL_BALANCED_NODE *v5; // rax
  unsigned __int64 v6; // rax
  ULONG_PTR *v7; // rdi
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( !byte_140FC8BD8 )
    return;
  v1 = *(_RTL_BALANCED_NODE **)(a1 + 48);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    if ( _interlockedbittestandset64((volatile signed __int32 *)((char *)&KdDebuggerEnabled + 7), 0LL) )
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)((char *)&KdDebuggerEnabled + 7));
  }
  else
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)((char *)&KdDebuggerEnabled + 7));
  }
  Root = (unsigned __int64)KasanDriverUnloadInfos.Root;
  v4 = 0LL;
  if ( (*(_BYTE *)&KasanDriverUnloadInfos.0 & 1) == 0 )
    goto LABEL_14;
  if ( KasanDriverUnloadInfos.Root )
  {
    Root = (unsigned __int64)&KasanDriverUnloadInfos ^ (unsigned __int64)KasanDriverUnloadInfos.Root;
LABEL_14:
    if ( Root )
    {
      while ( 1 )
      {
        v5 = *(_RTL_BALANCED_NODE **)(Root + 24);
        if ( v1 >= v5[2].Children[0] )
        {
          if ( v1 == v5[2].Children[0] )
          {
            RtlRbRemoveNode(&KasanDriverUnloadInfos, (PRTL_BALANCED_NODE)Root);
            goto LABEL_27;
          }
          v6 = *(_QWORD *)(Root + 8);
        }
        else
        {
          v6 = *(_QWORD *)Root;
        }
        if ( (*(_BYTE *)&KasanDriverUnloadInfos.0 & 1) != 0 && v6 )
          Root ^= v6;
        else
          Root = v6;
        if ( !Root )
          goto LABEL_27;
      }
    }
    goto LABEL_27;
  }
  Root = 0LL;
LABEL_27:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    _InterlockedAnd64((volatile signed __int64 *)((char *)&KdDebuggerEnabled + 7), 0LL);
  else
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)((char *)&KdDebuggerEnabled + 7), retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( Root )
  {
    if ( *(_QWORD *)(Root + 32) )
    {
      v7 = (ULONG_PTR *)(Root + 40);
      do
      {
        if ( byte_140FC8BD8 )
          KasanMarkAddressValidNoInline(*v7, v7[1]);
        v4 = (_RTL_BALANCED_NODE *)((char *)v4 + 1);
        v7 += 2;
      }
      while ( (unsigned __int64)v4 < *(_QWORD *)(Root + 32) );
    }
    ExFreePoolWithTag((PVOID)Root, 0);
  }
}
