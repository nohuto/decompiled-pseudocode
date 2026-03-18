/*
 * XREFs of ?ScheduleCompositionPass@CCursorState@@AEAAXXZ @ 0x18018A534
 * Callers:
 *     ?SetPositionInternal@CCursorState@@AEAAXMM_N@Z @ 0x18015F974 (-SetPositionInternal@CCursorState@@AEAAXMM_N@Z.c)
 *     ?ProcessStateChanges@CCursorState@@QEAA_N_K@Z @ 0x18018A118 (-ProcessStateChanges@CCursorState@@QEAA_N_K@Z.c)
 *     ?ClearShape@CCursorState@@UEAAXXZ @ 0x180291270 (-ClearShape@CCursorState@@UEAAXXZ.c)
 *     ?SetCrosshairProperties@CCursorState@@UEAAXK@Z @ 0x180291E30 (-SetCrosshairProperties@CCursorState@@UEAAXK@Z.c)
 *     ?SetIsCrosshairEnabled@CCursorState@@UEAAX_N@Z @ 0x180291E90 (-SetIsCrosshairEnabled@CCursorState@@UEAAX_N@Z.c)
 *     ?SetIsShadowEnabled@CCursorState@@UEAAX_N@Z @ 0x180291EF0 (-SetIsShadowEnabled@CCursorState@@UEAAX_N@Z.c)
 *     ?SetIsTrailEnabled@CCursorState@@UEAAX_N@Z @ 0x180291F50 (-SetIsTrailEnabled@CCursorState@@UEAAX_N@Z.c)
 *     ?SetRotationAngle@CCursorState@@UEAAXM@Z @ 0x180291FC0 (-SetRotationAngle@CCursorState@@UEAAXM@Z.c)
 *     ?SetShape@CCursorState@@UEAAJPEAXIIII_NM@Z @ 0x180292040 (-SetShape@CCursorState@@UEAAJPEAXIIII_NM@Z.c)
 *     ?SetTrailLength@CCursorState@@UEAAJH@Z @ 0x180292360 (-SetTrailLength@CCursorState@@UEAAJH@Z.c)
 * Callees:
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800F39E0 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 */

void __fastcall CCursorState::ScheduleCompositionPass(CCursorState *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 8);
  if ( v1 )
    CComposition::ScheduleCompositionPass(v1, 0, 0x200000u);
}
