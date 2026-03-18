/*
 * XREFs of ExInitializeFastResourceAcquired @ 0x1404567B0
 * Callers:
 *     DifExInitializeFastResourceAcquiredWrapper @ 0x140651BA0 (DifExInitializeFastResourceAcquiredWrapper.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbEncodeLockHandle @ 0x140456960 (KeAbEncodeLockHandle.c)
 *     ExInitializeFastResource2 @ 0x1404569D0 (ExInitializeFastResource2.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14052FA20 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExInitializeFastResourceAcquired(struct _KTHREAD *a1, int a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  char v5; // si
  __int64 result; // rax
  unsigned __int64 *p_ThreadLock; // r9
  __int64 v9; // rcx
  struct _KTHREAD **v10; // rdx
  struct _KTHREAD **SparePtr; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  __int64 v14; // rdx
  int v15; // ett
  int v16; // ett

  CurrentThread = KeGetCurrentThread();
  v5 = a2;
  result = ExInitializeFastResource2((ULONG_PTR)a1, a2 & 0xFFFFFFF9);
  if ( (v5 & 6) != 0 )
  {
    result = KeAbPreAcquire((__int64)a1, 0LL, 0LL, (struct _KLOCK_ENTRIES *)p_ThreadLock);
    v9 = result;
  }
  else
  {
    v9 = 0LL;
  }
  if ( (v5 & 2) != 0 )
  {
    p_ThreadLock = &a1->ThreadLock;
    *(_QWORD *)&a1->Header.Lock |= 1uLL;
    *(_QWORD *)&a1->CurrentRunTime = CurrentThread;
    LODWORD(a1->StateSaveArea) = 1;
    if ( v9 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        *(_BYTE *)(v9 + 33) |= 2u;
      else
        *(_BYTE *)(v9 + 10) = 1;
      BYTE4(a1->StateSaveArea) = KeAbEncodeLockHandle(v9);
    }
    _disable();
    result = (__int64)&CurrentThread[1].WaitBlock[3].SparePtr;
    SparePtr = (struct _KTHREAD **)CurrentThread[1].WaitBlock[3].SparePtr;
    if ( SparePtr[1] != (struct _KTHREAD *)&CurrentThread[1].LastXStateSaveDebugInfo )
LABEL_12:
      __fastfail(3u);
    *p_ThreadLock = (unsigned __int64)SparePtr;
    a1->CycleTime = result;
    SparePtr[1] = (struct _KTHREAD *)p_ThreadLock;
    *(_QWORD *)result = p_ThreadLock;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( !SchedulerAssist )
      goto LABEL_26;
    _m_prefetchw(SchedulerAssist);
    LODWORD(result) = *SchedulerAssist;
    do
    {
      v14 = (unsigned int)result;
      LODWORD(v14) = result & 0xFFDFFFFF;
      v15 = result;
      result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
    }
    while ( v15 != (_DWORD)result );
    goto LABEL_30;
  }
  if ( (v5 & 4) == 0 )
    return result;
  *(_QWORD *)&a1->Header.Lock = *(_QWORD *)&a1->Header.Lock & 3LL | 4;
  if ( (unsigned __int64 *)a3 != &a1->ThreadLock )
    *(_QWORD *)(a3 + 24) = a1;
  *(_QWORD *)(a3 + 16) = CurrentThread;
  *(_DWORD *)(a3 + 32) = 1;
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *(_BYTE *)(v9 + 33) |= 2u;
    else
      *(_BYTE *)(v9 + 10) = 1;
    *(_BYTE *)(a3 + 36) = KeAbEncodeLockHandle(v9);
  }
  _disable();
  result = (__int64)&CurrentThread[1].WaitBlock[3].SparePtr;
  v10 = (struct _KTHREAD **)CurrentThread[1].WaitBlock[3].SparePtr;
  if ( v10[1] != (struct _KTHREAD *)&CurrentThread[1].LastXStateSaveDebugInfo )
    goto LABEL_12;
  *(_QWORD *)a3 = v10;
  *(_QWORD *)(a3 + 8) = result;
  v10[1] = (struct _KTHREAD *)a3;
  *(_QWORD *)result = a3;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    LODWORD(result) = *SchedulerAssist;
    do
    {
      v14 = (unsigned int)result;
      LODWORD(v14) = result & 0xFFDFFFFF;
      v16 = result;
      result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
    }
    while ( v16 != (_DWORD)result );
LABEL_30:
    if ( (result & 0x200000) != 0 )
      result = KiRemoveSystemWorkPriorityKick(CurrentPrcb, v14, SchedulerAssist, p_ThreadLock);
  }
LABEL_26:
  _enable();
  return result;
}
