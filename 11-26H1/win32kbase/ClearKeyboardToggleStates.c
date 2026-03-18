/*
 * XREFs of ClearKeyboardToggleStates @ 0x140157ED0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall ClearKeyboardToggleStates(int a1, int a2, unsigned __int64 a3)
{
  unsigned int v3; // edi
  __int64 v4; // rbx
  __int64 UserSessionState; // rax
  __int64 i; // rbx
  __int64 result; // rax
  unsigned int v8; // esi
  __int64 v9; // rdi
  int v10; // ebx
  _BYTE v11[16]; // [rsp+20h] [rbp-28h]

  v3 = 0;
  v4 = 0LL;
  do
  {
    UserSessionState = W32GetUserSessionState(a1, a2, a3);
    a2 = 1;
    ++v3;
    a3 = (unsigned __int64)byte_140269938[v4] >> 2;
    a1 = 2 * (byte_140269938[v4] & 3) + 1;
    LOBYTE(a2) = *(_BYTE *)(a3 + UserSessionState + 14328) & (1 << (2 * (byte_140269938[v4] & 3) + 1));
    v11[v4++] = a2;
  }
  while ( v3 < 0xE );
  for ( i = 0LL; i < 64; ++i )
  {
    result = W32GetUserSessionState(a1, a2, a3);
    *(_BYTE *)(result + i + 14328) &= 0x55u;
  }
  v8 = 0;
  v9 = 0LL;
  do
  {
    if ( v11[v9] )
    {
      v10 = 1 << (2 * (byte_140269938[v9] & 3) + 1);
      result = W32GetUserSessionState(2 * (byte_140269938[v9] & 3u) + 1, a2, a3);
      *(_BYTE *)(((unsigned __int64)byte_140269938[v9] >> 2) + result + 14328) |= v10;
    }
    ++v8;
    ++v9;
  }
  while ( v8 < 0xE );
  return result;
}
