/*
 * XREFs of PspApplyWorkingSetLimitsToProcess @ 0x140B02108
 * Callers:
 *     PspImplicitAssignProcessToJob @ 0x140946FB8 (PspImplicitAssignProcessToJob.c)
 *     PspAssignProcessToJob @ 0x140AC79B8 (PspAssignProcessToJob.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireFastResourceExclusive @ 0x140274BD0 (ExAcquireFastResourceExclusive.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     MmAdjustWorkingSetSize @ 0x1403C6170 (MmAdjustWorkingSetSize.c)
 *     ExReleaseFastResourceExclusive @ 0x14048AE40 (ExReleaseFastResourceExclusive.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlInterlockedOr32ToUser @ 0x140781F58 (RtlInterlockedOr32ToUser.c)
 *     MmEnforceWorkingSetLimit @ 0x140B023A4 (MmEnforceWorkingSetLimit.c)
 */

__int64 __fastcall PspApplyWorkingSetLimitsToProcess(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // r15
  unsigned int v4; // r12d
  struct _KLOCK_ENTRIES *v5; // r9
  AutoBoost *v6; // rax
  void *v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  AutoBoost *v10; // rdi
  int v11; // r9d
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  bool v15; // zf
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 *v19; // rax
  __int64 v21; // [rsp+28h] [rbp-70h]
  __int64 v22; // [rsp+30h] [rbp-68h]
  _OWORD v23[3]; // [rsp+38h] [rbp-60h] BYREF

  memset(v23, 0, sizeof(v23));
  CurrentThread = KeGetCurrentThread();
  v3 = *(_QWORD *)(a1 + 672);
  KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)v23);
  --CurrentThread->SpecialApcDisable;
  ExAcquireFastResourceExclusive((struct _KTHREAD *)(v3 + 56), 0LL, 1);
  v21 = *(_QWORD *)(v3 + 1000);
  v22 = *(_QWORD *)(v3 + 1008);
  v4 = ((*(_DWORD *)(v3 + 1056) & 1) == 0) + 1;
  v6 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140FC11F0, 0LL, 0LL, v5);
  v10 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&stru_140FC11F0, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140FC11F0, v6, (__int64)&stru_140FC11F0);
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v10, v7);
    else
      *((_BYTE *)v10 + 10) = 1;
  }
  _InterlockedOr((volatile signed __int32 *)(v3 + 1552), 0x100u);
  ExReleaseFastResourceExclusive(v3 + 56, 0LL, v8, v9);
  if ( v4 == 2 || (LOBYTE(v11) = 1, LODWORD(v12) = MmAdjustWorkingSetSize(v21, v22, 0, v11), (int)v12 >= 0) )
  {
    MmEnforceWorkingSetLimit(a1, v4);
    _InterlockedAnd((volatile signed __int32 *)(v3 + 1552), 0xFFFFFEFF);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140FC11F0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&stru_140FC11F0.Header.Lock);
    KeAbPostRelease((unsigned __int64)&stru_140FC11F0);
    v15 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v15 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v17, v16);
    v18 = *(_QWORD *)(a1 + 736);
    v12 = 0LL;
    if ( v18 && (*(_DWORD *)(a1 + 500) & 8) == 0 )
    {
      if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 488)) )
      {
        v19 = *(__int64 **)(a1 + 784);
        if ( v19 )
          v12 = *v19;
        RtlInterlockedOr32ToUser((volatile void *)(v18 + 80), 1u);
        if ( v12 )
          RtlInterlockedOr32ToUser((volatile void *)(v12 + 40), 1u);
        LODWORD(v12) = 0;
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 488));
      }
      else
      {
        LODWORD(v12) = -1073741558;
      }
    }
  }
  else
  {
    _InterlockedAnd((volatile signed __int32 *)(v3 + 1552), 0xFFFFFEFF);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140FC11F0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&stru_140FC11F0.Header.Lock);
    KeAbPostRelease((unsigned __int64)&stru_140FC11F0);
    v15 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v15 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v14, v13);
  }
  KiUnstackDetachProcess((__int64)v23, 0);
  return (unsigned int)v12;
}
