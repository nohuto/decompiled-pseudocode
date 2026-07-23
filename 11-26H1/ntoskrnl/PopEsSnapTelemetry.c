/*
 * XREFs of PopEsSnapTelemetry @ 0x140B5FF60
 * Callers:
 *     PopEsUpdateState @ 0x140517FA0 (PopEsUpdateState.c)
 *     PopEsEnterSleepShutdown @ 0x140B5FEF0 (PopEsEnterSleepShutdown.c)
 * Callees:
 *     PopTraceEsState @ 0x1404EB7BC (PopTraceEsState.c)
 *     Feature_SustainabilityFixes_FY26Q2__private_IsEnabledDeviceUsageNoInline @ 0x140610788 (Feature_SustainabilityFixes_FY26Q2__private_IsEnabledDeviceUsageNoInline.c)
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
    v4 = dword_140E67A2C;
    v5 = v3 - PopEsLastStateChangeTimeStamp;
    v6 = v1 - PopEsLastBatteryCharge;
    if ( (unsigned int)Feature_SustainabilityFixes_FY26Q2__private_IsEnabledDeviceUsageNoInline()
      && !HIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next) )
    {
      PopEsLastBatteryThreshold = (int)PpmIdlePolicyLock.GlobalForegroundListEntry.Flink;
    }
    v8 = (unsigned int)PopEsModeGp;
    if ( PopEsReason != 32 )
      v8 = (unsigned int)PopEsMode;
    PopTraceEsState(v8, v5, v6, v7, v8, v10, v11, v4);
  }
  PopEsAcOnline = *(_BYTE *)a1;
  PopEsLastBatteryThreshold = (int)PpmIdlePolicyLock.GlobalForegroundListEntry.Flink;
  result = BYTE5(PpmIdlePolicyLock.ForegroundDpcStackListEntry.Next);
  PopEsLastBatteryCharge = v1;
  PopEsLastUserAwaySetting = BYTE5(PpmIdlePolicyLock.ForegroundDpcStackListEntry.Next);
  PopEsLastStateChangeTimeStamp = v3;
  return result;
}
