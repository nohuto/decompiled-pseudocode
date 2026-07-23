/*
 * XREFs of PnpDiagRundownRegisterCallback @ 0x140AC85F0
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     PpDevNodeLockTree @ 0x140A8F554 (PpDevNodeLockTree.c)
 *     PpDevNodeUnlockTree @ 0x140A96CF4 (PpDevNodeUnlockTree.c)
 *     PipForDeviceNodeSubtree @ 0x140AC8870 (PipForDeviceNodeSubtree.c)
 */

void __fastcall PnpDiagRundownRegisterCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  struct _KTHREAD *v4; // rax
  struct _KTHREAD *v5; // rax
  struct _KTHREAD *CurrentThread; // rax

  if ( ControlCode == 2 )
  {
    if ( EtwEventEnabled(PnpRundownEtwHandle, &KMPnPRundownEvt_SleepStudy_ConnectionResource) )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
      PipForDeviceNodeSubtree(IopRootDeviceNode, PnpDiagRundownConnectionResourceForEachDevice, 0LL);
      ExReleaseResourceLite(&IopDeviceTreeLock);
      KeLeaveCriticalRegion();
    }
    if ( EtwEventEnabled(PnpRundownEtwHandle, &KMPnPRundownEvt_SleepStudy_ParentPdo) )
    {
      v5 = KeGetCurrentThread();
      --v5->KernelApcDisable;
      ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
      PipForDeviceNodeSubtree(IopRootDeviceNode, PnpDiagRundownParentPdoForEachDevice, 0LL);
      ExReleaseResourceLite(&IopDeviceTreeLock);
      KeLeaveCriticalRegion();
    }
    if ( EtwEventEnabled(PnpRundownEtwHandle, &KMPnPRundownEvt_SleepStudy_ParentDevNode) )
    {
      v4 = KeGetCurrentThread();
      --v4->KernelApcDisable;
      ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
      PipForDeviceNodeSubtree(IopRootDeviceNode, PnpDiagRundownParentDevNodeForEachDevice, 0LL);
      ExReleaseResourceLite(&IopDeviceTreeLock);
      KeLeaveCriticalRegion();
    }
    if ( EtwEventEnabled(PnpRundownEtwHandle, &KMPnPRundownEvt_SleepStudy_InterruptResource) )
    {
      PpDevNodeLockTree(0);
      PipForDeviceNodeSubtree(IopRootDeviceNode, PnpDiagRundownInterruptResourceForEachDevice, 0LL);
      PpDevNodeUnlockTree(0);
    }
  }
}
