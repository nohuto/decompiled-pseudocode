/*
 * XREFs of I_MinAsn1AdjustFileTime @ 0x1408AA124
 * Callers:
 *     I_MinAsn1ConvertTime @ 0x1408AA30C (I_MinAsn1ConvertTime.c)
 * Callees:
 *     RtlTimeFieldsToTime @ 0x14044A410 (RtlTimeFieldsToTime.c)
 */

BOOLEAN __fastcall I_MinAsn1AdjustFileTime(__int64 *a1, __int16 a2, char a3)
{
  int v5; // ecx
  BOOLEAN result; // al
  __int64 v7; // rcx
  LONGLONG v8; // rcx
  _TIME_FIELDS TimeFields; // [rsp+20h] [rbp-10h] BYREF
  LARGE_INTEGER Time; // [rsp+58h] [rbp+28h] BYREF

  Time.QuadPart = 0LL;
  if ( a3 || !a2 )
    return 1;
  v5 = -a2;
  if ( a2 > 0 )
    LOWORD(v5) = a2;
  TimeFields.Weekday = 0;
  *(_DWORD *)&TimeFields.Year = 67137;
  TimeFields.Day = 1;
  *(_QWORD *)&TimeFields.Hour = (unsigned __int16)((__int16)v5 / 60);
  TimeFields.Minute = (__int16)v5 % 60;
  if ( (__int16)v5 / 60 >= 24 )
  {
    TimeFields.Hour = (__int16)v5 / 60 % 24;
    TimeFields.Day = (__int16)v5 / 60 / 24 + 1;
  }
  result = RtlTimeFieldsToTime(&TimeFields, &Time);
  if ( result )
  {
    v7 = *a1;
    if ( a2 >= 0 )
      v8 = v7 - Time.QuadPart;
    else
      v8 = Time.QuadPart + v7;
    *a1 = v8;
  }
  return result;
}
