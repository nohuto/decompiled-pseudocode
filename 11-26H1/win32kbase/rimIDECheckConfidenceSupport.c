/*
 * XREFs of rimIDECheckConfidenceSupport @ 0x1402072BC
 * Callers:
 *     RIMIDECreatePointerDeviceInfo @ 0x140207AC4 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

NTSTATUS __fastcall rimIDECheckConfidenceSupport(__int64 a1, struct _HIDP_PREPARSED_DATA *a2)
{
  NTSTATUS result; // eax
  USHORT ButtonCapsLength[8]; // [rsp+40h] [rbp-78h] BYREF
  struct _HIDP_BUTTON_CAPS ButtonCaps; // [rsp+50h] [rbp-68h] BYREF

  memset(&ButtonCaps, 0, sizeof(ButtonCaps));
  ButtonCapsLength[0] = 1;
  result = HidP_GetSpecificButtonCaps(HidP_Input, 0xDu, 0, 0x47u, &ButtonCaps, ButtonCapsLength, a2);
  if ( (int)(result + 0x80000000) < 0 || result == -1072627705 )
    *(_DWORD *)(a1 + 368) |= 4u;
  else
    *(_DWORD *)(a1 + 368) &= ~4u;
  return result;
}
