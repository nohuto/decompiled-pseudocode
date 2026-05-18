/*
 * XREFs of sub_180038A14 @ 0x180038A14
 * Callers:
 *     sub_180038BB0 @ 0x180038BB0 (sub_180038BB0.c)
 *     sub_180081EFC @ 0x180081EFC (sub_180081EFC.c)
 *     sub_180082258 @ 0x180082258 (sub_180082258.c)
 *     sub_1800826C4 @ 0x1800826C4 (sub_1800826C4.c)
 *     sub_180082A80 @ 0x180082A80 (sub_180082A80.c)
 *     sub_180089CE8 @ 0x180089CE8 (sub_180089CE8.c)
 * Callees:
 *     sub_180038ACC @ 0x180038ACC (sub_180038ACC.c)
 */

__int64 *__fastcall sub_180038A14(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // rdx

  v2 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v2;
  if ( v4 )
    sub_180038ACC();
  return a1;
}
