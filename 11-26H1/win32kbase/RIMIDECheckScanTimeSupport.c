/*
 * XREFs of RIMIDECheckScanTimeSupport @ 0x1402073D8
 * Callers:
 *     RIMIDECreatePointerDeviceInfo @ 0x140207AC4 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

NTSTATUS __fastcall RIMIDECheckScanTimeSupport(__int64 a1, struct _HIDP_PREPARSED_DATA *a2)
{
  NTSTATUS result; // eax
  USHORT ValueCapsLength[8]; // [rsp+40h] [rbp-78h] BYREF
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+50h] [rbp-68h] BYREF

  ValueCapsLength[0] = 1;
  memset(&ValueCaps, 0, sizeof(ValueCaps));
  result = HidP_GetSpecificValueCaps(HidP_Input, 0xDu, 0, 0x56u, &ValueCaps, ValueCapsLength, a2);
  if ( result >= 0 )
  {
    result = ValueCaps.LogicalMax;
    if ( ValueCaps.LogicalMin < ValueCaps.LogicalMax && ValueCaps.LogicalMin >= 0 && ValueCaps.LogicalMax >= 0xFFFF )
    {
      *(_DWORD *)(a1 + 368) |= 0x80u;
      *(_DWORD *)(a1 + 896) = result;
    }
  }
  return result;
}
