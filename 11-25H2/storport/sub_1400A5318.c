/*
 * XREFs of sub_1400A5318 @ 0x1400A5318
 * Callers:
 *     DllInitialize @ 0x1400A3DE0 (DllInitialize.c)
 * Callees:
 *     sub_140068544 @ 0x140068544 (sub_140068544.c)
 *     sub_1400687C8 @ 0x1400687C8 (sub_1400687C8.c)
 */

__int64 sub_1400A5318()
{
  __int64 v1; // [rsp+30h] [rbp+8h]

  v1 = (unsigned int)dword_1401696E8;
  if ( (dword_1401696E8 & 0x10) == 0 )
  {
    LODWORD(v1) = dword_1401696E8 | 1;
    sub_140068544((__int64)&off_140167588, v1, 3LL);
    sub_1400687C8(v1, 3, (__int64)&off_140167588);
  }
  return 1LL;
}
