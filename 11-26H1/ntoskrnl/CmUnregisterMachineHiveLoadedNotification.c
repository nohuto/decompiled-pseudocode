/*
 * XREFs of CmUnregisterMachineHiveLoadedNotification @ 0x140857010
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     CmpWorkItemRundown @ 0x14077EF24 (CmpWorkItemRundown.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall CmUnregisterMachineHiveLoadedNotification(
        unsigned int *P,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  ULONG_PTR v4; // r8
  __int64 v6; // rbp
  AutoBoost *v7; // rax
  void *v8; // rdx
  AutoBoost *v9; // rdi
  struct _KTHREAD *v10; // rcx
  PVOID *v11; // rax
  signed __int64 *v12; // rdi
  signed __int64 v13; // rax
  signed __int64 v14; // rdx
  signed __int64 v15; // rtt

  if ( P )
  {
    v4 = P[26];
    v6 = 23 * v4;
    if ( *((struct _KTHREAD **)P + 12) == KeGetCurrentThread() )
      KeBugCheckEx(0x51u, 0x28uLL, v4, 0LL, 0LL);
    v7 = (AutoBoost *)KeAbPreAcquire((__int64)&CmpMachineHiveList[v6 + 18], 0LL, 0LL, a4);
    v9 = v7;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&CmpMachineHiveList[v6 + 18], 0LL) )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&CmpMachineHiveList[v6 + 18],
        v7,
        (__int64)&CmpMachineHiveList[v6 + 18]);
    if ( v9 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v9, v8);
      else
        *((_BYTE *)v9 + 10) = 1;
    }
    if ( *((_BYTE *)P + 109) )
    {
      v10 = *(struct _KTHREAD **)P;
      if ( *(unsigned int **)(*(_QWORD *)P + 8LL) != P || (v11 = (PVOID *)*((_QWORD *)P + 1), *v11 != P) )
        __fastfail(3u);
      *v11 = v10;
      v10->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v11;
      *((_BYTE *)P + 109) = 0;
    }
    v12 = (signed __int64 *)&CmpMachineHiveList[v6 + 18];
    _m_prefetchw(v12);
    v13 = *v12;
    v14 = *v12 - 16;
    if ( (*v12 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v14 = 0LL;
    if ( (v13 & 2) != 0 || (v15 = *v12, v15 != _InterlockedCompareExchange64(v12, v14, v13)) )
      ExfReleasePushLock(&CmpMachineHiveList[v6 + 18]);
    KeAbPostRelease((unsigned __int64)&CmpMachineHiveList[v6 + 18]);
    CmpWorkItemRundown((struct _EX_RUNDOWN_REF *)P + 2);
    ExFreePoolWithTag(P, 0);
  }
}
