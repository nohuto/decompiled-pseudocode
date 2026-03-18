/*
 * XREFs of UpdateTPCurrentActiveState @ 0x140163F00
 * Callers:
 *     _GetPrecisionTouchPadConfiguration @ 0x1401AA660 (_GetPrecisionTouchPadConfiguration.c)
 *     _SetPrecisionTouchPadConfiguration @ 0x1401BA808 (_SetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     UpdateMouseConnectionState @ 0x140163FC4 (UpdateMouseConnectionState.c)
 *     UpdateInputSettingWnfState @ 0x14016D960 (UpdateInputSettingWnfState.c)
 *     ?Settings@PTP@InputTraceLogging@@SAXAEBUtagTOUCHPAD_PARAMETERS_V3@@@Z @ 0x1401C476C (-Settings@PTP@InputTraceLogging@@SAXAEBUtagTOUCHPAD_PARAMETERS_V3@@@Z.c)
 *     ?EnvironmentChanged@CPTPProcessor@@SAXXZ @ 0x1401C4DE0 (-EnvironmentChanged@CPTPProcessor@@SAXXZ.c)
 */

__int64 __fastcall UpdateTPCurrentActiveState(int a1, int a2, int a3)
{
  __int64 UserSessionState; // rsi
  unsigned int v4; // edi
  int v5; // r8d
  int v6; // ecx
  int v7; // edx
  char v8; // bl
  int v9; // ebx
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  __int64 v13; // rax
  __int64 result; // rax

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  v4 = (*(_DWORD *)(UserSessionState + 16772) & 0x10u) >> 4;
  UpdateMouseConnectionState();
  v6 = *(_DWORD *)(UserSessionState + 16776);
  v7 = *(_DWORD *)(UserSessionState + 16772);
  v8 = v7;
  if ( (v6 & 1) != 0 )
  {
    v9 = v7 | 0x10;
  }
  else
  {
    v7 &= ~0x10u;
    v9 = v7 | (4 * (~v8 & 4));
  }
  *(_DWORD *)(UserSessionState + 16772) = v9;
  *(_DWORD *)(W32GetUserSessionState(v6, v7, v5) + 352) = (unsigned __int8)(v9 & 0x10) >> 4;
  v13 = W32GetUserSessionState(v11, v10, v12);
  InputTraceLogging::PTP::Settings((const struct tagTOUCHPAD_PARAMETERS_V3 *)(v13 + 16760));
  CPTPProcessor::EnvironmentChanged();
  result = (*(_DWORD *)(UserSessionState + 16772) & 0x10u) >> 4;
  if ( (_DWORD)result != v4 )
    return UpdateInputSettingWnfState(175LL);
  return result;
}
