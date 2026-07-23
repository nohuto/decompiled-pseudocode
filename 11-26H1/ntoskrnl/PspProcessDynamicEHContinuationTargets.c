/*
 * XREFs of PspProcessDynamicEHContinuationTargets @ 0x140B694A0
 * Callers:
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     MmIsUserAddress @ 0x1404468F0 (MmIsUserAddress.c)
 *     MmIsBelowLowestUserAddress @ 0x14047D050 (MmIsBelowLowestUserAddress.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlAddDynamicEHContinuationTarget @ 0x14080F038 (RtlAddDynamicEHContinuationTarget.c)
 *     RtlRemoveDynamicEHContinuationTarget @ 0x14080F1AC (RtlRemoveDynamicEHContinuationTarget.c)
 */

__int64 __fastcall PspProcessDynamicEHContinuationTargets(
        struct _EX_RUNDOWN_REF *BugCheckParameter1,
        __int64 a2,
        unsigned __int16 a3,
        unsigned int *a4)
{
  ULONG_PTR v4; // r15
  unsigned int v6; // ebp
  unsigned int v7; // r14d
  _KPROCESS *Process; // r12
  struct _KLOCK_ENTRIES *v9; // r9
  unsigned int v10; // esi
  unsigned int v11; // eax
  char v12; // di
  unsigned int i; // esi
  unsigned __int64 v14; // rcx
  volatile signed __int64 *v15; // r14
  char v16; // di
  AutoBoost *v17; // rax
  void *v18; // rdx
  AutoBoost *v19; // rsi
  unsigned __int64 *p_Count; // rcx
  __int64 v21; // r13
  __int64 v22; // r15
  __int64 v23; // rdx
  int v24; // eax
  unsigned int v26; // [rsp+20h] [rbp-A8h]
  struct _KTHREAD *CurrentThread; // [rsp+28h] [rbp-A0h]
  struct _EX_RUNDOWN_REF *RunRef; // [rsp+40h] [rbp-88h]
  _OWORD v32[3]; // [rsp+50h] [rbp-78h] BYREF

  memset(v32, 0, sizeof(v32));
  v4 = (ULONG_PTR)BugCheckParameter1;
  v6 = 0;
  CurrentThread = KeGetCurrentThread();
  v7 = a3;
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->KernelApcDisable;
  RunRef = BugCheckParameter1 + 61;
  if ( ExAcquireRundownProtection_0(BugCheckParameter1 + 61) )
  {
    v11 = v7;
    v12 = 2;
    v26 = v7;
    for ( i = 0; i < v11; ++i )
    {
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
      {
        v10 = -1073741749;
        goto LABEL_38;
      }
      if ( (*(_DWORD *)(v4 + 500) & 0x40000008) != 0 )
      {
        v10 = -1073741558;
        goto LABEL_38;
      }
      if ( MmIsBelowLowestUserAddress(*(_QWORD *)(a2 + 16LL * i)) || !MmIsUserAddress(v14) )
      {
        v10 = -1073741503;
        goto LABEL_38;
      }
      if ( (*(_QWORD *)(a2 + 16LL * i + 8) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      {
        v10 = -1073741811;
        goto LABEL_38;
      }
      v11 = v7;
    }
    if ( (_KPROCESS *)v4 != Process )
    {
      KiStackAttachProcess((_KPROCESS *)v4, 0, (__int64)v32);
      v12 = 3;
    }
    v15 = (volatile signed __int64 *)(v4 + 1928);
    v16 = v12 | 4;
    v17 = (AutoBoost *)KeAbPreAcquire(v4 + 1928, 0LL, 0LL, v9);
    v19 = v17;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 1928), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v4 + 1928), v17, v4 + 1928);
    if ( v19 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v19, v18);
      else
        *((_BYTE *)v19 + 10) = 1;
    }
    while ( v6 < v26 )
    {
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
      {
        v10 = -1073741749;
        goto LABEL_34;
      }
      if ( (*(_DWORD *)(v4 + 500) & 0x40000008) != 0 )
      {
        v10 = -1073741558;
        goto LABEL_34;
      }
      p_Count = &BugCheckParameter1[240].Count;
      v21 = 2LL * v6;
      v22 = *(_QWORD *)(a2 + 16LL * v6 + 8);
      v23 = *(_QWORD *)(a2 + 16LL * v6);
      if ( (v22 & 1) != 0 )
        v24 = RtlAddDynamicEHContinuationTarget(p_Count, v23);
      else
        v24 = RtlRemoveDynamicEHContinuationTarget(p_Count, v23);
      v10 = v24;
      if ( v24 < 0 )
        goto LABEL_34;
      ++v6;
      *(_QWORD *)(a2 + 8 * v21 + 8) = v22 | 2;
      v4 = (ULONG_PTR)BugCheckParameter1;
    }
    v10 = 0;
LABEL_34:
    if ( (_InterlockedExchangeAdd64(v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v15);
    KeAbPostRelease((unsigned __int64)v15);
    if ( (v16 & 1) != 0 )
      KiUnstackDetachProcess((__int64)v32, 0);
LABEL_38:
    ExReleaseRundownProtection_0(RunRef);
  }
  else
  {
    v10 = -1073741558;
  }
  KeLeaveCriticalRegion();
  *a4 = v6;
  return v10;
}
