/*
 * XREFs of sub_1400BC2F8 @ 0x1400BC2F8
 * Callers:
 *     sub_140178FA0 @ 0x140178FA0 (sub_140178FA0.c)
 *     sub_14018D660 @ 0x14018D660 (sub_14018D660.c)
 * Callees:
 *     <none>
 */

__int64 sub_1400BC2F8()
{
  __int64 result; // rax
  int v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 1;
  EmClientQueryRuleState(&unk_14014EF60, &v1);
  result = (unsigned __int8)byte_140168D80;
  if ( v1 == 2 )
    return 1LL;
  return result;
}
