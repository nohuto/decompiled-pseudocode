/*
 * XREFs of PopPowerRequestSetExecutionRequiredTimeoutTimer @ 0x140A3ADC0
 * Callers:
 *     PopPowerRequestExecutionRequiredSettingCallback @ 0x1409462B0 (PopPowerRequestExecutionRequiredSettingCallback.c)
 *     PopPowerRequestNotifySystemIdleStateChanged @ 0x140A3C238 (PopPowerRequestNotifySystemIdleStateChanged.c)
 * Callees:
 *     KeSetTimer2 @ 0x14037A500 (KeSetTimer2.c)
 */

__int64 PopPowerRequestSetExecutionRequiredTimeoutTimer()
{
  unsigned __int64 v0; // rdx
  __int64 v1; // rdx
  __int64 result; // rax
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( BYTE3(stru_140F12D20.StateSaveArea) && PopExecutionRequiredTimeout )
  {
    v0 = 10000000LL * (unsigned int)PopExecutionRequiredTimeout;
    if ( MEMORY[0xFFFFF78000000008] - (unsigned __int64)stru_140F12D20.SchedulingGroup < v0 )
      v1 = v0 - (MEMORY[0xFFFFF78000000008] - (unsigned __int64)stru_140F12D20.SchedulingGroup);
    else
      v1 = 10000000LL;
    v3[0] = 0LL;
    v3[1] = -1LL;
    return KeSetTimer2((__int64)&stru_140F12D20.512, -v1, 0LL, (__int64)v3);
  }
  return result;
}
