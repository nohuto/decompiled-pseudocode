/*
 * XREFs of RtlpAcquireSRWLockExclusiveContended @ 0x180016380
 * Callers:
 *     TppWaitCompletion @ 0x180016C30 (TppWaitCompletion.c)
 *     RtlSleepConditionVariableSRW @ 0x180017BF0 (RtlSleepConditionVariableSRW.c)
 *     TppBarrierAdjust @ 0x180018390 (TppBarrierAdjust.c)
 *     LdrpLoadDependentModuleInternal @ 0x180025500 (LdrpLoadDependentModuleInternal.c)
 *     TppWorkerFindTask @ 0x1800278E0 (TppWorkerFindTask.c)
 *     LdrSetDllDirectory @ 0x180028210 (LdrSetDllDirectory.c)
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     TppCallbackEpilog @ 0x18002A2B0 (TppCallbackEpilog.c)
 *     TppWorkPost @ 0x18002BCE0 (TppWorkPost.c)
 *     RtlpCallVectoredHandlers @ 0x180037510 (RtlpCallVectoredHandlers.c)
 *     TppCleanupGroupMemberDestroy @ 0x180037BD0 (TppCleanupGroupMemberDestroy.c)
 *     TppCleanupGroupMemberInitialize @ 0x180037F90 (TppCleanupGroupMemberInitialize.c)
 *     TpSetWaitEx @ 0x180039E60 (TpSetWaitEx.c)
 *     LdrpBuildForwarderLink @ 0x18003B310 (LdrpBuildForwarderLink.c)
 *     LdrpReleaseDllPath @ 0x18003B980 (LdrpReleaseDllPath.c)
 *     LdrpFastpthReloadedDll @ 0x18003D2C0 (LdrpFastpthReloadedDll.c)
 *     TppWorkCallbackPrologRelease @ 0x18003E030 (TppWorkCallbackPrologRelease.c)
 *     TppAlpcpExecuteCallback @ 0x18003E8A0 (TppAlpcpExecuteCallback.c)
 *     LdrpIncrementModuleLoadCount @ 0x18003F2D0 (LdrpIncrementModuleLoadCount.c)
 *     LdrpDereferenceModule @ 0x18003F390 (LdrpDereferenceModule.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x18003F9E0 (LdrpDecrementModuleLoadCountEx.c)
 *     RtlpHeapTrkInterceptor @ 0x18005CEF0 (RtlpHeapTrkInterceptor.c)
 *     RtlpHpLfhOwnerCompact @ 0x180061EC0 (RtlpHpLfhOwnerCompact.c)
 *     RtlInitializeResource @ 0x180068670 (RtlInitializeResource.c)
 *     RtlpEnterCriticalSectionContended @ 0x180068AF0 (RtlpEnterCriticalSectionContended.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x1800696F0 (RtlpAddDebugInfoToCriticalSection.c)
 *     LdrProtectMrdata @ 0x180078D20 (LdrProtectMrdata.c)
 *     LdrpMapDllWithSectionHandle @ 0x18007B7D0 (LdrpMapDllWithSectionHandle.c)
 *     LdrGetProcedureAddressForCaller @ 0x18007CFA0 (LdrGetProcedureAddressForCaller.c)
 *     TpPostTask @ 0x180086EE0 (TpPostTask.c)
 *     TpSetTimerEx @ 0x180089470 (TpSetTimerEx.c)
 *     RtlpHpSegMgrCommit @ 0x18008A260 (RtlpHpSegMgrCommit.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x18008ADB0 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpWalkLFHBlock @ 0x1800940A0 (RtlpWalkLFHBlock.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1800AFFC0 (RtlpHpLfhSlotAllocateSlow.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x1800B8F40 (LdrpFindOrPrepareLoadingModule.c)
 *     AlpcGetMessageFromCompletionList @ 0x1800C0300 (AlpcGetMessageFromCompletionList.c)
 *     TppQueueRemoveHead @ 0x1800C9060 (TppQueueRemoveHead.c)
 *     LdrpCondenseGraphRecurse @ 0x180118FA0 (LdrpCondenseGraphRecurse.c)
 *     LdrpMapAndSnapDependency @ 0x18011A410 (LdrpMapAndSnapDependency.c)
 *     LdrpUnloadNode @ 0x18011BC60 (LdrpUnloadNode.c)
 *     LdrpMapDllSearchPath @ 0x18011C780 (LdrpMapDllSearchPath.c)
 * Callees:
 *     RtlBackoff @ 0x18005F2E0 (RtlBackoff.c)
 *     ZwTerminateProcess @ 0x18015F3C0 (ZwTerminateProcess.c)
 *     ZwAlertThreadByThreadIdEx @ 0x18015FC70 (ZwAlertThreadByThreadIdEx.c)
 *     NtWaitForAlertByThreadId @ 0x180162AB0 (NtWaitForAlertByThreadId.c)
 */

