/*
 * XREFs of ObpRemoveNamespaceFromTable @ 0x140A9AC7C
 * Callers:
 *     NtDeletePrivateNamespace @ 0x140A9A560 (NtDeletePrivateNamespace.c)
 *     ObpCloseDirectoryObject @ 0x140A9AC50 (ObpCloseDirectoryObject.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 */

__int64 __fastcall ObpRemoveNamespaceFromTable(volatile signed __int32 *Object)
{
  unsigned int v2; // r14d
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rbp
  struct _KTHREAD *CurrentThread; // rax
  struct _KLOCK_ENTRIES *v5; // r9
  AutoBoost *v6; // rax
  void *v7; // rdx
  AutoBoost *v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  signed __int64 Flink; // rax
  signed __int64 v13; // rdx
  struct _LIST_ENTRY *v14; // rtt

  v2 = -1072103391;
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
  _InterlockedOr(Object + 84, 2u);
  v9 = (_QWORD *)*((_QWORD *)Object + 40);
  if ( v9 )
  {
    *((_QWORD *)Object + 40) = 0LL;
    v9[2] = 0LL;
    v10 = *v9;
    if ( *(_QWORD **)(*v9 + 8LL) != v9 || (v11 = (_QWORD *)v9[1], (_QWORD *)*v11 != v9) )
      __fastfail(3u);
    *v11 = v10;
    *(_QWORD *)(v10 + 8) = v11;
    --LODWORD(CurrentServerSiloGlobals[45].Blink);
    ObfDereferenceObject((PVOID)Object);
    v2 = 0;
  }
  _m_prefetchw(&CurrentServerSiloGlobals[45]);
  Flink = (signed __int64)CurrentServerSiloGlobals[45].Flink;
  v13 = Flink - 16;
  if ( (Flink & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v13 = 0LL;
  if ( (Flink & 2) != 0
    || (v14 = CurrentServerSiloGlobals[45].Flink,
        v14 != (struct _LIST_ENTRY *)_InterlockedCompareExchange64(
                                       (volatile signed __int64 *)&CurrentServerSiloGlobals[45],
                                       v13,
                                       Flink)) )
  {
    ExfReleasePushLock(&CurrentServerSiloGlobals[45].Flink);
  }
  KeAbPostRelease((unsigned __int64)&CurrentServerSiloGlobals[45]);
  KeLeaveCriticalRegion();
  return v2;
}
