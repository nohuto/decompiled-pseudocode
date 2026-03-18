/*
 * XREFs of WmipReleaseSmbiosLockShared @ 0x140A79F50
 * Callers:
 *     WmipReadSMBiosSysInfo @ 0x140640348 (WmipReadSMBiosSysInfo.c)
 *     PoBroadcastSystemState @ 0x140B54B5C (PoBroadcastSystemState.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 */

void WmipReleaseSmbiosLockShared()
{
  ExReleaseResourceLite(&WmipSMBiosLock);
  KeLeaveCriticalRegion();
}
