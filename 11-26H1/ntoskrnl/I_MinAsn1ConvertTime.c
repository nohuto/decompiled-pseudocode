/*
 * XREFs of I_MinAsn1ConvertTime @ 0x1408AA30C
 * Callers:
 *     MinAsn1DecodeGeneralizedTime @ 0x1408AA6DC (MinAsn1DecodeGeneralizedTime.c)
 *     MinAsn1DecodeUtcTime @ 0x1408AA998 (MinAsn1DecodeUtcTime.c)
 * Callees:
 *     RtlTimeFieldsToTime @ 0x14044A410 (RtlTimeFieldsToTime.c)
 *     I_MinAsn1AdjustFileTime @ 0x1408AA124 (I_MinAsn1AdjustFileTime.c)
 */

bool __fastcall I_MinAsn1ConvertTime(__int16 *a1, __int16 a2, char a3, LARGE_INTEGER *a4)
{
  _TIME_FIELDS TimeFields; // [rsp+20h] [rbp-18h] BYREF

  TimeFields.Weekday = 0;
  TimeFields.Year = *a1;
  TimeFields.Month = a1[2];
  TimeFields.Day = a1[4];
  TimeFields.Hour = a1[6];
  TimeFields.Minute = a1[8];
  TimeFields.Second = a1[10];
  TimeFields.Milliseconds = a1[12];
  return RtlTimeFieldsToTime(&TimeFields, a4) && I_MinAsn1AdjustFileTime((__int64 *)a4, a2, a3) != 0;
}
