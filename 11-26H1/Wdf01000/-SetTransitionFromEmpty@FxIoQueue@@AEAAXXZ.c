/*
 * XREFs of ?SetTransitionFromEmpty@FxIoQueue@@AEAAXXZ @ 0x140031FD0
 * Callers:
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x14002F7F0 (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 *     ?ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z @ 0x14002FF74 (-ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z.c)
 *     ?ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z @ 0x140030910 (-ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z.c)
 *     ?InsertNewRequest@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x140031030 (-InsertNewRequest@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 *     ?InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x1400312A0 (-InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 *     ?CheckTransitionFromEmpty@FxIoQueue@@AEAAXXZ @ 0x1400314F0 (-CheckTransitionFromEmpty@FxIoQueue@@AEAAXXZ.c)
 *     imp_WdfRequestForwardToIoQueue @ 0x140032D80 (imp_WdfRequestForwardToIoQueue.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1400339D0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z @ 0x14004F760 (-QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z.c)
 * Callees:
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1400205B8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1400328C0 (WPP_IFR_SF_qqLL.c)
 *     ?ReleaseAndRestore@FxIoContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1400573E0 (-ReleaseAndRestore@FxIoContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 *     ?StoreAndReferenceMemory@FxRequestContext@@UEAAXPEAUFxRequestBuffer@@@Z @ 0x14005C350 (-StoreAndReferenceMemory@FxRequestContext@@UEAAXPEAUFxRequestBuffer@@@Z.c)
 *     ?CopyParameters@FxIoContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x140061CB0 (-CopyParameters@FxIoContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxIoQueue::SetTransitionFromEmpty(FxIoQueue *this)
{
  bool v1; // zf
  __int64 v3; // rdx
  unsigned int v4; // r12d
  __int64 v5; // rsi
  unsigned __int64 *v6; // rbp
  KIRQL v7; // al
  char v8; // cl
  KIRQL v9; // r15
  __int64 v10; // rax
  __int64 v11; // r14
  const FxIdleStateTable *v12; // r8
  unsigned int i; // eax
  __int64 v14; // rdx
  int v15; // edi
  FxTagTracker *v16; // rcx
  unsigned int _a3; // edi
  __int64 v18; // rcx
  const void *_a1; // rdx
  char v20; // al
  void (__fastcall *v21)(FxRequestContext *__hidden, struct FxRequestBuffer *); // rax
  KIRQL v22; // [rsp+80h] [rbp+8h]

  v1 = this->m_IsDevicePowerPolicyOwner == 0;
  this->m_TransitionFromEmpty = 1;
  this->m_ForceTransitionFromEmptyWhenAddingNewRequest = 0;
  if ( !v1 && this->m_PowerManaged && !this->m_PowerReferenced )
  {
    v3 = *(_QWORD *)(*(_QWORD *)&this->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized + 888LL);
    if ( v3 )
      _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 748), 11, 5);
    v4 = 0;
    v5 = *(_QWORD *)(*(_QWORD *)&this->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized + 888LL);
    v6 = (unsigned __int64 *)(v5 + 16);
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 16));
    v8 = *(_BYTE *)(v5 + 224);
    v9 = v7;
    v22 = v7;
    if ( (v8 & 0x10) != 0 )
    {
      v15 = -1073741101;
    }
    else if ( (v8 & 0x20) != 0 )
    {
      v10 = *(unsigned __int8 *)(v5 + 225);
      v4 = ++*(_DWORD *)(v5 + 24);
      v11 = *(_QWORD *)(v5 + 624);
      *(_DWORD *)(v5 + 4 * v10 + 232) = 512;
      *(_BYTE *)(v5 + 225) = (*(_BYTE *)(v5 + 225) + 1) & 7;
      v12 = &FxPowerIdleMachine::m_StateTable[*(int *)(v5 + 228)];
      for ( i = 0; i < FxPowerIdleMachine::m_StateTable[*(int *)(v5 + 228) - 1].TargetStatesCount; ++i )
      {
        v14 = i;
        if ( v12[-1].TargetStates[v14].PowerIdleEvent == PowerIdleEventIoIncrement )
        {
          _mm_lfence();
          for ( _a3 = v12[-1].TargetStates[v14].PowerIdleState; _a3 != 35; _a3 = ((__int64 (__fastcall *)(__int64))v21)(v5) )
          {
            v18 = *(_QWORD *)(v11 + 96);
            _a1 = (const void *)(v18 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !*(_WORD *)(v18 + 10) )
              _a1 = 0LL;
            WPP_IFR_SF_qqLL(
              *(_FX_DRIVER_GLOBALS **)(v11 + 16),
              4u,
              0x15u,
              0x11u,
              WPP_PowerIdleStateMachine_cpp_Traceguids,
              _a1,
              *(const void **)(v18 + 144),
              _a3,
              *(_DWORD *)(v5 + 228));
            *(_DWORD *)(v5 + 4LL * *(unsigned __int8 *)(v5 + 226) + 264) = _a3;
            v20 = *(_BYTE *)(v5 + 226) + 1;
            *(_DWORD *)(v5 + 228) = _a3;
            *(_BYTE *)(v5 + 226) = v20 & 7;
            v21 = funcs_140011152[3 * (int)_a3];
            if ( !v21 )
              break;
          }
          break;
        }
      }
      v9 = v22;
      v15 = 259;
      if ( KeReadStateEvent((PRKEVENT)(v5 + 192)) )
        v15 = 0;
      v6 = (unsigned __int64 *)(v5 + 16);
    }
    else
    {
      v15 = -1073741101;
    }
    KeReleaseSpinLock(v6, v9);
    v16 = *(FxTagTracker **)(v5 + 32);
    if ( v16 && (!v15 || v15 == 259) )
      FxTagTracker::UpdateTagHistory(v16, 0LL, 0, 0LL, TagAddRef, v4);
    if ( v15 >= 0 )
      this->m_PowerReferenced = 1;
  }
}
