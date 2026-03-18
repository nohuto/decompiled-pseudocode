/*
 * XREFs of ?ApplyWindowActionErrorCode@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@W4ApplyWindowActionError@AdvancedWindowPos@@@Z @ 0x1402E1B58
 * Callers:
 *     ?xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z @ 0x1402E474C (-xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z.c)
 * Callees:
 *     ?ApplyFailed@ApplyWindowAction@InputTraceLogging@@SAXPEAUHWND__@@PEBGKK@Z @ 0x1402E1ACC (-ApplyFailed@ApplyWindowAction@InputTraceLogging@@SAXPEAUHWND__@@PEBGKK@Z.c)
 *     ?GetApplyWindowActionErrorString@AdvancedWindowPos@@YAPEBGW4ApplyWindowActionError@1@@Z @ 0x1402E24A4 (-GetApplyWindowActionErrorString@AdvancedWindowPos@@YAPEBGW4ApplyWindowActionError@1@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_SqDD @ 0x1402E65A8 (WPP_RECORDER_AND_TRACE_SF_SqDD.c)
 */

__int64 __fastcall ApplyWindowActionErrorCode(HWND a1, __int64 a2, unsigned int a3)
{
  const unsigned __int16 *ApplyWindowActionErrorString; // r12
  __int64 v6; // rdx
  bool v7; // bp
  bool v8; // r14
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  unsigned int v12; // esi
  unsigned int v13; // esi
  unsigned int v14; // esi
  unsigned int v15; // esi

  ApplyWindowActionErrorString = (const unsigned __int16 *)AdvancedWindowPos::GetApplyWindowActionErrorString(a3);
  InputTraceLogging::ApplyWindowAction::ApplyFailed(a1, ApplyWindowActionErrorString);
  v7 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
  v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v6);
    LOBYTE(v10) = v8;
    LOBYTE(v11) = v7;
    WPP_RECORDER_AND_TRACE_SF_SqDD(*((_QWORD *)WPP_GLOBAL_Control + 3), v11, v10, *(_QWORD *)(UserSessionState + 69152));
  }
  v12 = a3 - 1;
  if ( v12 )
  {
    v13 = v12 - 3;
    if ( !v13 )
      return 5LL;
    v14 = v13 - 1;
    if ( !v14 )
      return 5LL;
    v15 = v14 - 3;
    if ( v15 && v15 != 2 )
      return 87LL;
  }
  return 5023LL;
}
