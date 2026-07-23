/*
 * XREFs of PpmInfoReleaseLocks @ 0x140AD87EC
 * Callers:
 *     PpmSetProfilePolicySetting @ 0x1409FB634 (PpmSetProfilePolicySetting.c)
 *     PpmInfoApplySettingUpdate @ 0x140AD873C (PpmInfoApplySettingUpdate.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PpmReleaseLock @ 0x14037CD6C (PpmReleaseLock.c)
 */

LONG __fastcall PpmInfoReleaseLocks(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 37) & 1) != 0 )
    return PpmReleaseLock((__int64 *)&PpmIdlePolicyLock.ThreadLock);
  else
    return PopReleaseRwLock(&PpmIdlePolicyLock);
}
