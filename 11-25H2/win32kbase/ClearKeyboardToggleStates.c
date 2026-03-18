/*
 * XREFs of ClearKeyboardToggleStates @ 0x140118150
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 __fastcall ClearKeyboardToggleStates(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v3; // rbx
  __int64 UserSessionState; // rax
  __int64 i; // rbx
  __int64 result; // rax
  unsigned int v7; // esi
  __int64 v8; // rdi
  int v9; // ebx
  _BYTE v10[16]; // [rsp+20h] [rbp-28h]

  v2 = 0;
  v3 = 0LL;
  do
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    a2 = 1LL;
    ++v2;
    a1 = 2 * (byte_1402617C0[v3] & 3u) + 1;
    LOBYTE(a2) = *(_BYTE *)(((unsigned __int64)(unsigned __int8)byte_1402617C0[v3] >> 2) + UserSessionState + 14336) & (1 << (2 * (byte_1402617C0[v3] & 3) + 1));
    v10[v3++] = a2;
  }
  while ( v2 < 0xE );
  for ( i = 0LL; i < 64; ++i )
  {
    result = W32GetUserSessionState(a1, a2);
    *(_BYTE *)(result + i + 14336) &= 0x55u;
  }
  v7 = 0;
  v8 = 0LL;
  do
  {
    if ( v10[v8] )
    {
      v9 = 1 << (2 * (byte_1402617C0[v8] & 3) + 1);
      result = W32GetUserSessionState(2 * (byte_1402617C0[v8] & 3u) + 1, a2);
      *(_BYTE *)(result + ((unsigned __int64)(unsigned __int8)byte_1402617C0[v8] >> 2) + 14336) |= v9;
    }
    ++v7;
    ++v8;
  }
  while ( v7 < 0xE );
  return result;
}
