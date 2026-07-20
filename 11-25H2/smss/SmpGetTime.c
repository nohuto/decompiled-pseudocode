/*
 * XREFs of SmpGetTime @ 0x14000ECB8
 * Callers:
 *     SmpFinishPFROLogging @ 0x140014ADC (SmpFinishPFROLogging.c)
 *     SmpLogPFROError @ 0x140016F38 (SmpLogPFROError.c)
 * Callees:
 *     <none>
 */

void __fastcall SmpGetTime(PTIME_FIELDS TimeFields)
{
  __int64 SystemTimeAndBias; // rax
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF
  union _LARGE_INTEGER Time; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  SystemTimeAndBias = RtlGetSystemTimeAndBias(&v3, 0LL, 0LL);
  Time.QuadPart = SystemTimeAndBias - v3;
  RtlTimeToTimeFields(&Time, TimeFields);
}
