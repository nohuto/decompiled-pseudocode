/*
 * XREFs of RIMFixUpCompleteFrame @ 0x1400A0EB8
 * Callers:
 *     rimFindOtherQueuedFrames @ 0x1400962C0 (rimFindOtherQueuedFrames.c)
 *     RIMFixUpCompleteFrames @ 0x1400A0548 (RIMFixUpCompleteFrames.c)
 *     rimProcessInput @ 0x1400A09DC (rimProcessInput.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     traceFrame @ 0x1400A15DC (traceFrame.c)
 */

_UNKNOWN **__fastcall RIMFixUpCompleteFrame(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, int a5)
{
  int v5; // r12d
  BOOL v9; // r14d
  bool v10; // si
  bool v11; // bp
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rsi
  _QWORD *j; // rbp
  bool v20; // bl
  _UNKNOWN **result; // rax
  bool v22; // di
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  _QWORD *v26; // rsi
  unsigned int i; // ebp

  v5 = 0;
  v9 = !a5 && *(_DWORD *)(a1 + 848) == 1;
  v10 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, a3);
    LOBYTE(v13) = v11;
    LOBYTE(v14) = v10;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v14,
      v13,
      *(_QWORD *)(UserSessionState + 19368),
      4,
      1,
      58,
      (__int64)&WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids);
  }
  if ( v9 )
    ProbeForWrite((volatile void *)a3, *(unsigned int *)a4, 8u);
  if ( *(_QWORD *)(a2 + 328) )
  {
    v5 = 1;
    *(_QWORD *)(a3 + 32) = *(_QWORD *)(a2 + 328);
  }
  v15 = a4[27];
  if ( v15 )
    *(_QWORD *)(a3 + 216) = a3 + v15 - (_QWORD)a4;
  v16 = a4[29];
  if ( v16 )
  {
    *(_QWORD *)(a3 + 232) = a3 + v16 - (_QWORD)a4;
    if ( v5 )
    {
      v26 = *(_QWORD **)(a3 + 232);
      for ( i = 0; i < *(_DWORD *)(a3 + 24); v26 += 24 )
      {
        if ( v9 )
          ProbeForWrite(v26, 0xC0uLL, 8u);
        ++i;
        v26[4] = *(_QWORD *)(a2 + 328);
      }
    }
    traceFrame(a3);
  }
  v17 = a4[28];
  if ( v17 )
  {
    *(_QWORD *)(a3 + 224) = a3 + v17 - (_QWORD)a4;
    v18 = a4[28];
    for ( j = *(_QWORD **)(a3 + 224); v18; v18 = *(_QWORD *)(v18 + 16) )
    {
      if ( *(_QWORD *)(v18 + 8) )
      {
        if ( v9 )
          ProbeForWrite(j, 0x18uLL, 8u);
        j[1] = a3 + *(_QWORD *)(v18 + 8) - (_QWORD)a4;
      }
      if ( *(_QWORD *)(v18 + 16) )
      {
        if ( v9 )
          ProbeForWrite(j, 0x18uLL, 8u);
        j[2] = a3 + *(_QWORD *)(v18 + 16) - (_QWORD)a4;
        j = (_QWORD *)j[2];
      }
    }
  }
  v20 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  result = &WPP_RECORDER_INITIALIZED;
  v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v23 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, a3);
    LOBYTE(v24) = v22;
    LOBYTE(v25) = v20;
    return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_(
                          *((_QWORD *)WPP_GLOBAL_Control + 3),
                          v25,
                          v24,
                          *(_QWORD *)(v23 + 19368),
                          4,
                          1,
                          59,
                          (__int64)&WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids);
  }
  return result;
}