__int64 __fastcall RtlpAcquireSRWLockExclusiveContended(volatile signed __int64 *Address, unsigned __int64 i)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v4; // rcx
  bool v5; // zf
  signed __int64 v6; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // rdx
  __int64 v9; // rdx
  signed __int64 v10; // rax
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // r8
  __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  __int64 result; // rax
  volatile signed __int64 *v18; // rbp
  unsigned __int64 v19; // r8
  _QWORD *v20; // rbx
  _QWORD *v21; // rax
  __int64 v22; // rax
  signed __int64 v23; // rax
  unsigned __int64 v24; // rbx
  __int64 v25; // rcx
  signed __int64 v26; // rax
  struct _TEB *v27; // rcx
  __int64 WowTebOffset; // rax
  __int64 v29; // rcx
  __int128 v30; // [rsp+20h] [rbp-58h] BYREF
  __int128 v31; // [rsp+30h] [rbp-48h]
  __int128 v32; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v33; // [rsp+88h] [rbp+10h] BYREF

  v33 = i;
  v2 = *Address;
  v30 = 0LL;
  LODWORD(v33) = 0;
  v31 = 0LL;
  v32 = 0LL;
  while ( (v2 & 1) != 0 )
  {
    if ( byte_1801CA908 )
      goto LABEL_57;
    if ( UseWOW64 )
    {
      v27 = NtCurrentTeb();
      WowTebOffset = v27->WowTebOffset;
      if ( (_DWORD)WowTebOffset )
      {
        if ( (int)WowTebOffset >= 0 )
          v27 = (struct _TEB *)((char *)v27 + WowTebOffset);
      }
      else
      {
        v27 = 0LL;
      }
      v29 = *(unsigned int *)(LODWORD(v27->NtTib.Self) + 0xCLL);
      if ( v29 )
      {
        if ( *(_BYTE *)(v29 + 40) )
LABEL_57:
          ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741749);
      }
    }
    LOBYTE(i) = 0;
    *((_QWORD *)&v31 + 1) = NtCurrentTeb()->ClientId.UniqueThread;
    DWORD1(v32) = 3;
    *(_QWORD *)&v31 = 0LL;
    if ( (v2 & 2) != 0 )
    {
      *((_QWORD *)&v30 + 1) = 0LL;
      LODWORD(v32) = -1;
      i = (unsigned __int8)v2;
      *(_QWORD *)&v30 = v2 & 0xFFFFFFFFFFFFFFF0uLL;
      v4 = (unsigned __int64)&v30 | v2 & 8 | 7;
      LOBYTE(i) = (v2 & 4) == 0;
    }
    else
    {
      v14 = 11LL;
      *((_QWORD *)&v30 + 1) = &v30;
      LODWORD(v32) = v2 >> 4;
      if ( (int)v32 <= 1 )
        v14 = 3LL;
      v4 = (unsigned __int64)&v30 | v14;
      if ( !(unsigned int)(v2 >> 4) )
        LODWORD(v32) = -2;
    }
    v6 = _InterlockedCompareExchange64(Address, v4, v2);
    v5 = v2 == v6;
    v2 = v6;
    if ( v5 )
    {
      if ( (_BYTE)i )
      {
        while ( (v4 & 1) != 0 )
        {
          v7 = (_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF0uLL);
          if ( !*(_QWORD *)((v4 & 0xFFFFFFFFFFFFFFF0uLL) + 8) )
          {
            do
            {
              v8 = v7;
              v7 = (_QWORD *)*v7;
              v7[2] = v8;
              v9 = v7[1];
            }
            while ( !v9 );
            if ( v7 != (_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF0uLL) )
              *(_QWORD *)((v4 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v9;
          }
          i = v4 - 4;
          v10 = _InterlockedCompareExchange64(Address, v4 - 4, v4);
          v5 = v4 == v10;
          v4 = v10;
          if ( v5 )
            goto LABEL_15;
        }
        v18 = Address;
        while ( 1 )
        {
          while ( (v4 & 1) != 0 )
          {
            i = v4 - 4;
            v26 = _InterlockedCompareExchange64(Address, v4 - 4, v4);
            v5 = v4 == v26;
            v4 = v26;
            if ( v5 )
              goto LABEL_15;
          }
          v19 = v4 & 0xFFFFFFFFFFFFFFF0uLL;
          v20 = (_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF0uLL);
          i = *(_QWORD *)((v4 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
          if ( !i )
          {
            do
            {
              v21 = v20;
              v20 = (_QWORD *)*v20;
              v20[2] = v21;
              i = v20[1];
            }
            while ( !i );
            if ( v20 != (_QWORD *)v19 )
              *(_QWORD *)((v4 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = i;
          }
          if ( (*(_DWORD *)(i + 36) & 1) != 0 )
          {
            v22 = *(_QWORD *)(i + 16);
            if ( v22 )
              break;
          }
          v18 = 0LL;
          v23 = _InterlockedCompareExchange64(Address, 0LL, v4);
          v5 = v4 == v23;
          v4 = v23;
          if ( v5 )
            goto LABEL_46;
        }
        *(_QWORD *)((v4 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v22;
        *(_QWORD *)(i + 16) = 0LL;
        _InterlockedAnd64(Address, 0xFFFFFFFFFFFFFFFBuLL);
        do
        {
LABEL_46:
          v24 = *(_QWORD *)(i + 16);
          v25 = *(_QWORD *)(i + 24);
          _interlockedbittestandset((volatile signed __int32 *)(i + 36), 2u);
          if ( !_interlockedbittestandreset((volatile signed __int32 *)(i + 36), 1u) )
            ZwAlertThreadByThreadIdEx(v25, v18, v19);
          i = v24;
        }
        while ( v24 );
      }
LABEL_15:
      if ( MEMORY[0x7FFE036A] > 1u )
      {
        if ( MEMORY[0x7FFE0297] )
        {
          v11 = __rdtsc();
          v12 = v11 + (unsigned int)SRWLockSpinCycleCount;
          while ( 1 )
          {
            i = 0LL;
            __asm { monitorx rax, rcx, rdx }
            if ( (BYTE4(v32) & 2) == 0 )
              break;
            v15 = v11;
            v16 = __rdtsc();
            i = (unsigned __int64)HIDWORD(v16) << 32;
            v11 = v16;
            if ( v16 < v15 || v16 >= v12 )
              break;
            __asm { mwaitx  rax, rcx, rbx }
          }
        }
        else
        {
          for ( i = 0LL;
                (BYTE4(v32) & 2) != 0 && (_DWORD)i != SRWLockSpinCycleCount / (unsigned int)MEMORY[0x7FFE02D6];
                i = (unsigned int)(i + 1) )
          {
            _mm_pause();
          }
        }
      }
      if ( _interlockedbittestandreset((volatile signed __int32 *)&v32 + 1, 1u) )
      {
        do
          NtWaitForAlertByThreadId((PVOID)Address, 0LL);
        while ( (BYTE4(v32) & 4) == 0 );
      }
    }
    else
    {
LABEL_59:
      RtlBackoff(&v33, i);
      _m_prefetchw((const void *)Address);
      v2 = *Address;
    }
  }
  result = _InterlockedCompareExchange64(Address, v2 + 1, v2);
  if ( v2 != result )
    goto LABEL_59;
  return result;
}
