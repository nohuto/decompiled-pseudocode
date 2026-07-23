/*
 * XREFs of ObDestroyHandleRevocationBlock @ 0x140B005D0
 * Callers:
 *     SepDeleteLogonSessionTrack @ 0x140B003D0 (SepDeleteLogonSessionTrack.c)
 *     SepDeReferenceLogonSession @ 0x140B8585C (SepDeReferenceLogonSession.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExWaitForRundownProtectionRelease @ 0x14045CD60 (ExWaitForRundownProtectionRelease.c)
 */

void __fastcall ObDestroyHandleRevocationBlock(
        struct _EX_RUNDOWN_REF *a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *p_Count; // rsi
  AutoBoost *v7; // rax
  void *v8; // rdx
  AutoBoost *v9; // rdi
  struct _EX_RUNDOWN_REF *Count; // rdi
  signed __int64 v11; // rax
  signed __int64 v12; // rdx
  unsigned __int64 v13; // rtt
  struct _EX_RUNDOWN_REF *v14; // rcx
  struct _EX_RUNDOWN_REF *v15; // rsi
  unsigned __int64 v16; // rcx
  struct _EX_RUNDOWN_REF **v17; // rax

  CurrentThread = KeGetCurrentThread();
  p_Count = &a1[2].Count;
  --CurrentThread->KernelApcDisable;
  v7 = (AutoBoost *)KeAbPreAcquire((__int64)&a1[2], 0LL, 0LL, a4);
  v9 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)p_Count, 0LL) )
    ExfAcquirePushLockExclusiveEx(p_Count, v7, (__int64)p_Count);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v9, v8);
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  Count = (struct _EX_RUNDOWN_REF *)a1->Count;
  while ( Count != a1 )
  {
    v14 = Count;
    v15 = Count;
    Count = (struct _EX_RUNDOWN_REF *)Count->Count;
    if ( a1 == (struct _EX_RUNDOWN_REF *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)&v15[2],
                                           2LL,
                                           (signed __int64)a1) )
    {
      v16 = v14->Count;
      if ( *(struct _EX_RUNDOWN_REF **)(v16 + 8) != v15 || (v17 = (struct _EX_RUNDOWN_REF **)v15[1].Count, *v17 != v15) )
        __fastfail(3u);
      *v17 = (struct _EX_RUNDOWN_REF *)v16;
      *(_QWORD *)(v16 + 8) = v17;
      ExReleaseRundownProtection_0(a1 + 3);
      v15[2].Count = 0LL;
    }
  }
  _m_prefetchw(&a1[2]);
  v11 = a1[2].Count;
  v12 = v11 - 16;
  if ( (v11 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v12 = 0LL;
  if ( (v11 & 2) != 0
    || (v13 = a1[2].Count, v13 != _InterlockedCompareExchange64((volatile signed __int64 *)&a1[2], v12, v11)) )
  {
    ExfReleasePushLock(&a1[2].Count);
  }
  KeAbPostRelease((unsigned __int64)&a1[2]);
  KeLeaveCriticalRegion();
  ExWaitForRundownProtectionRelease(a1 + 3);
}
