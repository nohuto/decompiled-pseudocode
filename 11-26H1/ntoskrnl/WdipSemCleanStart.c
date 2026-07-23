/*
 * XREFs of WdipSemCleanStart @ 0x140825700
 * Callers:
 *     WdipSemInitialize @ 0x140824DA8 (WdipSemInitialize.c)
 *     WdipSemUpdate @ 0x140824E7C (WdipSemUpdate.c)
 * Callees:
 *     WdipSemLoadConfigInfo @ 0x140825870 (WdipSemLoadConfigInfo.c)
 *     WdipSemLoadScenarioTable @ 0x140826454 (WdipSemLoadScenarioTable.c)
 *     WdipSemShutdown @ 0x140826AD4 (WdipSemShutdown.c)
 *     WdipSemCleanupGroupPolicy @ 0x1408270E0 (WdipSemCleanupGroupPolicy.c)
 *     WdipSemLoadGroupPolicy @ 0x140827110 (WdipSemLoadGroupPolicy.c)
 *     WdipSemStartTimeoutCheck @ 0x1408273A0 (WdipSemStartTimeoutCheck.c)
 *     WdipSemEnableSemProvider @ 0x140827BB8 (WdipSemEnableSemProvider.c)
 *     WdipSemGetLoggerIds @ 0x140AD786C (WdipSemGetLoggerIds.c)
 */

__int64 WdipSemCleanStart()
{
  int LoggerIds; // ebx

  LoggerIds = WdipSemGetLoggerIds();
  if ( LoggerIds >= 0 )
  {
    LoggerIds = WdipSemEnableSemProvider();
    if ( LoggerIds >= 0 )
    {
      LoggerIds = WdipSemLoadConfigInfo();
      if ( LoggerIds >= 0 )
      {
        LoggerIds = WdipSemLoadGroupPolicy();
        if ( LoggerIds >= 0 )
        {
          LoggerIds = WdipSemLoadScenarioTable();
          if ( LoggerIds >= 0 )
            LoggerIds = WdipSemStartTimeoutCheck();
        }
      }
    }
  }
  WdipSemCleanupGroupPolicy();
  if ( LoggerIds < 0 )
    WdipSemShutdown();
  else
    LOBYTE(stru_140F042A0.Timer.DueTime.LowPart) = 1;
  return (unsigned int)LoggerIds;
}
