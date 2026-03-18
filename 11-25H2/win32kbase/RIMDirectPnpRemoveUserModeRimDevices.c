/*
 * XREFs of RIMDirectPnpRemoveUserModeRimDevices @ 0x14011F640
 * Callers:
 *     ?HandleTSRequestForUserModeRimDevices@CHidInput@@EEAAXW4InputTSRequest@@@Z @ 0x1402128C0 (-HandleTSRequestForUserModeRimDevices@CHidInput@@EEAAXW4InputTSRequest@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMSyncWalkRimObjList @ 0x14011F9AC (RIMSyncWalkRimObjList.c)
 *     _lambda_1b920915d8524e6f0a14f20042130a82_::operator_void_(__cdecl_)(RawInputManagerObject___void__) @ 0x1401D75D4 (_lambda_1b920915d8524e6f0a14f20042130a82_--operator_void_(__cdecl_)(RawInputManagerObject___void.c)
 */

__int64 __fastcall RIMDirectPnpRemoveUserModeRimDevices(__int64 a1, __int64 a2)
{
  bool v2; // bl
  bool v3; // di
  __int64 UserSessionState; // rax
  int v5; // r8d
  int v6; // edx
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // rdx
  bool v10; // bl
  bool v11; // di
  __int64 v12; // rax
  int v13; // r8d
  int v14; // edx

  v2 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v3 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v5) = v3;
    LOBYTE(v6) = v2;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v6,
      v5,
      *(_QWORD *)(UserSessionState + 19336),
      4,
      1,
      100,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
  }
  v7 = lambda_1b920915d8524e6f0a14f20042130a82_::operator_void____cdecl___RawInputManagerObject___void___();
  result = RIMSyncWalkRimObjList(0LL, 0LL, v7);
  v10 = 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
  {
    result = *((unsigned int *)WPP_GLOBAL_Control + 11);
    if ( (result & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
      v10 = 1;
  }
  v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v12 = W32GetUserSessionState(WPP_GLOBAL_Control, v9);
    LOBYTE(v13) = v11;
    LOBYTE(v14) = v10;
    return WPP_RECORDER_AND_TRACE_SF_(
             *((_QWORD *)WPP_GLOBAL_Control + 3),
             v14,
             v13,
             *(_QWORD *)(v12 + 19336),
             4,
             1,
             101,
             (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
  }
  return result;
}
