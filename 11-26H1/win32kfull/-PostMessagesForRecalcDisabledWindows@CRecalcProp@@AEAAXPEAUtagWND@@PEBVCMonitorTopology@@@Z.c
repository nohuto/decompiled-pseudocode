/*
 * XREFs of ?PostMessagesForRecalcDisabledWindows@CRecalcProp@@AEAAXPEAUtagWND@@PEBVCMonitorTopology@@@Z @ 0x1402DDBE0
 * Callers:
 *     ?s_OnRecalcReenabled@CRecalcProp@@SAXPEAUtagWND@@@Z @ 0x1402DECA0 (-s_OnRecalcReenabled@CRecalcProp@@SAXPEAUtagWND@@@Z.c)
 *     ?xxxEndApplyWindowActionOld@CRecalcProp@@QEAAXPEAUtagWND@@PEAVCMonitorTopology@@@Z @ 0x1402DF288 (-xxxEndApplyWindowActionOld@CRecalcProp@@QEAAXPEAUtagWND@@PEAVCMonitorTopology@@@Z.c)
 * Callees:
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1400932CC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?Compare@CMonitorTopology@@QEBA?AW4CompareResult@1@PEBV1@W4CompareType@1@@Z @ 0x1401602C0 (-Compare@CMonitorTopology@@QEBA-AW4CompareResult@1@PEBV1@W4CompareType@1@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qs @ 0x140191A34 (WPP_RECORDER_AND_TRACE_SF_qs.c)
 *     GetPrimaryMonitorRectForWindow @ 0x14021557C (GetPrimaryMonitorRectForWindow.c)
 */

void __fastcall CRecalcProp::PostMessagesForRecalcDisabledWindows(
        CRecalcProp *this,
        struct tagWND *a2,
        const struct CMonitorTopology *a3)
{
  int v4; // eax
  int v5; // r12d
  char v6; // bp
  const char *v7; // r13
  bool v8; // r14
  bool v9; // r15
  int v10; // ebx
  __int64 v11; // rdi
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  __int64 v15; // r9
  const char *v16; // rax
  __m128i v17; // xmm6
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  bool v21; // r14
  int v22; // ebx
  __int64 v23; // rdi
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  __m128i v27; // [rsp+50h] [rbp-48h] BYREF

  v4 = CMonitorTopology::Compare(*(_QWORD *)(*((_QWORD *)this + 4) + 16LL), (__int64)a3, 0);
  v5 = v4 & 0x10;
  v6 = 1;
  v7 = "has";
  if ( (v4 & 0xFFFFFFEF) != 0 )
  {
    v8 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v10 = *((_DWORD *)a2 + 95);
      v11 = *(_QWORD *)a2;
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
      LOBYTE(v13) = v9;
      LOBYTE(v14) = v8;
      v15 = *(_QWORD *)(UserSessionState + 69152);
      v16 = "has";
      if ( (v10 & 0x10) == 0 )
        v16 = "had";
      WPP_RECORDER_AND_TRACE_SF_qs(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v14,
        v13,
        v15,
        4,
        7,
        132,
        (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
        v11,
        (__int64)v16);
    }
    v17 = *GetPrimaryMonitorRectForWindow(&v27, a2);
    v20 = W32GetUserSessionState(v19, v18);
    PostEventMessageEx(
      *((struct tagTHREADINFO **)a2 + 2),
      *(struct tagQ **)(*((_QWORD *)a2 + 2) + 464LL),
      9u,
      a2,
      0x7Eu,
      *(unsigned __int16 *)(*(_QWORD *)(v20 + 19904) + 6996LL),
      ((unsigned __int16)(_mm_cvtsi128_si32(_mm_srli_si128(v17, 12)) - _mm_cvtsi128_si32(_mm_srli_si128(v17, 4))) << 16) | (unsigned __int16)(_mm_cvtsi128_si32(_mm_srli_si128(v17, 8)) - _mm_cvtsi128_si32(v17)),
      0LL);
  }
  if ( v5 )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v6 = 0;
    }
    v21 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v22 = *((_DWORD *)a2 + 95);
      v23 = *(_QWORD *)a2;
      v24 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
      LOBYTE(v25) = v21;
      LOBYTE(v26) = v6;
      if ( (v22 & 0x10) == 0 )
        v7 = "had";
      WPP_RECORDER_AND_TRACE_SF_qs(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v26,
        v25,
        *(_QWORD *)(v24 + 69152),
        4,
        7,
        133,
        (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
        v23,
        (__int64)v7);
    }
    PostEventMessageEx(
      *((struct tagTHREADINFO **)a2 + 2),
      *(struct tagQ **)(*((_QWORD *)a2 + 2) + 464LL),
      9u,
      a2,
      0x1Au,
      0x2FuLL,
      0LL,
      0LL);
  }
}
