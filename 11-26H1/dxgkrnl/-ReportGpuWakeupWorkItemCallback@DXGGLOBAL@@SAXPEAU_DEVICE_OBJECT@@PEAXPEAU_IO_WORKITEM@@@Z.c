/*
 * XREFs of ?ReportGpuWakeupWorkItemCallback@DXGGLOBAL@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x140415C10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AddWakeUpCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@@Z @ 0x140293FAC (-AddWakeUpCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@@Z.c)
 */

void __fastcall DXGGLOBAL::ReportGpuWakeupWorkItemCallback(
        struct _DEVICE_OBJECT *IoObject,
        PVOID Context,
        PIO_WORKITEM IoWorkItem)
{
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rbx
  DXGGLOBAL *Global; // rax

  if ( Context )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 454;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Context == NULL", 454LL, 0LL, 0LL, 0LL, 0LL);
  }
  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(IoObject);
  Global = DXGGLOBAL::GetGlobal();
  DXGGLOBAL::AddWakeUpCoreDripsBlockerTracking(Global, (__int64)DeviceAttachmentBaseRef, 0LL);
  ObfDereferenceObject(DeviceAttachmentBaseRef);
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
}
