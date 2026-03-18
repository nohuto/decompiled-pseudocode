/*
 * XREFs of ?InterQueueMsgCleanup@@YAXK@Z @ 0x1401EEBFC
 * Callers:
 *     zzzDesktopSwitchSideEffects @ 0x1401EEB58 (zzzDesktopSwitchSideEffects.c)
 * Callees:
 *     xxxReceiverDied @ 0x14016F18C (xxxReceiverDied.c)
 *     ?IsThreadHungTimeCheck@@YA_NPEBUtagTHREADINFO@@K@Z @ 0x1402AE7F4 (-IsThreadHungTimeCheck@@YA_NPEBUtagTHREADINFO@@K@Z.c)
 */

void __fastcall InterQueueMsgCleanup(__int64 a1, __int64 a2)
{
  _QWORD **v2; // rdi
  _QWORD *v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // rdx
  const struct tagTHREADINFO *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // rdx

  v2 = (_QWORD **)(W32GetUserSessionState(a1, a2) + 69056);
  v3 = *v2;
  while ( v3 != v2 )
  {
    v4 = (__int64)v3;
    v3 = (_QWORD *)*v3;
    v5 = *(_QWORD *)(v4 + 32);
    if ( v5 )
    {
      v6 = *(const struct tagTHREADINFO **)(v4 + 40);
      if ( v6 )
      {
        if ( *(_QWORD *)(v5 + 472) != *((_QWORD *)v6 + 59) && IsThreadHungTimeCheck(v6, 0x1388u) )
        {
          v9 = (unsigned int)(*(_DWORD *)(v4 + 104) - 6);
          if ( *(_DWORD *)(v4 + 104) == 6
            || (v9 = (unsigned int)(*(_DWORD *)(v4 + 104) - 7), *(_DWORD *)(v4 + 104) == 7)
            || (v9 = (unsigned int)(*(_DWORD *)(v4 + 104) - 8), *(_DWORD *)(v4 + 104) == 8)
            || (v9 = (unsigned int)(*(_DWORD *)(v4 + 104) - 28), *(_DWORD *)(v4 + 104) == 28)
            || (v9 = (unsigned int)(*(_DWORD *)(v4 + 104) - 81), *(_DWORD *)(v4 + 104) == 81)
            || (v9 = (unsigned int)(*(_DWORD *)(v4 + 104) - 134), *(_DWORD *)(v4 + 104) == 134)
            || *(_DWORD *)(v4 + 104) == 783 )
          {
            if ( (*(_DWORD *)(v4 + 84) & 0x10) == 0 )
              xxxReceiverDied(v4, (_QWORD *)v9, v7, v8);
          }
        }
      }
    }
  }
}
