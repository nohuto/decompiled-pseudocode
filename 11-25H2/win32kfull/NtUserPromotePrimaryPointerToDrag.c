/*
 * XREFs of NtUserPromotePrimaryPointerToDrag @ 0x14029BA10
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     xxxPromotePointerToMouse @ 0x140138C44 (xxxPromotePointerToMouse.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     GetPromotablePointerIdForThread @ 0x14028E7F8 (GetPromotablePointerIdForThread.c)
 *     Feature_PromotePrimaryPointerInputApi__private_IsEnabledDeviceUsageNoInline @ 0x140294450 (Feature_PromotePrimaryPointerInputApi__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 NtUserPromotePrimaryPointerToDrag()
{
  __int64 v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rdx
  unsigned __int16 PromotablePointerIdForThread; // r12
  bool v6; // bl
  bool v7; // si
  __int64 v8; // rax
  int v9; // r8d
  int v10; // edx
  char v11; // bl
  char v12; // r15
  __int64 UserSessionState; // rax
  int v14; // edx
  int v15; // r8d
  __int64 v16; // rdx
  bool v17; // si
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  bool v22; // [rsp+80h] [rbp+8h]

  v0 = EnterCrit(0LL, 0LL);
  v2 = 0LL;
  if ( (unsigned int)Feature_PromotePrimaryPointerInputApi__private_IsEnabledDeviceUsageNoInline() )
  {
    PromotablePointerIdForThread = GetPromotablePointerIdForThread(v0, v1);
    if ( PromotablePointerIdForThread )
    {
      v11 = 1;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL), 9u)
        || (v12 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v12 = 0;
      }
      v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v12 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v4);
        LOBYTE(v14) = v12;
        LOBYTE(v15) = v22;
        WPP_RECORDER_AND_TRACE_SF_d(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v14,
          v15,
          *(_QWORD *)(UserSessionState + 69160),
          4,
          10,
          119,
          (__int64)&WPP_212fca24ed3e3073058b582086d1855d_Traceguids,
          PromotablePointerIdForThread);
      }
      if ( xxxPromotePointerToMouse(PromotablePointerIdForThread, 65537LL) )
      {
        v2 = 1LL;
        goto LABEL_28;
      }
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL), 9u)
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
      {
        v11 = 0;
      }
      v17 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v18 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v16);
        LOBYTE(v19) = v17;
        LOBYTE(v20) = v11;
        WPP_RECORDER_AND_TRACE_SF_d(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v20,
          v19,
          *(_QWORD *)(v18 + 69160),
          3,
          10,
          120,
          (__int64)&WPP_212fca24ed3e3073058b582086d1855d_Traceguids,
          PromotablePointerIdForThread);
      }
    }
    else
    {
      v6 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && _bittest((const signed __int32 *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL), 9u)
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
      v7 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v8 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v4);
        LOBYTE(v9) = v7;
        LOBYTE(v10) = v6;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v10,
          v9,
          *(_QWORD *)(v8 + 69160),
          3,
          10,
          118,
          (__int64)&WPP_212fca24ed3e3073058b582086d1855d_Traceguids);
      }
    }
  }
  UserSetLastError(5023);
LABEL_28:
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
