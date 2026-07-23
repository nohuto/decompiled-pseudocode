/*
 * XREFs of MiEmptyThisWorkingSet @ 0x1404FA1B4
 * Callers:
 *     MiTrimAllSystemPagableMemory @ 0x14044EF98 (MiTrimAllSystemPagableMemory.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiAttachThreadDone @ 0x140311390 (MiAttachThreadDone.c)
 *     KeForceDetachProcess @ 0x1403118D0 (KeForceDetachProcess.c)
 *     MiEmptyWorkingSetInitiate @ 0x1403C5E90 (MiEmptyWorkingSetInitiate.c)
 *     MiAttachWorkingSet @ 0x14046ADD4 (MiAttachWorkingSet.c)
 *     MiPrepareAttachThread @ 0x14046E560 (MiPrepareAttachThread.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MiEmptyThisWorkingSet(__int64 a1)
{
  unsigned int v2; // r14d
  __int64 v3; // rcx
  volatile LONG *v4; // rdi
  KIRQL v5; // si
  int v6; // ebx
  _OWORD v8[3]; // [rsp+20h] [rbp-58h] BYREF

  v2 = 0;
  v3 = *(unsigned __int16 *)(a1 + 174);
  memset(v8, 0, sizeof(v8));
  v4 = (volatile LONG *)(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * v3) + 21384LL);
  v5 = ExAcquireSpinLockExclusive(v4);
  if ( *(_QWORD *)(a1 + 152) > 1uLL )
  {
    MiPrepareAttachThread(0LL, a1, 0);
    if ( v5 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v4);
    else
      ExReleaseSpinLockExclusive(v4, v5);
    v6 = MiAttachWorkingSet(a1, v8);
    MiEmptyWorkingSetInitiate(a1, 8, 0LL, -1LL);
    v2 = 1;
    if ( v6 )
      KeForceDetachProcess((__int64)v8, 0);
    ExAcquireSpinLockExclusive(v4);
    MiAttachThreadDone(a1, 1);
  }
  if ( v5 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v4);
  else
    ExReleaseSpinLockExclusive(v4, v5);
  return v2;
}
