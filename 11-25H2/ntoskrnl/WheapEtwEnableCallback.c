/*
 * XREFs of WheapEtwEnableCallback @ 0x1407B8B70
 * Callers:
 *     <none>
 * Callees:
 *     WheaFlushETWEventsDpcWorkerInit @ 0x140651F44 (WheaFlushETWEventsDpcWorkerInit.c)
 *     WheapProcessWaitingETWEvents @ 0x1407B8EC0 (WheapProcessWaitingETWEvents.c)
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
