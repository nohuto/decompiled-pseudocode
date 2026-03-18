/*
 * XREFs of ?IsConnectedMonitorDisabled@DMMVIDEOPRESENTTARGET@@QEBAJAEAE@Z @ 0x1403EF450
 * Callers:
 *     ?NeedToBeActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1403EF3FC (-NeedToBeActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 * Callees:
 *     ?MonitorIsConnectedMonitorDisabled@@YAJPEAUHDXGMONITOR__@@PEAE@Z @ 0x1403EF4B4 (-MonitorIsConnectedMonitorDisabled@@YAJPEAUHDXGMONITOR__@@PEAE@Z.c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGET::IsConnectedMonitorDisabled(DMMVIDEOPRESENTTARGET *this, unsigned __int8 *a2)
{
  struct HDXGMONITOR__ *v3; // rcx
  int IsConnectedMonitorDisabled; // eax
  unsigned int v5; // ebx
  __int64 result; // rax

  v3 = (struct HDXGMONITOR__ *)*((_QWORD *)this + 14);
  if ( !v3 )
    return 2147483685LL;
  IsConnectedMonitorDisabled = MonitorIsConnectedMonitorDisabled(v3, a2);
  v5 = IsConnectedMonitorDisabled;
  if ( IsConnectedMonitorDisabled >= 0 )
    return 0LL;
  WdLogSingleEntry2(2LL, *((unsigned int *)this + 6), IsConnectedMonitorDisabled);
  result = v5;
  WdLogGlobalForLineNumber = 613;
  return result;
}
