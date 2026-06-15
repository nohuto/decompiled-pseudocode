/*
 * XREFs of sub_14006315C @ 0x14006315C
 * Callers:
 *     sub_1400634EC @ 0x1400634EC (sub_1400634EC.c)
 * Callees:
 *     sub_1400080D4 @ 0x1400080D4 (sub_1400080D4.c)
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 *     sub_140063C34 @ 0x140063C34 (sub_140063C34.c)
 *     sub_140063FBC @ 0x140063FBC (sub_140063FBC.c)
 */

__int64 __fastcall sub_14006315C(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v6; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v7; // [rsp+60h] [rbp+18h] BYREF
  unsigned int v8; // [rsp+68h] [rbp+20h] BYREF

  v8 = 0;
  v7 = 0;
  v4 = sub_140063C34(a1, a2, (unsigned int)&v8, (unsigned int)&v7, (__int64)&v6);
  if ( !v4 )
  {
    if ( !*(_QWORD *)a1 && !sub_1400080D4((__int64 *)a1, *(unsigned int *)(a1 + 16), 1) )
      sub_14004639C(-2147024882);
    v4 = sub_140063FBC(a1, a2, v8, v7);
  }
  return v4 + 8;
}
