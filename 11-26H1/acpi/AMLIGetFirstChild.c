/*
 * XREFs of AMLIGetFirstChild @ 0x14003DC0C
 * Callers:
 *     ACPIBuildMissingChildren @ 0x14001CAE4 (ACPIBuildMissingChildren.c)
 *     ACPIGpeBuildEventMasks @ 0x14003D890 (ACPIGpeBuildEventMasks.c)
 *     EnableDisableCMOSRegions @ 0x14003DA1C (EnableDisableCMOSRegions.c)
 *     EnableDisableIPMIRegions @ 0x1400B18A0 (EnableDisableIPMIRegions.c)
 *     EnableDisableRegions @ 0x1400C82A0 (EnableDisableRegions.c)
 * Callees:
 *     AMLIGetFirstChildNoLock @ 0x14003DC58 (AMLIGetFirstChildNoLock.c)
 */

__int64 __fastcall AMLIGetFirstChild(__int64 a1)
{
  __int64 v2; // rdx
  __int64 ChildNoLock; // rbx
  KIRQL v4; // dl

  LOBYTE(v2) = ExAcquireSpinLockShared(&ACPINamespaceLock);
  ChildNoLock = AMLIGetFirstChildNoLock(a1, v2);
  ExReleaseSpinLockShared(&ACPINamespaceLock, v4);
  return ChildNoLock;
}
