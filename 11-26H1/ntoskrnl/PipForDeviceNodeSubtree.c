/*
 * XREFs of PipForDeviceNodeSubtree @ 0x140AC8870
 * Callers:
 *     PpProcessClearProblem @ 0x1404EAC54 (PpProcessClearProblem.c)
 *     PpSystemHiveLimitCallback @ 0x1407A6E80 (PpSystemHiveLimitCallback.c)
 *     PpDevCfgProcessDevices @ 0x1407AFCB0 (PpDevCfgProcessDevices.c)
 *     PiProfileUpdateDeviceTreeWorker @ 0x1407B0090 (PiProfileUpdateDeviceTreeWorker.c)
 *     PnpGetSystemPdoList @ 0x140AC8550 (PnpGetSystemPdoList.c)
 *     PnpDiagRundownRegisterCallback @ 0x140AC85F0 (PnpDiagRundownRegisterCallback.c)
 *     PiMarkDeviceTreeForReenumeration @ 0x140AC8830 (PiMarkDeviceTreeForReenumeration.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     PipForAllDeviceNodesCallback @ 0x140AC8930 (PipForAllDeviceNodesCallback.c)
 */

__int64 __fastcall PipForDeviceNodeSubtree(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v5; // rbx
  int i; // edi
  _QWORD *v7; // rcx
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v9[0] = a2;
  v9[1] = a3;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
  v5 = *(_QWORD **)(a1 + 8);
  for ( i = 0; v5 && i >= 0; i = PipForAllDeviceNodesCallback(v7, v9) )
  {
    v7 = v5;
    v5 = (_QWORD *)*v5;
  }
  ExReleaseResourceLite(&IopDeviceTreeLock);
  KeLeaveCriticalRegion();
  return (unsigned int)i;
}
