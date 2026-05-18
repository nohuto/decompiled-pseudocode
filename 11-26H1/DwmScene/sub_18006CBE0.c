/*
 * XREFs of sub_18006CBE0 @ 0x18006CBE0
 * Callers:
 *     sub_18006D1CC @ 0x18006D1CC (sub_18006D1CC.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_18006CFC8 @ 0x18006CFC8 (sub_18006CFC8.c)
 */

// Hidden C++ exception states: #wind=1
_UNKNOWN **__fastcall sub_18006CBE0(__int64 a1, __int64 a2, __int64 a3)
{
  _UNKNOWN **result; // rax
  int v5; // ebp
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 *v8; // rbx
  __int64 v9; // [rsp+30h] [rbp-18h] BYREF
  __int64 v10; // [rsp+38h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  v5 = a1;
  v6 = (a2 - a1) >> 4;
  v7 = (a2 - a1) >> 5;
  if ( v7 > 0 )
  {
    v8 = (__int64 *)(a1 + 16 * v7);
    do
    {
      --v7;
      v8 -= 2;
      v9 = *v8;
      v10 = v8[1];
      *v8 = 0LL;
      v8[1] = 0LL;
      result = (_UNKNOWN **)sub_18006CFC8(v5, v7, v6, (unsigned int)&v9, a3);
      if ( v10 )
        result = (_UNKNOWN **)sub_180010EC8(v10);
    }
    while ( v7 > 0 );
  }
  return result;
}
