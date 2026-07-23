/*
 * XREFs of PnpProcessRebalance @ 0x1405DFC7C
 * Callers:
 *     PnpDeviceActionWorker @ 0x14047C410 (PnpDeviceActionWorker.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     KeReleaseSemaphore @ 0x1403BBA30 (KeReleaseSemaphore.c)
 *     PiCollapseRebalanceRequests @ 0x1405DFA40 (PiCollapseRebalanceRequests.c)
 *     PnpRebalance @ 0x1407B6FF8 (PnpRebalance.c)
 *     PipProcessDevNodeTree @ 0x1409AE99C (PipProcessDevNodeTree.c)
 */

__int64 __fastcall PnpProcessRebalance(__int64 a1)
{
  _QWORD *v2; // rcx
  _DWORD *v3; // rdi
  int v4; // eax
  unsigned int v5; // ebx
  struct _KTHREAD *CurrentThread; // rax
  int v7; // ebx
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v9 = 0LL;
  v2 = *(_QWORD **)(a1 + 16);
  if ( v2 )
    v3 = *(_DWORD **)(v2[39] + 40LL);
  else
    v3 = IopRootDeviceNode;
  v4 = v3[75];
  v5 = *(_DWORD *)(a1 + 40);
  if ( v4 == 789 || v4 == 790 )
  {
    ObfDereferenceObjectWithTag(v2, 0x746C6644u);
    return 3221225558LL;
  }
  else
  {
    if ( !*(_BYTE *)(a1 + 28) && (v5 & 1) != 0 && PiCollapseRebalanceRequests(a1) )
      v3 = IopRootDeviceNode;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    KeWaitForSingleObject(&PpRegistrySemaphore, DelayExecution, 0, 0, 0LL);
    v7 = PnpRebalance(v3, 0LL, 0LL, v5);
    KeReleaseSemaphore(&PpRegistrySemaphore, 0, 1, 0);
    KeLeaveCriticalRegion();
    if ( v7 >= 0 )
    {
      LODWORD(v9) = 3;
      BYTE4(v9) = PnPBootDriversInitialized;
      ObfReferenceObjectWithTag(*((PVOID *)IopRootDeviceNode + 4), 0x746C6644u);
      return (unsigned int)PipProcessDevNodeTree((_DWORD)IopRootDeviceNode, a1, (unsigned int)&v9, 0, 0, 1, 0);
    }
    return (unsigned int)v7;
  }
}
