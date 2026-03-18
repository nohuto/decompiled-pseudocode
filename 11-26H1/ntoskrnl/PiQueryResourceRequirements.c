/*
 * XREFs of PiQueryResourceRequirements @ 0x140910EEC
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140AA5E3C (PiProcessNewDeviceNode.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwSetValueKey @ 0x140723FF0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x140724FD0 (ZwDeleteValueKey.c)
 *     PipSetDevNodeFlags @ 0x14090DD60 (PipSetDevNodeFlags.c)
 *     PpIrpQueryResourceRequirements @ 0x1409104D8 (PpIrpQueryResourceRequirements.c)
 *     _CmOpenDeviceRegKey @ 0x140996B50 (_CmOpenDeviceRegKey.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiQueryResourceRequirements(__int64 a1)
{
  _QWORD *v2; // rcx
  int v3; // eax
  ULONG *Data; // rbx
  unsigned int v5; // r14d
  ULONG DataSize; // esi
  struct _KTHREAD *CurrentThread; // rax
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp+30h] BYREF
  ULONG *v11; // [rsp+88h] [rbp+38h] BYREF

  v2 = *(_QWORD **)(a1 + 32);
  v11 = 0LL;
  ValueName = 0LL;
  Handle = 0LL;
  v3 = PpIrpQueryResourceRequirements(v2, &v11);
  Data = v11;
  v5 = v3;
  if ( v3 < 0 )
    Data = 0LL;
  if ( Data )
    DataSize = *Data;
  else
    DataSize = 0;
  if ( (*(_DWORD *)(a1 + 396) & 0x2000) == 0
    || *(_DWORD *)(a1 + 404) != 9 && *(_DWORD *)(a1 + 404) != 3 && *(_DWORD *)(a1 + 404) != 19 )
  {
    if ( (int)CmOpenDeviceRegKey(PiPnpRtlCtx, *(_QWORD *)(a1 + 48), 20, 0, 983103, Data != 0LL, (__int64)&Handle, 0LL) < 0 )
      Handle = 0LL;
    if ( Handle )
    {
      *(_DWORD *)&ValueName.Length = 2359330;
      ValueName.Buffer = (wchar_t *)L"BasicConfigVector";
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
      if ( Data )
      {
        ZwSetValueKey(Handle, &ValueName, 0, 0xAu, Data, DataSize);
        ExAcquireFastMutex(&PiResourceListLock);
        *(_QWORD *)(a1 + 440) = Data;
        KeReleaseGuardedMutex(&PiResourceListLock);
        PipSetDevNodeFlags(a1, 0x200u);
        Data = 0LL;
      }
      else
      {
        ZwDeleteValueKey(Handle, &ValueName);
      }
      ExReleaseResourceLite(&PnpRegistryDeviceResource);
      KeLeaveCriticalRegion();
    }
  }
  if ( Data )
    ExFreePoolWithTag(Data, 0);
  if ( Handle )
    ZwClose(Handle);
  return v5;
}
