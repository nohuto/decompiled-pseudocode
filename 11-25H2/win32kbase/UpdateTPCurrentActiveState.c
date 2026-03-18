/*
 * XREFs of UpdateTPCurrentActiveState @ 0x14012F2E0
 * Callers:
 *     _GetPrecisionTouchPadConfiguration @ 0x1400A7AF0 (_GetPrecisionTouchPadConfiguration.c)
 *     _SetPrecisionTouchPadConfiguration @ 0x1401B4FC0 (_SetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     UpdateMouseConnectionState @ 0x14012F3A8 (UpdateMouseConnectionState.c)
 *     ?EnvironmentChanged@CPTPProcessor@@SAXXZ @ 0x14012F640 (-EnvironmentChanged@CPTPProcessor@@SAXXZ.c)
 *     UpdateInputSettingWnfState @ 0x1401334C0 (UpdateInputSettingWnfState.c)
 *     ?Settings@PTP@InputTraceLogging@@SAXAEBUtagTOUCHPAD_PARAMETERS_V3@@@Z @ 0x1401B4B40 (-Settings@PTP@InputTraceLogging@@SAXAEBUtagTOUCHPAD_PARAMETERS_V3@@@Z.c)
 */

__int64 __fastcall UpdateTPCurrentActiveState(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rsi
  int v3; // edi
  __int64 v4; // rcx
  __int64 v5; // rdx
  int v6; // ebx
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 result; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  v3 = -__CFSHR__(*(_DWORD *)(UserSessionState + 16780), 5);
  UpdateMouseConnectionState();
  v4 = *(unsigned int *)(UserSessionState + 16784);
  v5 = *(unsigned int *)(UserSessionState + 16780);
  v6 = *(_DWORD *)(UserSessionState + 16780);
  if ( (v4 & 1) != 0 )
  {
    v7 = v6 | 0x10;
  }
  else
  {
    v5 = (unsigned int)v5 & 0xFFFFFFEF;
    v7 = v5 | (4 * (~(_BYTE)v6 & 4));
  }
  *(_DWORD *)(UserSessionState + 16780) = v7;
  *(_DWORD *)(W32GetUserSessionState(v4, v5) + 352) = (unsigned __int8)(v7 & 0x10) >> 4;
  v10 = W32GetUserSessionState(v9, v8);
  InputTraceLogging::PTP::Settings((const struct tagTOUCHPAD_PARAMETERS_V3 *)(v10 + 16768));
  CPTPProcessor::EnvironmentChanged();
  result = v3 != 0;
  if ( (*(_DWORD *)(UserSessionState + 16780) & 0x10u) >> 4 != (_DWORD)result )
    return UpdateInputSettingWnfState(175LL);
  return result;
}
