/*
 * XREFs of HalpDmaControllerQueryMaxFragments @ 0x14043E548
 * Callers:
 *     HalMapTransferEx @ 0x14043F260 (HalMapTransferEx.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14032F2C0 (KxAcquireSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
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
