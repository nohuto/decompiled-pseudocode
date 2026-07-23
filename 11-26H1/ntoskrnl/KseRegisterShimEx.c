/*
 * XREFs of KseRegisterShimEx @ 0x1407C0040
 * Callers:
 *     KseRegisterShim @ 0x1407C0020 (KseRegisterShim.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     KsepLogInfo @ 0x1404C6324 (KsepLogInfo.c)
 *     KsepLogError @ 0x1404C635C (KsepLogError.c)
 *     KsepPoolAllocatePaged @ 0x1404D7BFC (KsepPoolAllocatePaged.c)
 *     KsepPoolFreePaged @ 0x1404DC150 (KsepPoolFreePaged.c)
 *     KsepDebugPrint @ 0x140508694 (KsepDebugPrint.c)
 *     KsepValidateShimProviderAndData @ 0x1407C0850 (KsepValidateShimProviderAndData.c)
 *     KsepGetLoadedModulesList @ 0x1407C16B4 (KsepGetLoadedModulesList.c)
 *     KsepIsShimRegistered @ 0x140B5A3B8 (KsepIsShimRegistered.c)
 */

__int64 __fastcall KseRegisterShimEx(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int LoadedModulesList; // ebx
  __int64 v9; // rax
  _QWORD *Paged; // rdi
  struct _KLOCK_ENTRIES *v11; // r9
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v13; // rax
  void *v14; // rdx
  __int64 v15; // r8
  AutoBoost *v16; // r14
  unsigned int **v17; // r14
  __int64 v18; // rax
  _QWORD *v19; // rax
  unsigned int **v20; // rdi
  void *retaddr; // [rsp+38h] [rbp+0h]
  void *v22; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  if ( dword_140E66D14 != 2 )
    return 3221225473LL;
  v22 = 0LL;
  LoadedModulesList = KsepGetLoadedModulesList(&v22);
  if ( LoadedModulesList >= 0 )
  {
    if ( (unsigned int)KsepValidateShimProviderAndData(retaddr, v22, a1) )
    {
      Paged = (_QWORD *)KsepPoolAllocatePaged();
      if ( Paged )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v13 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140E66D40, 0LL, 0LL, v11);
        v16 = v13;
        if ( _interlockedbittestandset64((volatile signed __int32 *)&stru_140E66D40, 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140E66D40, v13, (__int64)&stru_140E66D40);
        if ( v16 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v16, v14);
          else
            *((_BYTE *)v16 + 10) = 1;
        }
        v17 = (unsigned int **)(a1 + 8);
        if ( (unsigned int)KsepIsShimRegistered(&KseEngine, *(_QWORD *)(a1 + 8), v15, 0LL) )
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140E66D40, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&stru_140E66D40.Header.Lock);
          KeAbPostRelease((unsigned __int64)&stru_140E66D40);
          KeLeaveCriticalRegion();
          LoadedModulesList = -1073741771;
          v18 = ((unsigned __int8)_InterlockedExchangeAdd(
                                    (volatile signed __int32 *)&AlpcpMessageLogLock.AbWaitEntryCount,
                                    1u)
               + 1) & 0x3F;
          *(&AlpcpMessageLogLock.Timer.DueTime.HighPart + 2 * v18) = -1073741771;
          *(&AlpcpMessageLogLock.Timer.DueTime.LowPart + 2 * v18) = 131294;
          if ( ((__int64)stru_140E66D40.StackBase & 2) != 0 )
            KsepDebugPrint(2LL, (int)"KSE: Attempt to re-register shim [0x%08X]\n", **v17);
          KsepLogError(2LL, (__int64)"KSE: Attempt to re-register shim [0x%08X]\n", **v17);
          KsepPoolFreePaged(Paged);
        }
        else
        {
          Paged[2] = a1;
          *((_DWORD *)Paged + 6) = 0;
          *((_DWORD *)Paged + 7) = a3;
          Paged[4] = a4;
          v19 = (_QWORD *)qword_140E66D28;
          if ( *(_UNKNOWN **)qword_140E66D28 != &unk_140E66D20 )
            __fastfail(3u);
          *Paged = &unk_140E66D20;
          Paged[1] = v19;
          *v19 = Paged;
          qword_140E66D28 = (__int64)Paged;
          v20 = (unsigned int **)(a1 + 8);
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140E66D40, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          {
            ExfTryToWakePushLock((volatile signed __int64 *)&stru_140E66D40.Header.Lock);
            v20 = (unsigned int **)(a1 + 8);
          }
          KeAbPostRelease((unsigned __int64)&stru_140E66D40);
          KeLeaveCriticalRegion();
          LoadedModulesList = 0;
          *(_QWORD *)(a1 + 24) = &stru_140E66D40.Header.WaitListHead;
          *(_QWORD *)&AlpcpMessageLogLock.PriorityFloorCounts[8
                                                            * (((unsigned __int8)_InterlockedExchangeAdd(
                                                                                   &KsepHistoryMessagesIndex,
                                                                                   1u)
                                                              + 1) & 0x3F)] = 131337LL;
          if ( ((__int64)stru_140E66D40.StackBase & 1) != 0 )
          {
            KsepDebugPrint(2LL, (int)"KSE: Succeeded shim [0x%08X] registration\n", **v17);
            v17 = v20;
          }
          KsepLogInfo(2LL, (__int64)"KSE: Succeeded shim [0x%08X] registration\n", **v17);
        }
      }
      else
      {
        LoadedModulesList = -1073741670;
      }
    }
    else
    {
      LoadedModulesList = -1073741823;
      v9 = ((unsigned __int8)_InterlockedExchangeAdd(
                               (volatile signed __int32 *)&AlpcpMessageLogLock.AbWaitEntryCount,
                               1u)
          + 1) & 0x3F;
      *(&AlpcpMessageLogLock.Timer.DueTime.HighPart + 2 * v9) = -1073741823;
      *(&AlpcpMessageLogLock.Timer.DueTime.LowPart + 2 * v9) = 131261;
      if ( ((__int64)stru_140E66D40.StackBase & 2) != 0 )
        KsepDebugPrint(2LL, (int)"KSE: Shim [0x%08X] is not valid\n", **(unsigned int **)(a1 + 8));
      KsepLogError(2LL, (__int64)"KSE: Shim [0x%08X] is not valid\n", **(_DWORD **)(a1 + 8));
    }
  }
  if ( v22 )
    KsepPoolFreePaged(v22);
  return (unsigned int)LoadedModulesList;
}
