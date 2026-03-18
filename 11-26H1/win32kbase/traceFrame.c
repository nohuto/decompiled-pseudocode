/*
 * XREFs of traceFrame @ 0x1400A15DC
 * Callers:
 *     RIMFixUpCompleteFrame @ 0x1400A0EB8 (RIMFixUpCompleteFrame.c)
 * Callees:
 *     tracePointerInfo @ 0x140076368 (tracePointerInfo.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

__int64 __fastcall traceFrame(__int64 a1, __int64 a2, int a3)
{
  bool v4; // bl
  _UNKNOWN **v5; // rdx
  bool v6; // di
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  unsigned int v10; // esi
  __int64 result; // rax
  unsigned int *v12; // rdi
  bool v13; // bp
  bool v14; // r15
  __int16 v15; // bx
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx

  v4 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v5 = &WPP_RECORDER_INITIALIZED;
  v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, (unsigned int)&WPP_RECORDER_INITIALIZED, a3);
    LOBYTE(v8) = v6;
    LOBYTE(v9) = v4;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v9,
      v8,
      *(_QWORD *)(UserSessionState + 19368),
      4,
      1,
      44,
      (__int64)&WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids);
    v5 = &WPP_RECORDER_INITIALIZED;
  }
  v10 = 0;
  result = *(unsigned int *)(a1 + 24);
  if ( (_DWORD)result )
  {
    v12 = (unsigned int *)(*(_QWORD *)(a1 + 232) + 16LL);
    do
    {
      v13 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v15 = *((_WORD *)v12 - 4);
        v16 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (unsigned int)&WPP_RECORDER_INITIALIZED, a3);
        LOBYTE(v17) = v14;
        LOBYTE(v18) = v13;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v18,
          v17,
          *(_QWORD *)(v16 + 19368),
          4,
          1,
          45,
          (__int64)&WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids,
          v15);
      }
      tracePointerInfo(v12, (__int64)v5, a3);
      result = *(unsigned int *)(a1 + 24);
      v5 = &WPP_RECORDER_INITIALIZED;
      ++v10;
      v12 += 48;
    }
    while ( v10 < (unsigned int)result );
  }
  return result;
}
