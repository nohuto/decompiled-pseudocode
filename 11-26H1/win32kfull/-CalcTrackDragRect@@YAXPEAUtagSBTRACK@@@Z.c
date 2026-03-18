/*
 * XREFs of ?CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1402F36E4
 * Callers:
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1402F3D98 (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     xxxSBTrackInit @ 0x1402F8934 (xxxSBTrackInit.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x140032058 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x140032228 (GetDpiForSystem.c)
 *     WPP_RECORDER_AND_TRACE_SF_qldddddd @ 0x1402F6C60 (WPP_RECORDER_AND_TRACE_SF_qldddddd.c)
 */

void __fastcall CalcTrackDragRect(struct tagSBTRACK *a1)
{
  int v2; // ebx
  __int64 v3; // rsi
  unsigned __int64 v4; // rdi
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // eax
  __int64 v7; // rcx
  int v8; // r8d
  __int64 v9; // rdx
  bool v10; // r13
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  bool v14; // [rsp+B0h] [rbp+8h]

  v2 = *(_DWORD *)a1 & 2;
  v3 = v2 != 0 ? 4 : 0;
  v4 = -(__int64)(v2 != 0) & 0xFFFFFFFFFFFFFFFCuLL;
  DpiForSystem = GetDpiForSystem();
  DpiDependentMetric = GetDpiDependentMetric(4 - (unsigned int)(v2 != 0), DpiForSystem);
  v7 = *((_QWORD *)a1 + 12);
  v8 = *(_DWORD *)(v7 + 24);
  v9 = (unsigned int)(8 * (*(_DWORD *)(v7 + 28) - v8));
  *(_DWORD *)((char *)a1 + v4 + 36) = v8 - v9;
  *(_DWORD *)((char *)a1 + v3 + 32) = *(_DWORD *)(*((_QWORD *)a1 + 12) + 16LL) - 2 * DpiDependentMetric;
  *(_DWORD *)((char *)a1 + v4 + 44) = v9 + *(_DWORD *)(*((_QWORD *)a1 + 12) + 28LL);
  *(_DWORD *)((char *)a1 + v3 + 40) = 2 * DpiDependentMetric + *(_DWORD *)(*((_QWORD *)a1 + 12) + 20LL);
  v10 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v9);
    LOBYTE(v12) = v14;
    LOBYTE(v13) = v10;
    WPP_RECORDER_AND_TRACE_SF_qldddddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v13,
      v12,
      *(_QWORD *)(UserSessionState + 69152));
  }
}
