/*
 * XREFs of sub_1400763A4 @ 0x1400763A4
 * Callers:
 *     sub_14001B584 @ 0x14001B584 (sub_14001B584.c)
 * Callees:
 *     sub_1400454AC @ 0x1400454AC (sub_1400454AC.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_1400774C8 @ 0x1400774C8 (sub_1400774C8.c)
 */

__int64 *__fastcall sub_1400763A4(__int64 *a1, __int64 a2)
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
    v4 = sub_1400774C8(v5, a2);
    v7 = 0LL;
  }
  sub_1400454AC(&v7);
  result = a1;
  *a1 = v4;
  return result;
}
