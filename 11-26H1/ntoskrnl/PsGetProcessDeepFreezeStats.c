/*
 * XREFs of PsGetProcessDeepFreezeStats @ 0x1409CF900
 * Callers:
 *     PsSetProcessTelemetryAppState @ 0x1409CF794 (PsSetProcessTelemetryAppState.c)
 *     NtQueryInformationProcess @ 0x140A534E0 (NtQueryInformationProcess.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     PspUnlockProcessShared @ 0x14027C520 (PspUnlockProcessShared.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 */

__int64 __fastcall PsGetProcessDeepFreezeStats(__int64 a1, _QWORD *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // r14
  signed __int64 *v5; // rsi
  void *v8; // rdx
  LegacyAutoBoost *v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  v5 = (signed __int64 *)(a1 + 456);
  --CurrentThread->KernelApcDisable;
  v9 = (LegacyAutoBoost *)KeAbPreAcquire(a1 + 456, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64(v5, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v5, 0, v9, (struct _KTHREAD *)v5);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v9, v8);
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  a2[2] = *(_QWORD *)(a1 + 1680);
  a2[3] = *(_QWORD *)(a1 + 1584);
  do
  {
    v10 = MEMORY[0xFFFFF780000003B0];
    *a2 = MEMORY[0xFFFFF78000000008];
  }
  while ( v10 != MEMORY[0xFFFFF780000003B0] );
  PspUnlockProcessShared(a1, (__int64)CurrentThread);
  v11 = a2[3];
  result = *a2 - v10;
  a2[1] = result;
  if ( v11 )
  {
    result -= v11;
    a2[2] += result;
  }
  return result;
}
