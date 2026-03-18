/*
 * XREFs of sub_1400237A8 @ 0x1400237A8
 * Callers:
 *     sub_1400238C8 @ 0x1400238C8 (sub_1400238C8.c)
 *     sub_140023A4C @ 0x140023A4C (sub_140023A4C.c)
 * Callees:
 *     sub_140006100 @ 0x140006100 (sub_140006100.c)
 *     sub_14000CF50 @ 0x14000CF50 (sub_14000CF50.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

__int64 __fastcall sub_1400237A8(__int64 a1)
{
  __int64 v3; // [rsp+50h] [rbp+20h] BYREF
  __int64 v4; // [rsp+58h] [rbp+28h]

  v3 = 0LL;
  v4 = 0LL;
  StorPortExtendedFunction(0LL, a1, 128LL, 1701672526LL);
  if ( v3 )
    sub_14000CF50(a1, 4232LL, &v3, v4);
  return 0LL;
}
