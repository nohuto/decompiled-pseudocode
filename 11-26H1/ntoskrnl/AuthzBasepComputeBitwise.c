/*
 * XREFs of AuthzBasepComputeBitwise @ 0x140719FC4
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x1402FBC90 (AuthzBasepEvaluateAceCondition.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AuthzBasepComputeBitwise(char a1, __int64 a2)
{
  __int64 **v2; // rax
  __int64 v3; // r8
  __int64 **v5; // rcx
  __int64 v7; // [rsp+0h] [rbp-18h]
  __int64 v8; // [rsp+8h] [rbp-10h]

  v2 = (__int64 **)(a2 + 32);
  v7 = -1LL;
  v3 = 0LL;
  v8 = -1LL;
  do
  {
    if ( *((_DWORD *)v2 - 5) == 1 )
      v5 = v2;
    else
      v5 = (__int64 **)(*(v2 - 2) + 6);
    v2 += 5;
    *(&v7 + v3++) = **v5;
  }
  while ( v3 < 2 );
  if ( a1 == -93 )
    return v7 & v8;
  else
    return -1LL;
}
