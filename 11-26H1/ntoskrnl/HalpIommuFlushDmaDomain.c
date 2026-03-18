/*
 * XREFs of HalpIommuFlushDmaDomain @ 0x14047B404
 * Callers:
 *     HalpIommuFlushDomainTbs @ 0x14047B168 (HalpIommuFlushDomainTbs.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExReleaseSpinLockShared @ 0x14026CEE0 (ExReleaseSpinLockShared.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     ExAcquireSpinLockShared @ 0x1402EDF10 (ExAcquireSpinLockShared.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     IommuFlushTb @ 0x14059C2C0 (IommuFlushTb.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall HalpIommuFlushDmaDomain(__int64 a1, __int64 a2)
{
  KIRQL v3; // di
  unsigned __int8 CurrentIrql; // bp
  _QWORD *j; // rsi
  _QWORD *i; // rsi
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF

  v7 = a2;
  v3 = 0;
  CurrentIrql = KeGetCurrentIrql();
  if ( *(_DWORD *)(a1 + 8) )
  {
    if ( CurrentIrql != 15 )
      v3 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 88));
    for ( i = *(_QWORD **)(a1 + 72); i != (_QWORD *)(a1 + 72); i = (_QWORD *)*i )
      IommuFlushTb(i[3], 1LL, &v7);
    if ( CurrentIrql != 15 )
      ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 88), v3);
  }
  else
  {
    if ( CurrentIrql != 15 )
      v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 32));
    for ( j = *(_QWORD **)(a1 + 16); j != (_QWORD *)(a1 + 16); j = (_QWORD *)*j )
    {
      if ( !HalpHvIommu )
        guard_dispatch_icall_no_overrides(*(_QWORD *)(j[3] + 16LL), j + 4);
    }
    if ( CurrentIrql != 15 )
    {
      KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 32));
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v3);
      __writecr8(v3);
    }
  }
}
