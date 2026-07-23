/*
 * XREFs of PopRundownPowerSettings @ 0x140AC30C0
 * Callers:
 *     PopDiagTraceControlCallback @ 0x140AC29B0 (PopDiagTraceControlCallback.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     PopDiagTracePowerSetting @ 0x140AC3140 (PopDiagTracePowerSetting.c)
 */

void PopRundownPowerSettings()
{
  __int64 v0; // rcx
  PVOID *v1; // rbx
  __int64 Next_high; // rdi
  unsigned int *v3; // r8

  ExAcquireFastMutex(&PopSettingLock);
  v1 = (PVOID *)PopPowerSettings;
  if ( PopPowerSettings != &PopPowerSettings )
  {
    Next_high = SHIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next);
    do
    {
      v3 = (unsigned int *)v1[Next_high + 8];
      if ( v3 )
      {
        LOBYTE(v0) = 1;
        PopDiagTracePowerSetting(v0, v1 + 4, v3[1], v3 + 3);
      }
      v1 = (PVOID *)*v1;
    }
    while ( v1 != &PopPowerSettings );
  }
  KeReleaseGuardedMutex(&PopSettingLock);
}
