/*
 * XREFs of ?ShouldStoreAfterProcessing@CRecalcState@@QEBA_NPEBUtagWND@@@Z @ 0x14011D60C
 * Callers:
 *     ?ShouldRestoreWindowToState@CRecalcState@@QEBA_NPEBUtagWND@@@Z @ 0x14011D0A0 (-ShouldRestoreWindowToState@CRecalcState@@QEBA_NPEBUtagWND@@@Z.c)
 *     ?PruneRecalcStateList@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x14011D2A8 (-PruneRecalcStateList@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z.c)
 *     ?CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@PEAW4ProcessingDecision@1@@Z @ 0x14015DA7C (-CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x14011F33C (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?RestoreStateSettingEnabled@DesktopRecalcSettings@@YA_NXZ @ 0x14015CB14 (-RestoreStateSettingEnabled@DesktopRecalcSettings@@YA_NXZ.c)
 *     IsImmersiveBand @ 0x14015E3C0 (IsImmersiveBand.c)
 */

bool __fastcall CRecalcState::ShouldStoreAfterProcessing(CRecalcState *this, const struct tagWND *a2)
{
  __int64 v2; // r8
  DesktopRecalcSettings *v3; // rcx
  __int64 v4; // r8

  if ( *((_DWORD *)this + 6) == 2
    || (unsigned int)IsImmersiveBand(a2)
    || !*(_QWORD *)(v2 + 72)
    || (unsigned int)IsRectEmptyInl((const struct tagRECT *)(v2 + 28)) )
  {
    return 0;
  }
  if ( *(_DWORD *)(v4 + 64) == 1 )
    return 1;
  return DesktopRecalcSettings::RestoreStateSettingEnabled(v3);
}
