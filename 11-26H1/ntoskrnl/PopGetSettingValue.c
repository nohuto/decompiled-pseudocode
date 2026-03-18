/*
 * XREFs of PopGetSettingValue @ 0x140A3D02C
 * Callers:
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     TtmiGetSessionId @ 0x140A3A3A8 (TtmiGetSessionId.c)
 *     PopMarshalSettingValues @ 0x140A3CAA8 (PopMarshalSettingValues.c)
 *     PopFindPowerSettingConfiguration @ 0x140A3E9D0 (PopFindPowerSettingConfiguration.c)
 */

__int64 __fastcall PopGetSettingValue(__int64 a1, __int64 a2, int a3)
{
  unsigned int SessionId; // eax
  __int64 PowerSettingConfiguration; // rax
  unsigned int v9; // [rsp+20h] [rbp-18h]

  ExAcquireFastMutex((PKGUARDED_MUTEX)&stru_140F11D08.LastXStateSaveDebugInfo);
  SessionId = TtmiGetSessionId();
  PowerSettingConfiguration = PopFindPowerSettingConfiguration(a1, SessionId);
  if ( PowerSettingConfiguration )
  {
    v9 = PopMarshalSettingValues(
           PowerSettingConfiguration,
           (char *)(a2 + 4),
           (unsigned int)(a3 - 4),
           (unsigned int *)a2);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)&stru_140F11D08.LastXStateSaveDebugInfo);
    return v9;
  }
  else
  {
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)&stru_140F11D08.LastXStateSaveDebugInfo);
    return 3221225485LL;
  }
}
