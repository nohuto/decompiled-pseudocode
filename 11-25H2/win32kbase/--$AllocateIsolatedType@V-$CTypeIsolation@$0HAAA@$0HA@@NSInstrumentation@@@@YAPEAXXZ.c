/*
 * XREFs of ??$AllocateIsolatedType@V?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAPEAXXZ @ 0x14000EDDC
 * Callers:
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@AEBVRustAutoHotpatchLockSH@@K@Z @ 0x1401C4370 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@AEBVRustAutoHotpatchLockSH@@K@Z.c)
 * Callees:
 *     ?Allocate@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ @ 0x14000F9B0 (-Allocate@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

__int64 AllocateIsolatedType<NSInstrumentation::CTypeIsolation<28672,112>>()
{
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetSessionState() + 88) + 4272LL) + 56LL) )
    return NSInstrumentation::CTypeIsolation<28672,112>::Allocate();
  else
    return 0LL;
}
