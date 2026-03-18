/*
 * XREFs of RIMDeviceNotifyAsyncWorkItem @ 0x140113824
 * Callers:
 *     RIMOnAsyncWorkItemNotification @ 0x1401998B4 (RIMOnAsyncWorkItemNotification.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RimDeviceTypeToRimInputType @ 0x140099344 (RimDeviceTypeToRimInputType.c)
 *     RIMGetPnpActionBitsFromGuid @ 0x140113A94 (RIMGetPnpActionBitsFromGuid.c)
 *     WPP_RECORDER_AND_TRACE_SF_Sd @ 0x140113DD0 (WPP_RECORDER_AND_TRACE_SF_Sd.c)
 *     RIMDoOnPnpNotification @ 0x140113F30 (RIMDoOnPnpNotification.c)
 */

__int64 __fastcall RIMDeviceNotifyAsyncWorkItem(__int64 a1)
{
  int v1; // r14d
  struct RawInputManagerObject *v2; // r13
  __int64 v3; // rsi
  unsigned int v4; // r15d
  bool v5; // bp
  bool v6; // r12
  __int64 v7; // rcx
  bool v8; // bl
  bool v9; // di
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx
  unsigned int v19; // [rsp+90h] [rbp+8h] BYREF
  int v20; // [rsp+98h] [rbp+10h] BYREF
  int v21; // [rsp+A0h] [rbp+18h] BYREF

  v1 = a1;
  v2 = *(struct RawInputManagerObject **)(a1 + 24);
  v3 = (*(_QWORD *)(a1 + 56) + 72LL) & -(__int64)(*(_QWORD *)(a1 + 56) != 0LL);
  v4 = 0;
  v5 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    RimDeviceTypeToRimInputType(v3, *(_DWORD *)(v3 + 48));
    UserSessionState = W32GetUserSessionState(v12, v11);
    LOBYTE(v14) = v6;
    LOBYTE(v15) = v5;
    WPP_RECORDER_AND_TRACE_SF_Sd(*((_QWORD *)WPP_GLOBAL_Control + 3), v15, v14, *(_QWORD *)(UserSessionState + 19336));
  }
  v21 = 0;
  v19 = 0;
  v20 = 0;
  RIMGetPnpActionBitsFromGuid((_DWORD)v2, v3, v1 + 80, (unsigned int)&v21, (__int64)&v19, (__int64)&v20);
  v7 = v19;
  if ( v21 || v19 || v20 )
  {
    *(_DWORD *)(v3 + 168) = (v20 != 0 ? 8 : 0) | (v19 != 0 ? 4 : 0) | (v21 != 0 ? 2 : 0) | *(_DWORD *)(v3 + 168) & 0xFFFFFFF0;
    v4 = RIMDoOnPnpNotification(v2);
  }
  v8 = 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
  {
    v7 = *((unsigned int *)WPP_GLOBAL_Control + 11);
    if ( (v7 & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
      v8 = 1;
  }
  v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v16 = W32GetUserSessionState(v7, WPP_GLOBAL_Control);
    LOBYTE(v17) = v9;
    LOBYTE(v18) = v8;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v18,
      v17,
      *(_QWORD *)(v16 + 19336),
      4,
      1,
      26,
      (__int64)&WPP_c0340dd3147d303657ef2ca4cfed9609_Traceguids,
      v4);
  }
  return v4;
}
