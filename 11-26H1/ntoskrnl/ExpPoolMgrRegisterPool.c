/*
 * XREFs of ExpPoolMgrRegisterPool @ 0x14084D700
 * Callers:
 *     ExpPoolCreate @ 0x140780790 (ExpPoolCreate.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExpPoolMgrAcquirePoolListLockExclusive @ 0x1404CA6E0 (ExpPoolMgrAcquirePoolListLockExclusive.c)
 *     ExpPoolMgrReleasePoolListLockExclusive @ 0x1404CB00C (ExpPoolMgrReleasePoolListLockExclusive.c)
 *     ExpPoolPhase1Init @ 0x1406D7B28 (ExpPoolPhase1Init.c)
 */

__int64 __fastcall ExpPoolMgrRegisterPool(_DWORD *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  signed __int64 *v4; // rbx
  __int64 v6; // rax
  __int64 v8; // rdi
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *v10; // rdi
  void *v11; // rdx
  LegacyAutoBoost *v12; // rsi
  __int64 v13; // r8
  struct _KLOCK_ENTRIES *v14; // r9
  int v15; // esi
  _QWORD *v16; // rcx
  _QWORD *v17; // rax

  v4 = (signed __int64 *)(a1 + 16);
  v6 = (unsigned __int8)BYTE1(*(_QWORD *)(a2 + 8));
  v8 = v6 + 2 * (v6 + 1);
  CurrentThread = KeGetCurrentThread();
  v10 = &a1[2 * v8];
  --CurrentThread->KernelApcDisable;
  v12 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)(a1 + 16), 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, 0, v12, (struct _KTHREAD *)v4);
  if ( v12 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v12, v11);
    else
      *((_BYTE *)v12 + 10) = 1;
  }
  if ( (*a1 & 1) == 0 || (*(_DWORD *)(a2 + 4) & 1) == 0 || (v15 = ExpPoolPhase1Init(a2), v15 >= 0) )
  {
    ExpPoolMgrAcquirePoolListLockExclusive((__int64)a1, (__int64)v11, v13, v14);
    v16 = (_QWORD *)*((_QWORD *)v10 + 1);
    v17 = (_QWORD *)(a2 + 32);
    if ( (_DWORD *)*v16 != v10 )
      __fastfail(3u);
    *(_QWORD *)(a2 + 40) = v16;
    *v17 = v10;
    *v16 = v17;
    *((_QWORD *)v10 + 1) = v17;
    ++v10[4];
    ExpPoolMgrReleasePoolListLockExclusive((__int64)a1);
    v15 = 0;
  }
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  KeAbPostRelease((unsigned __int64)v4);
  KeLeaveCriticalRegion();
  return (unsigned int)v15;
}
