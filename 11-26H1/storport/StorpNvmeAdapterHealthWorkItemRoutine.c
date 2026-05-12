/*
 * XREFs of StorpNvmeAdapterHealthWorkItemRoutine @ 0x1400B9860
 * Callers:
 *     <none>
 * Callees:
 *     StorpTelemetrySendNvmeControllerHealthInfo @ 0x1400C1A44 (StorpTelemetrySendNvmeControllerHealthInfo.c)
 */

void __fastcall StorpNvmeAdapterHealthWorkItemRoutine(PDEVICE_OBJECT DeviceObject, struct _IO_WORKITEM *Context)
{
  char *DeviceExtension; // rdi
  __int64 v4; // rcx
  char *i; // rbx

  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  if ( *((_DWORD *)DeviceExtension + 21) == 1 )
  {
    v4 = *((_QWORD *)DeviceExtension + 144);
    if ( v4 )
    {
      StorpTelemetrySendNvmeControllerHealthInfo(v4);
    }
    else if ( (*((_DWORD *)DeviceExtension + 104) & 0x40) != 0 )
    {
      for ( i = (char *)*((_QWORD *)DeviceExtension + 163); i != DeviceExtension + 1304; i = *(char **)i )
        StorpTelemetrySendNvmeControllerHealthInfo(i - 112);
    }
  }
  ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)DeviceExtension + 19));
  IoFreeWorkItem(Context);
}
