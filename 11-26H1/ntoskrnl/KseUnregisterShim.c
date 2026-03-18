/*
 * XREFs of KseUnregisterShim @ 0x1407BD330
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     KsepLogInfo @ 0x1404CCB84 (KsepLogInfo.c)
 *     KsepLogError @ 0x1404CCBBC (KsepLogError.c)
 *     KsepPoolFreePaged @ 0x1404E2A70 (KsepPoolFreePaged.c)
 *     KsepDebugPrint @ 0x14050EC24 (KsepDebugPrint.c)
 *     KsepIsShimRegistered @ 0x140B57464 (KsepIsShimRegistered.c)
 */

__int64 __fastcall KseUnregisterShim(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // r14d
  AutoBoost *v8; // rax
  void *v9; // rdx
  __int64 v10; // r8
  signed __int8 v11; // cf
  AutoBoost *v12; // rdi
  int IsShimRegistered; // eax
  __int64 *v14; // rdi
  unsigned int v15; // ebp
  __int64 v16; // rax
  __int64 *v17; // rcx
  __int64 **v18; // rax
  __int64 v19; // rax
  __int64 *v20; // [rsp+50h] [rbp+8h] BYREF

  v20 = 0LL;
  if ( !a1 )
    return 3221225485LL;
  if ( dword_140E66B04 != 2 )
    return 3221225473LL;
  CurrentThread = KeGetCurrentThread();
  v7 = 0;
  --CurrentThread->KernelApcDisable;
  v8 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140E66B30, 0LL, 0LL, a4);
  v11 = _interlockedbittestandset64(&stru_140E66B30.Header.Lock, 0LL);
  v12 = v8;
  if ( v11 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140E66B30, v8, (__int64)&stru_140E66B30);
  if ( v12 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v12, v9);
    else
      *((_BYTE *)v12 + 10) = 1;
  }
  IsShimRegistered = KsepIsShimRegistered(&KseEngine, *(_QWORD *)(a1 + 8), v10, &v20);
  v14 = v20;
  if ( IsShimRegistered )
  {
    if ( *((_DWORD *)v20 + 6) )
    {
      v15 = -1073741790;
      v16 = ((unsigned __int8)_InterlockedExchangeAdd(
                                (volatile signed __int32 *)&AlpcpMessageLogLock.PriorityFloorCounts[8],
                                1u)
           + 1) & 0x3F;
      *(_DWORD *)&AlpcpMessageLogLock.WaitBlockFill6[8 * v16 + 4] = -1073741790;
      *((_DWORD *)&AlpcpMessageLogLock.WaitBlock[0].WaitListEntry.Flink + 2 * v16) = 131445;
      if ( ((__int64)stru_140E66B30.StackBase & 2) != 0 )
        KsepDebugPrint(
          3LL,
          (int)"KSE: Ending shim [0x%08X] unregistration. Shim object [0x%08X] ref count is not 0.\n",
          **(unsigned int **)(a1 + 8),
          v14);
      KsepLogError(
        3LL,
        (__int64)"KSE: Ending shim [0x%08X] unregistration. Shim object [0x%08X] ref count is not 0.\n",
        **(_DWORD **)(a1 + 8),
        (_DWORD)v14);
      *((_DWORD *)v14 + 7) |= 4u;
    }
    else
    {
      v17 = (__int64 *)*v20;
      if ( *(__int64 **)(*v20 + 8) != v20 || (v18 = (__int64 **)v20[1], *v18 != v20) )
        __fastfail(3u);
      *v18 = v17;
      v7 = 1;
      v17[1] = (__int64)v18;
      *((_QWORD *)&AlpcpMessageLogLock.AbCompletedIoQoSBoostCount
      + (((unsigned __int8)_InterlockedExchangeAdd(
                             (volatile signed __int32 *)&AlpcpMessageLogLock.PriorityFloorCounts[12],
                             1u)
        + 1) & 0x3F)) = 131462LL;
      if ( ((__int64)stru_140E66B30.StackBase & 1) != 0 )
        KsepDebugPrint(3LL, (int)"KSE: Succeeded shim [0x%08X] unregistration.\n", **(unsigned int **)(a1 + 8));
      KsepLogInfo(3LL, (__int64)"KSE: Succeeded shim [0x%08X] unregistration.\n", **(_DWORD **)(a1 + 8));
      v15 = 0;
    }
  }
  else
  {
    v15 = -1073741772;
    v19 = ((unsigned __int8)_InterlockedExchangeAdd(
                              (volatile signed __int32 *)&AlpcpMessageLogLock.PriorityFloorCounts[8],
                              1u)
         + 1) & 0x3F;
    *(_DWORD *)&AlpcpMessageLogLock.WaitBlockFill6[8 * v19 + 4] = -1073741772;
    *((_DWORD *)&AlpcpMessageLogLock.WaitBlock[0].WaitListEntry.Flink + 2 * v19) = 131474;
    if ( ((__int64)stru_140E66B30.StackBase & 2) != 0 )
      KsepDebugPrint(
        3LL,
        (int)"KSE: Failed shim [0x%08X] unregistration. Shim not found.\n",
        **(unsigned int **)(a1 + 8));
    KsepLogError(3LL, (__int64)"KSE: Failed shim [0x%08X] unregistration. Shim not found.\n", **(_DWORD **)(a1 + 8));
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140E66B30, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140E66B30.Header.Lock);
  KeAbPostRelease((unsigned __int64)&stru_140E66B30);
  KeLeaveCriticalRegion();
  if ( v7 )
    KsepPoolFreePaged(v14);
  return v15;
}
