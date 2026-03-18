/*
 * XREFs of ?SetForegroundActivate@tagTHREADINFO@@QEAAXW4AllowForegroundActivateReason@@@Z @ 0x140162110
 * Callers:
 *     xxxCreateThreadInfo @ 0x140162D44 (xxxCreateThreadInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dD @ 0x1400B4C14 (WPP_RECORDER_AND_TRACE_SF_dD.c)
 *     ?GetTID@tagTHREADINFO@@QEBAKXZ @ 0x1400F1F80 (-GetTID@tagTHREADINFO@@QEBAKXZ.c)
 */

_UNKNOWN **__fastcall tagTHREADINFO::SetForegroundActivate(__int64 a1, int a2)
{
  bool v4; // si
  _UNKNOWN **result; // rax
  bool v6; // r14
  char TID; // bl
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx

  v4 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  result = &WPP_RECORDER_INITIALIZED;
  v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    TID = (unsigned __int8)tagTHREADINFO::GetTID((PETHREAD *)a1);
    UserSessionState = W32GetUserSessionState(v9, v8);
    LOBYTE(v11) = v6;
    LOBYTE(v12) = v4;
    result = (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_dD(
                            *((_QWORD *)WPP_GLOBAL_Control + 3),
                            v12,
                            v11,
                            *(_QWORD *)(UserSessionState + 69144),
                            4,
                            13,
                            10,
                            (__int64)&WPP_73c4af39d81e3d70f00c63da4eecef9b_Traceguids,
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
