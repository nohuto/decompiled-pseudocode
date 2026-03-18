/*
 * XREFs of ?ProcessModeChange@CRapidHpdInfo@@SA?AW4ProcessModeChangeResult@1@W4_DXGK_RAPID_HPD_TYPE@@PEAU_GUID@@PEAVCMonitorTopology@@@Z @ 0x14028F004
 * Callers:
 *     ?OnMonitorRectsChanged@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEAU_DXGK_SET_DISPLAY_CONFIG_PARAMS_EX@@@Z @ 0x14015C0C8 (-OnMonitorRectsChanged@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEAU_DXGK_S.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0CRapidHpdInfo@@AEAA@PEAVCMonitorTopology@@AEBU_GUID@@@Z @ 0x1402652CC (--0CRapidHpdInfo@@AEAA@PEAVCMonitorTopology@@AEBU_GUID@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?ResetTimer@CRapidHpdInfo@@AEAAXXZ @ 0x1402FC500 (-ResetTimer@CRapidHpdInfo@@AEAAXXZ.c)
 */

__int64 __fastcall CRapidHpdInfo::ProcessModeChange(__int64 a1, const struct _GUID *a2, struct CMonitorTopology *a3)
{
  int v5; // esi
  __int64 UserSessionState; // rax
  __int64 v7; // rdx
  CRapidHpdInfo *v8; // rbx
  __int64 v9; // rdi
  CRapidHpdInfo *v11; // rcx
  CRapidHpdInfo *v12; // rax
  __int64 v13; // rax
  char v14; // di
  bool v15; // si
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx

  v5 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v8 = 0LL;
  v9 = UserSessionState + 71224;
  if ( !*(_BYTE *)(UserSessionState + 71240) )
  {
    FastGetProfileDword(0LL, 2LL, L"RapidHpdTimeoutMs", 5000LL, UserSessionState + 71224);
    *(_BYTE *)(v9 + 16) = 1;
  }
  if ( !v5 )
    return 0LL;
  if ( v5 == 1 )
  {
    v11 = *(CRapidHpdInfo **)(v9 + 8);
    if ( v11 )
    {
      CRapidHpdInfo::ResetTimer(v11);
      return 4LL;
    }
    else
    {
      v12 = (CRapidHpdInfo *)Win32AllocPoolZInit(48LL, 1920168789LL);
      if ( v12 )
        v8 = CRapidHpdInfo::CRapidHpdInfo(v12, a3, a2);
      *(_QWORD *)(v9 + 8) = v8;
      return 2LL;
    }
  }
  else
  {
    if ( v5 != 2 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 162);
    v13 = *(_QWORD *)(v9 + 8);
    if ( v13 )
    {
      ++*(_DWORD *)(v13 + 20);
      return 3LL;
    }
    else
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
        || (v14 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v14 = 0;
      }
      v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v14 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v16 = W32GetUserSessionState(WPP_GLOBAL_Control, v7);
        LOBYTE(v17) = v15;
        LOBYTE(v18) = v14;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v18,
          v17,
          *(_QWORD *)(v16 + 69152),
          3,
          7,
          10,
          (__int64)&WPP_24961469f9f338f3d0acbcc72a179045_Traceguids);
      }
      return 1LL;
    }
  }
}
