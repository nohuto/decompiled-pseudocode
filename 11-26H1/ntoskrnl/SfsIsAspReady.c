/*
 * XREFs of SfsIsAspReady @ 0x1406E1660
 * Callers:
 *     SfsFwpApplyPatch @ 0x1406E1078 (SfsFwpApplyPatch.c)
 *     SfsGetFwVersions @ 0x1406E1300 (SfsGetFwVersions.c)
 *     SfsInitiateCmd @ 0x1406E1614 (SfsInitiateCmd.c)
 * Callees:
 *     <none>
 */

__int64 SfsIsAspReady()
{
  __int64 result; // rax

  result = 0LL;
  if ( !CmpContextListLock.WaitBlockFill4[0] )
    return 3221225659LL;
  if ( (int)CmpContextListLock.Timer.TimerListEntry.Flink->Flink >= 0 )
    return 2147483665LL;
  return result;
}
