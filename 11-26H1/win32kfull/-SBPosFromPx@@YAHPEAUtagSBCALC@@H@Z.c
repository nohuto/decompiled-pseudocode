/*
 * XREFs of ?SBPosFromPx@@YAHPEAUtagSBCALC@@H@Z @ 0x1402F3F70
 * Callers:
 *     ?xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1402F4654 (-xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ddddddd @ 0x1402EE140 (WPP_RECORDER_AND_TRACE_SF_ddddddd.c)
 */

__int64 __fastcall SBPosFromPx(struct tagSBCALC *a1, __int64 a2)
{
  int v2; // r9d
  unsigned int v3; // r15d
  INT v4; // r8d
  int v5; // ebx
  char v6; // r12
  char v7; // r13
  __int64 UserSessionState; // rax
  int v10; // [rsp+20h] [rbp-88h]

  v2 = *((_DWORD *)a1 + 15);
  if ( (int)a2 >= v2 )
  {
    v4 = *((_DWORD *)a1 + 14);
    if ( (int)a2 < v4 + v2 )
    {
      v5 = *(_DWORD *)a1;
      if ( v4 )
        v3 = v5
           + EngMulDiv(*((_DWORD *)a1 + 1) - (*((_DWORD *)a1 + 2) != 0 ? *((_DWORD *)a1 + 2) - 1 : 0) - v5, a2 - v2, v4);
      else
        v3 = v5 - 1;
    }
    else
    {
      a2 = (*((_DWORD *)a1 + 2) - 1) & (unsigned int)-(*((_DWORD *)a1 + 2) != 0);
      v3 = *((_DWORD *)a1 + 1) - a2;
    }
  }
  else
  {
    v3 = *(_DWORD *)a1;
  }
  v6 = 1;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0
    || (v7 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v7 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v6 = 0;
  if ( v7 || v6 )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    WPP_RECORDER_AND_TRACE_SF_ddddddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v7,
      v6,
      *(_QWORD *)(UserSessionState + 69152),
      v10,
      9u,
      0x22u,
      (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids);
  }
  return v3;
}
