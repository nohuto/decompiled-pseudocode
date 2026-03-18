/*
 * XREFs of SfsMapBufferToAsp @ 0x1406DD3F0
 * Callers:
 *     SfsFwpApplyPatch @ 0x1406DCDD8 (SfsFwpApplyPatch.c)
 *     SfsGetFwVersions @ 0x1406DD060 (SfsGetFwVersions.c)
 * Callees:
 *     <none>
 */

__int64 SfsMapBufferToAsp()
{
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  result = 0LL;
  if ( !CmpCallbackListLock.WaitBlockFill4[8] )
    return 3221225659LL;
  LODWORD(CmpCallbackListLock.Timer.TimerListEntry.Flink->Flink) = CmpCallbackListLock.WaitBlock[0].WaitListEntry.Flink;
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  *(_DWORD *)CmpCallbackListLock.Timer.DueTime.QuadPart = *(_DWORD *)&CmpCallbackListLock.WaitBlockFill6[4];
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  return result;
}
