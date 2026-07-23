/*
 * XREFs of HaliSetWakeAlarm @ 0x140C108F0
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     HalQueryRealTimeClock @ 0x1404495B0 (HalQueryRealTimeClock.c)
 *     HalpSetWakeAlarm @ 0x140449728 (HalpSetWakeAlarm.c)
 *     RtlTimeToTimeFields @ 0x140449E50 (RtlTimeToTimeFields.c)
 *     RtlTimeFieldsToTime @ 0x14044A410 (RtlTimeFieldsToTime.c)
 *     HalpArmAcpiWakeAlarm @ 0x140B28A68 (HalpArmAcpiWakeAlarm.c)
 *     HalpAdjustWakeSecondsDue @ 0x140BEF12C (HalpAdjustWakeSecondsDue.c)
 */

__int64 __fastcall HaliSetWakeAlarm(unsigned __int64 a1)
{
  unsigned int v1; // edi
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // r9
  unsigned int v4; // eax
  __int64 v5; // rbx
  __int64 v6; // rcx
  _TIME_FIELDS TimeFields; // [rsp+30h] [rbp-18h] BYREF
  LARGE_INTEGER Time; // [rsp+60h] [rbp+18h] BYREF

  HalpWakeupState = 1;
  Time.QuadPart = 0LL;
  TimeFields = 0LL;
  v1 = HalpAdjustWakeSecondsDue(a1, MEMORY[0xFFFFF78000000008]);
  v4 = HalpAdjustWakeSecondsDue(v3, v2);
  v5 = v4;
  DbgPrintEx(0x65u, 3u, "HAL: Wake in %lu seconds on AC and in %lu seconds on DC\n", v1, v4);
  if ( (int)HalpArmAcpiWakeAlarm(v1) < 0 )
  {
    if ( (HalpPlatformFlags & 4) == 0 )
      return 3221225473LL;
    if ( v1 < (unsigned int)v5 )
      v5 = v1;
    if ( v5 != 0xFFFFFFFFLL )
    {
      if ( HalQueryRealTimeClock((__int64)&TimeFields) )
      {
        RtlTimeFieldsToTime(&TimeFields, &Time);
        Time.QuadPart += 10000000 * v5;
        RtlTimeToTimeFields(&Time, &TimeFields);
        HIBYTE(HalpWakeupState) = 1;
        xmmword_140F88202 = (__int128)TimeFields;
        return HalpSetWakeAlarm(v6, (unsigned __int8 *)&TimeFields);
      }
      return 3221225473LL;
    }
  }
  return 0LL;
}
