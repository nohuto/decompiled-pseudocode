/*
 * XREFs of PpmParkSnapNodeStatistics @ 0x1404177E4
 * Callers:
 *     PpmCheckSnapAllUtility @ 0x140417240 (PpmCheckSnapAllUtility.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     PpmIdleSnapConcurrency @ 0x140418B30 (PpmIdleSnapConcurrency.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

unsigned __int64 PpmParkSnapNodeStatistics()
{
  unsigned __int64 result; // rax
  unsigned __int16 i; // si
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rbp
  LARGE_INTEGER PerformanceCounter; // r14
  bool v6; // r15
  unsigned __int64 v7; // r8
  __int64 v8; // rax
  void *v9; // rcx
  size_t v10; // r8
  __int64 v11; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v14; // eax
  __int64 v15; // rdx
  unsigned __int32 v16; // ett
  unsigned __int8 j; // bp
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  for ( i = 0; i < (unsigned int)PpmParkNumNodes; result = i )
  {
    v2 = PpmParkNodes;
    v3 = 1264LL * i;
    if ( *(_WORD *)(v3 + PpmParkNodes + 8) )
    {
      v4 = *(_QWORD *)(v3 + PpmParkNodes + 1072);
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v6 = KeDisableInterrupts();
      KxAcquireSpinLock((PKSPIN_LOCK)v4);
      v7 = *(_QWORD *)(v4 + 16);
      if ( PerformanceCounter.QuadPart > v7 )
      {
        v8 = *(unsigned int *)(v4 + 12);
        *(LARGE_INTEGER *)(v4 + 16) = PerformanceCounter;
        *(_QWORD *)(v4 + 24) += PerformanceCounter.QuadPart - v7;
        *(_QWORD *)(v4 + 8 * v8 + 328) += PerformanceCounter.QuadPart - v7;
      }
      v9 = *(void **)(v3 + v2 + 1080);
      v10 = 8LL * *(unsigned int *)(v3 + v2 + 1128);
      *(_QWORD *)(v3 + v2 + 1104) = *(_QWORD *)(v4 + 24);
      memmove(v9, (const void *)(v4 + 328), v10);
      KxReleaseSpinLock((PKSPIN_LOCK)v4);
      if ( v6 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v14 = *SchedulerAssist;
          do
          {
            v15 = v14;
            LODWORD(v15) = v14 & 0xFFDFFFFF;
            v16 = v14;
            v14 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v14 & 0xFFDFFFFF, v14);
          }
          while ( v16 != v14 );
          if ( (v14 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb, v15, SchedulerAssist, v11);
        }
        _enable();
      }
      if ( *(_BYTE *)(v3 + v2 + 1153) )
      {
        for ( j = 0; j < *(_BYTE *)(v3 + v2 + 10); ++j )
          PpmIdleSnapConcurrency(*(PKSPIN_LOCK *)(624LL * j + *(_QWORD *)(v3 + v2 + 1256) + 552));
      }
    }
    ++i;
  }
  return result;
}
