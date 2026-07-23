/*
 * XREFs of InbvCheckDisplayOwnership @ 0x1405C7370
 * Callers:
 *     HaliHaltSystem @ 0x140581BD0 (HaliHaltSystem.c)
 *     HalpCheckPowerButton @ 0x140581C70 (HalpCheckPowerButton.c)
 *     InbvRotateGuiBootDisplay @ 0x1405C77F0 (InbvRotateGuiBootDisplay.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall InbvCheckDisplayOwnership(__int64 a1, __int64 a2)
{
  if ( qword_140E65EE8 && *(_QWORD *)(qword_140E65EE8 + 64) )
    return guard_dispatch_icall_no_overrides(a1, a2);
  else
    return 0;
}
