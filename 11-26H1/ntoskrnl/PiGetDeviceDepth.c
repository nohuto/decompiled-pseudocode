/*
 * XREFs of PiGetDeviceDepth @ 0x140AD6F94
 * Callers:
 *     PiCMGetDeviceDepth @ 0x140AD6DD0 (PiCMGetDeviceDepth.c)
 *     PiControlGetDeviceDepth @ 0x140AD6EF0 (PiControlGetDeviceDepth.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140999B20 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 */

__int64 __fastcall PiGetDeviceDepth(__int64 a1, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // edi
  _QWORD *v6; // rax
  void *v7; // rcx
  __int64 v8; // rax

  *a2 = 0;
  CurrentThread = KeGetCurrentThread();
  v5 = -1073741810;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
  v6 = PnpDeviceObjectFromDeviceInstanceWithTag(a1, 0x43706E50u);
  v7 = v6;
  if ( v6 )
  {
    v8 = *(_QWORD *)(v6[39] + 40LL);
    if ( v8 )
    {
      v5 = 0;
      *a2 = *(_DWORD *)(v8 + 152);
    }
    ObfDereferenceObjectWithTag(v7, 0x43706E50u);
  }
  ExReleaseResourceLite(&IopDeviceTreeLock);
  KeLeaveCriticalRegion();
  return v5;
}
