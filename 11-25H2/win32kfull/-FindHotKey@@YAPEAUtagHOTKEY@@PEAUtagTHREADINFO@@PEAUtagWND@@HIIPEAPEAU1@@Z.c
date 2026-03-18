/*
 * XREFs of ?FindHotKey@@YAPEAUtagHOTKEY@@PEAUtagTHREADINFO@@PEAUtagWND@@HIIPEAPEAU1@@Z @ 0x1401959E8
 * Callers:
 *     ?_RegisterHotKey@@YA_NPEAUtagWND@@P6A?AW4tagHotKeyCallBackResult@@_K_J@ZHIIPEAUHWND__@@@Z @ 0x14028ACB4 (-_RegisterHotKey@@YA_NPEAUtagWND@@P6A-AW4tagHotKeyCallBackResult@@_K_J@ZHIIPEAUHWND__@@@Z.c)
 * Callees:
 *     ?MatchHandle@tagHOTKEY@@QEBA_NPEAUtagWND@@@Z @ 0x140195AA0 (-MatchHandle@tagHOTKEY@@QEBA_NPEAUtagWND@@@Z.c)
 */

struct tagHOTKEY *__fastcall FindHotKey(
        struct tagTHREADINFO *a1,
        struct tagWND *a2,
        int a3,
        __int16 a4,
        unsigned int a5,
        struct tagHOTKEY **a6)
{
  __int64 UserSessionState; // rax
  unsigned int v11; // r11d
  __int64 v12; // rcx
  __int64 v13; // r10

  *a6 = 0LL;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v11 = a5;
  v12 = *(_QWORD *)(UserSessionState + 8LL * (a5 & 0x7F) + 12952);
  v13 = 0LL;
  while ( v12 )
  {
    if ( *(struct tagTHREADINFO **)v12 == a1
      && *(_DWORD *)(v12 + 40) == a3
      && tagHOTKEY::MatchHandle((tagHOTKEY *)v12, a2) )
    {
      *a6 = (struct tagHOTKEY *)v12;
    }
    if ( *(_WORD *)(v12 + 32) == a4 && *(_DWORD *)(v12 + 36) == v11 )
      v13 = v12;
    if ( *a6 && v13 )
      break;
    v12 = *(_QWORD *)(v12 + 48);
  }
  return (struct tagHOTKEY *)v13;
}
