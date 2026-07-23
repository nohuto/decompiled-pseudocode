/*
 * XREFs of HalpDmaControllerQueryMaxFragments @ 0x140437058
 * Callers:
 *     HalMapTransferEx @ 0x140437D70 (HalMapTransferEx.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpDmaControllerQueryMaxFragments(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  char v4; // bp
  unsigned __int8 CurrentIrql; // bl
  unsigned __int64 v6; // rdx
  KSPIN_LOCK *v7; // rsi
  unsigned int v8; // edi

  v3 = a1;
  v4 = 0;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql == 15 )
  {
    v7 = (KSPIN_LOCK *)(a1 + 168);
  }
  else
  {
    v6 = *(unsigned __int8 *)(a1 + 176);
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != (_BYTE)v6 )
      __writecr8(v6);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, v6);
    }
    v7 = (KSPIN_LOCK *)(v3 + 168);
    KxAcquireSpinLock((PKSPIN_LOCK)(v3 + 168));
    v4 = 1;
  }
  v8 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v3 + 64), *(unsigned int *)(a2 + 380));
  if ( v4 )
  {
    KxReleaseSpinLock(v7);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return v8;
}
