/*
 * XREFs of StorpAdapterHealthWorkItemRoutine @ 0x1400B7090
 * Callers:
 *     <none>
 * Callees:
 *     StorpTelemetrySendAdapterNvmeHealthInfo @ 0x1400C071C (StorpTelemetrySendAdapterNvmeHealthInfo.c)
 *     StorpTelemetrySendAdapterUfsHealthInfo @ 0x1400C14F4 (StorpTelemetrySendAdapterUfsHealthInfo.c)
 */

void __fastcall StorpAdapterHealthWorkItemRoutine(PDEVICE_OBJECT DeviceObject, struct _IO_WORKITEM *Context)
{
  unsigned __int8 *DeviceExtension; // rbx
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // r8d

  DeviceExtension = (unsigned __int8 *)DeviceObject->DeviceExtension;
  v4 = *((_DWORD *)DeviceExtension + 1085);
  if ( (v4 == 17 || v4 == 19) && *((_DWORD *)DeviceExtension + 22) == 1 && *((_DWORD *)DeviceExtension + 87) == 1 )
  {
    v5 = *((_QWORD *)DeviceExtension + 628);
    if ( !v5 || !*(_DWORD *)(v5 + 16) )
    {
      if ( v4 == 19 )
        StorpTelemetrySendAdapterUfsHealthInfo(DeviceExtension);
      else
        StorpTelemetrySendAdapterNvmeHealthInfo(DeviceExtension);
      v6 = g_StorpTraceLoggingDeviceHealthTick + DeviceExtension[5381];
      *((_DWORD *)DeviceExtension + 1352) |= 2u;
      DeviceExtension[5381] = v6 < 0x18 ? v6 : 0;
    }
  }
  ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)DeviceExtension + 42));
  IoFreeWorkItem(Context);
}
