/*
 * XREFs of RtlpAcquireSRWLockExclusiveContended @ 0x18002B280
 * Callers:
 *     RtlpHeapTrkInterceptor @ 0x1800117C0 (RtlpHeapTrkInterceptor.c)
 *     RtlpHpLfhOwnerCompact @ 0x180016790 (RtlpHpLfhOwnerCompact.c)
 *     TppWaitCompletion @ 0x18002BB30 (TppWaitCompletion.c)
 *     RtlSleepConditionVariableSRW @ 0x18002CAF0 (RtlSleepConditionVariableSRW.c)
 *     TppBarrierAdjust @ 0x18002D290 (TppBarrierAdjust.c)
 *     LdrpLoadDependentModuleInternal @ 0x18003AF90 (LdrpLoadDependentModuleInternal.c)
 *     TppWorkerFindTask @ 0x18003D370 (TppWorkerFindTask.c)
 *     LdrSetDllDirectory @ 0x18003DCA0 (LdrSetDllDirectory.c)
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     TppCallbackEpilog @ 0x18003FD40 (TppCallbackEpilog.c)
 *     TppWorkPost @ 0x180041770 (TppWorkPost.c)
 *     RtlpCallVectoredHandlers @ 0x18004CF90 (RtlpCallVectoredHandlers.c)
 *     TppCleanupGroupMemberDestroy @ 0x18004D650 (TppCleanupGroupMemberDestroy.c)
 *     TppCleanupGroupMemberInitialize @ 0x18004DA10 (TppCleanupGroupMemberInitialize.c)
 *     TpSetWaitEx @ 0x18004F8E0 (TpSetWaitEx.c)
 *     LdrpBuildForwarderLink @ 0x180050D90 (LdrpBuildForwarderLink.c)
 *     LdrpReleaseDllPath @ 0x180051400 (LdrpReleaseDllPath.c)
 *     LdrpFastpthReloadedDll @ 0x180052D40 (LdrpFastpthReloadedDll.c)
 *     TppWorkCallbackPrologRelease @ 0x180053AB0 (TppWorkCallbackPrologRelease.c)
 *     TppAlpcpExecuteCallback @ 0x180054320 (TppAlpcpExecuteCallback.c)
 *     LdrpIncrementModuleLoadCount @ 0x180054D50 (LdrpIncrementModuleLoadCount.c)
 *     LdrpDereferenceModule @ 0x180054E10 (LdrpDereferenceModule.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x180055460 (LdrpDecrementModuleLoadCountEx.c)
 *     TpPostTask @ 0x180066A90 (TpPostTask.c)
 *     TpSetTimerEx @ 0x180069020 (TpSetTimerEx.c)
 *     RtlpHpSegMgrCommit @ 0x180069E10 (RtlpHpSegMgrCommit.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x18006A960 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpWalkLFHBlock @ 0x180073AB0 (RtlpWalkLFHBlock.c)
 *     RtlInitializeResource @ 0x180079E50 (RtlInitializeResource.c)
 *     RtlpEnterCriticalSectionContended @ 0x18007A2D0 (RtlpEnterCriticalSectionContended.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x18007AED0 (RtlpAddDebugInfoToCriticalSection.c)
 *     LdrProtectMrdata @ 0x180081980 (LdrProtectMrdata.c)
 *     LdrpMapDllWithSectionHandle @ 0x180084430 (LdrpMapDllWithSectionHandle.c)
 *     LdrGetProcedureAddressForCaller @ 0x180085C00 (LdrGetProcedureAddressForCaller.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1800B2AA0 (RtlpHpLfhSlotAllocateSlow.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x1800BBA10 (LdrpFindOrPrepareLoadingModule.c)
 *     AlpcGetMessageFromCompletionList @ 0x1800C2C30 (AlpcGetMessageFromCompletionList.c)
 *     TppQueueRemoveHead @ 0x1800CB8F0 (TppQueueRemoveHead.c)
 *     LdrpCondenseGraphRecurse @ 0x1801191F0 (LdrpCondenseGraphRecurse.c)
 *     LdrpMapAndSnapDependency @ 0x18011A660 (LdrpMapAndSnapDependency.c)
 *     LdrpUnloadNode @ 0x18011BEB0 (LdrpUnloadNode.c)
 *     LdrpMapDllSearchPath @ 0x18011C9D0 (LdrpMapDllSearchPath.c)
 * Callees:
 *     RtlBackoff @ 0x180013BB0 (RtlBackoff.c)
 *     ZwTerminateProcess @ 0x18015F4C0 (ZwTerminateProcess.c)
 *     ZwAlertThreadByThreadIdEx @ 0x18015FD70 (ZwAlertThreadByThreadIdEx.c)
 *     NtWaitForAlertByThreadId @ 0x180162BB0 (NtWaitForAlertByThreadId.c)
 */

