/*
 * XREFs of InbvCheckDisplayOwnership @ 0x1405C4B00
 * Callers:
 *     HaliHaltSystem @ 0x14057F6B0 (HaliHaltSystem.c)
 *     HalpCheckPowerButton @ 0x14057F750 (HalpCheckPowerButton.c)
 *     InbvRotateGuiBootDisplay @ 0x1405C4F80 (InbvRotateGuiBootDisplay.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall InbvCheckDisplayOwnership(__int64 a1, __int64 a2)
{
  if ( qword_140E65CE0 && *(_QWORD *)(qword_140E65CE0 + 64) )
    return guard_dispatch_icall_no_overrides(a1, a2);
  else
    return 0;
}
