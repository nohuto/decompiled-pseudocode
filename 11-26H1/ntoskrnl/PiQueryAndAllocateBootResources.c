/*
 * XREFs of PiQueryAndAllocateBootResources @ 0x140AA072C
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1409D9370 (PiProcessNewDeviceNode.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwSetValueKey @ 0x140728BC0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x140729BA0 (ZwDeleteValueKey.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     _CmOpenDeviceRegKey @ 0x1409575B0 (_CmOpenDeviceRegKey.c)
 *     PipSetDevNodeFlags @ 0x1409AFE90 (PipSetDevNodeFlags.c)
 *     IopQueryDeviceResources @ 0x140AA0860 (IopQueryDeviceResources.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiQueryAndAllocateBootResources(__int64 a1)
{
  void *Data; // rbx
  ULONG DataSize; // r14d
  int v4; // esi
  struct _KTHREAD *CurrentThread; // rax
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-10h] BYREF
  ULONG v8; // [rsp+90h] [rbp+40h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp+48h] BYREF
  void *v10; // [rsp+A0h] [rbp+50h] BYREF

  Data = 0LL;
  DataSize = 0;
  v10 = 0LL;
  v4 = 0;
  v8 = 0;
  ValueName = 0LL;
  Handle = 0LL;
  if ( !*(_QWORD *)(a1 + 544) )
  {
    v4 = IopQueryDeviceResources(*(_QWORD *)(a1 + 32), 0LL, &v10, &v8);
    if ( v4 >= 0 )
    {
      DataSize = v8;
      Data = v10;
    }
  }
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
    if ( Handle && !*(_QWORD *)(a1 + 544) )
    {
      *(_DWORD *)&ValueName.Length = 1441812;
      ValueName.Buffer = (wchar_t *)L"BootConfig";
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
      if ( Data )
        ZwSetValueKey(Handle, &ValueName, 0, 8u, Data, DataSize);
      else
        ZwDeleteValueKey(Handle, &ValueName);
      ExReleaseResourceLite(&PnpRegistryDeviceResource);
      KeLeaveCriticalRegion();
      if ( !Data )
        goto LABEL_10;
      v4 = guard_dispatch_icall_no_overrides(4LL, *(_QWORD *)(a1 + 32));
      if ( v4 >= 0 )
        PipSetDevNodeFlags(a1, 0x40u);
    }
  }
  if ( Data )
    ExFreePoolWithTag(Data, 0);
LABEL_10:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v4;
}
