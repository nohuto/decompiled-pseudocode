/*
 * XREFs of SepRmCapUpdateWrkr @ 0x140817BD0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     SepRmDereferenceCapTable @ 0x1402ACB40 (SepRmDereferenceCapTable.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     SepBuildCapPolicyTable @ 0x14063BCE4 (SepBuildCapPolicyTable.c)
 */

void __fastcall SepRmCapUpdateWrkr(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  struct _KLOCK_ENTRIES *v4; // r9
  int v5; // r14d
  void *v6; // rbp
  struct _KTHREAD *v7; // rcx
  AutoBoost *v8; // rax
  void *v9; // rdx
  signed __int8 v10; // cf
  AutoBoost *v11; // rsi
  volatile signed __int64 *StackBase; // rsi
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v14; // rax
  void *v15; // rdx
  AutoBoost *v16; // rsi
  _QWORD *v17; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(unsigned int *)(a1 + 44);
  v17 = 0LL;
  v5 = SepBuildCapPolicyTable(v2, &v17);
  if ( v5 < 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v14 = (AutoBoost *)KeAbPreAcquire((__int64)&SepRmCapTableLock, 0LL, 0LL, v4);
    v10 = _interlockedbittestandset64(&SepRmCapTableLock.Header.Lock, 0LL);
    v16 = v14;
    if ( v10 )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&SepRmCapTableLock, v14, (__int64)&SepRmCapTableLock);
    if ( v16 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v16, v15);
      else
        *((_BYTE *)v16 + 10) = 1;
    }
    BYTE1(SepRmCapTableLock.Header.WaitListHead.Flink) = 1;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&SepRmCapTableLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&SepRmCapTableLock.Header.Lock);
    KeAbPostRelease((unsigned __int64)&SepRmCapTableLock);
    KeLeaveCriticalRegion();
  }
  else
  {
    v6 = v17;
    if ( v17 )
      v17[5] = 1LL;
    v7 = KeGetCurrentThread();
    --v7->KernelApcDisable;
    v8 = (AutoBoost *)KeAbPreAcquire((__int64)&SepRmCapTableLock, 0LL, 0LL, v4);
    v10 = _interlockedbittestandset64(&SepRmCapTableLock.Header.Lock, 0LL);
    v11 = v8;
    if ( v10 )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&SepRmCapTableLock, v8, (__int64)&SepRmCapTableLock);
    if ( v11 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v11, v9);
      else
        *((_BYTE *)v11 + 10) = 1;
    }
    StackBase = (volatile signed __int64 *)ExpPlatformBinaryLock.StackBase;
    ExpPlatformBinaryLock.StackBase = v6;
    BYTE1(SepRmCapTableLock.Header.WaitListHead.Flink) = v6 != 0LL;
    if ( v6 && (_DWORD)InitSafeBootMode == 1 )
    {
      SepRmDereferenceCapTable((volatile signed __int64 *)ExpPlatformBinaryLock.StackBase);
      ExpPlatformBinaryLock.StackBase = 0LL;
      *(_QWORD *)(*(_QWORD *)(ExpPlatformBinaryLock.ThreadLock + 64) + 32LL) = *(_QWORD *)&PspSiloMonitorLock.WaitBlockFill11[64];
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&SepRmCapTableLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&SepRmCapTableLock.Header.Lock);
    KeAbPostRelease((unsigned __int64)&SepRmCapTableLock);
    KeLeaveCriticalRegion();
    if ( StackBase )
      SepRmDereferenceCapTable(StackBase);
  }
  *(_DWORD *)(a2 + 40) = v5;
}
