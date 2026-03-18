/*
 * XREFs of EtwpDeleteSessionDemuxObject @ 0x14082CA20
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 *     RtlRbRemoveNode @ 0x140377C60 (RtlRbRemoveNode.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpDeleteSessionDemuxObject(_QWORD *a1)
{
  _QWORD *v1; // rdi
  struct _LIST_ENTRY *Flink; // r14
  struct _KTHREAD *CurrentThread; // rax
  struct _KLOCK_ENTRIES *v5; // r9
  AutoBoost *v6; // rax
  void *v7; // rdx
  AutoBoost *v8; // rsi
  __int64 v9; // rcx
  _QWORD *v10; // rax
  signed __int64 v11; // rax
  signed __int64 v12; // rdx
  struct _LIST_ENTRY *v13; // rtt

  v1 = (_QWORD *)a1[3];
  if ( v1 )
  {
    Flink = PsGetCurrentServerSiloGlobals()[52].Flink;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v6 = (AutoBoost *)KeAbPreAcquire((__int64)&Flink[273], 0LL, 0LL, v5);
    v8 = v6;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&Flink[273], 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Flink[273], v6, (__int64)&Flink[273]);
    if ( v8 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v8, v7);
      else
        *((_BYTE *)v8 + 10) = 1;
    }
    v9 = *a1;
    if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v10 = (_QWORD *)a1[1], (_QWORD *)*v10 != a1) )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    a1[3] = 0LL;
    if ( (_QWORD *)v1[4] == v1 + 4 )
    {
      RtlRbRemoveNode((__int64)&Flink[272], (__int64)v1);
      ExFreePoolWithTag(v1, 0);
    }
    _m_prefetchw(&Flink[273]);
    v11 = (signed __int64)Flink[273].Flink;
    v12 = v11 - 16;
    if ( (v11 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v12 = 0LL;
    if ( (v11 & 2) != 0
      || (v13 = Flink[273].Flink,
          v13 != (struct _LIST_ENTRY *)_InterlockedCompareExchange64((volatile signed __int64 *)&Flink[273], v12, v11)) )
    {
      ExfReleasePushLock(&Flink[273].Flink);
    }
    KeAbPostRelease((unsigned __int64)&Flink[273]);
    KeLeaveCriticalRegion();
  }
}
