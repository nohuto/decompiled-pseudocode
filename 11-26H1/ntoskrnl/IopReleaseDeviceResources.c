/*
 * XREFs of IopReleaseDeviceResources @ 0x1409B7CB4
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1404CBC6C (PnpRemoveLockedDeviceNode.c)
 *     PnpDisableDevice @ 0x1407A7170 (PnpDisableDevice.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1409B7700 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpDriverLoadingFailed @ 0x140B4858C (PnpDriverLoadingFailed.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     PnpRequestDeviceAction @ 0x14047BEF8 (PnpRequestDeviceAction.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwSetValueKey @ 0x140728BC0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x140729BA0 (ZwDeleteValueKey.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     _CmOpenDeviceRegKey @ 0x1409575B0 (_CmOpenDeviceRegKey.c)
 *     PipSetDevNodeFlags @ 0x1409AFE90 (PipSetDevNodeFlags.c)
 *     IopLegacyResourceAllocation @ 0x1409B81D4 (IopLegacyResourceAllocation.c)
 *     IopQueryDeviceResources @ 0x140AA0860 (IopQueryDeviceResources.c)
 */

__int64 __fastcall IopReleaseDeviceResources(_QWORD *a1, int a2)
{
  bool v2; // zf
  _DWORD *v3; // rsi
  ULONG DataSize; // r14d
  void *Data; // rbx
  char v8; // r12
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rdx
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-10h] BYREF
  ULONG v13; // [rsp+90h] [rbp+40h] BYREF
  HANDLE KeyHandle; // [rsp+A0h] [rbp+50h] BYREF
  void *v15; // [rsp+A8h] [rbp+58h] BYREF

  v2 = a1[52] == 0LL;
  v3 = (_DWORD *)a1 + 99;
  ValueName = 0LL;
  if ( v2 && (*v3 & 0x80u) == 0 )
    return 0LL;
  DataSize = 0;
  Data = 0LL;
  v8 = 0;
  v13 = 0;
  v15 = 0LL;
  if ( a2 && (*v3 & 1) == 0 && (int)IopQueryDeviceResources(a1[4], 0LL, &v15, &v13) >= 0 )
  {
    DataSize = v13;
    Data = v15;
  }
  result = IopLegacyResourceAllocation(-1, (_DWORD)PnpDriverObject, a1[4], 0, 0LL);
  if ( (int)result >= 0 )
  {
    PnpRequestDeviceAction(0LL, 0, 0, 0LL, 0LL, 0LL, 0LL);
    if ( a2 && (*v3 & 1) == 0 )
    {
      KeyHandle = 0LL;
      if ( Data )
        v8 = 1;
      if ( (int)CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, a1[6], 20, 0, 983103, v8, (__int64)&KeyHandle, 0LL) >= 0 )
      {
        *(_DWORD *)&ValueName.Length = 1441812;
        ValueName.Buffer = (wchar_t *)L"BootConfig";
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
        if ( Data )
          ZwSetValueKey(KeyHandle, &ValueName, 0, 8u, Data, DataSize);
        else
          ZwDeleteValueKey(KeyHandle, &ValueName);
        ExReleaseResourceLite(&PnpRegistryDeviceResource);
        KeLeaveCriticalRegion();
        ZwClose(KeyHandle);
      }
      if ( Data )
      {
        PipSetDevNodeFlags((__int64)a1, 0x40u);
        v11 = a1[4];
        a1[68] = Data;
        guard_dispatch_icall_no_overrides(4LL, v11);
      }
    }
    return 0LL;
  }
  return result;
}
