/*
 * XREFs of ?xxxHandleHealthyThread@@YAXPEAUtagTHREADINFO@@@Z @ 0x14018123C
 * Callers:
 *     ?xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z @ 0x14001ED60 (-xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z.c)
 *     EditionxxxHandleGhostOnThreadDestroyed @ 0x1402AEFF0 (EditionxxxHandleGhostOnThreadDestroyed.c)
 * Callees:
 *     ?IsWindowGhosted@@YA_NPEBUtagWND@@@Z @ 0x140181368 (-IsWindowGhosted@@YA_NPEBUtagWND@@@Z.c)
 *     ?xxxHandleHealthyWindow@@YA_NPEAUtagWND@@@Z @ 0x1402AEE08 (-xxxHandleHealthyWindow@@YA_NPEAUtagWND@@@Z.c)
 */

void __fastcall xxxHandleHealthyThread(struct tagTHREADINFO *a1, __int64 a2)
{
  int i; // eax
  unsigned int v4; // esi
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct tagTHREADINFO **v10; // rbx

  for ( i = _InterlockedCompareExchange((volatile signed __int32 *)a1 + 132, 0, 0);
        i < 0;
        i = _InterlockedCompareExchange((volatile signed __int32 *)a1 + 132, 0, 0) )
  {
    _InterlockedAnd((volatile signed __int32 *)a1 + 132, 0x7FFFFFFFu);
    v4 = 0;
    W32GetUserSessionState(a1, a2);
    do
    {
      v5 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19888) + 32LL * v4;
      v9 = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 19832);
      if ( *(_BYTE *)(v5 + 24) == 1 )
      {
        v10 = *(struct tagTHREADINFO ***)(v9 + 40LL * v4);
        if ( v10[2] == a1 && IsWindowGhosted(*(const struct tagWND **)(v9 + 40LL * v4)) )
          xxxHandleHealthyWindow((struct tagWND *)v10);
      }
      ++v4;
    }
    while ( v4 <= *(_DWORD *)(W32GetUserSessionState(v9, v8) + 19816) );
  }
}
