/*
 * XREFs of sub_140076334 @ 0x140076334
 * Callers:
 *     sub_14001B3C8 @ 0x14001B3C8 (sub_14001B3C8.c)
 * Callees:
 *     sub_1400454AC @ 0x1400454AC (sub_1400454AC.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_140077454 @ 0x140077454 (sub_140077454.c)
 */

__int64 *__fastcall sub_140076334(__int64 *a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 *result; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  v5 = sub_140049338(40LL, (__int64)&unk_1400C75FC);
  v7 = v5;
  if ( v5 )
  {
    v4 = sub_140077454(v5, a2);
    v7 = 0LL;
  }
  sub_1400454AC(&v7);
  result = a1;
  *a1 = v4;
  return result;
}
