/*
 * XREFs of PiQueryResourceRequirements @ 0x1409B2FCC
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1409D9370 (PiProcessNewDeviceNode.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwSetValueKey @ 0x140728BC0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x140729BA0 (ZwDeleteValueKey.c)
 *     _CmOpenDeviceRegKey @ 0x1409575B0 (_CmOpenDeviceRegKey.c)
 *     PipSetDevNodeFlags @ 0x1409AFE90 (PipSetDevNodeFlags.c)
 *     PpIrpQueryResourceRequirements @ 0x1409B25B8 (PpIrpQueryResourceRequirements.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
    if ( (int)CmOpenDeviceRegKey(
                *(__int64 *)&PiPnpRtlCtx,
                *(_QWORD *)(a1 + 48),
                20,
                0,
                983103,
                Data != 0LL,
                (__int64)&Handle,
                0LL) < 0 )
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
