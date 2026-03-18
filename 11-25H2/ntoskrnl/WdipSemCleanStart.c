/*
 * XREFs of WdipSemCleanStart @ 0x1407919E8
 * Callers:
 *     WdipSemInitialize @ 0x1407910D8 (WdipSemInitialize.c)
 *     WdipSemUpdate @ 0x140791198 (WdipSemUpdate.c)
 * Callees:
 *     WdipSemLoadConfigInfo @ 0x140791B58 (WdipSemLoadConfigInfo.c)
 *     WdipSemLoadScenarioTable @ 0x140792730 (WdipSemLoadScenarioTable.c)
 *     WdipSemShutdown @ 0x140792DAC (WdipSemShutdown.c)
 *     WdipSemCleanupGroupPolicy @ 0x140793550 (WdipSemCleanupGroupPolicy.c)
 *     WdipSemLoadGroupPolicy @ 0x14079357C (WdipSemLoadGroupPolicy.c)
 *     WdipSemStartTimeoutCheck @ 0x140793808 (WdipSemStartTimeoutCheck.c)
 *     WdipSemEnableSemProvider @ 0x140793FAC (WdipSemEnableSemProvider.c)
 *     WdipSemGetLoggerIds @ 0x140A43EA4 (WdipSemGetLoggerIds.c)
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
    WdipSemEnabled = 1;
  return (unsigned int)LoggerIds;
}
