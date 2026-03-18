/*
 * XREFs of ?InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z @ 0x1402F3BF4
 * Callers:
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1402F5658 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 * Callees:
 *     GrePatBlt @ 0x1400AD26C (GrePatBlt.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x14011F33C (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1402F3D98 (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qldddddd @ 0x1402F6C60 (WPP_RECORDER_AND_TRACE_SF_qldddddd.c)
 */

void __fastcall InvertScrollHilite(struct tagWND *a1, struct tagSBTRACK *a2)
{
  struct tagWND *v3; // rbx
  bool v4; // al
  unsigned int *v5; // rcx
  const struct tagRECT *v6; // r13
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  Gre::Base *DCEx; // rbx
  bool v12; // [rsp+C8h] [rbp+10h]
  bool v13; // [rsp+D0h] [rbp+18h]

  v3 = a1;
  v4 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v5 = &WPP_RECORDER_INITIALIZED;
  v12 = v4;
  v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v6 = (const struct tagRECT *)((char *)a2 + 32);
    LOBYTE(v5) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    UserSessionState = W32GetUserSessionState(v5, WPP_GLOBAL_Control);
    LOBYTE(v8) = v13;
    LOBYTE(v9) = v12;
    WPP_RECORDER_AND_TRACE_SF_qldddddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v9,
      v8,
      *(_QWORD *)(UserSessionState + 69152));
    v3 = a1;
  }
  else
  {
    v6 = (const struct tagRECT *)((char *)a2 + 32);
  }
  if ( !IsRectEmptyInl(v6) )
  {
    if ( (*(_DWORD *)a2 & 8) != 0 )
    {
      RecalcTrackRect(a2);
      *(_DWORD *)a2 &= ~8u;
    }
    DCEx = (Gre::Base *)_GetDCEx(v3, 0LL, 65537LL);
    GrePatBlt(DCEx, v6->left, v6->top, v6->right - v6->left, v6->bottom - v6->top, 5570569);
    _ReleaseDC(DCEx);
  }
}
