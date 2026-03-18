/*
 * XREFs of ?GetContainerId@DisplayIdMonitorDescriptor@DxgMonitor@@UEBAJAEAU_GUID@@@Z @ 0x140281AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?DisplayID_GetContainerID@@YAJPEBUDisplayIDObj@@PEAU_GUID@@@Z @ 0x14009E8B4 (-DisplayID_GetContainerID@@YAJPEBUDisplayIDObj@@PEAU_GUID@@@Z.c)
 */

__int64 __fastcall DxgMonitor::DisplayIdMonitorDescriptor::GetContainerId(
        DxgMonitor::DisplayIdMonitorDescriptor *this,
        struct _GUID *a2)
{
  return DisplayID_GetContainerID((DxgMonitor::DisplayIdMonitorDescriptor *)((char *)this + 24), a2);
}
