/*
 * XREFs of ?xxxShiftLock@@YAHPEAUtagKE@@@Z @ 0x1401505AC
 * Callers:
 *     xxxKELocaleProcs @ 0x14010EC0C (xxxKELocaleProcs.c)
 * Callees:
 *     xxxKeyEventEx @ 0x140150824 (xxxKeyEventEx.c)
 */

__int64 __fastcall xxxShiftLock(struct tagKE *a1)
{
  __int64 v1; // rdx
  __int64 UserSessionState; // rax

  v1 = *((unsigned __int16 *)a1 + 1);
  if ( (v1 & 0x8000u) != 0LL )
    return 1LL;
  LOWORD(v1) = (unsigned __int8)*((_WORD *)a1 + 1);
  if ( (_WORD)v1 == 20 )
  {
    UserSessionState = W32GetUserSessionState(a1, v1);
    LOBYTE(UserSessionState) = ~*(_BYTE *)(UserSessionState + 14341);
    return ((unsigned int)UserSessionState >> 1) & 1;
  }
  if ( (unsigned __int16)(v1 - 160) > 1u && (_WORD)v1 != 16
    || (*(_BYTE *)(W32GetUserSessionState(160LL, v1) + 14341) & 2) == 0 )
  {
    return 1LL;
  }
  xxxKeyEventEx(*((unsigned __int16 *)a1 + 1), *(unsigned __int8 *)a1, *((_DWORD *)a1 + 1), 0, 0LL, 0LL, 0, 0, 0LL, 0LL);
  xxxKeyEventEx(20, 570, *((_DWORD *)a1 + 1), 0, 0LL, 0LL, 0, 0, 0LL, 0LL);
  xxxKeyEventEx(32788, 570, *((_DWORD *)a1 + 1), 0, 0LL, 0LL, 0, 0, 0LL, 0LL);
  return 0LL;
}
