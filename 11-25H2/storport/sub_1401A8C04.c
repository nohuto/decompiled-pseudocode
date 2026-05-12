/*
 * XREFs of sub_1401A8C04 @ 0x1401A8C04
 * Callers:
 *     sub_1401AE6B8 @ 0x1401AE6B8 (sub_1401AE6B8.c)
 * Callees:
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     sub_1401A9018 @ 0x1401A9018 (sub_1401A9018.c)
 *     sub_1401A90C4 @ 0x1401A90C4 (sub_1401A90C4.c)
 *     sub_1401A9174 @ 0x1401A9174 (sub_1401A9174.c)
 *     sub_1401A922C @ 0x1401A922C (sub_1401A922C.c)
 *     sub_1401A92E4 @ 0x1401A92E4 (sub_1401A92E4.c)
 */

__int64 __fastcall sub_1401A8C04(HANDLE KeyHandle)
{
  _BYTE KeyValueInformation[512]; // [rsp+20h] [rbp-218h] BYREF

  sub_1401A9018(KeyHandle, KeyValueInformation);
  sub_1401A90C4(KeyHandle, KeyValueInformation);
  sub_1401A9174(KeyHandle, KeyValueInformation);
  sub_1401A922C(KeyHandle, KeyValueInformation);
  return sub_1401A92E4(KeyHandle, KeyValueInformation);
}
