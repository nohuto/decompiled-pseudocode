/*
 * XREFs of ?GetHapticsChannel@PenHapticInterface@@AEAA_NW4_HIDP_REPORT_TYPE@@GPEAU_HIDP_VALUE_CAPS@@@Z @ 0x180192BC8
 * Callers:
 *     ?SendHapticFeedbackInternal@PenHapticInterface@@AEAAJGMIII@Z @ 0x180193308 (-SendHapticFeedbackInternal@PenHapticInterface@@AEAAJGMIII@Z.c)
 * Callees:
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 */

char __fastcall PenHapticInterface::GetHapticsChannel(
        PenHapticInterface *this,
        enum _HIDP_REPORT_TYPE a2,
        USAGE a3,
        struct _HIDP_VALUE_CAPS *a4)
{
  USHORT v7; // r8
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  struct _HIDP_PREPARSED_DATA *PreparsedData; // [rsp+30h] [rbp-98h]
  USHORT ValueCapsLength[8]; // [rsp+40h] [rbp-88h] BYREF
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+50h] [rbp-78h] BYREF

  memset_0(&ValueCaps, 0, sizeof(ValueCaps));
  v7 = *((_WORD *)this + 8);
  PreparsedData = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 19);
  ValueCapsLength[0] = 1;
  if ( HidP_GetSpecificValueCaps(HidP_Output, 0xEu, v7, a3, &ValueCaps, ValueCapsLength, PreparsedData) < 0 )
    return 0;
  if ( a4 )
  {
    v8 = *(_OWORD *)&ValueCaps.HasNull;
    *(_OWORD *)&a4->UsagePage = *(_OWORD *)&ValueCaps.UsagePage;
    v9 = *(_OWORD *)&ValueCaps.UnitsExp;
    *(_OWORD *)&a4->HasNull = v8;
    v10 = *(_OWORD *)&ValueCaps.PhysicalMin;
    *(_OWORD *)&a4->UnitsExp = v9;
    *(_QWORD *)&v9 = *(_QWORD *)&ValueCaps.NotRange.DesignatorIndex;
    *(_OWORD *)&a4->PhysicalMin = v10;
    *(_QWORD *)&a4->NotRange.DesignatorIndex = v9;
  }
  return 1;
}
