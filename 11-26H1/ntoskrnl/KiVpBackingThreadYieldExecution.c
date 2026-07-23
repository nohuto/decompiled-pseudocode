/*
 * XREFs of KiVpBackingThreadYieldExecution @ 0x140239F24
 * Callers:
 *     KeYieldExecution @ 0x14023A110 (KeYieldExecution.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiProcessDeferredReadyList @ 0x14037E6D0 (KiProcessDeferredReadyList.c)
 *     KiSetPriorityBoost @ 0x1403C9908 (KiSetPriorityBoost.c)
 */

char __fastcall KiVpBackingThreadYieldExecution(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v2; // ebp
  char v3; // di
  LARGE_INTEGER PerformanceCounter; // rax
  signed __int64 v5; // rdx
  LARGE_INTEGER v6; // r13
  _QWORD *i; // r14
  volatile signed __int32 *v8; // rbx
  __int64 v9; // r8
  int v11; // [rsp+70h] [rbp+8h] BYREF
  __int64 v12; // [rsp+78h] [rbp+10h] BYREF
  __int64 v13; // [rsp+80h] [rbp+18h]

  v1 = *(_QWORD *)(a1 + 544);
  v2 = 0;
  v12 = 0LL;
  v3 = 1;
  if ( ++*(_DWORD *)(a1 + 1160) >= (unsigned int)KiSchedulerAssistYieldCounterThreshold )
  {
    *(_DWORD *)(a1 + 1160) = 0;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v5 = *(_QWORD *)(v1 + 248);
    v6 = PerformanceCounter;
    if ( PerformanceCounter.QuadPart >= v5
      && v5 == _InterlockedCompareExchange64(
                 (volatile signed __int64 *)(v1 + 248),
                 (signed __int64)stru_140FC11F0.SavedApcState.ApcListHead[1].Blink + PerformanceCounter.QuadPart,
                 v5) )
    {
      ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v1 + 64));
      for ( i = *(_QWORD **)(v1 + 48); i != (_QWORD *)(v1 + 48); i = (_QWORD *)*i )
      {
        v8 = (volatile signed __int32 *)(i - 95);
        if ( (*(_DWORD *)(i - 80) & 0x400000) != 0
          && *((char *)v8 + 195) < KiVpThreadSystemWorkPriority
          && *((_BYTE *)v8 + 388) != 5 )
        {
          v13 = *((_QWORD *)v8 + 9);
          v11 = 0;
          while ( _interlockedbittestandset64(v8 + 16, 0LL) )
          {
            do
              KeYieldProcessorEx(&v11);
            while ( *((_QWORD *)v8 + 8) );
          }
          if ( (v8[30] & 0x400000) != 0
            && *((char *)v8 + 195) < KiVpThreadSystemWorkPriority
            && *((_BYTE *)v8 + 388) != 5 )
          {
            ++v2;
            KiSetPriorityBoost(
              (unsigned int)&v12,
              (_DWORD)i - 760,
              KiVpThreadSystemWorkPriority,
              v13,
              KiLockQuantumTarget);
            ++*((_DWORD *)v8 + 291);
            *((LARGE_INTEGER *)v8 + 146) = v6;
          }
          *((_QWORD *)v8 + 8) = 0LL;
        }
      }
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v1 + 64));
      if ( v2 )
      {
        LOBYTE(v9) = 2;
        KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v12, v9);
        ++*(_DWORD *)(v1 + 244);
        _InterlockedAdd((volatile signed __int32 *)&stru_140FC11F0.SavedApcStateFill[16], 1u);
        _InterlockedAdd((volatile signed __int32 *)&stru_140FC11F0.SavedApcStateFill[20], v2);
      }
      return 0;
    }
  }
  return v3;
}
