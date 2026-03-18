/*
 * XREFs of DpiReportDevicePowerStateWorkItemCallback @ 0x14037EF40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReportDevicePowerState@DXGGLOBAL@@QEAAXPEAU_DEVICE_OBJECT@@W4_DEVICE_POWER_STATE@@@Z @ 0x14037EF84 (-ReportDevicePowerState@DXGGLOBAL@@QEAAXPEAU_DEVICE_OBJECT@@W4_DEVICE_POWER_STATE@@@Z.c)
 */

void __fastcall DpiReportDevicePowerStateWorkItemCallback(PVOID IoObject, PVOID Context, PIO_WORKITEM IoWorkItem)
{
  enum _DEVICE_POWER_STATE v4; // ebx
  DXGGLOBAL *Global; // rax
  struct _DEVICE_OBJECT *v6; // rdx

  v4 = (int)Context;
  Global = DXGGLOBAL::GetGlobal();
  DXGGLOBAL::ReportDevicePowerState(Global, v6, v4);
  IoFreeWorkItem(IoWorkItem);
}
