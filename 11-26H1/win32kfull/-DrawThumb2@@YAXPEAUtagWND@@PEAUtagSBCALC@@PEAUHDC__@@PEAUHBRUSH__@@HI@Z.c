/*
 * XREFs of ?DrawThumb2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@PEAUHBRUSH__@@HI@Z @ 0x1401F09B0
 * Callers:
 *     ?DrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1401F01A0 (-DrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1401F04C0 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     ?xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1402F4654 (-xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 * Callees:
 *     GrePatBlt @ 0x1400AD26C (GrePatBlt.c)
 *     DrawPushButton @ 0x140126508 (DrawPushButton.c)
 *     ?DrawGroove@@YAXPEAUHDC__@@PEAUHBRUSH__@@PEAUtagRECT@@H@Z @ 0x1401F0E20 (-DrawGroove@@YAXPEAUHDC__@@PEAUHBRUSH__@@PEAUtagRECT@@H@Z.c)
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1402F3D98 (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ql @ 0x1402F669C (WPP_RECORDER_AND_TRACE_SF_ql.c)
 *     WPP_RECORDER_AND_TRACE_SF_qlDdddddddddddd @ 0x1402F69C8 (WPP_RECORDER_AND_TRACE_SF_qlDdddddddddddd.c)
 */

void __fastcall DrawThumb2(struct tagWND *a1, struct tagSBCALC *a2, HDC a3, HBRUSH a4, int a5, char a6)
{
  HBRUSH v6; // r12
  HDC v7; // r14
  struct tagSBCALC *v8; // rbx
  struct tagWND *v9; // r13
  char v10; // bp
  char v11; // al
  int v12; // esi
  char v13; // r15
  int v14; // ecx
  RECT *p_top; // rax
  RECT *v16; // rdi
  LONG v17; // ecx
  LONG v18; // eax
  LONG v19; // eax
  LONG v20; // ecx
  __int64 v21; // rdi
  __int64 UserSessionState; // rax
  int v23; // r8d
  int v24; // edx
  int v25; // eax
  _DWORD *v26; // rdx
  bool v27; // di
  __int64 v28; // rax
  int v29; // r8d
  int v30; // edx
  char v31; // [rsp+C0h] [rbp-88h]
  char v32; // [rsp+C1h] [rbp-87h]
  RECT v33; // [rsp+C8h] [rbp-80h] BYREF
  int v34; // [rsp+D8h] [rbp-70h]
  int v35; // [rsp+DCh] [rbp-6Ch]
  int v36; // [rsp+E0h] [rbp-68h]
  int v37; // [rsp+E4h] [rbp-64h]
  int v38; // [rsp+E8h] [rbp-60h]
  struct tagWND *v39; // [rsp+F0h] [rbp-58h]
  struct tagSBCALC *v40; // [rsp+F8h] [rbp-50h]
  HDC v41; // [rsp+100h] [rbp-48h]
  HBRUSH v42; // [rsp+108h] [rbp-40h]

  v42 = a4;
  v33 = 0LL;
  v6 = a4;
  v41 = a3;
  v7 = a3;
  v40 = a2;
  v8 = a2;
  v39 = a1;
  v9 = a1;
  v10 = 1;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0
    || (LOBYTE(a2) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  v32 = (char)a2;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v11 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v11 = 0;
  }
  v31 = v11;
  if ( (_BYTE)a2 || v11 )
  {
    v34 = *((_DWORD *)v8 + 15);
    v35 = *((_DWORD *)v8 + 14);
    v36 = *((_DWORD *)v8 + 13);
    v37 = *((_DWORD *)v8 + 12);
    v38 = *((_DWORD *)v8 + 11);
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v23) = v31;
    LOBYTE(v24) = v32;
    v13 = a6;
    v12 = a5;
    WPP_RECORDER_AND_TRACE_SF_qlDdddddddddddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v24,
      v23,
      *(_QWORD *)(UserSessionState + 69152));
    v8 = v40;
    v7 = v41;
    v6 = v42;
    v9 = v39;
    v10 = 1;
  }
  else
  {
    v12 = a5;
    v13 = a6;
  }
  if ( *((_DWORD *)v8 + 4) >= *((_DWORD *)v8 + 5)
    || (v14 = *((_DWORD *)v8 + 7), a2 = (struct tagSBCALC *)*((unsigned int *)v8 + 6), (int)a2 >= v14) )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
    {
      v10 = 0;
    }
    v27 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v28 = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
      LOBYTE(v29) = v27;
      LOBYTE(v30) = v10;
      WPP_RECORDER_AND_TRACE_SF_ql(*((_QWORD *)WPP_GLOBAL_Control + 3), v30, v29, *(_QWORD *)(v28 + 69152), 3);
    }
  }
  else
  {
    p_top = (RECT *)&v33.top;
    if ( v12 )
      p_top = &v33;
    v16 = &v33;
    if ( v12 )
      v16 = (RECT *)&v33.top;
    p_top->left = (int)a2;
    p_top->right = v14;
    if ( (v13 & 3) == 3 || (v17 = *((_DWORD *)v8 + 9), *((_DWORD *)v8 + 10) - v17 < *((_DWORD *)v8 + 8)) )
    {
      v16->left = *((_DWORD *)v8 + 9);
      v16->right = *((_DWORD *)v8 + 10);
      DrawGroove(v7, v6, &v33, v12);
    }
    else
    {
      v18 = *((_DWORD *)v8 + 13);
      if ( v17 < v18 )
      {
        v16->left = v17;
        v16->right = v18;
        DrawGroove(v7, v6, &v33, v12);
      }
      v19 = *((_DWORD *)v8 + 10);
      v20 = *((_DWORD *)v8 + 12);
      if ( v20 < v19 )
      {
        v16->left = v20;
        v16->right = v19;
        DrawGroove(v7, v6, &v33, v12);
      }
      v16->left = *((_DWORD *)v8 + 13);
      v16->right = *((_DWORD *)v8 + 12);
      DrawPushButton(v7, &v33, 0, 0);
      v21 = *(_QWORD *)(*((_QWORD *)v9 + 2) + 744LL);
      if ( v21 )
      {
        v25 = *(_DWORD *)(v21 + 56);
        if ( (v25 == 2 || v25 == 3) && v9 == *(struct tagWND **)(v21 + 8) && ((*(_DWORD *)v21 >> 1) & 1) == v12 )
        {
          if ( (*(_DWORD *)v21 & 8) != 0 )
          {
            RecalcTrackRect((struct tagSBTRACK *)v21);
            *(_DWORD *)v21 &= ~8u;
          }
          v26 = (_DWORD *)(v21 + 32);
          if ( v12 )
            v26 = (_DWORD *)(v21 + 36);
          if ( *(_DWORD *)(v21 + 56) == 2 )
            v26[2] = *((_DWORD *)v8 + 13);
          else
            *v26 = *((_DWORD *)v8 + 12);
          if ( *v26 < v26[2] )
            GrePatBlt(
              (Gre::Base *)v7,
              *(_DWORD *)(v21 + 32),
              *(_DWORD *)(v21 + 36),
              *(_DWORD *)(v21 + 40) - *(_DWORD *)(v21 + 32),
              *(_DWORD *)(v21 + 44) - *(_DWORD *)(v21 + 36),
              5570569);
        }
      }
    }
  }
}
