/*
 * XREFs of PopGetSettingValue @ 0x1409F8A4C
 * Callers:
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     TtmiGetSessionId @ 0x1409F5FA8 (TtmiGetSessionId.c)
 *     PopMarshalSettingValues @ 0x1409F84C8 (PopMarshalSettingValues.c)
 *     PopFindPowerSettingConfiguration @ 0x1409FA3F0 (PopFindPowerSettingConfiguration.c)
 */

__int64 __fastcall PopGetSettingValue(__int64 a1, __int64 a2, int a3)
{
  unsigned int SessionId; // eax
  __int64 PowerSettingConfiguration; // rax
  unsigned int v9; // [rsp+20h] [rbp-18h]

  ExAcquireFastMutex(&PopSettingLock);
  SessionId = TtmiGetSessionId();
  PowerSettingConfiguration = PopFindPowerSettingConfiguration(a1, SessionId);
  if ( PowerSettingConfiguration )
  {
    v9 = PopMarshalSettingValues(
           PowerSettingConfiguration,
           (char *)(a2 + 4),
           (unsigned int)(a3 - 4),
           (unsigned int *)a2);
    KeReleaseGuardedMutex(&PopSettingLock);
    return v9;
  }
  else
  {
    KeReleaseGuardedMutex(&PopSettingLock);
    return 3221225485LL;
  }
}
