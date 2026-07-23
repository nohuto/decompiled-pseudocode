/*
 * XREFs of KsepGetShimsForDriver @ 0x140A3865C
 * Callers:
 *     KseDriverLoadImage @ 0x140A38A18 (KseDriverLoadImage.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     KsepLogInfo @ 0x1404C6324 (KsepLogInfo.c)
 *     KsepPoolAllocatePaged @ 0x1404D7BFC (KsepPoolAllocatePaged.c)
 *     KsepDebugPrint @ 0x140508694 (KsepDebugPrint.c)
 *     KsepResolveApplicableShimsForDriver @ 0x1407C0E34 (KsepResolveApplicableShimsForDriver.c)
 *     KsepDbGetDriverShims @ 0x1409D8DF4 (KsepDbGetDriverShims.c)
 *     KsepDbFreeDriverShims @ 0x1409D926C (KsepDbFreeDriverShims.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140A38400 (KsepEngineGetShimsFromRegistry.c)
 *     KsepIsModuleShimmed @ 0x140A388F4 (KsepIsModuleShimmed.c)
 */

__int64 __fastcall KsepGetShimsForDriver(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _QWORD *a5,
        unsigned int *a6)
{
  __int64 v8; // r14
  int ShimsFromRegistry; // edi
  __int64 v11; // r8
  struct _KLOCK_ENTRIES *v12; // r9
  _QWORD *v13; // rsi
  unsigned int v14; // ebp
  __int64 v16; // rcx
  __int64 Paged; // rax
  struct _KLOCK_ENTRIES *v18; // r9
  _QWORD *v19; // r14
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v21; // rax
  void *v22; // rdx
  AutoBoost *v23; // r15
  _QWORD *v24; // rax
  unsigned int v25; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v26[64]; // [rsp+38h] [rbp-40h] BYREF

  *(_QWORD *)v26 = 0LL;
  v8 = a1;
  v25 = 0;
  *a5 = 0LL;
  *a6 = 0;
  *(_QWORD *)&v26[8] = 0LL;
  if ( !(unsigned int)KsepIsModuleShimmed(&KseEngine, a3, &v26[8]) )
  {
    ShimsFromRegistry = KsepEngineGetShimsFromRegistry((__int64)&KseEngine, v8, v26, &v25);
    if ( ShimsFromRegistry == -1073741275 )
      ShimsFromRegistry = KsepDbGetDriverShims(a2, a3, a4, (struct _KLOCK_ENTRIES *)v26, &v25);
    v13 = *(_QWORD **)v26;
    v14 = v25;
    if ( ShimsFromRegistry < 0 )
      goto LABEL_5;
    ShimsFromRegistry = KsepResolveApplicableShimsForDriver(*(__int64 *)v26, v25, v11, v12);
    if ( ShimsFromRegistry >= 0 )
    {
      Paged = KsepPoolAllocatePaged();
      v19 = (_QWORD *)Paged;
      if ( Paged )
      {
        *(_QWORD *)(Paged + 16) = a3;
        *(_QWORD *)(Paged + 32) = v13;
        *(_DWORD *)(Paged + 24) = v14;
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v21 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140E66D40, 0LL, 0LL, v18);
        v23 = v21;
        if ( _interlockedbittestandset64((volatile signed __int32 *)&stru_140E66D40, 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140E66D40, v21, (__int64)&stru_140E66D40);
        if ( v23 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v23, v22);
          else
            *((_BYTE *)v23 + 10) = 1;
        }
        v24 = (_QWORD *)qword_140E66D38;
        if ( *(_UNKNOWN **)qword_140E66D38 != &unk_140E66D30 )
          __fastfail(3u);
        *v19 = &unk_140E66D30;
        v19[1] = v24;
        *v24 = v19;
        qword_140E66D38 = (__int64)v19;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140E66D40, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&stru_140E66D40.Header.Lock);
        KeAbPostRelease((unsigned __int64)&stru_140E66D40);
        KeLeaveCriticalRegion();
        v8 = a1;
LABEL_5:
        *a5 = v13;
        *a6 = v14;
        goto LABEL_6;
      }
      v8 = a1;
      ShimsFromRegistry = -1073741670;
    }
    if ( !v13 )
      return (unsigned int)ShimsFromRegistry;
    if ( v14 )
      KsepDbFreeDriverShims(v13, v14);
LABEL_6:
    if ( ShimsFromRegistry >= 0 )
    {
      *(_QWORD *)&AlpcpMessageLogLock.PriorityFloorCounts[8
                                                        * (((unsigned __int8)_InterlockedExchangeAdd(
                                                                               &KsepHistoryMessagesIndex,
                                                                               1u)
                                                          + 1) & 0x3F)] = 459106LL;
      if ( ((__int64)stru_140E66D40.StackBase & 1) != 0 )
        KsepDebugPrint(7LL, (int)"KSE: got shim(s) for driver [%ws]\n", *(_QWORD *)(v8 + 8));
      KsepLogInfo(7LL, (__int64)"KSE: got shim(s) for driver [%ws]\n", *(_QWORD *)(v8 + 8));
    }
    return (unsigned int)ShimsFromRegistry;
  }
  v16 = *(_QWORD *)&v26[8];
  *a5 = *(_QWORD *)(*(_QWORD *)&v26[8] + 32LL);
  *a6 = *(_DWORD *)(v16 + 24);
  return 0LL;
}
