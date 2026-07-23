/*
 * XREFs of WmipReleaseSmbiosLockShared @ 0x140B22694
 * Callers:
 *     WmipReadSMBiosSysInfo @ 0x1406C7088 (WmipReadSMBiosSysInfo.c)
 *     PoBroadcastSystemState @ 0x140C0BF20 (PoBroadcastSystemState.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 */

void WmipReleaseSmbiosLockShared()
{
  ExReleaseResourceLite(&WmipSMBiosLock);
  KeLeaveCriticalRegion();
}
