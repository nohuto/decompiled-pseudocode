/*
 * XREFs of sub_18008F33C @ 0x18008F33C
 * Callers:
 *     sub_18006B9D8 @ 0x18006B9D8 (sub_18006B9D8.c)
 *     sub_18006BC20 @ 0x18006BC20 (sub_18006BC20.c)
 *     sub_18008F440 @ 0x18008F440 (sub_18008F440.c)
 * Callees:
 *     sub_1800130CC @ 0x1800130CC (sub_1800130CC.c)
 *     sub_18003143C @ 0x18003143C (sub_18003143C.c)
 *     sub_180077E54 @ 0x180077E54 (sub_180077E54.c)
 *     sub_18008F2BC @ 0x18008F2BC (sub_18008F2BC.c)
 */

__int64 *__fastcall sub_18008F33C(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rbx
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]
  __int64 *v9; // [rsp+30h] [rbp-18h]
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  v10 = a3;
  v3 = 16LL;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  sub_180077E54(a1, 0x10uLL);
  v7 = *a1;
  v8 = v7;
  v9 = a1;
  do
  {
    sub_18008F2BC((__int64)&v7);
    --v3;
  }
  while ( v3 );
  v5 = v8;
  sub_1800130CC(v8, v8);
  a1[1] = v5;
  v10 = 0LL;
  sub_18003143C(&v10);
  return a1;
}
