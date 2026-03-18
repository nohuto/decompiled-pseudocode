/*
 * XREFs of ?SetForegroundActivate@tagTHREADINFO@@QEAAXW4AllowForegroundActivateReason@@@Z @ 0x1401C9E20
 * Callers:
 *     xxxCreateThreadInfo @ 0x1401A6A18 (xxxCreateThreadInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140070478 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     ?GetTID@tagTHREADINFO@@QEBAKXZ @ 0x140137220 (-GetTID@tagTHREADINFO@@QEBAKXZ.c)
 */

_UNKNOWN **__fastcall tagTHREADINFO::SetForegroundActivate(__int64 a1, int a2)
{
  bool v4; // si
  _UNKNOWN **result; // rax
  bool v6; // r14
  char TID; // bl
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx

  v4 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  result = &WPP_RECORDER_INITIALIZED;
  v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    TID = (unsigned __int8)tagTHREADINFO::GetTID((PETHREAD *)a1);
    UserSessionState = W32GetUserSessionState(v9, v8, v10);
    LOBYTE(v12) = v6;
    LOBYTE(v13) = v4;
    result = (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_Dd(
                            *((_QWORD *)WPP_GLOBAL_Control + 3),
                            v13,
                            v12,
                            *(_QWORD *)(UserSessionState + 69136),
                            4,
                            13,
                            10,
                            (__int64)&WPP_ecd75a293f58357f88bf2c1d127de49e_Traceguids,
                            a2,
                            TID);
  }
  if ( (a2 & 0x20) != 0 )
  {
    result = (_UNKNOWN **)MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(a1 + 1720) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  }
  *(_DWORD *)(a1 + 1716) |= a2;
  return result;
}
