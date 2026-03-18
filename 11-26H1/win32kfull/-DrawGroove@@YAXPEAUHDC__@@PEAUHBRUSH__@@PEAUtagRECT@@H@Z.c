/*
 * XREFs of ?DrawGroove@@YAXPEAUHDC__@@PEAUHBRUSH__@@PEAUtagRECT@@H@Z @ 0x1401F0E20
 * Callers:
 *     ?DrawThumb2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@PEAUHBRUSH__@@HI@Z @ 0x1401F09B0 (-DrawThumb2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@PEAUHBRUSH__@@HI@Z.c)
 * Callees:
 *     DrawEdge @ 0x1401266B0 (DrawEdge.c)
 *     FillRect @ 0x140126BCC (FillRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_ldddddd @ 0x1402F5E3C (WPP_RECORDER_AND_TRACE_SF_ldddddd.c)
 */

void __fastcall DrawGroove(HDC a1, HBRUSH a2, __m128i *a3, int a4)
{
  int v4; // edi
  HDC v7; // rbx
  char v8; // r15
  bool v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  __m128i *v12; // rdx
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  __m128i v16[4]; // [rsp+80h] [rbp-48h] BYREF

  v4 = a4;
  v7 = a1;
  v8 = 1;
  v9 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v8 = 0;
  if ( v9 || v8 )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    LOBYTE(v14) = v8;
    LOBYTE(v15) = v9;
    v4 = a4;
    WPP_RECORDER_AND_TRACE_SF_ldddddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v15,
      v14,
      *(_QWORD *)(UserSessionState + 69152));
    v7 = a1;
  }
  v11 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19904);
  if ( a2 == *(HBRUSH *)(v11 + 4856)
    || a2 == *(HBRUSH *)(*(_QWORD *)(W32GetUserSessionState(v11, v10) + 19904) + 4944LL) )
  {
    v12 = a3;
  }
  else
  {
    v16[0] = *a3;
    DrawEdge(v7, v16, 0xAu, v4 != 0 ? 24581 : 24586);
    v12 = v16;
  }
  FillRect(v7, (LPCRECT)v12, a2);
}
