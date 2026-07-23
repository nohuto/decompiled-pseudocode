/*
 * XREFs of PopSstInvokeNotificationHandlers @ 0x140BFF490
 * Callers:
 *     PopHiberCheckResume @ 0x140C008A0 (PopHiberCheckResume.c)
 *     PopMarkComponentsBootPhase @ 0x140C00E30 (PopMarkComponentsBootPhase.c)
 *     PopSaveHiberContext @ 0x140C01D50 (PopSaveHiberContext.c)
 * Callees:
 *     PoSetHiberRange @ 0x1404A93F0 (PoSetHiberRange.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall PopSstInvokeNotificationHandlers(unsigned int a1)
{
  PVOID *i; // rbx

  for ( i = (PVOID *)PopSstNotificationHandlerList; i != &PopSstNotificationHandlerList; i = (PVOID *)*i )
  {
    guard_dispatch_icall_no_overrides((__int64)i[4], a1);
    if ( a1 == 1 )
    {
      PoSetHiberRange(0LL, 0x10000u, i, 0x28uLL, 0);
      PoSetHiberRange(0LL, 0x10000u, i[3], 0LL, 0);
    }
  }
}
