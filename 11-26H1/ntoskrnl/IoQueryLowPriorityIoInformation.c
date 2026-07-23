/*
 * XREFs of IoQueryLowPriorityIoInformation @ 0x140B3F58C
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 */

__int64 __fastcall IoQueryLowPriorityIoInformation(__int64 a1, void *a2, unsigned int a3, _DWORD *a4, char a5)
{
  unsigned int v6; // ebx
  _DWORD Src[10]; // [rsp+28h] [rbp-40h] BYREF

  v6 = 0;
  *a4 = 0;
  if ( a3 >= 0x28 )
  {
    Src[0] = HIDWORD(IopPerfIoTrackingLock.KcsanThread);
    Src[1] = IopPerfIoTrackingLock.SchedulerAssistYieldCounter;
    Src[2] = IopPerfIoTrackingLock.SchedulerAssistYieldBoostCount;
    Src[3] = IoPagingReadLowPriorityCount;
    Src[4] = IoPagingReadLowPriorityBumpedCount;
    Src[5] = IoPagingWriteLowPriorityCount;
    Src[6] = IoPagingWriteLowPriorityBumpedCount;
    Src[7] = IoBoostedThreadedIrpCount;
    Src[8] = IoBoostedPagingIrpCount;
    Src[9] = IoBlanketBoostCount;
    if ( a5 )
      RtlCopyToUser(a2, Src, 0x28uLL);
    else
      RtlCopyVolatileMemory(a2, Src, 0x28uLL);
  }
  else
  {
    v6 = -1073741789;
  }
  *a4 = 40;
  return v6;
}
