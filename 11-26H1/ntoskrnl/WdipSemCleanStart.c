/*
 * XREFs of WdipSemCleanStart @ 0x14081F4F0
 * Callers:
 *     WdipSemInitialize @ 0x14081EB98 (WdipSemInitialize.c)
 *     WdipSemUpdate @ 0x14081EC6C (WdipSemUpdate.c)
 * Callees:
 *     WdipSemLoadConfigInfo @ 0x14081F660 (WdipSemLoadConfigInfo.c)
 *     WdipSemLoadScenarioTable @ 0x140820244 (WdipSemLoadScenarioTable.c)
 *     WdipSemShutdown @ 0x1408208C4 (WdipSemShutdown.c)
 *     WdipSemCleanupGroupPolicy @ 0x140820ED0 (WdipSemCleanupGroupPolicy.c)
 *     WdipSemLoadGroupPolicy @ 0x140820F00 (WdipSemLoadGroupPolicy.c)
 *     WdipSemStartTimeoutCheck @ 0x140821190 (WdipSemStartTimeoutCheck.c)
 *     WdipSemEnableSemProvider @ 0x1408219A8 (WdipSemEnableSemProvider.c)
 *     WdipSemGetLoggerIds @ 0x140ADADBC (WdipSemGetLoggerIds.c)
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
    LOBYTE(stru_140F066E8.Header.WaitListHead.Flink) = 1;
  return (unsigned int)LoggerIds;
}
