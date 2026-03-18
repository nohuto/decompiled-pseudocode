/*
 * XREFs of CmpInitGlobalQuotaAllowed @ 0x140CEC908
 * Callers:
 *     CmInitSystem1 @ 0x140CE888C (CmInitSystem1.c)
 * Callees:
 *     <none>
 */

__int64 CmpInitGlobalQuotaAllowed()
{
  unsigned __int64 SchedulingGroup; // rdx
  char v1; // al
  unsigned __int64 v2; // rcx
  __int64 v3; // rax
  __int64 result; // rax

  PspSiloMonitorLock.Timer.DueTime.QuadPart = MmSizeOfPagedPoolInBytes;
  SchedulingGroup = (((unsigned __int64)MmSizeOfPagedPoolInBytes * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL) >> 64) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( ExpPlatformBinaryLock.CycleTime == 0x400000004LL && ExpPlatformBinaryLock.SchedulingGroup )
  {
    v1 = 1;
  }
  else
  {
    v1 = 0;
    if ( ExpPlatformBinaryLock.CycleTime == 0xB00000008LL && ExpPlatformBinaryLock.SchedulingGroup )
      goto LABEL_8;
  }
  if ( !v1 )
  {
    SchedulingGroup = MmSizeOfPagedPoolInBytes / 3uLL;
LABEL_9:
    CmpGlobalQuota = SchedulingGroup;
    goto LABEL_11;
  }
LABEL_8:
  CmpQuotaExplicitlySet = 1;
  if ( ExpPlatformBinaryLock.SchedulingGroup >= (_KSCHEDULING_GROUP *volatile)SchedulingGroup )
    goto LABEL_9;
  CmpGlobalQuota = (__int64)ExpPlatformBinaryLock.SchedulingGroup;
  SchedulingGroup = (unsigned __int64)ExpPlatformBinaryLock.SchedulingGroup;
LABEL_11:
  v2 = 0xFFFFFFFFLL;
  if ( SchedulingGroup <= 0xFFFFFFFF )
  {
    v2 = SchedulingGroup;
    if ( SchedulingGroup < 0x1000000 )
    {
      CmpGlobalQuota = 0x1000000LL;
      v2 = 0x1000000LL;
    }
  }
  else
  {
    CmpGlobalQuota = 0xFFFFFFFFLL;
  }
  ExpPlatformBinaryLock.Timer.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)(95 * (v2 / 0x64));
  if ( LODWORD(WheapPfaLock.FirstArgument) )
  {
    result = (unsigned int)(LODWORD(WheapPfaLock.FirstArgument) << 20);
  }
  else
  {
    if ( (*(_QWORD *)(*(_QWORD *)stru_140E2EB88.ThreadLock + 22288LL) & 0xFFFFFFFFFFFFFFFEuLL) >= 0xC0000 )
      LODWORD(v3) = 393216;
    else
      v3 = *(_QWORD *)(*(_QWORD *)stru_140E2EB88.ThreadLock + 22288LL) >> 1;
    result = (unsigned int)((_DWORD)v3 << 12);
  }
  LODWORD(WheapPfaLock.FirstArgument) = result;
  return result;
}