signed __int64 __fastcall RtlpAcquireSRWLockExclusiveContended(volatile signed __int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // rdi
  bool v4; // dl
  unsigned __int64 v5; // rcx
  bool v6; // zf
  signed __int64 v7; // rax
  _QWORD *v8; // rbx
  _QWORD *v9; // rdx
  __int64 v10; // rdx
  signed __int64 v11; // rax
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r8
  __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  int i; // edx
  signed __int64 result; // rax
  volatile signed __int64 *v20; // rbp
  unsigned __int64 v21; // r8
  _QWORD *v22; // rbx
  __int64 v23; // rdx
  _QWORD *v24; // rax
  __int64 v25; // rax
  signed __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rcx
  signed __int64 v29; // rax
  struct _TEB *v30; // rcx
  __int64 WowTebOffset; // rax
  __int64 v32; // rcx
  __int128 v33; // [rsp+20h] [rbp-58h] BYREF
  __int128 v34; // [rsp+30h] [rbp-48h]
  __int128 v35; // [rsp+40h] [rbp-38h] BYREF
  __int64 v36; // [rsp+88h] [rbp+10h] BYREF

  v36 = a2;
  v2 = *a1;
  v33 = 0LL;
  LODWORD(v36) = 0;
  v34 = 0LL;
  v35 = 0LL;
  while ( (v2 & 1) != 0 )
  {
    if ( byte_1801CB8C8 )
      goto LABEL_57;
    if ( UseWOW64 )
    {
      v30 = NtCurrentTeb();
      WowTebOffset = v30->WowTebOffset;
      if ( (_DWORD)WowTebOffset )
      {
        if ( (int)WowTebOffset >= 0 )
          v30 = (struct _TEB *)((char *)v30 + WowTebOffset);
      }
      else
      {
        v30 = 0LL;
      }
      v32 = *(unsigned int *)(LODWORD(v30->NtTib.Self) + 0xCLL);
      if ( v32 )
      {
        if ( *(_BYTE *)(v32 + 40) )
LABEL_57:
          ZwTerminateProcess(-1LL, 3221225547LL);
      }
    }
    v4 = 0;
    *((_QWORD *)&v34 + 1) = NtCurrentTeb()->ClientId.UniqueThread;
    DWORD1(v35) = 3;
    *(_QWORD *)&v34 = 0LL;
    if ( (v2 & 2) != 0 )
    {
      *((_QWORD *)&v33 + 1) = 0LL;
      LODWORD(v35) = -1;
      *(_QWORD *)&v33 = v2 & 0xFFFFFFFFFFFFFFF0uLL;
      v5 = (unsigned __int64)&v33 | v2 & 8 | 7;
      v4 = (v2 & 4) == 0;
    }
    else
    {
      v15 = 11LL;
      *((_QWORD *)&v33 + 1) = &v33;
      LODWORD(v35) = v2 >> 4;
      if ( (int)v35 <= 1 )
        v15 = 3LL;
      v5 = (unsigned __int64)&v33 | v15;
      if ( !(unsigned int)(v2 >> 4) )
        LODWORD(v35) = -2;
    }
    v7 = _InterlockedCompareExchange64(a1, v5, v2);
    v6 = v2 == v7;
    v2 = v7;
    if ( v6 )
    {
      if ( v4 )
      {
        while ( (v5 & 1) != 0 )
        {
          v8 = (_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF0uLL);
          if ( !*(_QWORD *)((v5 & 0xFFFFFFFFFFFFFFF0uLL) + 8) )
          {
            do
            {
              v9 = v8;
              v8 = (_QWORD *)*v8;
              v8[2] = v9;
              v10 = v8[1];
            }
            while ( !v10 );
            if ( v8 != (_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF0uLL) )
              *(_QWORD *)((v5 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v10;
          }
          v11 = _InterlockedCompareExchange64(a1, v5 - 4, v5);
          v6 = v5 == v11;
          v5 = v11;
          if ( v6 )
            goto LABEL_15;
        }
        v20 = a1;
        while ( 1 )
        {
          while ( (v5 & 1) != 0 )
          {
            v29 = _InterlockedCompareExchange64(a1, v5 - 4, v5);
            v6 = v5 == v29;
            v5 = v29;
            if ( v6 )
              goto LABEL_15;
          }
          v21 = v5 & 0xFFFFFFFFFFFFFFF0uLL;
          v22 = (_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF0uLL);
          v23 = *(_QWORD *)((v5 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
          if ( !v23 )
          {
            do
            {
              v24 = v22;
              v22 = (_QWORD *)*v22;
              v22[2] = v24;
              v23 = v22[1];
            }
            while ( !v23 );
            if ( v22 != (_QWORD *)v21 )
              *(_QWORD *)((v5 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v23;
          }
          if ( (*(_DWORD *)(v23 + 36) & 1) != 0 )
          {
            v25 = *(_QWORD *)(v23 + 16);
            if ( v25 )
              break;
          }
          v20 = 0LL;
          v26 = _InterlockedCompareExchange64(a1, 0LL, v5);
          v6 = v5 == v26;
          v5 = v26;
          if ( v6 )
            goto LABEL_46;
        }
        *(_QWORD *)((v5 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v25;
        *(_QWORD *)(v23 + 16) = 0LL;
        _InterlockedAnd64(a1, 0xFFFFFFFFFFFFFFFBuLL);
        do
        {
LABEL_46:
          v27 = *(_QWORD *)(v23 + 16);
          v28 = *(_QWORD *)(v23 + 24);
          _interlockedbittestandset((volatile signed __int32 *)(v23 + 36), 2u);
          if ( !_interlockedbittestandreset((volatile signed __int32 *)(v23 + 36), 1u) )
            ZwAlertThreadByThreadIdEx(v28, v20, v21);
          v23 = v27;
        }
        while ( v27 );
      }
LABEL_15:
      if ( MEMORY[0x7FFE036A] > 1u )
      {
        if ( MEMORY[0x7FFE0297] )
        {
          v12 = __rdtsc();
          v13 = v12 + (unsigned int)SRWLockSpinCycleCount;
          while ( 1 )
          {
            __asm { monitorx rax, rcx, rdx }
            if ( (BYTE4(v35) & 2) == 0 )
              break;
            v16 = v12;
            v17 = __rdtsc();
            v12 = v17;
            if ( v17 < v16 || v17 >= v13 )
              break;
            __asm { mwaitx  rax, rcx, rbx }
          }
        }
        else
        {
          for ( i = 0; (BYTE4(v35) & 2) != 0 && i != SRWLockSpinCycleCount / (unsigned int)MEMORY[0x7FFE02D6]; ++i )
            _mm_pause();
        }
      }
      if ( _interlockedbittestandreset((volatile signed __int32 *)&v35 + 1, 1u) )
      {
        do
          NtWaitForAlertByThreadId(a1, 0LL);
        while ( (BYTE4(v35) & 4) == 0 );
      }
    }
    else
    {
LABEL_59:
      RtlBackoff((unsigned int *)&v36);
      _m_prefetchw((const void *)a1);
      v2 = *a1;
    }
  }
  result = _InterlockedCompareExchange64(a1, v2 + 1, v2);
  if ( v2 != result )
    goto LABEL_59;
  return result;
}
