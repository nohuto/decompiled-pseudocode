/*
 * XREFs of CcAllocateInitializeBcb @ 0x140260530
 * Callers:
 *     CcPinFileData @ 0x1402DF720 (CcPinFileData.c)
 * Callees:
 *     MmDeterminePoolType @ 0x1402609A0 (MmDeterminePoolType.c)
 *     ExDisableResourceBoostLite @ 0x1402609F0 (ExDisableResourceBoostLite.c)
 *     ExpAddResourceToSystemResourceList @ 0x140260A5C (ExpAddResourceToSystemResourceList.c)
 *     RtlStdLogStackTrace @ 0x140260BE8 (RtlStdLogStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x140260C74 (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlStdReleaseStackTrace @ 0x140260D48 (RtlStdReleaseStackTrace.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     CcSetVacbLargeOffset @ 0x1402E1620 (CcSetVacbLargeOffset.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 *     PerfLogExecutiveResourceInitialize @ 0x1405263E4 (PerfLogExecutiveResourceInitialize.c)
 *     ExpTraceLogBadResourceAddress @ 0x14052D790 (ExpTraceLogBadResourceAddress.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ExAllocatePoolWithTag @ 0x140C10340 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall CcAllocateInitializeBcb(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  _QWORD *result; // rax
  __int64 v9; // r15
  _QWORD *v10; // r14
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  void *v14; // rdx
  AutoBoost *v15; // rdi
  _QWORD *v16; // rdx
  _QWORD *v17; // rax
  __int64 v18; // r9
  __int64 v19; // r10
  int v20; // edx
  __int64 v21; // r8
  __int64 v22; // rdi
  int v23; // ecx
  int v24; // r11d
  char v25; // cl
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  signed __int64 v29; // rax
  signed __int64 v30; // rdx
  __int64 v31; // rtt
  KSPIN_LOCK *p_Policy; // rdi
  unsigned __int16 v33; // si
  int RecordedStackTraceIndex; // eax
  void *retaddr; // [rsp+48h] [rbp+0h]

  result = ExAllocatePoolWithTag((POOL_TYPE)1536, 0xC0uLL, 0x63426343u);
  v9 = 0LL;
  v10 = result;
  if ( result )
  {
    *(_WORD *)result = 765;
    result[1] = *a3;
    *((_DWORD *)result + 1) = *a4;
    v11 = *(_QWORD *)a4 + *a3;
    ++*((_DWORD *)v10 + 16);
    v10[4] = v11;
    v10[22] = a1;
    if ( (unsigned __int64)(v10 + 9) < 0xFFFF800000000000uLL || MmDeterminePoolType(v10 + 9) == 256 )
      ExpTraceLogBadResourceAddress(v10 + 9, retaddr);
    memset_0(v10 + 9, 0, 0x68uLL);
    v10[10] = v10 + 9;
    v12 = 0LL;
    v10[9] = v10 + 9;
    v10[13] = 0LL;
    v10[14] = 0LL;
    v10[21] = 0LL;
    if ( (NtGlobalFlag & 0x2000) != 0 )
    {
      p_Policy = (KSPIN_LOCK *)&NormalizationListLock.SchedulingGroup->Policy;
      if ( NormalizationListLock.SchedulingGroup
        && (v9 = RtlStdLogStackTrace((PKSPIN_LOCK)&NormalizationListLock.SchedulingGroup->Policy)) != 0 )
      {
        RecordedStackTraceIndex = RtlpStdGetRecordedStackTraceIndex(p_Policy);
        v33 = RecordedStackTraceIndex;
        if ( !RecordedStackTraceIndex )
          RtlStdReleaseStackTrace(p_Policy, v9);
        v9 = 0LL;
      }
      else
      {
        v33 = v9;
      }
      v12 = v33;
    }
    v10[20] = v12;
    *((_DWORD *)v10 + 39) = -1;
    ExpAddResourceToSystemResourceList(v10 + 9);
    __incgsdword(0x9098u);
    if ( (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0 )
      PerfLogExecutiveResourceInitialize(65544LL, v10 + 9, 0LL, 0LL);
    v13 = KeAbPreAcquire((struct _KTHREAD *)(a1 + 104), 0LL);
    v15 = (AutoBoost *)v13;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 104), 0LL) )
      ExfAcquirePushLockExclusiveEx(a1 + 104, v13, a1 + 104);
    if ( v15 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v15, v14);
      else
        *((_BYTE *)v15 + 10) = 1;
    }
    v16 = *(_QWORD **)(a2 + 24);
    v17 = v10 + 2;
    if ( *v16 != a2 + 16 )
      __fastfail(3u);
    *v17 = a2 + 16;
    v10[3] = v16;
    *v16 = v17;
    *(_QWORD *)(a2 + 24) = v17;
    v18 = *(_QWORD *)(a1 + 32);
    if ( v18 > 0x2000000 && (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
    {
      v19 = *a3;
      v20 = v9;
      v21 = *(_QWORD *)(a1 + 88);
      v22 = *a3;
      v23 = 25;
      do
      {
        v24 = v23;
        v23 += 7;
        ++v20;
      }
      while ( v18 > 1LL << v23 );
      do
      {
        v25 = v24;
        v26 = v19 >> v24;
        v24 -= 7;
        v21 = *(_QWORD *)(v21 + 8LL * (unsigned int)v26);
        v19 &= (1LL << v25) - 1;
        --v20;
      }
      while ( v20 );
      v27 = (-(__int64)((*(_DWORD *)(a1 + 152) & 0x200) != 0) & 0x400) + 1024;
      ++*(_DWORD *)(v27 + v21);
      if ( !*(_QWORD *)((-(__int64)((*(_DWORD *)(a1 + 152) & 0x200) != 0) & 0x400) + 1024 + v21) )
      {
        v28 = -(__int64)((*(_DWORD *)(a1 + 152) & 0x200) != 0) & 0x400;
        ++*(_DWORD *)(v28 + v21 + 1028);
        CcSetVacbLargeOffset(a1, v22 & 0xFFFFFFFFFE000000uLL, -2LL);
      }
    }
    _m_prefetchw((const void *)(a1 + 104));
    v29 = *(_QWORD *)(a1 + 104);
    v30 = v29 - 16;
    if ( (v29 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v30 = v9;
    if ( (v29 & 2) != 0
      || (v31 = *(_QWORD *)(a1 + 104),
          v31 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 104), v30, v29)) )
    {
      ExfReleasePushLock(a1 + 104, v30);
    }
    KeAbPostRelease((struct _KTHREAD *)(a1 + 104));
    if ( (*(_DWORD *)(a1 + 152) & 2) != 0 )
      ExDisableResourceBoostLite((PERESOURCE)(v10 + 9));
    return v10;
  }
  return result;
}
