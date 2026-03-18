/*
 * XREFs of RIMDeviceNotifyAsyncWorkItem @ 0x14008FEFC
 * Callers:
 *     RIMOnAsyncWorkItemNotification @ 0x1401288B4 (RIMOnAsyncWorkItemNotification.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_Sd @ 0x14008FD9C (WPP_RECORDER_AND_TRACE_SF_Sd.c)
 *     RIMGetPnpActionBitsFromGuid @ 0x140090160 (RIMGetPnpActionBitsFromGuid.c)
 *     RIMDoOnPnpNotification @ 0x140091548 (RIMDoOnPnpNotification.c)
 *     RimDeviceTypeToRimInputType @ 0x140096120 (RimDeviceTypeToRimInputType.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

__int64 __fastcall RIMDeviceNotifyAsyncWorkItem(__int64 a1)
{
  int v1; // r14d
  struct RawInputManagerObject *v2; // r13
  __int64 v3; // rsi
  unsigned int v4; // r15d
  char v5; // bp
  char v6; // r12
  int v7; // r8d
  int v8; // ecx
  bool v9; // bl
  bool v10; // di
  const wchar_t *v12; // rdi
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  __int64 UserSessionState; // rax
  __int64 v17; // rax
  int v18; // r8d
  int v19; // edx
  __int64 v20; // [rsp+20h] [rbp-68h]
  __int64 v21; // [rsp+28h] [rbp-60h]
  __int64 v22; // [rsp+38h] [rbp-50h]
  int v23; // [rsp+90h] [rbp+8h] BYREF
  int v24; // [rsp+98h] [rbp+10h] BYREF
  int v25; // [rsp+A0h] [rbp+18h] BYREF

  v1 = a1;
  v2 = *(struct RawInputManagerObject **)(a1 + 24);
  v3 = (*(_QWORD *)(a1 + 56) + 72LL) & -(__int64)(*(_QWORD *)(a1 + 56) != 0LL);
  v4 = 0;
  v5 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    RimDeviceTypeToRimInputType(v3, *(unsigned int *)(v3 + 48));
    v12 = *(const wchar_t **)(v3 + 200);
    UserSessionState = W32GetUserSessionState(v14, v13, v15);
    WPP_RECORDER_AND_TRACE_SF_Sd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v5,
      v6,
      *(_QWORD *)(UserSessionState + 19368),
      v20,
      v21,
      0x19u,
      v22,
      v12);
  }
  v25 = 0;
  v23 = 0;
  v24 = 0;
  RIMGetPnpActionBitsFromGuid((_DWORD)v2, v3, v1 + 80, (unsigned int)&v25, (__int64)&v23, (__int64)&v24);
  v8 = v23;
  if ( v25 || v23 || v24 )
  {
    *(_DWORD *)(v3 + 168) = (v24 != 0 ? 8 : 0) | (v23 != 0 ? 4 : 0) | (v25 != 0 ? 2 : 0) | *(_DWORD *)(v3 + 168) & 0xFFFFFFF0;
    v4 = RIMDoOnPnpNotification(v2);
  }
  v9 = 0;
  if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
  {
    v8 = *((_DWORD *)WPP_GLOBAL_Control + 11);
    if ( (v8 & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
      v9 = 1;
  }
  v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = W32GetUserSessionState(v8, (_DWORD)WPP_GLOBAL_Control, v7);
    LOBYTE(v18) = v10;
    LOBYTE(v19) = v9;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v19,
      v18,
      *(_QWORD *)(v17 + 19368),
      4,
      1,
      26,
      (__int64)&WPP_c0340dd3147d303657ef2ca4cfed9609_Traceguids,
      v4);
  }
  return v4;
}
