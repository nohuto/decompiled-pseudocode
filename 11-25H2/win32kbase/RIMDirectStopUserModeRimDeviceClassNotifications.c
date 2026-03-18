/*
 * XREFs of RIMDirectStopUserModeRimDeviceClassNotifications @ 0x14011F78C
 * Callers:
 *     ?HandleTSRequestForUserModeRimDevices@CHidInput@@EEAAXW4InputTSRequest@@@Z @ 0x1402128C0 (-HandleTSRequestForUserModeRimDevices@CHidInput@@EEAAXW4InputTSRequest@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMSyncWalkRimObjList @ 0x14011F9AC (RIMSyncWalkRimObjList.c)
 *     _lambda_a227ac8fdd86ffb519ef5e6aae7f861c_::operator_void_(__cdecl_)(RawInputManagerObject___void__) @ 0x1401D75E4 (_lambda_a227ac8fdd86ffb519ef5e6aae7f861c_--operator_void_(__cdecl_)(RawInputManagerObject___void.c)
 */

__int64 __fastcall RIMDirectStopUserModeRimDeviceClassNotifications(__int64 a1, __int64 a2)
{
  bool v2; // bl
  bool v3; // di
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // rdx
  bool v7; // bl
  bool v8; // di
  __int64 v9; // rax
  int v10; // r8d
  int v11; // edx
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx

  v2 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v3 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v13) = v3;
    LOBYTE(v14) = v2;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v14,
      v13,
      *(_QWORD *)(UserSessionState + 19336),
      4,
      1,
      123,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
  }
  v4 = lambda_a227ac8fdd86ffb519ef5e6aae7f861c_::operator_void____cdecl___RawInputManagerObject___void___();
  result = RIMSyncWalkRimObjList(0LL, 0LL, v4);
  v7 = 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
  {
    result = *((unsigned int *)WPP_GLOBAL_Control + 11);
    if ( (result & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
      v7 = 1;
  }
  v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = W32GetUserSessionState(WPP_GLOBAL_Control, v6);
    LOBYTE(v10) = v8;
    LOBYTE(v11) = v7;
    return WPP_RECORDER_AND_TRACE_SF_(
             *((_QWORD *)WPP_GLOBAL_Control + 3),
             v11,
             v10,
             *(_QWORD *)(v9 + 19336),
             4,
             1,
             125,
             (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
  }
  return result;
}
