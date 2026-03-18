/*
 * XREFs of ?xxxMoveSizeWithoutCapture@MoveSizeApi@@YAXPEAUtagWND@@UtagPOINT@@1W4_MOVESIZE_OPERATION@@@Z @ 0x1402AA91C
 * Callers:
 *     ?xxxEnterMoveSizeLoopOnThread@MoveSizeApi@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@UtagPOINT@@W4_MOVESIZE_OPERATION@@@Z @ 0x1402AA1EC (-xxxEnterMoveSizeLoopOnThread@MoveSizeApi@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@UtagPOINT@@W4_MOVES.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?SendShrinkWidthToDwm@DWM_ARRANGEMENT_DATA@@QEAAXPEBUMOVESIZEDATA@@@Z @ 0x14018CBB4 (-SendShrinkWidthToDwm@DWM_ARRANGEMENT_DATA@@QEAAXPEBUMOVESIZEDATA@@@Z.c)
 *     ?SetPreviewInsertAfter@DWM_ARRANGEMENT_DATA@@QEAAXPEAUHWND__@@PEBUMOVESIZEDATA@@@Z @ 0x14018CCC0 (-SetPreviewInsertAfter@DWM_ARRANGEMENT_DATA@@QEAAXPEAUHWND__@@PEBUMOVESIZEDATA@@@Z.c)
 *     ?SetShrinkWidth@DWM_ARRANGEMENT_DATA@@QEAAXIPEBUMOVESIZEDATA@@@Z @ 0x14018D8FC (-SetShrinkWidth@DWM_ARRANGEMENT_DATA@@QEAAXIPEBUMOVESIZEDATA@@@Z.c)
 *     ?FreeMoveSizeData@MOVESIZEDATA@@SAXPEAPEAU1@@Z @ 0x140228654 (-FreeMoveSizeData@MOVESIZEDATA@@SAXPEAPEAU1@@Z.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1402507C4 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x140251998 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?CreateMoveSizeData@MOVESIZEDATA@@SAPEAU1@PEAUtagWND@@@Z @ 0x14025D700 (-CreateMoveSizeData@MOVESIZEDATA@@SAPEAU1@PEAUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x14026BB14 (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 */

__int64 __fastcall MoveSizeApi::xxxMoveSizeWithoutCapture(struct tagWND *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned __int16 v4; // bx
  __int64 result; // rax
  __int64 v7; // rdx
  bool v8; // bl
  bool v9; // si
  __int64 v10; // rax
  int v11; // edx
  int v12; // r8d
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rdx
  bool v17; // r15
  __int64 UserSessionState; // rax
  int v19; // edx
  int v20; // r8d
  struct MOVESIZEDATA *v21; // r15
  struct MOVESIZEDATA *v22; // rdx
  unsigned int v23; // r8d
  __int64 v24; // rdx
  __int64 v25; // rdx
  char v26; // [rsp+20h] [rbp-60h]
  __int16 v27; // [rsp+30h] [rbp-50h]
  bool v28; // [rsp+60h] [rbp-20h]
  __int64 v29; // [rsp+68h] [rbp-18h] BYREF
  __int64 v30; // [rsp+70h] [rbp-10h] BYREF
  struct MOVESIZEDATA *v31; // [rsp+78h] [rbp-8h] BYREF
  unsigned __int16 v32; // [rsp+CCh] [rbp+4Ch]
  __int64 v33; // [rsp+D0h] [rbp+50h] BYREF
  unsigned int v34; // [rsp+D8h] [rbp+58h]

  v34 = a4;
  v33 = a3;
  v32 = WORD2(a2);
  v4 = a2;
  result = (__int64)MOVESIZEDATA::CreateMoveSizeData(a1, a2);
  v31 = (struct MOVESIZEDATA *)result;
  if ( result )
  {
    v13 = *((_QWORD *)a1 + 5);
    v29 = 0LL;
    v14 = ValidateHmonitor(*(_QWORD *)(v13 + 256));
    v15 = *((_QWORD *)a1 + 5);
    v30 = v14;
    PhysicalToLogicalDPIPoint(&v29, &v33, *(unsigned int *)(v15 + 288), &v30);
    v17 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v28 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v17 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v16);
      LOBYTE(v19) = v17;
      LOBYTE(v20) = v28;
      WPP_RECORDER_AND_TRACE_SF_dddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v19,
        v20,
        *(_QWORD *)(UserSessionState + 69160),
        4,
        1,
        119,
        (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids,
        v4,
        v32,
        v29,
        SBYTE4(v29));
    }
    xxxSendTransformableMessageTimeout((struct tagTHREADINFO **)a1, 561LL, 0LL, 0LL, 0, 0, 0LL, 1, 1);
    v21 = v31;
    v22 = v31;
    v23 = v34;
    *(_QWORD *)((char *)v31 + 260) = v33;
    *((_DWORD *)v22 + 50) &= 0xFFFFC7FF;
    xxxInitializeMoveSizeData(a1, v22, v23, v4 | (v32 << 16));
    xxxMS_TrackMove(
      (__int64)a1,
      514LL,
      0LL,
      (unsigned __int16)(*((_WORD *)v21 + 84) + v29) | ((unsigned __int16)(*((_WORD *)v21 + 86) + WORD2(v29)) << 16),
      v21);
    DWM_ARRANGEMENT_DATA::SetShrinkWidth((struct MOVESIZEDATA *)((char *)v21 + 336), 0LL, v21);
    DWM_ARRANGEMENT_DATA::SendShrinkWidthToDwm((struct MOVESIZEDATA *)((char *)v21 + 336), v21);
    DWM_ARRANGEMENT_DATA::SetPreviewInsertAfter((struct MOVESIZEDATA *)((char *)v21 + 336), 0LL, v21);
    MOVESIZEDATA::FreeMoveSizeData(&v31, v24);
    result = xxxSendTransformableMessageTimeout((struct tagTHREADINFO **)a1, 562LL, 0LL, 0LL, 0, 0, 0LL, 1, 1);
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (result = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL), (result & 1) == 0)
      || (v8 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v8 = 0;
    }
    v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v10 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v25);
      v27 = 120;
      v26 = 4;
      goto LABEL_25;
    }
  }
  else
  {
    v8 = 0;
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control )
    {
      result = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL);
      if ( (result & 1) != 0 && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 2u )
        v8 = 1;
    }
    v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v10 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v7);
      v27 = 118;
      v26 = 2;
LABEL_25:
      LOBYTE(v12) = v9;
      LOBYTE(v11) = v8;
      return WPP_RECORDER_AND_TRACE_SF_(
               *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
               v11,
               v12,
               *(_QWORD *)(v10 + 69160),
               v26,
               1,
               v27,
               (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids);
    }
  }
  return result;
}
