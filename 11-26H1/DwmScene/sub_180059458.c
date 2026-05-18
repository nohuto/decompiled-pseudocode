/*
 * XREFs of sub_180059458 @ 0x180059458
 * Callers:
 *     sub_180057C70 @ 0x180057C70 (sub_180057C70.c)
 *     sub_18005AE7C @ 0x18005AE7C (sub_18005AE7C.c)
 * Callees:
 *     sub_18005AF08 @ 0x18005AF08 (sub_18005AF08.c)
 *     sub_18005B5C4 @ 0x18005B5C4 (sub_18005B5C4.c)
 */

__int64 __fastcall sub_180059458(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // xmm1_8

  if ( (unsigned __int8)sub_18005B5C4() )
    sub_18005AF08(a1);
  result = a2;
  v5 = *(_QWORD *)(a1 + 1588);
  *(_OWORD *)a2 = *(_OWORD *)(a1 + 1572);
  *(_QWORD *)(a2 + 16) = v5;
  return result;
}
