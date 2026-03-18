/*
 * XREFs of RIMDirectStartUserModeRimDeviceClassNotifications @ 0x1401DA400
 * Callers:
 *     ?HandleTSRequestForUserModeRimDevices@CHidInput@@EEAAXW4InputTSRequest@@@Z @ 0x1402128C0 (-HandleTSRequestForUserModeRimDevices@CHidInput@@EEAAXW4InputTSRequest@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMSyncWalkRimObjList @ 0x14011F9AC (RIMSyncWalkRimObjList.c)
 *     _lambda_ae7ea733188de093238e8076e6051569_::operator_void_(__cdecl_)(RawInputManagerObject___void__) @ 0x1401D75F4 (_lambda_ae7ea733188de093238e8076e6051569_--operator_void_(__cdecl_)(RawInputManagerObject___void.c)
 */

void __fastcall RIMDirectStartUserModeRimDeviceClassNotifications(__int64 a1, __int64 a2)
{
  bool v2; // bl
  bool v3; // di
  __int64 UserSessionState; // rax
  int v5; // r8d
  int v6; // edx
  void (__fastcall *v7)(__int64); // rax
  __int64 v8; // rdx
  bool v9; // bl
  bool v10; // di
  __int64 v11; // rax
  int v12; // r8d
  int v13; // edx

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
      121,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
  }
  v7 = lambda_ae7ea733188de093238e8076e6051569_::operator_void____cdecl___RawInputManagerObject___void___();
  RIMSyncWalkRimObjList(0LL, 0LL, (void (__fastcall *)(void *, __int64))v7);
  v9 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = W32GetUserSessionState(WPP_GLOBAL_Control, v8);
    LOBYTE(v12) = v10;
    LOBYTE(v13) = v9;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v13,
      v12,
      *(_QWORD *)(v11 + 19336),
      4,
      1,
      122,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
  }
}
