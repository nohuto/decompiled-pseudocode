/*
 * XREFs of PiProfileUpdateDeviceTreeWorker @ 0x1407AD030
 * Callers:
 *     <none>
 * Callees:
 *     PpDevNodeLockTree @ 0x140A88424 (PpDevNodeLockTree.c)
 *     PpDevNodeUnlockTree @ 0x140A921A4 (PpDevNodeUnlockTree.c)
 *     PipForDeviceNodeSubtree @ 0x140AC6C80 (PipForDeviceNodeSubtree.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PiProfileUpdateDeviceTreeWorker(PVOID P)
{
  PpDevNodeLockTree(1LL);
  PipForDeviceNodeSubtree(IopRootDeviceNode, PiProfileUpdateDeviceTreeCallback, 0LL);
  PpDevNodeUnlockTree(1LL);
  ExFreePoolWithTag(P, 0);
}
