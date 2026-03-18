/*
 * XREFs of xxxMNReleaseCapture @ 0x14026AD74
 * Callers:
 *     xxxMNCancel @ 0x14003D33C (xxxMNCancel.c)
 *     xxxMNLoop @ 0x14015A654 (xxxMNLoop.c)
 *     xxxTrackPopupMenuEx @ 0x14015AE18 (xxxTrackPopupMenuEx.c)
 *     xxxMNStartMenu @ 0x14015D464 (xxxMNStartMenu.c)
 *     xxxEndMenu @ 0x1402E9D60 (xxxEndMenu.c)
 * Callees:
 *     xxxWindowEvent @ 0x14002EAB0 (xxxWindowEvent.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxReleaseCapture @ 0x14006247C (xxxReleaseCapture.c)
 */

void __fastcall xxxMNReleaseCapture(__int64 a1, __int64 a2)
{
  struct tagTHREADINFO *v3; // rax
  __int64 v4; // rdx
  struct tagTHREADINFO *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 UserSessionState; // rax

  v3 = PtiCurrent(a1, a2);
  v5 = v3;
  if ( a1 )
  {
    v6 = *(unsigned int *)(a1 + 8);
    if ( (v6 & 0x40000) != 0 )
    {
      LODWORD(v6) = v6 & 0xFFFBFFFF;
      *(_DWORD *)(a1 + 8) = v6;
      *(_DWORD *)(*((_QWORD *)v3 + 59) + 412LL) &= ~0x100000u;
      xxxReleaseCapture(v6, v4);
      if ( *(_QWORD *)(W32GetUserSessionState(v8, v7) + 18888) )
      {
        v12 = *(_QWORD *)(W32GetUserSessionState(v10, v9) + 18888);
        if ( *(_QWORD *)(v12 + 120) )
        {
          v14 = *(_QWORD *)(W32GetUserSessionState(v12, v11) + 18888);
          if ( *(struct tagTHREADINFO **)(*(_QWORD *)(v14 + 120) + 16LL) == v5 )
          {
            UserSessionState = W32GetUserSessionState(v14, v13);
            xxxWindowEvent(0x80000005, *(struct tagWND **)(*(_QWORD *)(UserSessionState + 18888) + 120LL), 0, 1u, 33);
          }
        }
      }
    }
  }
}
