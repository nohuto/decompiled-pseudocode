/*
 * XREFs of SfsGetRegisterStatus @ 0x1406E13EC
 * Callers:
 *     SfsFwpApplyPatch @ 0x1406E1078 (SfsFwpApplyPatch.c)
 *     SfsGetFwVersions @ 0x1406E1300 (SfsGetFwVersions.c)
 * Callees:
 *     <none>
 */

__int64 SfsGetRegisterStatus()
{
  __int64 result; // rax

  result = 0LL;
  if ( !CmpContextListLock.WaitBlockFill4[0] )
    return 3221225659LL;
  if ( (unsigned __int16)CmpContextListLock.Timer.TimerListEntry.Flink->Flink )
    return 3221225473LL;
  return result;
}
