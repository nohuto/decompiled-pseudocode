/*
 * XREFs of SfsMapBufferToAsp @ 0x1406E1690
 * Callers:
 *     SfsFwpApplyPatch @ 0x1406E1078 (SfsFwpApplyPatch.c)
 *     SfsGetFwVersions @ 0x1406E1300 (SfsGetFwVersions.c)
 * Callees:
 *     <none>
 */

__int64 SfsMapBufferToAsp()
{
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  result = 0LL;
  if ( !CmpContextListLock.WaitBlockFill4[0] )
    return 3221225659LL;
  LODWORD(CmpContextListLock.Timer.TimerListEntry.Blink->Flink) = *(_DWORD *)&CmpContextListLock.Timer.Processor;
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  LODWORD(CmpContextListLock.Timer.Header.WaitListHead.Blink->Flink) = CmpContextListLock.Timer.Period;
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  return result;
}
