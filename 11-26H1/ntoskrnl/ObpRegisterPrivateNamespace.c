/*
 * XREFs of ObpRegisterPrivateNamespace @ 0x140A9AB14
 * Callers:
 *     NtCreatePrivateNamespace @ 0x140A9A600 (NtCreatePrivateNamespace.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ObpLookupNamespaceEntry @ 0x1408EF0CC (ObpLookupNamespaceEntry.c)
 */

__int64 __fastcall ObpRegisterPrivateNamespace(__int64 a1)
{
  unsigned int v2; // ebp
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // r14
  struct _KTHREAD *CurrentThread; // rax
  struct _KLOCK_ENTRIES *v5; // r9
  AutoBoost *v6; // rax
  void *v7; // rdx
  AutoBoost *v8; // rbx
  __int64 v9; // rcx
  __int64 *v10; // rax
  signed __int64 Flink; // rax
  signed __int64 v12; // rdx
  struct _LIST_ENTRY *v13; // rtt

  v2 = -1073741771;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = (AutoBoost *)KeAbPreAcquire((__int64)&CurrentServerSiloGlobals[45], 0LL, 0LL, v5);
  v8 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentServerSiloGlobals[45], 0LL) )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&CurrentServerSiloGlobals[45],
      v6,
      (__int64)&CurrentServerSiloGlobals[45]);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v8, v7);
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  if ( !ObpLookupNamespaceEntry((__int64)&CurrentServerSiloGlobals[8], a1) )
  {
    v9 = (__int64)&CurrentServerSiloGlobals[*(unsigned __int8 *)(a1 + 40) + 8];
    v10 = *(__int64 **)(v9 + 8);
    if ( *v10 != v9 )
      __fastfail(3u);
    *(_QWORD *)a1 = v9;
    v2 = 0;
    *(_QWORD *)(a1 + 8) = v10;
    *v10 = a1;
    *(_QWORD *)(v9 + 8) = a1;
    ++LODWORD(CurrentServerSiloGlobals[45].Blink);
  }
  _m_prefetchw(&CurrentServerSiloGlobals[45]);
  Flink = (signed __int64)CurrentServerSiloGlobals[45].Flink;
  v12 = Flink - 16;
  if ( (Flink & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v12 = 0LL;
  if ( (Flink & 2) != 0
    || (v13 = CurrentServerSiloGlobals[45].Flink,
        v13 != (struct _LIST_ENTRY *)_InterlockedCompareExchange64(
                                       (volatile signed __int64 *)&CurrentServerSiloGlobals[45],
                                       v12,
                                       Flink)) )
  {
    ExfReleasePushLock(&CurrentServerSiloGlobals[45].Flink);
  }
  KeAbPostRelease((unsigned __int64)&CurrentServerSiloGlobals[45]);
  KeLeaveCriticalRegion();
  return v2;
}
