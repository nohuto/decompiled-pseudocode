/*
 * XREFs of ?ShouldStoreAfterProcessing@CRecalcState@@QEBA_NPEBUtagWND@@@Z @ 0x140027C00
 * Callers:
 *     ?CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@PEAW4ProcessingDecision@1@@Z @ 0x14002538C (-CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@.c)
 *     ?PruneRecalcStateList@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x140027C50 (-PruneRecalcStateList@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z.c)
 *     ?ShouldRestoreWindowToState@CRecalcState@@QEBA_NPEBUtagWND@@@Z @ 0x140027E84 (-ShouldRestoreWindowToState@CRecalcState@@QEBA_NPEBUtagWND@@@Z.c)
 * Callees:
 *     IsImmersiveBand @ 0x140025E6C (IsImmersiveBand.c)
 *     ?RestoreStateSettingEnabled@DesktopRecalcSettings@@YA_NXZ @ 0x140028B68 (-RestoreStateSettingEnabled@DesktopRecalcSettings@@YA_NXZ.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1400503E8 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 */

bool __fastcall CRecalcState::ShouldStoreAfterProcessing(CRecalcState *this, const struct tagWND *a2)
{
  __int64 v2; // r8
  DesktopRecalcSettings *v3; // rcx
  __int64 v4; // r8

  if ( *((_DWORD *)this + 6) == 2
    || (unsigned int)IsImmersiveBand((__int64)a2)
    || !*(_QWORD *)(v2 + 72)
    || (unsigned int)IsRectEmptyInl((const struct tagRECT *)(v2 + 28)) )
  {
    return 0;
  }
  if ( *(_DWORD *)(v4 + 64) == 1 )
    return 1;
  return DesktopRecalcSettings::RestoreStateSettingEnabled(v3);
}
