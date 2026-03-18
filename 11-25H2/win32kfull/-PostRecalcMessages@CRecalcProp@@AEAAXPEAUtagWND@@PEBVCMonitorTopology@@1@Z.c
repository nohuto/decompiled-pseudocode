/*
 * XREFs of ?PostRecalcMessages@CRecalcProp@@AEAAXPEAUtagWND@@PEBVCMonitorTopology@@1@Z @ 0x1402C5040
 * Callers:
 *     ?EndApplyWindowAction@CRecalcProp@@QEAAXPEAUtagWND@@PEBVCMonitorTopology@@_N@Z @ 0x1402C4160 (-EndApplyWindowAction@CRecalcProp@@QEAAXPEAUtagWND@@PEBVCMonitorTopology@@_N@Z.c)
 *     ?s_OnRecalcReenabled@CRecalcProp@@SAXPEAUtagWND@@@Z @ 0x1402C68FC (-s_OnRecalcReenabled@CRecalcProp@@SAXPEAUtagWND@@@Z.c)
 * Callees:
 *     CalculateLogicalMonitorRect @ 0x14002428C (CalculateLogicalMonitorRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14012A960 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?Compare@CMonitorTopology@@QEBA?AW4CompareResult@1@PEBV1@W4CompareType@1@@Z @ 0x1401CF350 (-Compare@CMonitorTopology@@QEBA-AW4CompareResult@1@PEBV1@W4CompareType@1@@Z.c)
 */

void __fastcall CRecalcProp::PostRecalcMessages(
        CRecalcProp *this,
        LARGE_INTEGER *a2,
        const struct CMonitorTopology *a3,
        const struct CMonitorTopology *a4)
{
  char v4; // r15
  int v7; // eax
  char v8; // di
  bool v9; // si
  char v10; // bp
  unsigned __int64 v11; // rdx
  __m128i *v12; // rax
  struct tagQ **QuadPart; // r13
  LONGLONG v14; // rcx
  __int64 v15; // rbx
  char v16; // r14
  __int64 UserSessionState; // rax
  int v18; // r8d
  int v19; // edx
  char v20; // r14
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  __int64 v24; // rax
  __int64 v25; // rdx
  char v26; // r14
  char v27; // bp
  LARGE_INTEGER v28; // rbx
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  __int64 v32; // rdx
  char v33; // si
  LARGE_INTEGER v34; // rbx
  __int64 v35; // rax
  int v36; // r8d
  int v37; // edx
  __m128i v38[4]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v39; // [rsp+A0h] [rbp+8h]
  LONGLONG v40; // [rsp+A8h] [rbp+10h]

  v4 = 0;
  if ( !a4 )
  {
    v8 = 1;
    v9 = 1;
    goto LABEL_5;
  }
  v7 = CMonitorTopology::Compare((__int64)a4, (__int64)a3, 0);
  v8 = 1;
  v9 = (v7 & 0x10) != 0;
  if ( (v7 & 0xFFFFFFEF) != 0 )
  {
LABEL_5:
    v10 = 1;
    v12 = CalculateLogicalMonitorRect(
            v38,
            (__m128i *)((char *)a3 + 72 * *((unsigned int *)a3 + 2) + 24),
            *((_WORD *)a3 + 36 * *((unsigned int *)a3 + 2) + 28),
            (*(_DWORD *)(a2[5].QuadPart + 288) >> 8) & 0x1FF,
            *((_WORD *)a3 + 36 * *((unsigned int *)a3 + 2) + 40));
    v11 = (unsigned __int16)(v12->m128i_i64[1] - v12->m128i_i64[0]) | (unsigned __int64)(int)((HIDWORD(v12->m128i_i64[1]) << 16)
                                                                                            - (HIDWORD(v12->m128i_i64[0]) << 16));
    goto LABEL_6;
  }
  v10 = 0;
  v11 = 0LL;
LABEL_6:
  QuadPart = (struct tagQ **)a2[2].QuadPart;
  v14 = a2->QuadPart;
  v39 = v11;
  v40 = a2->QuadPart;
  v15 = *((_QWORD *)QuadPart[59] + 4);
  while ( v15 )
  {
    if ( !v9 && !v10 )
      return;
    if ( *(_DWORD *)(v15 + 96) == 9 && *(_QWORD *)(v15 + 16) == v14 )
    {
      if ( v10 && *(_DWORD *)(v15 + 24) == 126 )
      {
        *(_QWORD *)(v15 + 40) = v11;
        v10 = 0;
        if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
          && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u )
        {
          v4 = 1;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v16 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
        {
          v16 = 0;
        }
        if ( v4 || v16 )
        {
          UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v11);
          LOBYTE(v18) = v16;
          LOBYTE(v19) = v4;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v19,
            v18,
            *(_QWORD *)(UserSessionState + 69160),
            5,
            7,
            128,
            (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids);
        }
        v4 = 0;
      }
      if ( v9 && *(_DWORD *)(v15 + 24) == 26 && *(_QWORD *)(v15 + 32) == 47LL )
      {
        v9 = 0;
        if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
          && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u )
        {
          v4 = 1;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v20 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
        {
          v20 = 0;
        }
        if ( v4 || v20 )
        {
          v21 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v11);
          LOBYTE(v22) = v20;
          LOBYTE(v23) = v4;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v23,
            v22,
            *(_QWORD *)(v21 + 69160),
            5,
            7,
            129,
            (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids);
        }
        v4 = 0;
      }
      v14 = v40;
    }
    v15 = *(_QWORD *)(v15 + 8);
    v11 = v39;
  }
  if ( v10 )
  {
    v24 = W32GetUserSessionState(v14, v11);
    PostEventMessageEx(
      (struct tagTHREADINFO *)QuadPart,
      QuadPart[59],
      9u,
      a2,
      0x7Eu,
      (LARGE_INTEGER)*(unsigned __int16 *)(*(_QWORD *)(v24 + 19872) + 6996LL),
      v39,
      0LL);
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
      || (v26 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v26 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v27 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v27 = 0;
    }
    if ( v26 || v27 )
    {
      v28 = *a2;
      v29 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v25);
      LOBYTE(v30) = v27;
      LOBYTE(v31) = v26;
      WPP_RECORDER_AND_TRACE_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v31,
        v30,
        *(_QWORD *)(v29 + 69160),
        5,
        7,
        130,
        (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids,
        v28.QuadPart);
    }
  }
  if ( v9 )
  {
    PostEventMessageEx((struct tagTHREADINFO *)QuadPart, QuadPart[59], 9u, a2, 0x1Au, (LARGE_INTEGER)47LL, 0LL, 0LL);
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
      || (v33 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v33 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
    {
      v8 = 0;
    }
    if ( v33 || v8 )
    {
      v34 = *a2;
      v35 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v32);
      LOBYTE(v36) = v8;
      LOBYTE(v37) = v33;
      WPP_RECORDER_AND_TRACE_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v37,
        v36,
        *(_QWORD *)(v35 + 69160),
        5,
        7,
        131,
        (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids,
        v34.QuadPart);
    }
  }
}
