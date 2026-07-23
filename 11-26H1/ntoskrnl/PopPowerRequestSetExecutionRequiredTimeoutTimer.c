/*
 * XREFs of PopPowerRequestSetExecutionRequiredTimeoutTimer @ 0x1409F69C0
 * Callers:
 *     PopPowerRequestExecutionRequiredSettingCallback @ 0x1409C1C20 (PopPowerRequestExecutionRequiredSettingCallback.c)
 *     PopPowerRequestNotifySystemIdleStateChanged @ 0x1409F7C58 (PopPowerRequestNotifySystemIdleStateChanged.c)
 * Callees:
 *     KeSetTimer2 @ 0x14037C2B0 (KeSetTimer2.c)
 */

__int64 PopPowerRequestSetExecutionRequiredTimeoutTimer()
{
  unsigned __int64 v0; // rdx
  __int64 v1; // rdx
  __int64 result; // rax
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( BYTE3(stru_140F12EA0.Spare35[1]) && PopExecutionRequiredTimeout )
  {
    v0 = 10000000LL * (unsigned int)PopExecutionRequiredTimeout;
    if ( MEMORY[0xFFFFF78000000008] - *(_QWORD *)&stru_140F12EA0.Spare36 < v0 )
      v1 = v0 - (MEMORY[0xFFFFF78000000008] - *(_QWORD *)&stru_140F12EA0.Spare36);
    else
      v1 = 10000000LL;
    v3[0] = 0LL;
    v3[1] = -1LL;
    return KeSetTimer2((__int64)&stru_140F12EA0.WaitBlock[2].Object, -v1, 0LL, (__int64)v3);
  }
  return result;
}
