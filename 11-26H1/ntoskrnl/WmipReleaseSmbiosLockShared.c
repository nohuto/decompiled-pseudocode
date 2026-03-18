/*
 * XREFs of WmipReleaseSmbiosLockShared @ 0x140B20274
 * Callers:
 *     WmipReadSMBiosSysInfo @ 0x1406C34A8 (WmipReadSMBiosSysInfo.c)
 *     PoBroadcastSystemState @ 0x140C05D10 (PoBroadcastSystemState.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 */

void WmipReleaseSmbiosLockShared()
{
  ExReleaseResourceLite((PERESOURCE)&EtwpSecurityLock.WpsFeedback);
  KeLeaveCriticalRegion();
}
