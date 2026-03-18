/*
 * XREFs of ?xxxMS_FlushWigglies@@YAXXZ @ 0x1402AA348
 * Callers:
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x140218274 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1402507C4 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     xxxInternalGetMessage @ 0x1401153B0 (xxxInternalGetMessage.c)
 */

void __fastcall xxxMS_FlushWigglies(__int64 a1, __int64 a2)
{
  bool v2; // bl
  bool v3; // di
  __int64 UserSessionState; // rax
  int v5; // r8d
  int v6; // edx
  unsigned __int64 v7; // [rsp+20h] [rbp-58h]
  _BYTE v8[56]; // [rsp+40h] [rbp-38h] BYREF

  memset(v8, 0, 48);
  v2 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v3 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v2 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
    LOBYTE(v5) = v3;
    LOBYTE(v6) = v2;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v6,
      v5,
      *(_QWORD *)(UserSessionState + 69160),
      4,
      1,
      10,
      (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids);
  }
  do
    LODWORD(v7) = 3;
  while ( (unsigned int)xxxInternalGetMessage((__int64)v8, 0LL, 512, 512, v7, 0) );
}
