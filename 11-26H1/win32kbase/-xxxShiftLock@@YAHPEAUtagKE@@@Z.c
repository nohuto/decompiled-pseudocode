/*
 * XREFs of ?xxxShiftLock@@YAHPEAUtagKE@@@Z @ 0x140122ACC
 * Callers:
 *     xxxKELocaleProcs @ 0x140122908 (xxxKELocaleProcs.c)
 * Callees:
 *     xxxKeyEventEx @ 0x140123104 (xxxKeyEventEx.c)
 */

__int64 __fastcall xxxShiftLock(struct tagKE *a1, __int64 a2, int a3)
{
  int v3; // edx
  __int64 UserSessionState; // rax

  v3 = *((unsigned __int16 *)a1 + 1);
  if ( (v3 & 0x8000u) != 0 )
    return 1LL;
  LOWORD(v3) = (unsigned __int8)*((_WORD *)a1 + 1);
  if ( (_WORD)v3 == 20 )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)a1, v3, a3);
    LOBYTE(UserSessionState) = ~*(_BYTE *)(UserSessionState + 14333);
    return ((unsigned int)UserSessionState >> 1) & 1;
  }
  if ( (unsigned __int16)(v3 - 160) > 1u && (_WORD)v3 != 16
    || (*(_BYTE *)(W32GetUserSessionState(160, v3, a3) + 14333) & 2) == 0 )
  {
    return 1LL;
  }
  xxxKeyEventEx(*((unsigned __int16 *)a1 + 1), *(unsigned __int8 *)a1, *((_DWORD *)a1 + 1), 0, 0LL, 0LL, 0, 0, 0LL, 0LL);
  xxxKeyEventEx(20, 570, *((_DWORD *)a1 + 1), 0, 0LL, 0LL, 0, 0, 0LL, 0LL);
  xxxKeyEventEx(32788, 570, *((_DWORD *)a1 + 1), 0, 0LL, 0LL, 0, 0, 0LL, 0LL);
  return 0LL;
}
