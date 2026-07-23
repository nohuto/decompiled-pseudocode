/*
 * XREFs of ObpHandleRevocationBlockRemoveInsertedObject @ 0x140B684BC
 * Callers:
 *     ObRevokeHandles @ 0x1407C63FC (ObRevokeHandles.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x140A67000 (ObpHandleRevocationBlockRemoveObject.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 */

void __fastcall ObpHandleRevocationBlockRemoveInsertedObject(
        __int64 *a1,
        struct _EX_RUNDOWN_REF *a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  char v4; // r14
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *p_Count; // rsi
  AutoBoost *v10; // rax
  void *v11; // rdx
  AutoBoost *v12; // rbx
  __int64 *v13; // rcx
  __int64 **v14; // rax
  signed __int64 Count; // rax
  signed __int64 v16; // rdx
  unsigned __int64 v17; // rtt

  v4 = (char)a4;
  if ( a2 == (struct _EX_RUNDOWN_REF *)_InterlockedCompareExchange64(a1 + 2, 2LL, (signed __int64)a2) )
  {
    if ( !(_BYTE)a4 )
    {
      CurrentThread = KeGetCurrentThread();
      p_Count = &a2[2].Count;
      --CurrentThread->KernelApcDisable;
      v10 = (AutoBoost *)KeAbPreAcquire((__int64)&a2[2], 0LL, 0LL, a4);
      v12 = v10;
      if ( _interlockedbittestandset64((volatile signed __int32 *)p_Count, 0LL) )
        ExfAcquirePushLockExclusiveEx(p_Count, v10, (__int64)p_Count);
      if ( v12 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v12, v11);
        else
          *((_BYTE *)v12 + 10) = 1;
      }
    }
    v13 = (__int64 *)*a1;
    if ( *(__int64 **)(*a1 + 8) != a1 || (v14 = (__int64 **)a1[1], *v14 != a1) )
      __fastfail(3u);
    *v14 = v13;
    v13[1] = (__int64)v14;
    if ( !v4 )
    {
      _m_prefetchw(&a2[2]);
      Count = a2[2].Count;
      v16 = Count - 16;
      if ( (Count & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v16 = 0LL;
      if ( (Count & 2) != 0
        || (v17 = a2[2].Count, v17 != _InterlockedCompareExchange64((volatile signed __int64 *)&a2[2], v16, Count)) )
      {
        ExfReleasePushLock(&a2[2].Count);
      }
      KeAbPostRelease((unsigned __int64)&a2[2]);
      KeLeaveCriticalRegion();
    }
    ExReleaseRundownProtection_0(a2 + 3);
    a1[2] = a3;
  }
}
