/*
 * XREFs of sub_18005D420 @ 0x18005D420
 * Callers:
 *     sub_18007A030 @ 0x18007A030 (sub_18007A030.c)
 * Callees:
 *     sub_18005D458 @ 0x18005D458 (sub_18005D458.c)
 */

__int64 __fastcall sub_18005D420(int a1, __int64 a2, char a3)
{
  sub_18005D458(a1, a2, 1LL << a3, 0, 1);
  return a2;
}
