/*
 * XREFs of KseDriverUnloadImage @ 0x140A380BC
 * Callers:
 *     MiUnloadSystemImage @ 0x140AC92D8 (MiUnloadSystemImage.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     KsepLogInfo @ 0x1404C6324 (KsepLogInfo.c)
 *     KsepPoolFreePaged @ 0x1404DC150 (KsepPoolFreePaged.c)
 *     KsepDebugPrint @ 0x140508694 (KsepDebugPrint.c)
 *     RtlAssert @ 0x14061CB00 (RtlAssert.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     KsepDbFreeDriverShims @ 0x1409D926C (KsepDbFreeDriverShims.c)
 *     KsepIsModuleShimmed @ 0x140A388F4 (KsepIsModuleShimmed.c)
 */

__int64 __fastcall KseDriverUnloadImage(__int64 a1)
{
  struct _KLOCK_ENTRIES *v3; // r9
  _DWORD *v4; // rdi
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v6; // rax
  void *v7; // rdx
  signed __int8 v8; // cf
  AutoBoost *v9; // rsi
  unsigned int v10; // eax
  __int64 i; // rsi
  __int64 v12; // rdx
  __int64 v13; // rbp
  __int64 *v14; // rsi
  __int64 v15; // rax
  int v16; // eax
  int v17; // ecx
  __int64 *v18; // rcx
  __int64 **v19; // rax
  _QWORD *v20; // rdx
  void **v21; // rax
  unsigned int v22; // edx
  __int64 j; // rsi
  __int64 v24; // rbx
  void *v25; // rcx
  _DWORD *v26; // [rsp+50h] [rbp+8h] BYREF

  v26 = 0LL;
  if ( !a1 )
    return 3221225485LL;
  if ( dword_140E66D14 != 2 || (KseEngine & 1) != 0 )
    return 3221225659LL;
  if ( (unsigned int)KsepIsModuleShimmed(&KseEngine, *(_QWORD *)(a1 + 48), &v26) )
  {
    v4 = v26;
    if ( v26 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v6 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140E66D40, 0LL, 0LL, v3);
      v8 = _interlockedbittestandset64(&stru_140E66D40.Header.Lock, 0LL);
      v9 = v6;
      if ( v8 )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140E66D40, v6, (__int64)&stru_140E66D40);
      if ( v9 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v9, v7);
        else
          *((_BYTE *)v9 + 10) = 1;
      }
      v10 = v4[6];
      for ( i = 0LL; (unsigned int)i < v10; i = (unsigned int)(i + 1) )
      {
        v12 = *(_QWORD *)(*((_QWORD *)v4 + 4) + 80 * i + 72);
        if ( (*(_DWORD *)(v12 + 28) & 4) == 0 && *(_QWORD *)(*(_QWORD *)(v12 + 16) + 32LL) )
          guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 48), v12);
        v10 = v4[6];
      }
      v13 = 0LL;
      if ( v10 )
      {
        do
        {
          v14 = *(__int64 **)(*((_QWORD *)v4 + 4) + 80 * v13 + 72);
          if ( !*((_DWORD *)v14 + 6) )
          {
            v15 = ((unsigned __int8)_InterlockedExchangeAdd(
                                      (volatile signed __int32 *)&AlpcpMessageLogLock.AbWaitEntryCount,
                                      1u)
                 + 1) & 0x3F;
            *(&AlpcpMessageLogLock.Timer.DueTime.HighPart + 2 * v15) = -1073740768;
            *(&AlpcpMessageLogLock.Timer.DueTime.LowPart + 2 * v15) = 460180;
            if ( ((__int64)stru_140E66D40.StackBase & 4) != 0 )
              RtlAssert("RegisteredShim->RefCount > 0", "minkernel\\ntos\\kshim\\kseloader.c", 0x594u, 0LL);
          }
          v16 = *((_DWORD *)v14 + 7);
          v17 = *((_DWORD *)v14 + 6) - 1;
          *((_DWORD *)v14 + 6) = v17;
          if ( (v16 & 4) != 0 && !v17 )
          {
            v18 = (__int64 *)*v14;
            if ( *(__int64 **)(*v14 + 8) != v14 )
              goto LABEL_46;
            v19 = (__int64 **)v14[1];
            if ( *v19 != v14 )
              goto LABEL_46;
            *v19 = v18;
            v18[1] = (__int64)v19;
          }
          v13 = (unsigned int)(v13 + 1);
        }
        while ( (unsigned int)v13 < v4[6] );
      }
      v20 = *(_QWORD **)v4;
      if ( *(_DWORD **)(*(_QWORD *)v4 + 8LL) != v4 || (v21 = (void **)*((_QWORD *)v4 + 1), *v21 != v4) )
LABEL_46:
        __fastfail(3u);
      *v21 = v20;
      v20[1] = v21;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140E66D40, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&stru_140E66D40.Header.Lock);
      KeAbPostRelease((unsigned __int64)&stru_140E66D40);
      KeLeaveCriticalRegion();
      v22 = v4[6];
      for ( j = 0LL; (unsigned int)j < v22; j = (unsigned int)(j + 1) )
      {
        v24 = *(_QWORD *)(*((_QWORD *)v4 + 4) + 80 * j + 72);
        v25 = *(void **)(v24 + 32);
        if ( v25 )
          ObfDereferenceObject(v25);
        if ( (*(_DWORD *)(v24 + 28) & 4) != 0 && !*(_DWORD *)(v24 + 24) )
        {
          KsepPoolFreePaged((void *)v24);
          *(_QWORD *)&AlpcpMessageLogLock.PriorityFloorCounts[8
                                                            * (((unsigned __int8)_InterlockedExchangeAdd(
                                                                                   &KsepHistoryMessagesIndex,
                                                                                   1u)
                                                              + 1) & 0x3F)] = 460237LL;
          if ( ((__int64)stru_140E66D40.StackBase & 1) != 0 )
            KsepDebugPrint(
              5LL,
              (int)"KSE: Cleaned up dangling shim object [0x%08X] (unregistered while refcount >0)\n",
              v24);
          KsepLogInfo(
            5LL,
            (__int64)"KSE: Cleaned up dangling shim object [0x%08X] (unregistered while refcount >0)\n",
            v24);
        }
        v22 = v4[6];
      }
      KsepDbFreeDriverShims(*((_QWORD **)v4 + 4), v22);
      KsepPoolFreePaged(v4);
      *(_QWORD *)&AlpcpMessageLogLock.PriorityFloorCounts[8
                                                        * (((unsigned __int8)_InterlockedExchangeAdd(
                                                                               &KsepHistoryMessagesIndex,
                                                                               1u)
                                                          + 1) & 0x3F)] = 460245LL;
      if ( ((__int64)stru_140E66D40.StackBase & 1) != 0 )
        KsepDebugPrint(5LL, (int)"KSE: Shimmed driver unload notification processed\n");
      KsepLogInfo(5LL, (__int64)"KSE: Shimmed driver unload notification processed\n");
    }
  }
  return 0LL;
}
