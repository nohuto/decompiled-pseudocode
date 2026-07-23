/*
 * XREFs of RtlpReleaseHeapListLock @ 0x1800762B0
 * Callers:
 *     RtlpProcessHeapsInsert @ 0x18006C460 (RtlpProcessHeapsInsert.c)
 *     RtlpProcessHeapsRemove @ 0x18006D880 (RtlpProcessHeapsRemove.c)
 *     RtlQueryProcessHeapInformation @ 0x180075B50 (RtlQueryProcessHeapInformation.c)
 *     RtlpEnumProcessHeaps @ 0x180076180 (RtlpEnumProcessHeaps.c)
 *     RtlProtectHeap @ 0x180076820 (RtlProtectHeap.c)
 *     RtlUnlockProcessHeapOnProcessTerminate @ 0x18007E8E4 (RtlUnlockProcessHeapOnProcessTerminate.c)
 *     RtlpQueryExtendedHeapInformation @ 0x180092130 (RtlpQueryExtendedHeapInformation.c)
 *     RtlpHpHeapWalk @ 0x180094AEC (RtlpHpHeapWalk.c)
 *     RtlpSetRequestedFrontEndHeap @ 0x1800EC350 (RtlpSetRequestedFrontEndHeap.c)
 *     RtlSetHeapInformation @ 0x180110BC0 (RtlSetHeapInformation.c)
 *     RtlSetHeapDebuggingInformation @ 0x180114660 (RtlSetHeapDebuggingInformation.c)
 *     RtlLockHeapManagerForCloning @ 0x180144290 (RtlLockHeapManagerForCloning.c)
 *     RtlUnlockHeapManagerForCloning @ 0x1801444C0 (RtlUnlockHeapManagerForCloning.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RtlpReleaseHeapListLock(int a1)
{
  if ( a1 )
  {
    RtlpProcessHeapsLock.OwningThread = NtCurrentTeb()->ClientId.UniqueThread;
    RtlpProcessHeapsLock.LockCount = -2;
    RtlpProcessHeapsLock.RecursionCount = 1;
    RtlpProcessHeapsLock.LockSemaphore = 0LL;
  }
  return RtlLeaveCriticalSection(&RtlpProcessHeapsLock);
}
