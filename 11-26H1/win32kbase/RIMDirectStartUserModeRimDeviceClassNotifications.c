/*
 * XREFs of RIMDirectStartUserModeRimDeviceClassNotifications @ 0x1400E9684
 * Callers:
 *     ?HandleTSRequestForUserModeRimDevices@CHidInput@@EEAAXW4InputTSRequest@@@Z @ 0x1400E9030 (-HandleTSRequestForUserModeRimDevices@CHidInput@@EEAAXW4InputTSRequest@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMSyncWalkRimObjList @ 0x1400E9B8C (RIMSyncWalkRimObjList.c)
 *     _lambda_396116378ddc845dddb42d191e6dcd2c_::operator_void_(__cdecl_)(RawInputManagerObject___void__) @ 0x1401FE898 (_lambda_396116378ddc845dddb42d191e6dcd2c_--operator_void_(__cdecl_)(RawInputManagerObject___void.c)
 */

__int64 __fastcall RIMDirectStartUserModeRimDeviceClassNotifications(__int64 a1, int a2, int a3)
{
  bool v3; // bl
  bool v4; // di
  __int64 UserSessionState; // rax
  int v6; // r8d
  int v7; // edx
  __int64 v8; // rax
  __int64 result; // rax
  int v10; // edx
  int v11; // r8d
  bool v12; // bl
  bool v13; // di
  __int64 v14; // rax
  int v15; // r8d
  int v16; // edx

  v3 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v4 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, a3);
    LOBYTE(v6) = v4;
    LOBYTE(v7) = v3;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v7,
      v6,
      *(_QWORD *)(UserSessionState + 19368),
      4,
      1,
      120,
      (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
  }
  v8 = lambda_396116378ddc845dddb42d191e6dcd2c_::operator_void____cdecl___RawInputManagerObject___void___();
  result = RIMSyncWalkRimObjList(0LL, 0LL, v8);
  v12 = 0;
  if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
  {
    result = *((unsigned int *)WPP_GLOBAL_Control + 11);
    if ( (result & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
      v12 = 1;
  }
  v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v10, v11);
    LOBYTE(v15) = v13;
    LOBYTE(v16) = v12;
    return WPP_RECORDER_AND_TRACE_SF_(
             *((_QWORD *)WPP_GLOBAL_Control + 3),
             v16,
             v15,
             *(_QWORD *)(v14 + 19368),
             4,
             1,
             121,
             (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
  }
  return result;
}
