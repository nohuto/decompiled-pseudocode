/*
 * XREFs of PiProfileUpdateDeviceTreeWorker @ 0x1407B0090
 * Callers:
 *     <none>
 * Callees:
 *     PpDevNodeLockTree @ 0x140A8F554 (PpDevNodeLockTree.c)
 *     PpDevNodeUnlockTree @ 0x140A96CF4 (PpDevNodeUnlockTree.c)
 *     PipForDeviceNodeSubtree @ 0x140AC8870 (PipForDeviceNodeSubtree.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PiProfileUpdateDeviceTreeWorker(PVOID P)
{
  PpDevNodeLockTree(1LL);
  PipForDeviceNodeSubtree(IopRootDeviceNode, PiProfileUpdateDeviceTreeCallback, 0LL);
  PpDevNodeUnlockTree(1LL);
  ExFreePoolWithTag(P, 0);
}
