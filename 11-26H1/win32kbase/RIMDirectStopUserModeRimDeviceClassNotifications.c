/*
 * XREFs of RIMDirectStopUserModeRimDeviceClassNotifications @ 0x1400E9A1C
 * Callers:
 *     ?HandleTSRequestForUserModeRimDevices@CHidInput@@EEAAXW4InputTSRequest@@@Z @ 0x1400E9030 (-HandleTSRequestForUserModeRimDevices@CHidInput@@EEAAXW4InputTSRequest@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMSyncWalkRimObjList @ 0x1400E9B8C (RIMSyncWalkRimObjList.c)
 *     _lambda_d81c0963a0a1d90e432c4324de57ff4b_::operator_void_(__cdecl_)(RawInputManagerObject___void__) @ 0x1401FE8B8 (_lambda_d81c0963a0a1d90e432c4324de57ff4b_--operator_void_(__cdecl_)(RawInputManagerObject___void.c)
 */

__int64 __fastcall RIMDirectStopUserModeRimDeviceClassNotifications(__int64 a1, int a2, int a3)
{
  bool v3; // bl
  bool v4; // di
  __int64 v5; // rax
  __int64 result; // rax
  int v7; // edx
  int v8; // r8d
  bool v9; // bl
  bool v10; // di
  __int64 v11; // rax
  int v12; // r8d
  int v13; // edx
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx

  v3 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v4 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, a3);
    LOBYTE(v15) = v4;
    LOBYTE(v16) = v3;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v16,
      v15,
      *(_QWORD *)(UserSessionState + 19368),
      4,
      1,
      122,
      (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
  }
  v5 = lambda_d81c0963a0a1d90e432c4324de57ff4b_::operator_void____cdecl___RawInputManagerObject___void___();
  result = RIMSyncWalkRimObjList(0LL, 0LL, v5);
  v9 = 0;
  if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
  {
    result = *((unsigned int *)WPP_GLOBAL_Control + 11);
    if ( (result & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
      v9 = 1;
  }
  v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v7, v8);
    LOBYTE(v12) = v10;
    LOBYTE(v13) = v9;
    return WPP_RECORDER_AND_TRACE_SF_(
             *((_QWORD *)WPP_GLOBAL_Control + 3),
             v13,
             v12,
             *(_QWORD *)(v11 + 19368),
             4,
             1,
             124,
             (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
  }
  return result;
}
