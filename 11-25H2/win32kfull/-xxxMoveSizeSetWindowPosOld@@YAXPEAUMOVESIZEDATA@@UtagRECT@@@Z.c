/*
 * XREFs of ?xxxMoveSizeSetWindowPosOld@@YAXPEAUMOVESIZEDATA@@UtagRECT@@@Z @ 0x1402AA50C
 * Callers:
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x140218274 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 * Callees:
 *     xxxEndDeferWindowPosEx @ 0x14004CC40 (xxxEndDeferWindowPosEx.c)
 *     InternalBeginDeferWindowPos @ 0x14004E1DC (InternalBeginDeferWindowPos.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x14004EA98 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x14018C8D4 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     ?xxxInterceptMoveSizeSetWindowPos@WindowActions@@YAXPEAUMOVESIZEDATA@@UtagRECT@@@Z @ 0x1402D1204 (-xxxInterceptMoveSizeSetWindowPos@WindowActions@@YAXPEAUMOVESIZEDATA@@UtagRECT@@@Z.c)
 */

void __fastcall xxxMoveSizeSetWindowPosOld(struct MOVESIZEDATA *a1, struct tagRECT *a2)
{
  struct tagRECT *v4; // r8
  char v5; // r15
  char v6; // bp
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  __int64 v10; // rdx
  _OWORD *v11; // r10
  char v12; // di
  bool v13; // bp
  __int64 v14; // rbx
  __int64 v15; // rax
  int v16; // edx
  int v17; // r8d
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rbx
  char v23; // r15
  char v24; // r14
  _DWORD *v25; // rcx
  int v26; // edi
  int v27; // ebp
  int v28; // ebx
  int v29; // esi
  __int64 v30; // rax
  int v31; // r8d
  int v32; // edx
  __int16 v33; // [rsp+30h] [rbp-78h]
  char v34; // [rsp+40h] [rbp-68h]
  struct tagRECT v35; // [rsp+70h] [rbp-38h] BYREF

  v4 = (struct tagRECT *)*(unsigned int *)(*((_QWORD *)a1 + 2) + 384LL);
  if ( ((unsigned __int8)v4 & 0x10) != 0 )
  {
    v35 = *a2;
    WindowActions::xxxInterceptMoveSizeSetWindowPos(a1, (struct MOVESIZEDATA *)&v35, v4);
    return;
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
    || (v5 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v5 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v6 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v6 = 0;
  }
  if ( v5 || v6 )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
    LOBYTE(v8) = v6;
    LOBYTE(v9) = v5;
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v9,
      v8,
      *(_QWORD *)(UserSessionState + 69160),
      5,
      1,
      11,
      (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids,
      a2->left,
      a2->top,
      a2->right,
      a2->bottom,
      LOBYTE(a2->right) - LOBYTE(a2->left),
      a2->bottom - a2->top);
  }
  v11 = InternalBeginDeferWindowPos(1LL, (__int64)a2);
  if ( v11 )
  {
    v18 = _DeferWindowPos(
            (__int64)v11,
            *((_QWORD *)a1 + 2),
            0LL,
            a2->left,
            a2->top,
            a2->right - a2->left,
            a2->bottom - a2->top,
            524820,
            0);
    if ( v18 )
    {
      *(_QWORD *)(*(_QWORD *)(v18 + 40) + 128LL) = **((_QWORD **)a1 + 27);
      *(_DWORD *)(*(_QWORD *)(v18 + 40) + 156LL) |= 0x200u;
      if ( (unsigned int)xxxEndDeferWindowPosEx((struct tagSMWP *)v18, 0LL) )
      {
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
          v25 = *(_DWORD **)(*((_QWORD *)a1 + 2) + 40LL);
          v26 = v25[25];
          v27 = v25[23];
          v28 = v25[24];
          v29 = v25[22];
          v30 = W32GetUserSessionState(v25, v21);
          LOBYTE(v31) = v24;
          LOBYTE(v32) = v23;
          WPP_RECORDER_AND_TRACE_SF_dddddd(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v32,
            v31,
            *(_QWORD *)(v30 + 69160),
            5,
            1,
            15,
            (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids,
            v29,
            v27,
            v28,
            v26,
            v28 - v29,
            v26 - v27);
        }
      }
      else
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
          || (v12 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u) )
        {
          v12 = 0;
        }
        v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v12 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v22 = **((_QWORD **)a1 + 2);
          v15 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v21);
          v34 = v22;
          v33 = 14;
          goto LABEL_21;
        }
      }
    }
    else
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
        || (v12 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u) )
      {
        v12 = 0;
      }
      v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v12 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v20 = **((_QWORD **)a1 + 2);
        v15 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v19);
        v34 = v20;
        v33 = 13;
        goto LABEL_21;
      }
    }
  }
  else
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
      || (v12 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u) )
    {
      v12 = 0;
    }
    v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v12 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v14 = **((_QWORD **)a1 + 2);
      v15 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v10);
      v34 = v14;
      v33 = 12;
LABEL_21:
      LOBYTE(v17) = v13;
      LOBYTE(v16) = v12;
      WPP_RECORDER_AND_TRACE_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v16,
        v17,
        *(_QWORD *)(v15 + 69160),
        2,
        1,
        v33,
        (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids,
        v34);
    }
  }
}
