/*
 * XREFs of PnpGetDeviceInstanceRegistryValue @ 0x1407A37B0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     _CmOpenDeviceRegKey @ 0x140996B50 (_CmOpenDeviceRegKey.c)
 *     IopGetRegistryValue @ 0x140A121A8 (IopGetRegistryValue.c)
 */

__int64 __fastcall PnpGetDeviceInstanceRegistryValue(int a1, char a2)
{
  int v3; // eax
  int v4; // ebx
  struct _KTHREAD *CurrentThread; // rax
  int RegistryValue; // ebx
  HANDLE Handle[3]; // [rsp+40h] [rbp-18h] BYREF

  Handle[0] = 0LL;
  if ( (a2 & 1) != 0 )
  {
    v3 = 17;
  }
  else
  {
    if ( (a2 & 2) == 0 )
      return 3221225485LL;
    v3 = 18;
  }
  v4 = v3 | 0x200;
  if ( (a2 & 4) == 0 )
    v4 = v3;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  RegistryValue = CmOpenDeviceRegKey(PiPnpRtlCtx, a1, v4, 0, 131097, 0, (__int64)Handle, 0LL);
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  if ( RegistryValue >= 0 )
  {
    RegistryValue = IopGetRegistryValue(Handle[0]);
    ZwClose(Handle[0]);
  }
  return (unsigned int)RegistryValue;
}
