/*
 * XREFs of KiTryToAcquireQueuedSpinLockInstrumented @ 0x1402B3438
 * Callers:
 *     MiCheckProcessShadow @ 0x1402B2E70 (MiCheckProcessShadow.c)
 *     MiLockPageTableInternal @ 0x1402B34E0 (MiLockPageTableInternal.c)
 *     MiFastLockLeafPageTable @ 0x1402ED250 (MiFastLockLeafPageTable.c)
 *     KxTryToAcquireQueuedSpinLock @ 0x14048FC34 (KxTryToAcquireQueuedSpinLock.c)
 * Callees:
 *     PerfLogSpinLockAcquire @ 0x1404DA444 (PerfLogSpinLockAcquire.c)
 */

__int64 __fastcall KiTryToAcquireQueuedSpinLockInstrumented(signed __int64 a1, _QWORD *a2)
{
  struct _KPRCB *CurrentPrcb; // r8
  unsigned int InterruptCount; // r9d
  int v4; // r11d
  char v6; // cl
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  InterruptCount = 0;
  v4 = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
  {
    v6 = 0;
  }
  else
  {
    v6 = 1;
    v8 = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    v4 = v8;
  }
  _m_prefetchw(a2);
  if ( *a2 || _InterlockedCompareExchange64(a2, a1, 0LL) )
  {
    _mm_pause();
    return 0LL;
  }
  else
  {
    ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
    if ( v6 )
    {
      v9 = __rdtsc();
      PerfLogSpinLockAcquire((_DWORD)a2, v9, v9 - v4, 0, InterruptCount, 1);
    }
    return 1LL;
  }
}
