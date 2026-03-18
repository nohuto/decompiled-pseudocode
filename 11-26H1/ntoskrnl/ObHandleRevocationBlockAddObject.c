/*
 * XREFs of ObHandleRevocationBlockAddObject @ 0x140A47564
 * Callers:
 *     ObpCreateHandle @ 0x14092CA60 (ObpCreateHandle.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x140269BD0 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 */

void __fastcall ObHandleRevocationBlockAddObject(struct _EX_RUNDOWN_REF *a1, __int64 a2)
{
  char v3; // r14
  __int64 v4; // rdi
  BOOLEAN v5; // al
  struct _KTHREAD *CurrentThread; // rdx
  BOOLEAN v7; // r12
  struct _KLOCK_ENTRIES *v8; // r9
  AutoBoost *v9; // rax
  void *v10; // rdx
  AutoBoost *v11; // rsi
  struct _EX_RUNDOWN_REF **Count; // rax
  signed __int64 v13; // rax
  signed __int64 v14; // rdx
  unsigned __int64 v15; // rtt

  v3 = 0;
  v4 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(a2 - 48);
  v5 = ExAcquireRundownProtection_0(a1 + 3);
  CurrentThread = KeGetCurrentThread();
  v7 = v5;
  --CurrentThread->KernelApcDisable;
  v9 = (AutoBoost *)KeAbPreAcquire((__int64)&a1[2], 0LL, 0LL, v8);
  v11 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&a1[2], 0LL) )
    ExfAcquirePushLockExclusiveEx(&a1[2].Count, v9, (__int64)&a1[2]);
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v11, v10);
    else
      *((_BYTE *)v11 + 10) = 1;
  }
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 16), (signed __int64)a1, 0LL) )
  {
    Count = (struct _EX_RUNDOWN_REF **)a1[1].Count;
    if ( *Count != a1 )
      __fastfail(3u);
    *(_QWORD *)v4 = a1;
    v3 = 1;
    *(_QWORD *)(v4 + 8) = Count;
    *Count = (struct _EX_RUNDOWN_REF *)v4;
    a1[1].Count = v4;
  }
  _m_prefetchw(&a1[2]);
  v13 = a1[2].Count;
  v14 = v13 - 16;
  if ( (v13 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v14 = 0LL;
  if ( (v13 & 2) != 0
    || (v15 = a1[2].Count, v15 != _InterlockedCompareExchange64((volatile signed __int64 *)&a1[2], v14, v13)) )
  {
    ExfReleasePushLock(&a1[2].Count);
  }
  KeAbPostRelease((unsigned __int64)&a1[2]);
  KeLeaveCriticalRegion();
  if ( v7 )
  {
    if ( !v3 )
      ExReleaseRundownProtection_0(a1 + 3);
  }
}
