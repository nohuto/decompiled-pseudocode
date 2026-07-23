/*
 * XREFs of IopDoDeferredSetInterfaceState @ 0x140B0C470
 * Callers:
 *     IoReportDetectedDevice @ 0x1407A0B40 (IoReportDetectedDevice.c)
 *     PipProcessStartPhase2 @ 0x140B0C368 (PipProcessStartPhase2.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     PpMarkDeviceStackExtensionFlag @ 0x1404DCA0C (PpMarkDeviceStackExtensionFlag.c)
 *     IopProcessSetInterfaceState @ 0x1409A91A0 (IopProcessSetInterfaceState.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopDoDeferredSetInterfaceState(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  void **v3; // rdi
  void *v4; // rbx
  void **v5; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  PpMarkDeviceStackExtensionFlag(*(_QWORD *)(a1 + 32), 16, 0);
  v3 = (void **)(a1 + 608);
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == v3 )
      break;
    if ( *((void ***)v4 + 1) != v3 || (v5 = *(void ***)v4, *(void **)(*(_QWORD *)v4 + 8LL) != v4) )
      __fastfail(3u);
    *v3 = v5;
    v5[1] = v3;
    IopProcessSetInterfaceState((unsigned __int16 *)v4 + 8, 1u, 0);
    ExFreePoolWithTag(*((PVOID *)v4 + 3), 0);
    ExFreePoolWithTag(v4, 0);
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  return 0LL;
}
