/*
 * XREFs of ?GetUsageParams@DisplayIdMonitorDescriptor@DxgMonitor@@UEBAJAEAW4DISPLAY_USE_CASE@@AEA_N1@Z @ 0x140281D70
 * Callers:
 *     <none>
 * Callees:
 *     ?DisplayID_GetPrimaryUseCase@@YAJPEBUDisplayIDObj@@PEAW4DISPLAY_USE_CASE@@@Z @ 0x14009EAB8 (-DisplayID_GetPrimaryUseCase@@YAJPEBUDisplayIDObj@@PEAW4DISPLAY_USE_CASE@@@Z.c)
 */

__int64 __fastcall DxgMonitor::DisplayIdMonitorDescriptor::GetUsageParams(
        DxgMonitor::DisplayIdMonitorDescriptor *this,
        enum DISPLAY_USE_CASE *a2,
        bool *a3,
        bool *a4)
{
  *a3 = 0;
  *a4 = 1;
  return DisplayID_GetPrimaryUseCase((DxgMonitor::DisplayIdMonitorDescriptor *)((char *)this + 24), a2);
}
