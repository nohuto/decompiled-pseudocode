/*
 * XREFs of WheapEtwEnableCallback @ 0x140849200
 * Callers:
 *     <none>
 * Callees:
 *     WheaFlushETWEventsDpcWorkerInit @ 0x1406D7014 (WheaFlushETWEventsDpcWorkerInit.c)
 *     WheapProcessWaitingETWEvents @ 0x140849550 (WheapProcessWaitingETWEvents.c)
 */

void __fastcall WheapEtwEnableCallback(LPCGUID SourceId, int ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  WheapEventingInitialized = ControlCode;
  if ( ControlCode == 1 )
  {
    WheaFlushETWEventsDpcWorkerInit();
    WheapProcessWaitingETWEvents();
  }
}
