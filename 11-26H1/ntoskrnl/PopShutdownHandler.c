/*
 * XREFs of PopShutdownHandler @ 0x140BFDFA0
 * Callers:
 *     <none>
 * Callees:
 *     InbvAcquireDisplayOwnership @ 0x1405C4A70 (InbvAcquireDisplayOwnership.c)
 *     BgDisplaySafeToPowerOffScreen @ 0x1407159D0 (BgDisplaySafeToPowerOffScreen.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall __noreturn PopShutdownHandler(__int64 a1, __int64 a2)
{
  _disable();
  if ( !KeGetCurrentPrcb()->Number )
  {
    InbvAcquireDisplayOwnership(a1, a2);
    BgDisplaySafeToPowerOffScreen();
  }
  while ( 1 )
    guard_dispatch_icall_no_overrides(a1, a2);
}
