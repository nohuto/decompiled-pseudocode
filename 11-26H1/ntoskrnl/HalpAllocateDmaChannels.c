/*
 * XREFs of HalpAllocateDmaChannels @ 0x14043712C
 * Callers:
 *     HalpAllocateDmaResourcesInternal @ 0x14043721C (HalpAllocateDmaResourcesInternal.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall HalpAllocateDmaChannels(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rsi
  unsigned __int64 v3; // rdx
  __int64 v4; // rdi
  unsigned __int8 CurrentIrql; // bl
  KSPIN_LOCK *v6; // rbp
  __int64 v8; // rdi
  __int64 *v9; // rax
  __int64 **v10; // rcx

  v1 = *(_QWORD *)(a1 + 368);
  v2 = a1;
  v3 = *(unsigned __int8 *)(v1 + 176);
  v4 = *(_QWORD *)(v1 + 56) + 160LL * *(unsigned int *)(a1 + 380);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v3 )
    __writecr8(v3);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, v3);
  }
  v6 = (KSPIN_LOCK *)(v1 + 168);
  KxAcquireSpinLock(v6);
  if ( *(_BYTE *)(v4 + 5) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v2 + 352) + 20LL) & 1) == 0 )
    {
      v8 = v4 + 144;
      v9 = (__int64 *)(v2 + 208);
      v10 = *(__int64 ***)(v8 + 8);
      if ( *v10 != (__int64 *)v8 )
        __fastfail(3u);
      *v9 = v8;
      *(_QWORD *)(v2 + 216) = v10;
      *v10 = v9;
      *(_QWORD *)(v8 + 8) = v9;
    }
    KxReleaseSpinLock(v6);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    return 0;
  }
  else
  {
    *(_BYTE *)(v4 + 5) = 1;
    *(_DWORD *)(v2 + 392) = 1;
    *(_QWORD *)(v4 + 24) = v2;
    KxReleaseSpinLock(v6);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    return 1;
  }
}
