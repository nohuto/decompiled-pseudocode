/*
 * XREFs of MiTrimViewPrepare @ 0x140465C3C
 * Callers:
 *     MiTrimSharedPageFromView @ 0x140465634 (MiTrimSharedPageFromView.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     KeForceAttachProcess @ 0x140456CE0 (KeForceAttachProcess.c)
 */

__int64 __fastcall MiTrimViewPrepare(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v5; // rcx
  volatile LONG *v6; // rbx
  KIRQL v7; // al
  __int64 v8; // rdx
  int v9; // esi
  unsigned int v11; // eax
  struct _KTHREAD *CurrentThread; // rbx
  volatile unsigned __int8 *v13; // rdx
  _BYTE *v14; // r14
  struct _LIST_ENTRY *Flink; // r9
  struct _LIST_ENTRY *v16; // r10
  unsigned __int64 v17; // rdx
  struct _LIST_ENTRY *v18; // r8
  struct _LIST_ENTRY *v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  bool v22; // zf

  *(_QWORD *)(a1 + 256) = 0LL;
  v5 = *(_QWORD *)(a1 + 64);
  if ( !v5 || (_KPROCESS *)v5 == KeGetCurrentThread()->ApcState.Process )
  {
    v11 = *(_DWORD *)(a2 + 40);
    if ( v11 < 2 || v11 == 3 )
      return 0LL;
    if ( (*(_DWORD *)(a1 + 4) & 6) == 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      v14 = (_BYTE *)KeAbPreAcquire((__int64)&stru_140E34D88, 0LL, 0LL, a4);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140E34D88, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(
          (signed __int64 *)&stru_140E34D88.Header.Lock,
          0,
          (LegacyAutoBoost *)v14,
          &stru_140E34D88);
      if ( v14 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
        {
          LOBYTE(v13) = 2;
          AutoBoost::KiAbpSetEntryValue((AutoBoost *)(v14 + 33), v13, 1);
        }
        else
        {
          v14[10] = 1;
        }
      }
      Flink = stru_140E34D88.Header.WaitListHead.Flink;
      v16 = *(struct _LIST_ENTRY **)(a1 + 272);
      if ( stru_140E34D88.Header.WaitListHead.Flink )
      {
        do
        {
          v17 = (unsigned __int64)Flink[5].Blink & 0xFFFFFFFFFFFFF000uLL;
          if ( v16 >= (struct _LIST_ENTRY *)((char *)Flink[2].Flink + v17) )
          {
            Flink = Flink->Blink;
          }
          else
          {
            if ( (unsigned __int64)v16 >= v17 )
              break;
            Flink = Flink->Flink;
          }
        }
        while ( Flink );
        if ( Flink )
        {
          v18 = Flink[3].Flink;
          v19 = *(struct _LIST_ENTRY **)(a1 + 16);
          *(_QWORD *)(a1 + 200) = v18;
          if ( v18->Flink == v19
            && (struct _LIST_ENTRY *)((char *)v16 + ((__int64)Flink[1].Blink << 12) - *(_QWORD *)(a1 + 288)) == (struct _LIST_ENTRY *)((unsigned __int64)Flink[5].Blink & 0xFFFFFFFFFFFFF000uLL) )
          {
            *(_DWORD *)(a1 + 260) = 1;
            return 0LL;
          }
        }
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140E34D88, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&stru_140E34D88.Header.Lock);
      KeAbPostRelease((unsigned __int64)&stru_140E34D88);
      v22 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v22
        && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v21, v20);
      }
    }
  }
  else
  {
    v6 = (volatile LONG *)(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(v5 + 1198)) + 21384LL);
    v7 = ExAcquireSpinLockExclusive(v6);
    v8 = *(_QWORD *)(a1 + 64);
    if ( (*(_DWORD *)(v8 + 500) & 0xC00u) < 0xC00
      || *(_QWORD *)(*(_QWORD *)(v8 + 1040) + 72LL)
      || (v9 = 1, *(_QWORD *)(v8 + 1176) <= 1uLL) )
    {
      v9 = 0;
    }
    else
    {
      ++*(_DWORD *)(*(_QWORD *)(v8 + 1040) + 56LL);
    }
    *(_DWORD *)(a1 + 256) = v9;
    if ( v7 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v6);
    else
      ExReleaseSpinLockExclusive(v6, v7);
    if ( *(_DWORD *)(a1 + 256) )
    {
      KeForceAttachProcess(*(_KPROCESS **)(a1 + 64), (_OWORD *)(a1 + 208), 0);
      return 0LL;
    }
  }
  return 3221225497LL;
}
