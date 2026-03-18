/*
 * XREFs of ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x14039D288
 * Callers:
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1401C2094 (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1401C25AC (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1404348A4 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?ReleasePDevDwmStateAndWin32kLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x14039D300 (-ReleasePDevDwmStateAndWin32kLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 */

void __fastcall MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER(MANAGEDPRIMARIESTRACKER *this)
{
  if ( (*((_DWORD *)this + 104) & 4) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 270;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"(FALSE == m_u.s.bStateSaved)", 270LL, 0LL, 0LL, 0LL, 0LL);
  }
  MANAGEDPRIMARIESTRACKER::ReleasePDevDwmStateAndWin32kLocks(this);
}
