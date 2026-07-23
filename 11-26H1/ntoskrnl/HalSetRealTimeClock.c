/*
 * XREFs of HalSetRealTimeClock @ 0x14057A830
 * Callers:
 *     ExpRefreshSystemTime @ 0x14083C564 (ExpRefreshSystemTime.c)
 *     NtSetSystemTime @ 0x14083C8F0 (NtSetSystemTime.c)
 *     ExpSetSystemTime @ 0x140C0F524 (ExpSetSystemTime.c)
 *     GetBootSystemTime @ 0x140CB05C4 (GetBootSystemTime.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     HalpWriteCmosTime @ 0x14044943C (HalpWriteCmosTime.c)
 *     HalpSetVirtualRtc @ 0x140449C88 (HalpSetVirtualRtc.c)
 *     RtlpTimeFieldsToTime @ 0x14044A428 (RtlpTimeFieldsToTime.c)
 *     HalEfiSetTime @ 0x1405890C8 (HalEfiSetTime.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     HalpSetAcpiRealTimeClock @ 0x140782DAC (HalpSetAcpiRealTimeClock.c)
 *     HalpUtcTimeToAcpiRealTime @ 0x140B28B24 (HalpUtcTimeToAcpiRealTime.c)
 */

char __fastcall HalSetRealTimeClock(unsigned __int8 *a1)
{
  char result; // al
  char v3; // bl
  int LastXStateSaveDebugInfo; // edi
  int v5; // ecx
  char v6; // al
  char v7; // cl
  LARGE_INTEGER SystemTime; // [rsp+20h] [rbp-28h] BYREF
  __int128 InputBuffer; // [rsp+28h] [rbp-20h] BYREF

  SystemTime.QuadPart = 0LL;
  InputBuffer = 0LL;
  result = RtlpTimeFieldsToTime((__int64)a1, (__int64 *)&SystemTime);
  if ( result )
  {
    if ( !ExpRealTimeIsUniversal )
      SystemTime.QuadPart += (LONGLONG)PsGetCurrentServerSiloGlobals()[76].Blink[27].Blink;
    if ( (HalpPlatformFlags & 4) != 0 )
    {
      HalpWriteCmosTime(a1);
      v3 = 1;
    }
    else
    {
      v3 = 0;
    }
    LastXStateSaveDebugInfo = HalpDeviceBlockUnblockPushLock.LastXStateSaveDebugInfo;
    v5 = -1073741823;
    if ( KeGetCurrentIrql() >= 2u
      || LODWORD(HalpDeviceBlockUnblockPushLock.LastXStateSaveDebugInfo)
      || (v5 = HalpUtcTimeToAcpiRealTime(&SystemTime, &InputBuffer), v5 < 0)
      || (v5 = HalpSetAcpiRealTimeClock(&InputBuffer), v5 < 0) )
    {
      if ( v3 != 1
        && HalpDeviceBlockUnblockPushLock.WaitBlockFill6[72]
        && LastXStateSaveDebugInfo
        && (HalpPlatformFlags & 8) == 0 )
      {
        v5 = HalEfiSetTime(&SystemTime);
      }
    }
    if ( v5 >= 0 )
      v3 = 1;
    v6 = HalpSetVirtualRtc(&SystemTime);
    v7 = v3;
    if ( v6 )
      return 1;
    return v7;
  }
  return result;
}
