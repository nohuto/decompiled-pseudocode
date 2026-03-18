/*
 * XREFs of ?IsOurKey@CPTPProcessor@@CA_NE_N@Z @ 0x1401479B0
 * Callers:
 *     ?OnKeyEvent@CPTPProcessor@@SAXE_N@Z @ 0x140147894 (-OnKeyEvent@CPTPProcessor@@SAXE_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CPTPProcessor::IsOurKey(unsigned __int8 a1, char a2, int a3)
{
  char v3; // di
  unsigned __int64 v4; // rbx
  __int64 v5; // rcx
  unsigned __int64 v7; // rcx
  __int64 v8; // rcx

  v3 = 0;
  v4 = a1;
  if ( !a2
    && !_InterlockedCompareExchange64((volatile signed __int64 *)(W32GetUserSessionState(a1, 0, a3) + 3296), 0LL, 0LL) )
  {
    return 0;
  }
  if ( (unsigned __int8)v4 <= 0x20u )
  {
    v5 = 0x100002200LL;
    if ( _bittest64(&v5, v4) )
      return 1;
  }
  if ( (unsigned __int8)(v4 - 48) <= 0x3Fu )
  {
    v7 = 0xFFFF07FFFFFE03FFuLL;
    if ( _bittest64((const __int64 *)&v7, (unsigned int)(v4 - 48)) )
      return 1;
  }
  LOBYTE(v4) = v4 + 70;
  if ( (unsigned __int8)v4 <= 0x25u )
  {
    v8 = 0x3E0000007FLL;
    if ( _bittest64(&v8, v4) )
      return 1;
  }
  return v3;
}
