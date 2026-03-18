/*
 * XREFs of _IsValidParallelButton @ 0x140052CB4
 * Callers:
 *     RIMGetPointerDeviceProperties @ 0x140052230 (RIMGetPointerDeviceProperties.c)
 *     RIMGetDeviceButtons @ 0x140204BF4 (RIMGetDeviceButtons.c)
 * Callees:
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall IsValidParallelButton(__int64 a1, USAGE *a2, struct _HIDP_PREPARSED_DATA *a3)
{
  __int64 v3; // rsi
  unsigned int v6; // ebx
  USHORT v7; // di
  USAGE v8; // r9
  USAGE v9; // dx
  USHORT ValueCapsLength[2]; // [rsp+40h] [rbp-E8h] BYREF
  USHORT ButtonCapsLength[6]; // [rsp+44h] [rbp-E4h] BYREF
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+50h] [rbp-D8h] BYREF
  _HIDP_BUTTON_CAPS ButtonCaps; // [rsp+A0h] [rbp-88h] BYREF

  v3 = *(_QWORD *)(a1 + 768);
  v6 = 1;
  v7 = *(_WORD *)(v3 + 4);
  while ( 1 )
  {
    memset(&ValueCaps, 0, sizeof(ValueCaps));
    ValueCapsLength[0] = 1;
    if ( HidP_GetSpecificValueCaps(HidP_Input, 0xDu, v7, 0x51u, &ValueCaps, ValueCapsLength, a3) == 1114112 )
    {
      memset(&ButtonCaps, 0, sizeof(ButtonCaps));
      v8 = a2[28];
      v9 = *a2;
      ButtonCapsLength[0] = 1;
      if ( HidP_GetSpecificButtonCaps(HidP_Input, v9, v7, v8, &ButtonCaps, ButtonCapsLength, a3) != 1114112 )
        break;
    }
    v7 = *(_WORD *)(*(_QWORD *)(v3 + 16) + 24LL * v7 + 8);
    if ( !v7 )
      return v6;
  }
  return 0;
}
