/*
 * XREFs of PpmInfoReleaseLocks @ 0x140A9C9D4
 * Callers:
 *     PpmSetProfilePolicySetting @ 0x140A3FC14 (PpmSetProfilePolicySetting.c)
 *     PpmInfoApplySettingUpdate @ 0x140A9C928 (PpmInfoApplySettingUpdate.c)
 * Callees:
 *     PpmReleaseLock @ 0x14037AFBC (PpmReleaseLock.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 */

LONG __fastcall PpmInfoReleaseLocks(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 37) & 1) != 0 )
    return PpmReleaseLock(&stru_140F10070.SchedulerAssistLastYieldBoostTime);
  else
    return PopReleaseRwLock((struct _KTHREAD *)&stru_140F10070.1136);
}
