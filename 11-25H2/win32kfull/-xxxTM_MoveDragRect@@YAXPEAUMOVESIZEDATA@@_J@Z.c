/*
 * XREFs of ?xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z @ 0x14025388C
 * Callers:
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x140251998 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?SendShrinkWidthToDwm@DWM_ARRANGEMENT_DATA@@QEAAXPEBUMOVESIZEDATA@@@Z @ 0x14018CBB4 (-SendShrinkWidthToDwm@DWM_ARRANGEMENT_DATA@@QEAAXPEBUMOVESIZEDATA@@@Z.c)
 *     GreIsWindowResizeInProgress @ 0x1401D46C0 (GreIsWindowResizeInProgress.c)
 *     bSetDevDragRect @ 0x1401E08E0 (bSetDevDragRect.c)
 *     ?SizeRect@@YAHPEAUMOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z @ 0x1401F7CB4 (-SizeRect@@YAHPEAUMOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x140218274 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddddd @ 0x140229024 (WPP_RECORDER_AND_TRACE_SF_dddddddd.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1402720AC (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     ?xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z @ 0x1402AB8B4 (-xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall xxxTM_MoveDragRect(struct MOVESIZEDATA *a1, unsigned int a2)
{
  __int64 v2; // rax
  Gre::Base **v4; // rcx
  char v5; // bl
  Gre::Base *v7; // rcx
  struct tagMONITOR *v8; // r8
  bool v9; // zf
  struct tagRECT *v10; // r14
  struct tagRECT *v11; // r15
  int v12; // eax
  __int64 v13; // rdx
  bool v14; // al
  struct tagRECT *v15; // r13
  unsigned int v16; // r12d
  char v17; // di
  char v18; // bl
  __int64 UserSessionState; // rax
  int v20; // r8d
  int v21; // edx
  __int64 v22; // rcx
  char v23; // di
  char v24; // bl
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  __int64 v28; // rax
  int v29; // eax
  unsigned __int64 v30; // r8
  struct tagTHREADINFO **v31; // rcx
  char v32; // di
  char v33; // bl
  __int64 v34; // rax
  int v35; // r8d
  int v36; // edx
  unsigned __int64 v37; // r8
  struct tagTHREADINFO **v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // rcx
  int v44; // eax
  int v45; // r12d
  int v46; // r13d
  char v47; // r15
  char v48; // r14
  LONG top; // ebx
  LONG left; // edi
  __int64 v51; // rax
  int v52; // r8d
  int v53; // edx
  unsigned int v54; // [rsp+80h] [rbp-19h] BYREF
  unsigned int v55; // [rsp+84h] [rbp-15h] BYREF
  struct tagPOINT v56; // [rsp+88h] [rbp-11h]
  __int64 v57; // [rsp+90h] [rbp-9h]
  struct tagRECT *v58; // [rsp+98h] [rbp-1h]
  struct tagRECT v59; // [rsp+A0h] [rbp+7h] BYREF

  v2 = *((_QWORD *)a1 + 27);
  v4 = (Gre::Base **)*((_QWORD *)a1 + 2);
  v54 = 0;
  v5 = 0;
  v57 = v2;
  v56.x = (__int16)a2;
  v59 = 0LL;
  v7 = *v4;
  v56.y = SHIWORD(a2);
  v55 = 0;
  if ( GreIsWindowResizeInProgress(v7) )
  {
    *((_DWORD *)a1 + 50) |= 0x2000000u;
    return;
  }
  v9 = *((_DWORD *)a1 + 44) == 9;
  v10 = (struct tagRECT *)((char *)a1 + 40);
  v11 = (struct tagRECT *)((char *)a1 + 24);
  v58 = (struct tagRECT *)((char *)a1 + 40);
  *(_OWORD *)((char *)a1 + 40) = *(_OWORD *)((char *)a1 + 24);
  *(_OWORD *)((char *)a1 + 72) = *(_OWORD *)((char *)a1 + 56);
  if ( v9 )
  {
    v14 = xxxSizeOrMoveRect(a1, v56, (struct tagRECT *)((char *)a1 + 40), &v54);
    v13 = 0LL;
    if ( !v14 )
      return;
  }
  else
  {
    v12 = SizeRect(a1, a2, v8, &v55);
    v13 = 0LL;
    if ( !v12 )
      return;
    v5 = v55;
    v54 = 532;
  }
  v15 = (struct tagRECT *)((char *)a1 + 40);
  v16 = 0;
  if ( (*((_DWORD *)a1 + 50) & 0x20) != 0 )
  {
    if ( (v5 & 2) != 0 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
        || (v17 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v17 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v18 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v18 = 0;
      }
      if ( v17 || v18 )
      {
        UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
        LOBYTE(v20) = v18;
        LOBYTE(v21) = v17;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v21,
          v20,
          *(_QWORD *)(UserSessionState + 69160),
          5,
          1,
          52,
          (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids);
      }
      xxxDrawDragRectEx(a1, 0LL, 0x80000000, (struct tagRECT *)((char *)a1 + 24));
    }
    else if ( (v5 & 1) != 0 )
    {
      v22 = *(_QWORD *)&WPP_GLOBAL_Control;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
        || (v23 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v23 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v24 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v24 = 0;
      }
      if ( v23 || v24 )
      {
        v25 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
        LOBYTE(v26) = v24;
        LOBYTE(v27) = v23;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v27,
          v26,
          *(_QWORD *)(v25 + 69160),
          5,
          1,
          53,
          (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids);
      }
      v28 = W32GetUserSessionState(v22, v13);
      bSetDevDragRect(*(Gre::Base **)(*(_QWORD *)(v28 + 56968) + 48LL), 0LL, 0LL, 0);
    }
  }
  v29 = *((_DWORD *)a1 + 50);
  if ( (v29 & 0x80000) != 0 )
  {
    if ( (v29 & 0x20) != 0 )
    {
      v30 = *((int *)a1 + 44);
      v31 = (struct tagTHREADINFO **)*((_QWORD *)a1 + 2);
      v59 = *(struct tagRECT *)((char *)a1 + 72);
      xxxSendTransformableMessageTimeout(v31, v54, v30, (struct tagDRAWITEMSTRUCT *)&v59, 0, 0, 0LL, 1, 0);
      xxxDrawDragRectEx(a1, (struct tagRECT *)((char *)a1 + 72), 0x80000000, (struct tagRECT *)((char *)a1 + 56));
    }
    else
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
        || (v32 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v32 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v33 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v33 = 0;
      }
      if ( v32 || v33 )
      {
        v34 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
        LOBYTE(v35) = v33;
        LOBYTE(v36) = v32;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v36,
          v35,
          *(_QWORD *)(v34 + 69160),
          5,
          1,
          54,
          (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids);
      }
      v15 = (struct tagRECT *)((char *)a1 + 72);
      v16 = 0x80000000;
      v11 = (struct tagRECT *)((char *)a1 + 56);
    }
  }
  v37 = *((int *)a1 + 44);
  v38 = (struct tagTHREADINFO **)*((_QWORD *)a1 + 2);
  v59 = *v15;
  xxxSendTransformableMessageTimeout(v38, v54, v37, (struct tagDRAWITEMSTRUCT *)&v59, 0, 0, 0LL, 1, 0);
  xxxDrawDragRectEx(a1, &v59, v16 | 3, v11);
  if ( !(unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline(v40, v39, v41)
    && *((_DWORD *)a1 + 44) == 9 )
  {
    v43 = *((_QWORD *)a1 + 2);
    if ( (*(_DWORD *)(v43 + 384) & 0x10) == 0
      && ((*(_DWORD *)(*(_QWORD *)(v43 + 40) + 288LL) & 0xF) == 2 || *((_QWORD *)a1 + 27) == v57) )
    {
      v44 = *((_DWORD *)a1 + 50);
      if ( (v44 & 0x80000) == 0 || (v44 & 0x20) != 0 )
      {
        v10 = &v59;
        v58 = &v59;
      }
      v45 = v10->left - v56.x;
      v46 = v10->top - v56.y;
      LODWORD(v57) = v45 + *((_DWORD *)a1 + 42);
      *((_DWORD *)a1 + 42) = v57;
      v55 = v46 + *((_DWORD *)a1 + 43);
      *((_DWORD *)a1 + 43) = v55;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
        || (v47 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v47 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v48 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v48 = 0;
      }
      if ( v47 || v48 )
      {
        top = v58->top;
        left = v58->left;
        v51 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v42);
        LOBYTE(v52) = v48;
        LOBYTE(v53) = v47;
        WPP_RECORDER_AND_TRACE_SF_dddddddd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v53,
          v52,
          *(_QWORD *)(v51 + 69160),
          5,
          1,
          55,
          (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids,
          v45,
          v46,
          v57,
          v55,
          left,
          top,
          v56.x,
          v56.y);
      }
    }
  }
  DWM_ARRANGEMENT_DATA::SendShrinkWidthToDwm((struct MOVESIZEDATA *)((char *)a1 + 336), a1);
}
