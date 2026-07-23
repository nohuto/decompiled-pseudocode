/*
 * XREFs of PspGetNextSyscallProviderProcess @ 0x1407F3310
 * Callers:
 *     PspQuerySyscallProviderProcessList @ 0x1407F3524 (PspQuerySyscallProviderProcessList.c)
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x140259C30 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 */

__int64 __fastcall PspGetNextSyscallProviderProcess(__int64 a1, _QWORD *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v5; // rbx
  unsigned __int64 v8; // r15
  char v9; // r14
  void *v10; // rdx
  LegacyAutoBoost *v11; // rdi
  _QWORD **v12; // rsi
  _QWORD *v13; // rdi

  CurrentThread = KeGetCurrentThread();
  v5 = (signed __int64 *)(a1 + 64);
  --CurrentThread->KernelApcDisable;
  v8 = 0LL;
  v9 = 0;
  v11 = (LegacyAutoBoost *)KeAbPreAcquire(a1 + 64, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64(v5, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v5, 0, v11, (struct _KTHREAD *)v5);
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v11, v10);
    else
      *((_BYTE *)v11 + 10) = 1;
  }
  v12 = (_QWORD **)(a1 + 72);
  if ( a2 )
    v13 = (_QWORD *)a2[248];
  else
    v13 = *v12;
  while ( v13 != v12 )
  {
    v8 = (unsigned __int64)(v13 - 248);
    if ( ObReferenceObjectSafeWithTag((__int64)(v13 - 248), 0x63537350u) )
    {
      v9 = 1;
      break;
    }
    v13 = (_QWORD *)*v13;
  }
  if ( _InterlockedCompareExchange64(v5, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v5);
  KeAbPostRelease((unsigned __int64)v5);
  KeLeaveCriticalRegion();
  if ( a2 )
    ObfDereferenceObjectWithTag(a2, 0x63537350u);
  return v8 & -(__int64)(v9 != 0);
}
