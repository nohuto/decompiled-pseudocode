/*
 * XREFs of sub_180024EC4 @ 0x180024EC4
 * Callers:
 *     sub_180024EC4 @ 0x180024EC4 (sub_180024EC4.c)
 *     sub_180025974 @ 0x180025974 (sub_180025974.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_1800130CC @ 0x1800130CC (sub_1800130CC.c)
 *     sub_180024EC4 @ 0x180024EC4 (sub_180024EC4.c)
 */

_UNKNOWN **__fastcall sub_180024EC4(__int64 a1, __int64 a2, __int64 a3)
{
  _UNKNOWN **result; // rax
  __int64 *v4; // rbx
  __int64 *v7; // rdi
  __int64 *v8; // rsi
  __int64 v9; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v4 = (__int64 *)a3;
  if ( !*(_BYTE *)(a3 + 25) )
  {
    do
    {
      sub_180024EC4(a1, a2, v4[2]);
      v7 = v4;
      v8 = v4;
      v4 = (__int64 *)*v4;
      v9 = v7[5];
      if ( v9 )
      {
        sub_1800130CC(v9, v7[6]);
        sub_18000E26C((void *)v7[5], (v7[7] - v7[5]) & 0xFFFFFFFFFFFFFFF0uLL);
        v7[5] = 0LL;
        v7[6] = 0LL;
        v7[7] = 0LL;
      }
      result = (_UNKNOWN **)sub_18000E26C(v8, 0x40uLL);
    }
    while ( !*((_BYTE *)v4 + 25) );
  }
  return result;
}
