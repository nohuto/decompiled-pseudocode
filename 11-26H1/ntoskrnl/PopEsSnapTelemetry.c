/*
 * XREFs of PopEsSnapTelemetry @ 0x140B5CDE0
 * Callers:
 *     PopEsUpdateState @ 0x14051C1C0 (PopEsUpdateState.c)
 *     PopEsEnterSleepShutdown @ 0x140B5CD70 (PopEsEnterSleepShutdown.c)
 * Callees:
 *     PopTraceEsState @ 0x1404F21DC (PopTraceEsState.c)
 *     Feature_SustainabilityFixes_FY26Q2__private_IsEnabledDeviceUsageNoInline @ 0x14060D680 (Feature_SustainabilityFixes_FY26Q2__private_IsEnabledDeviceUsageNoInline.c)
 */

char __fastcall PopEsSnapTelemetry(__int64 a1)
{
  int v1; // ebx
  __int64 v3; // r14
  int v4; // r15d
  __int64 v5; // rsi
  int v6; // ebp
  __int64 v7; // r9
  __int64 v8; // rcx
  char result; // al
  int v10; // [rsp+28h] [rbp-30h]
  int v11; // [rsp+30h] [rbp-28h]

  v1 = 0;
  v3 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  if ( *(_BYTE *)(a1 + 1) )
    v1 = *(_DWORD *)(a1 + 12);
  if ( PopEsLastStateChangeTimeStamp )
  {
    v4 = dword_140E677C4;
    v5 = v3 - PopEsLastStateChangeTimeStamp;
    v6 = v1 - PopEsLastBatteryCharge;
    if ( (unsigned int)Feature_SustainabilityFixes_FY26Q2__private_IsEnabledDeviceUsageNoInline() && !dword_140F106CC )
      PopEsLastBatteryThreshold = dword_140F10710;
    v8 = (unsigned int)PopEsModeGp;
    if ( PopEsReason != 32 )
      v8 = (unsigned int)PopEsMode;
    PopTraceEsState(v8, v5, v6, v7, v8, v10, v11, v4);
  }
  PopEsAcOnline = *(_BYTE *)a1;
  PopEsLastBatteryThreshold = dword_140F10710;
  result = byte_140F10715;
  PopEsLastBatteryCharge = v1;
  PopEsLastUserAwaySetting = byte_140F10715;
  PopEsLastStateChangeTimeStamp = v3;
  return result;
}
