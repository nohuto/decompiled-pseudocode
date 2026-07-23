/*
 * XREFs of PopShutdownHandler @ 0x140C03FF0
 * Callers:
 *     <none>
 * Callees:
 *     InbvAcquireDisplayOwnership @ 0x1405C72E0 (InbvAcquireDisplayOwnership.c)
 *     BgDisplaySafeToPowerOffScreen @ 0x14071A6C0 (BgDisplaySafeToPowerOffScreen.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
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
