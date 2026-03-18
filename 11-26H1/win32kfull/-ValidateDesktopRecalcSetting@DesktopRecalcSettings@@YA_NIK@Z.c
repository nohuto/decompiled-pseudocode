/*
 * XREFs of ?ValidateDesktopRecalcSetting@DesktopRecalcSettings@@YA_NIK@Z @ 0x1402DEAAC
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1401CB418 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_Ds @ 0x1402E07BC (WPP_RECORDER_AND_TRACE_SF_Ds.c)
 */

bool __fastcall DesktopRecalcSettings::ValidateDesktopRecalcSetting(DesktopRecalcSettings *this, __int64 a2)
{
  unsigned int v2; // ebx
  int v3; // ecx
  bool v5; // si
  bool v6; // bp
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx

  v2 = a2;
  v3 = (_DWORD)this - 8235;
  if ( !v3 )
  {
    v5 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v6 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v5 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return v2 < 2;
    goto LABEL_19;
  }
  if ( v3 != 4 )
    return 0;
  v5 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v6 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
LABEL_19:
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v8) = v6;
    LOBYTE(v9) = v5;
    WPP_RECORDER_AND_TRACE_SF_Ds(*((_QWORD *)WPP_GLOBAL_Control + 3), v9, v8, *(_QWORD *)(UserSessionState + 69152));
  }
  return v2 < 2;
}
