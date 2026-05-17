/*
 * XREFs of TpSetTimerEx @ 0x180069020
 * Callers:
 *     RtlpHpLfhContextCompact @ 0x1800163FC (RtlpHpLfhContextCompact.c)
 *     RtlpHpLfhContextFree @ 0x180019DA0 (RtlpHpLfhContextFree.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x18003F520 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     RtlCreateTimer @ 0x1800674B0 (RtlCreateTimer.c)
 *     RtlDeleteTimer @ 0x180067850 (RtlDeleteTimer.c)
 *     TpSetTimer @ 0x180069010 (TpSetTimer.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x18006A960 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpVsCommitLimitCheck @ 0x18006CE50 (RtlpHpVsCommitLimitCheck.c)
 *     RtlpHpAllocateHeap @ 0x180071440 (RtlpHpAllocateHeap.c)
 *     RtlpHpLfhContextUpdateFreeCommitCount @ 0x180095998 (RtlpHpLfhContextUpdateFreeCommitCount.c)
 *     RtlpHpGCTimerSchedule @ 0x1800961E4 (RtlpHpGCTimerSchedule.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x180096580 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1800966D8 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpAllocateHeapSlow @ 0x180097E10 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpReallocMove @ 0x1800B1D30 (RtlpHpReallocMove.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1800B2AA0 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlUpdateTimer @ 0x1800F8740 (RtlUpdateTimer.c)
 *     RtlpWnfSetRetryTimer @ 0x180138F18 (RtlpWnfSetRetryTimer.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18002B280 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     TppETWTimerCancelled @ 0x180067DD0 (TppETWTimerCancelled.c)
 *     TppRaiseInvalidParameter @ 0x180067FF8 (TppRaiseInvalidParameter.c)
 *     TppPHExtractMin @ 0x1800689E0 (TppPHExtractMin.c)
 *     TppUpdateSubQueueTimer @ 0x180068BA0 (TppUpdateSubQueueTimer.c)
 *     TppSetTimer @ 0x180069440 (TppSetTimer.c)
 *     TpIsTimerSet @ 0x1800697E0 (TpIsTimerSet.c)
 *     NtWaitForAlertByThreadId @ 0x180162BB0 (NtWaitForAlertByThreadId.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TpSetTimerEx(__int64 a1, __int64 a2, int a3, int a4)
{
  int v5; // r13d
  int v8; // eax
  bool v9; // si
  volatile signed __int32 *v10; // rdi
  _QWORD *SchedulerSharedDataSlot; // rdx
  volatile signed __int64 *v12; // r15
  __int64 i; // rcx
  char v14; // al
  char v15; // r14
  unsigned __int8 v16; // r14
  __int64 v18; // r13
  __int64 v19; // r13
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // r8
  _QWORD *v26; // rcx
  __int64 v27; // r8
  _QWORD *v28; // r9
  __int64 v29; // rax
  __int64 *v30; // rcx
  __int64 v31; // r11
  __int64 v32; // rax
  _QWORD *v33; // rdx
  _QWORD *v34; // rax
  __int64 v35; // rdx
  _QWORD *v36; // r8
  signed __int64 v37; // rax
  signed __int64 v38; // rdx
  __int64 v39; // rdx
  _QWORD v40[2]; // [rsp+30h] [rbp-38h] BYREF

  v5 = a3;
  if ( a1 )
  {
    if ( !*(_BYTE *)(a1 + 353) )
    {
      v8 = *(_DWORD *)(a1 + 168);
      if ( (v8 & 0x10000) == 0
        && (v8 & 0x20000) == 0
        && *(__int64 (__fastcall ***)())(a1 + 8) == TppTimerpCleanupGroupMemberVFuncs
        && !NtCurrentPeb()->Ldr->ShutdownInProgress )
      {
        v9 = a2 != 0;
        v10 = (volatile signed __int32 *)(a1 + 240);
        SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
        v12 = (volatile signed __int64 *)(*(_QWORD *)(a1 + 144) + 112LL);
        if ( SchedulerSharedDataSlot )
        {
          for ( i = 0LL; (unsigned int)i < 8; i = (unsigned int)(i + 1) )
          {
            if ( !SchedulerSharedDataSlot[i] )
            {
              SchedulerSharedDataSlot[i] = v10;
              break;
            }
          }
        }
        if ( _interlockedbittestandset64(v10, 0LL) )
          RtlpAcquireSRWLockExclusiveContended((volatile signed __int64 *)(a1 + 240), (__int64)SchedulerSharedDataSlot);
        v14 = *(_BYTE *)(a1 + 354);
        v15 = (v14 & 2) != 0;
        if ( (v14 & 1) == 0 )
        {
          *(_QWORD *)(a1 + 328) = 0LL;
          if ( !a2 )
            RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
          v16 = 0;
LABEL_16:
          if ( a2 && *(_BYTE *)(a1 + 355) )
          {
            RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
            v9 = 0;
          }
          if ( v16 )
          {
            if ( !v9 )
            {
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
                (**(void (__fastcall ***)(__int64))(a1 + 8))(a1);
              return v16;
            }
          }
          else
          {
            if ( !v9 )
              return v16;
            if ( (unsigned int)TpIsTimerSet(a1) )
            {
LABEL_23:
              RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
              return v16;
            }
            _InterlockedIncrement((volatile signed __int32 *)a1);
          }
          TppSetTimer(a1, (_DWORD)v12, a2, v5, a4);
          goto LABEL_23;
        }
        v18 = 1LL;
        if ( (v14 & 2) == 0 )
          v18 = 16LL;
        v19 = (__int64)&v12[v18];
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v21 = (__int64)NtCurrentPeb()->SharedData + 556;
        else
          v21 = 2147353478LL;
        if ( *(_BYTE *)v21 )
          TppETWTimerCancelled(v19, a1);
        RtlAcquireSRWLockExclusive(v12, v20);
        if ( *(_BYTE *)(a1 + 352) )
        {
          v22 = *(_QWORD *)(v19 + 16);
          v23 = a1 + 248;
          if ( a1 + 248 != v22 )
          {
            v24 = *(_QWORD *)v23;
            if ( *(_QWORD *)(*(_QWORD *)v23 + 8LL) != v23 )
              goto LABEL_45;
            v25 = *(_QWORD **)(a1 + 256);
            if ( *v25 != v23
              || (*v25 = v24,
                  *(_QWORD *)(v24 + 8) = v25,
                  v26 = (_QWORD *)(a1 + 264),
                  *(_QWORD *)(a1 + 256) = a1 + 248,
                  *(_QWORD *)v23 = v23,
                  v27 = *(_QWORD *)(a1 + 264),
                  v28 = *(_QWORD **)(v19 + 16),
                  *(_QWORD *)(v27 + 8) != a1 + 264) )
            {
LABEL_45:
              __fastfail(3u);
            }
            v28[1] = v26;
            *v28 = v27;
            *(_QWORD *)(v27 + 8) = v28;
            *v26 = v28;
            v22 = a1 + 248;
            *(_QWORD *)(v19 + 16) = v23;
          }
          *(_QWORD *)(v22 + 32) = 0LL;
          TppPHExtractMin((__int64 *)(v19 + 16));
          v29 = *(_QWORD *)(v19 + 8);
          v30 = (__int64 *)(v19 + 8);
          v31 = a1 + 288;
          if ( a1 + 288 != v29 )
          {
            v32 = *(_QWORD *)v31;
            if ( *(_QWORD *)(*(_QWORD *)v31 + 8LL) != v31 )
              goto LABEL_45;
            v33 = *(_QWORD **)(a1 + 296);
            if ( *v33 != v31 )
              goto LABEL_45;
            *v33 = v32;
            *(_QWORD *)(v32 + 8) = v33;
            v34 = (_QWORD *)(a1 + 304);
            *(_QWORD *)(a1 + 296) = a1 + 288;
            *(_QWORD *)v31 = v31;
            v35 = *(_QWORD *)(a1 + 304);
            v36 = (_QWORD *)*v30;
            if ( *(_QWORD *)(v35 + 8) != a1 + 304 )
              goto LABEL_45;
            v36[1] = v34;
            *v36 = v35;
            *(_QWORD *)(v35 + 8) = v36;
            *v34 = v36;
            v29 = a1 + 288;
            *v30 = v31;
          }
          *(_QWORD *)(v29 + 32) = 0LL;
          TppPHExtractMin(v30);
          TppUpdateSubQueueTimer(v19, v15);
          *(_BYTE *)(a1 + 352) = 0;
          RtlReleaseSRWLockExclusive(v12);
          *(_DWORD *)(a1 + 348) = 0;
          *(_QWORD *)(a1 + 328) = 0LL;
          *(_BYTE *)(a1 + 354) = 0;
          if ( !a2 )
            RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
          v16 = 1;
        }
        else
        {
          RtlReleaseSRWLockExclusive(v12);
          *(_BYTE *)(a1 + 354) |= 4u;
          v40[1] = NtCurrentTeb()->ClientId.UniqueThread;
          _m_prefetchw((const void *)(a1 + 336));
          v37 = *(_QWORD *)(a1 + 336);
          do
          {
            v38 = v37;
            v40[0] = v37;
            v37 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 336), (signed __int64)v40, v37);
          }
          while ( v37 != v38 );
          RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
          NtWaitForAlertByThreadId(a1 + 336, 0LL);
          if ( a2 )
            RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 240), v39);
          v16 = 0;
        }
        v5 = a3;
        goto LABEL_16;
      }
    }
  }
  if ( a2 || !NtCurrentPeb()->Ldr->ShutdownInProgress )
    TppRaiseInvalidParameter();
  return 0LL;
}
