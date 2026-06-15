/*
 * XREFs of sub_14004E274 @ 0x14004E274
 * Callers:
 *     sub_14004DB3C @ 0x14004DB3C (sub_14004DB3C.c)
 * Callees:
 *     sub_14004F4AC @ 0x14004F4AC (sub_14004F4AC.c)
 */

__int64 sub_14004E274(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  v4 = a1;
  sub_14004F4AC(a1, (a2 - a1) >> 1, a3, (__int64 *)va);
  if ( a2 != v4 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( *(_WORD *)(v4 + 2 * v5) );
    v4 += 2 * v5;
  }
  return v4;
}
