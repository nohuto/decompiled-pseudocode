/*
 * XREFs of ?xxxCheckForMoveSizeTouchCapture@MoveSizeApi@@YA_NPEAUtagTHREADINFO@@@Z @ 0x1402A92F4
 * Callers:
 *     ?PostAsyncMoveSize@MoveSizeApi@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@UtagPOINT@@W4_MOVESIZE_OPERATION@@@Z @ 0x1402A7A30 (-PostAsyncMoveSize@MoveSizeApi@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@UtagPOINT@@W4_MOVESIZE_OPERAT.c)
 *     ?xxxEnterMoveSizeLoopOnThread@MoveSizeApi@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@UtagPOINT@@W4_MOVESIZE_OPERATION@@@Z @ 0x1402AA1EC (-xxxEnterMoveSizeLoopOnThread@MoveSizeApi@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@UtagPOINT@@W4_MOVES.c)
 * Callees:
 *     xxxPromotePointerToMouse @ 0x140138C44 (xxxPromotePointerToMouse.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     GetPromotablePointerIdForThread @ 0x14028E7F8 (GetPromotablePointerIdForThread.c)
 *     GetPromotablePointerIdForThreadOld @ 0x14028E978 (GetPromotablePointerIdForThreadOld.c)
 *     Feature_PromotePrimaryPointerInputApi__private_IsEnabledDeviceUsageNoInline @ 0x140294450 (Feature_PromotePrimaryPointerInputApi__private_IsEnabledDeviceUsageNoInline.c)
 */

char __fastcall MoveSizeApi::xxxCheckForMoveSizeTouchCapture(MoveSizeApi *this, struct tagTHREADINFO *a2)
{
  __int64 v3; // rdx
  unsigned __int16 PromotablePointerIdForThread; // ax
  __int64 v5; // rdx
  unsigned __int16 v6; // bx
  char v7; // di
  bool v8; // si
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  __int64 v12; // rdx
  char v13; // di
  bool v14; // si
  __int64 v15; // rax
  int v16; // r8d
  int v17; // edx

  if ( (unsigned int)Feature_PromotePrimaryPointerInputApi__private_IsEnabledDeviceUsageNoInline() )
    PromotablePointerIdForThread = GetPromotablePointerIdForThread((__int64)this, v3);
  else
    PromotablePointerIdForThread = GetPromotablePointerIdForThreadOld((__int64)this, v3);
  v6 = PromotablePointerIdForThread;
  if ( !PromotablePointerIdForThread )
    return 0;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
    || (v7 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v7 = 0;
  }
  v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v5);
    LOBYTE(v10) = v8;
    LOBYTE(v11) = v7;
    WPP_RECORDER_AND_TRACE_SF_d(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v11,
      v10,
      *(_QWORD *)(UserSessionState + 69160),
      4,
      1,
      121,
      (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids,
      v6);
  }
  if ( !xxxPromotePointerToMouse(v6, 65537LL) )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
      || (v13 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u) )
    {
      v13 = 0;
    }
    v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v13 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v15 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v12);
      LOBYTE(v16) = v14;
      LOBYTE(v17) = v13;
      WPP_RECORDER_AND_TRACE_SF_d(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v17,
        v16,
        *(_QWORD *)(v15 + 69160),
        2,
        1,
        122,
        (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids,
        v6);
    }
    return 0;
  }
  return 1;
}
