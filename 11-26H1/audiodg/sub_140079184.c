/*
 * XREFs of sub_140079184 @ 0x140079184
 * Callers:
 *     sub_14007B400 @ 0x14007B400 (sub_14007B400.c)
 * Callees:
 *     sub_1400125D4 @ 0x1400125D4 (sub_1400125D4.c)
 */

__int64 __fastcall sub_140079184(unsigned int a1)
{
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  sub_1400125D4(&v3);
  if ( (int)RoGetMatchingRestrictedErrorInfo(a1, &v3) >= 0 )
    SetRestrictedErrorInfo(v3);
  return sub_1400125D4(&v3);
}
