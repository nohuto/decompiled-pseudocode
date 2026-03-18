/*
 * XREFs of PopClearSystemSleepCheckpoint @ 0x140B3F7C0
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x140C04AB0 (PopUnlockAfterSleepWorker.c)
 *     PopCheckShutdownMarker @ 0x140CD0064 (PopCheckShutdownMarker.c)
 * Callees:
 *     ExSetFirmwareEnvironmentVariable @ 0x14083AE70 (ExSetFirmwareEnvironmentVariable.c)
 */

__int64 __fastcall PopClearSystemSleepCheckpoint(char a1)
{
  unsigned int v1; // edx
  __int64 result; // rax

  v1 = 0;
  if ( (unk_140F10F18 || a1) && (unk_140F10F14 & 2) == 0 )
  {
    v1 = ExSetFirmwareEnvironmentVariable((__int64)L"*,", (int)SYSTEM_SLEEP_ETW_CHECKPOINT_GUID, 0LL, 0, 1);
    if ( v1 == -1073741568 )
      v1 = 0;
  }
  unk_140F10F18 = 0;
  result = v1;
  unk_140F10F1C = 0;
  _InterlockedExchange((volatile __int32 *)stru_140F10070.Spare35, 0);
  return result;
}
