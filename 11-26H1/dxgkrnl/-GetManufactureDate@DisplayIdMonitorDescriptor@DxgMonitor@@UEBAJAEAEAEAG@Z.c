/*
 * XREFs of ?GetManufactureDate@DisplayIdMonitorDescriptor@DxgMonitor@@UEBAJAEAEAEAG@Z @ 0x140281BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?DisplayID_GetManufactureDate@@YAJPEBUDisplayIDObj@@PEAEPEAG@Z @ 0x14009E9BC (-DisplayID_GetManufactureDate@@YAJPEBUDisplayIDObj@@PEAEPEAG@Z.c)
 */

__int64 __fastcall DxgMonitor::DisplayIdMonitorDescriptor::GetManufactureDate(
        DxgMonitor::DisplayIdMonitorDescriptor *this,
        unsigned __int8 *a2,
        unsigned __int16 *a3)
{
  int ManufactureDate; // ebx
  __int64 result; // rax

  ManufactureDate = DisplayID_GetManufactureDate((DxgMonitor::DisplayIdMonitorDescriptor *)((char *)this + 24), a2, a3);
  if ( ManufactureDate >= 0 )
    return 0LL;
  WdLogSingleEntry1(2LL);
  result = (unsigned int)ManufactureDate;
  WdLogGlobalForLineNumber = 364;
  return result;
}
