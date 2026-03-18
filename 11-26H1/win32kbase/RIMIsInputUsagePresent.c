/*
 * XREFs of RIMIsInputUsagePresent @ 0x1401A5CA8
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x14012EC08 (RIMCreatePointerDeviceInfo.c)
 *     RIMPopulatePointerDevice @ 0x14016A024 (RIMPopulatePointerDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

_BOOL8 __fastcall RIMIsInputUsagePresent(PHIDP_PREPARSED_DATA PreparsedData, __int64 a2, USAGE a3)
{
  USHORT ValueCapsLength[8]; // [rsp+40h] [rbp-78h] BYREF
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+50h] [rbp-68h] BYREF

  ValueCapsLength[0] = 1;
  memset(&ValueCaps, 0, sizeof(ValueCaps));
  return HidP_GetSpecificValueCaps(HidP_Input, 0xDu, 0, a3, &ValueCaps, ValueCapsLength, PreparsedData) >= 0;
}
