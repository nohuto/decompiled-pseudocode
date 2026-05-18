/*
 * XREFs of sub_18000F2CC @ 0x18000F2CC
 * Callers:
 *     sub_18000E8A4 @ 0x18000E8A4 (sub_18000E8A4.c)
 *     sub_180011004 @ 0x180011004 (sub_180011004.c)
 * Callees:
 *     sub_18000F25C @ 0x18000F25C (sub_18000F25C.c)
 */

signed int __fastcall sub_18000F2CC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed int result; // eax
  __int64 v5; // [rsp+20h] [rbp-18h]
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  result = sub_18000F25C(0LL, 0, 0LL, a4, v5, retaddr);
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
