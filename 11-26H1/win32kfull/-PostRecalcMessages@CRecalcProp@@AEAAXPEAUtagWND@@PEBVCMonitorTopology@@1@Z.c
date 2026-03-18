/*
 * XREFs of ?PostRecalcMessages@CRecalcProp@@AEAAXPEAUtagWND@@PEBVCMonitorTopology@@1@Z @ 0x1402DDEAC
 * Callers:
 *     ?EndApplyWindowAction@CRecalcProp@@QEAAXPEAUtagWND@@PEBVCMonitorTopology@@_N@Z @ 0x1402DD64C (-EndApplyWindowAction@CRecalcProp@@QEAAXPEAUtagWND@@PEBVCMonitorTopology@@_N@Z.c)
 *     ?s_OnRecalcReenabled@CRecalcProp@@SAXPEAUtagWND@@@Z @ 0x1402DECA0 (-s_OnRecalcReenabled@CRecalcProp@@SAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1400932CC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     CalculateLogicalMonitorRect @ 0x140160158 (CalculateLogicalMonitorRect.c)
 *     ?Compare@CMonitorTopology@@QEBA?AW4CompareResult@1@PEBV1@W4CompareType@1@@Z @ 0x1401602C0 (-Compare@CMonitorTopology@@QEBA-AW4CompareResult@1@PEBV1@W4CompareType@1@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

void __fastcall CRecalcProp::PostRecalcMessages(
        CRecalcProp *this,
        struct tagWND *a2,
        const struct CMonitorTopology *a3,
        const struct CMonitorTopology *a4)
{
  char v4; // r14
  int v7; // eax
  char v8; // di
  bool v9; // si
  char v10; // bp
  unsigned __int64 v11; // r13
  __m128i *v12; // rax
  struct tagQ **v13; // r15
  __int64 v14; // rcx
  __int64 v15; // rbx
  char v16; // r15
  __int64 UserSessionState; // rax
  int v18; // r8d
  int v19; // edx
  char v20; // r15
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  __int64 v24; // rax
  __int64 v25; // rdx
  char v26; // bp
  __int64 v27; // rbx
  __int64 v28; // rax
  int v29; // r8d
  int v30; // edx
  __int64 v31; // rdx
  char v32; // si
  __int64 v33; // rbx
  __int64 v34; // rax
  int v35; // r8d
  int v36; // edx
  __m128i v37[4]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v38; // [rsp+A0h] [rbp+8h]
  struct tagQ **v39; // [rsp+A8h] [rbp+10h]

  v4 = 0;
  if ( a4 )
  {
    v7 = CMonitorTopology::Compare((__int64)a4, (__int64)a3, 0);
    v8 = 1;
    v9 = (v7 & 0x10) != 0;
    if ( (v7 & 0xFFFFFFEF) == 0 )
    {
      v10 = 0;
      v11 = 0LL;
      goto LABEL_6;
    }
  }
  else
  {
    v8 = 1;
    v9 = 1;
  }
  v10 = 1;
  v12 = CalculateLogicalMonitorRect(
          v37,
          (__m128i *)((char *)a3 + 72 * *((unsigned int *)a3 + 2) + 24),
          *((_WORD *)a3 + 36 * *((unsigned int *)a3 + 2) + 28),
          (*(_DWORD *)(*((_QWORD *)a2 + 5) + 288LL) >> 8) & 0x1FF,
          *((_WORD *)a3 + 36 * *((unsigned int *)a3 + 2) + 40));
  v11 = (unsigned __int16)(v12->m128i_i64[1] - v12->m128i_i64[0]) | (unsigned __int64)(int)((HIDWORD(v12->m128i_i64[1]) << 16)
                                                                                          - (HIDWORD(v12->m128i_i64[0]) << 16));
LABEL_6:
  v13 = (struct tagQ **)*((_QWORD *)a2 + 2);
  v14 = *(_QWORD *)a2;
  v39 = v13;
  v38 = *(_QWORD *)a2;
  v15 = *((_QWORD *)v13[58] + 4);
  if ( v15 )
  {
    while ( v9 || v10 )
    {
      if ( *(_DWORD *)(v15 + 96) == 9 && *(_QWORD *)(v15 + 16) == v14 )
      {
        if ( v10 && *(_DWORD *)(v15 + 24) == 126 )
        {
          *(_QWORD *)(v15 + 40) = v11;
          v10 = 0;
          if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
            || (v16 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
          {
            v16 = 0;
          }
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
            && *((_WORD *)WPP_GLOBAL_Control + 36) )
          {
            v4 = 1;
          }
          if ( v16 || v4 )
          {
            UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
            LOBYTE(v18) = v4;
            LOBYTE(v19) = v16;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v19,
              v18,
              *(_QWORD *)(UserSessionState + 69152),
              5,
              7,
              128,
              (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids);
          }
          v4 = 0;
        }
        if ( v9 && *(_DWORD *)(v15 + 24) == 26 && *(_QWORD *)(v15 + 32) == 47LL )
        {
          v9 = 0;
          if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
            || (v20 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
          {
            v20 = 0;
          }
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
            && *((_WORD *)WPP_GLOBAL_Control + 36) )
          {
            v4 = 1;
          }
          if ( v20 || v4 )
          {
            v21 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
            LOBYTE(v22) = v4;
            LOBYTE(v23) = v20;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v23,
              v22,
              *(_QWORD *)(v21 + 69152),
              5,
              7,
              129,
              (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids);
          }
          v4 = 0;
        }
        v14 = v38;
      }
      v15 = *(_QWORD *)(v15 + 8);
      if ( !v15 )
      {
        v13 = v39;
        goto LABEL_41;
      }
    }
  }
  else
  {
LABEL_41:
    if ( v10 )
    {
      v24 = W32GetUserSessionState(v14, &WPP_RECORDER_INITIALIZED);
      PostEventMessageEx(
        (struct tagTHREADINFO *)v13,
        v13[58],
        9u,
        a2,
        0x7Eu,
        *(unsigned __int16 *)(*(_QWORD *)(v24 + 19904) + 6996LL),
        v11,
        0LL);
      if ( WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u )
      {
        v4 = 1;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v26 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v26 = 0;
      }
      if ( v4 || v26 )
      {
        v27 = *(_QWORD *)a2;
        v28 = W32GetUserSessionState(WPP_GLOBAL_Control, v25);
        LOBYTE(v29) = v26;
        LOBYTE(v30) = v4;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v30,
          v29,
          *(_QWORD *)(v28 + 69152),
          5,
          7,
          130,
          (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
          v27);
      }
    }
    if ( v9 )
    {
      PostEventMessageEx((struct tagTHREADINFO *)v13, v13[58], 9u, a2, 0x1Au, 0x2FuLL, 0LL, 0LL);
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
        || (v32 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v32 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        v8 = 0;
      }
      if ( v32 || v8 )
      {
        v33 = *(_QWORD *)a2;
        v34 = W32GetUserSessionState(WPP_GLOBAL_Control, v31);
        LOBYTE(v35) = v8;
        LOBYTE(v36) = v32;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v36,
          v35,
          *(_QWORD *)(v34 + 69152),
          5,
          7,
          131,
          (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
          v33);
      }
    }
  }
}
