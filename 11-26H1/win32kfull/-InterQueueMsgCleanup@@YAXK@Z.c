/*
 * XREFs of ?InterQueueMsgCleanup@@YAXK@Z @ 0x1401F1FAC
 * Callers:
 *     zzzDesktopSwitchSideEffects @ 0x1401F1F04 (zzzDesktopSwitchSideEffects.c)
 * Callees:
 *     xxxReceiverDied @ 0x140054ED4 (xxxReceiverDied.c)
 *     ?IsThreadHungTimeCheck@@YA_NPEBUtagTHREADINFO@@K@Z @ 0x140264778 (-IsThreadHungTimeCheck@@YA_NPEBUtagTHREADINFO@@K@Z.c)
 */

void __fastcall InterQueueMsgCleanup(__int64 a1, __int64 a2)
{
  _QWORD **v2; // rsi
  _QWORD *v3; // rdi
  const struct tagTHREADINFO *v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rdx

  v2 = (_QWORD **)(W32GetUserSessionState(a1, a2) + 69048);
  v3 = *v2;
  while ( v3 != v2 )
  {
    v5 = (__int64)v3;
    v3 = (_QWORD *)*v3;
    v6 = *(_QWORD *)(v5 + 32);
    if ( v6 )
    {
      v4 = *(const struct tagTHREADINFO **)(v5 + 40);
      if ( v4 )
      {
        if ( *(_QWORD *)(v6 + 464) != *((_QWORD *)v4 + 58)
          && IsThreadHungTimeCheck(v4, 0x1388u)
          && (*(_DWORD *)(v5 + 104) == 6
           || *(_DWORD *)(v5 + 104) == 7
           || *(_DWORD *)(v5 + 104) == 8
           || *(_DWORD *)(v5 + 104) == 28
           || *(_DWORD *)(v5 + 104) == 81
           || *(_DWORD *)(v5 + 104) == 134
           || *(_DWORD *)(v5 + 104) == 783)
          && (*(_DWORD *)(v5 + 84) & 0x10) == 0 )
        {
          xxxReceiverDied(v5);
        }
      }
    }
  }
}
