/*
 * XREFs of PsQueryRuntimeProcess @ 0x140A69970
 * Callers:
 *     PspSetJobTimeLimitCallback @ 0x1407FF550 (PspSetJobTimeLimitCallback.c)
 *     NtQueryInformationProcess @ 0x140A534E0 (NtQueryInformationProcess.c)
 *     ExpQuerySystemPerformanceInformation @ 0x140A69154 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     PspUnlockProcessThreadListShared @ 0x140271060 (PspUnlockProcessThreadListShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 */

__int64 __fastcall PsQueryRuntimeProcess(_QWORD *a1, _QWORD *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  void *v7; // rdx
  LegacyAutoBoost *v8; // rbx
  __int64 v9; // rbx
  _QWORD *v10; // rcx
  __int64 i; // rdi
  __int64 v12; // r8
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)(a1 + 188), 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64(a1 + 188, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(a1 + 188, 0, v8, (struct _KTHREAD *)(a1 + 188));
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v8, v7);
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  v9 = a1[39];
  v10 = (_QWORD *)a1[110];
  for ( i = a1[40]; v10 != a1 + 110; i += v12 )
  {
    v9 += *((unsigned int *)v10 - 187);
    v12 = *((unsigned int *)v10 - 167);
    v10 = (_QWORD *)*v10;
  }
  PspUnlockProcessThreadListShared((__int64)a1, CurrentThread);
  result = v9;
  *a2 = i;
  return result;
}
