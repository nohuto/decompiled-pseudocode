/*
 * XREFs of MiDeleteAllHardwareEnclaves @ 0x140C07A84
 * Callers:
 *     ExRebootSystemForRecovery @ 0x1406CF57C (ExRebootSystemForRecovery.c)
 *     MiShutdownSystem @ 0x140C0646C (MiShutdownSystem.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     MiUnlockAndDereferenceVad @ 0x14027EB70 (MiUnlockAndDereferenceVad.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     MiObtainReferencedVadEx @ 0x1402B1F20 (MiObtainReferencedVadEx.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     KeRemoveEnclavePage @ 0x140343280 (KeRemoveEnclavePage.c)
 *     ExWaitForRundownProtectionRelease @ 0x14045CD60 (ExWaitForRundownProtectionRelease.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     MiDeleteEnclavePages @ 0x140C07CE8 (MiDeleteEnclavePages.c)
 */

void MiDeleteAllHardwareEnclaves()
{
  struct _KTHREAD *CurrentThread; // rdi
  struct _KLOCK_ENTRIES *v1; // r9
  AutoBoost *v2; // rax
  void *v3; // rdx
  signed __int8 v4; // cf
  AutoBoost *v5; // rbx
  __int64 v6; // rsi
  _KPROCESS *v7; // rbp
  unsigned __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  bool v11; // zf
  ULONG_PTR v12; // rax
  volatile signed __int32 *v13; // rsi
  __int64 v14; // rcx
  struct _KLOCK_ENTRIES *v15; // r9
  AutoBoost *v16; // rax
  void *v17; // rdx
  AutoBoost *v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // [rsp+20h] [rbp-48h] BYREF
  _OWORD v22[3]; // [rsp+28h] [rbp-40h] BYREF

  memset(v22, 0, sizeof(v22));
  CurrentThread = KeGetCurrentThread();
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&stru_140E366D8.SchedulingGroup);
  --CurrentThread->SpecialApcDisable;
  v2 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140E366D8.StateSaveArea, 0LL, 0LL, v1);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140E366D8.StateSaveArea, 0LL);
  v5 = v2;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&stru_140E366D8.StateSaveArea,
      v2,
      (__int64)&stru_140E366D8.StateSaveArea);
  if ( v5 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v5, v3);
    else
      *((_BYTE *)v5 + 10) = 1;
  }
  while ( 1 )
  {
    v6 = *(_QWORD *)&stru_140E366D8.CurrentRunTime;
    if ( *(struct _KTHREAD **)&stru_140E366D8.CurrentRunTime == (struct _KTHREAD *)&stru_140E366D8.CurrentRunTime )
      break;
    v7 = *(_KPROCESS **)(*(_QWORD *)&stru_140E366D8.CurrentRunTime - 8LL);
    ObfReferenceObjectWithTag(v7, 0x6D566D4Du);
    v8 = (*(unsigned int *)(v6 - 112) | ((unsigned __int64)*(unsigned __int8 *)(v6 - 104) << 32)) << 12;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140E366D8.StateSaveArea, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&stru_140E366D8.StateSaveArea);
    KeAbPostRelease((unsigned __int64)&stru_140E366D8.StateSaveArea);
    v11 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v11 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v10, v9);
    KiStackAttachProcess(v7, 0, (__int64)v22);
    v12 = MiObtainReferencedVadEx(v8, 0LL, &v21);
    v13 = (volatile signed __int32 *)v12;
    if ( v12 )
    {
      if ( (MiReadVadFlags(v12) & 0x880000) == 0x880000 && (*(_DWORD *)(v14 + 72) & 1) != 0 )
        MiDeleteEnclavePages(v7, v13);
      MiUnlockAndDereferenceVad(v13);
    }
    KiUnstackDetachProcess((__int64)v22, 0);
    ObfDereferenceObjectWithTag(v7, 0x6D566D4Du);
    --CurrentThread->SpecialApcDisable;
    v16 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140E366D8.StateSaveArea, 0LL, 0LL, v15);
    v4 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140E366D8.StateSaveArea, 0LL);
    v18 = v16;
    if ( v4 )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&stru_140E366D8.StateSaveArea,
        v16,
        (__int64)&stru_140E366D8.StateSaveArea);
    if ( v18 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v18, v17);
      else
        *((_BYTE *)v18 + 10) = 1;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140E366D8.StateSaveArea, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140E366D8.StateSaveArea);
  KeAbPostRelease((unsigned __int64)&stru_140E366D8.StateSaveArea);
  v11 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v11 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v20, v19);
  if ( stru_140E366D8.StackLimit )
    KeRemoveEnclavePage((__int64)stru_140E366D8.StackLimit);
}
