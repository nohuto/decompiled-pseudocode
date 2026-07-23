/*
 * XREFs of PopPepIdleTimeoutRoutine @ 0x14047D3E0
 * Callers:
 *     <none>
 * Callees:
 *     PopPepArmIdleTimer @ 0x14021C06C (PopPepArmIdleTimer.c)
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     PopPepPromoteActivities @ 0x1403BACA0 (PopPepPromoteActivities.c)
 *     PopPepRequestWork @ 0x1403BB1C8 (PopPepRequestWork.c)
 *     PopPepUpdateIdleState @ 0x1403BB6E8 (PopPepUpdateIdleState.c)
 *     PopPepComponentGetResidencyIdleState @ 0x14047D624 (PopPepComponentGetResidencyIdleState.c)
 */

void __fastcall PopPepIdleTimeoutRoutine(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // rax
  LegacyAutoBoost *v6; // rdi
  __int64 i; // rdi
  KIRQL v8; // r14
  __int64 v9; // rcx
  unsigned int v10; // ebp
  _DWORD *v11; // rax
  unsigned int v12; // esi
  __int64 v13; // r10
  __int64 v14; // rcx
  unsigned int v15; // r8d
  _DWORD *v16; // rax
  __int64 v17; // rax
  int ResidencyIdleState; // eax
  __int64 v19; // rcx
  __int64 v20; // r10

  v4 = MEMORY[0xFFFFF78000000008];
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&PopDirectedDripsDiagLock.PriorityFloorSummary, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64(
         (volatile signed __int64 *)&PopDirectedDripsDiagLock.PriorityFloorSummary,
         17LL,
         0LL) )
  {
    ExfAcquirePushLockSharedEx(
      (signed __int64 *)&PopDirectedDripsDiagLock.PriorityFloorSummary,
      0,
      v6,
      (struct _KTHREAD *)&PopDirectedDripsDiagLock.PriorityFloorSummary);
  }
  if ( v6 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v6 + 33) |= 2u;
    else
      *((_BYTE *)v6 + 10) = 1;
  }
  for ( i = *(_QWORD *)&PopDirectedDripsDiagLock.ForegroundLossTime;
        (unsigned int *)i != &PopDirectedDripsDiagLock.ForegroundLossTime;
        i = *(_QWORD *)i )
  {
    if ( (*(_BYTE *)(i + 16) & 1) == 0 )
    {
      v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(i + 64));
      if ( *(_BYTE *)(i + 136) )
      {
        v9 = *(unsigned int *)(i + 180);
        v10 = *(_DWORD *)(i + 120);
        if ( (_DWORD)v9 )
        {
          v11 = (_DWORD *)(i + 296);
          do
          {
            v10 += *v11;
            v11 += 52;
            --v9;
          }
          while ( v9 );
          v12 = 0;
          do
          {
            v13 = 208LL * v12;
            if ( *(_DWORD *)(i + v13 + 192 + 176) != *(_DWORD *)(i + v13 + 192 + 188) - 1
              && !**(_DWORD **)(v13 + i + 264)
              && !**(_DWORD **)(v13 + i + 272) )
            {
              v17 = *(_QWORD *)(v13 + i + 328);
              if ( v4 > v17 && (unsigned __int64)(v4 - v17) > *(_QWORD *)(v13 + i + 312) )
              {
                *(_QWORD *)(v13 + i + 312) = v4 - v17;
                ResidencyIdleState = PopPepComponentGetResidencyIdleState();
                if ( *(_DWORD *)(v20 + i + 352) != ResidencyIdleState )
                {
                  *(_DWORD *)(v20 + i + 352) = ResidencyIdleState;
                  PopPepUpdateIdleState(i, v19, 1);
                }
              }
            }
            ++v12;
          }
          while ( v12 < *(_DWORD *)(i + 180) );
        }
        PopPepPromoteActivities(i, 0LL, 3);
        v14 = *(unsigned int *)(i + 180);
        v15 = *(_DWORD *)(i + 120);
        if ( (_DWORD)v14 )
        {
          v16 = (_DWORD *)(i + 296);
          do
          {
            v15 += *v16;
            v16 += 52;
            --v14;
          }
          while ( v14 );
        }
        PopPepRequestWork(i, v10, v15);
      }
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(i + 64), v8);
    }
  }
  if ( _InterlockedCompareExchange64(
         (volatile signed __int64 *)&PopDirectedDripsDiagLock.PriorityFloorSummary,
         0LL,
         17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopDirectedDripsDiagLock.PriorityFloorSummary);
  KeAbPostRelease((unsigned __int64)&PopDirectedDripsDiagLock.PriorityFloorSummary);
  KeLeaveCriticalRegion();
  PopPepArmIdleTimer(1);
}
