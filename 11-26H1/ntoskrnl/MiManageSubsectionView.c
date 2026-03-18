/*
 * XREFs of MiManageSubsectionView @ 0x14027DC70
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x14031E380 (MmUnmapViewInSystemCache.c)
 *     MiRemoveFromSystemSpace @ 0x14048FFF8 (MiRemoveFromSystemSpace.c)
 *     MiInsertInSystemSpace @ 0x1404EDA44 (MiInsertInSystemSpace.c)
 *     MiDeleteVad @ 0x14095BF10 (MiDeleteVad.c)
 *     MiConstructLoaderEntry @ 0x140AA8F54 (MiConstructLoaderEntry.c)
 *     MiUnloadSystemImage @ 0x140AC76E8 (MiUnloadSystemImage.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

void __fastcall MiManageSubsectionView(_QWORD *a1, _QWORD *a2, int a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rbp
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int32 *v9; // rdi
  unsigned __int64 v10; // rax
  void *v11; // rdx
  AutoBoost *v12; // rsi
  int v13; // ebx
  int v14; // ebx
  __int64 v15; // rax
  _QWORD *v16; // rbp
  __int64 v17; // rax
  _QWORD *v18; // rcx
  struct _KTHREAD *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rcx
  _QWORD *v26; // rax

  v4 = *a1;
  CurrentThread = KeGetCurrentThread();
  v9 = (volatile signed __int32 *)(*a1 + 104LL);
  --CurrentThread->SpecialApcDisable;
  v10 = KeAbPreAcquire((__int64)v9, 0LL, 0LL, a4);
  v12 = (AutoBoost *)v10;
  if ( _interlockedbittestandset64(v9, 0LL) )
    ExfAcquirePushLockExclusiveEx(v9, v10, v9);
  if ( v12 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v12, v11);
    else
      *((_BYTE *)v12 + 10) = 1;
  }
  if ( a3 == 4 )
  {
    if ( (*(_DWORD *)(v4 + 56) & 0x400) != 0 )
      goto LABEL_17;
    v17 = *a2;
    if ( *(_QWORD **)(*a2 + 8LL) == a2 )
    {
      v18 = (_QWORD *)a2[1];
      if ( (_QWORD *)*v18 == a2 )
      {
        *v18 = v17;
        *(_QWORD *)(v17 + 8) = v18;
        goto LABEL_17;
      }
    }
    goto LABEL_12;
  }
  v13 = a3 - 1;
  if ( !v13 )
  {
    v23 = a1[11];
    v24 = a1 + 11;
    if ( *(_QWORD **)(v23 + 8) == a1 + 11 )
    {
      *a2 = v23;
      a2[1] = v24;
      *(_QWORD *)(v23 + 8) = a2;
      *v24 = a2;
      goto LABEL_17;
    }
    goto LABEL_12;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    v25 = *a2;
    if ( *(_QWORD **)(*a2 + 8LL) == a2 )
    {
      v26 = (_QWORD *)a2[1];
      if ( (_QWORD *)*v26 == a2 )
      {
        *v26 = v25;
        *(_QWORD *)(v25 + 8) = v26;
        goto LABEL_17;
      }
    }
LABEL_12:
    __fastfail(3u);
  }
  if ( v14 == 1 && (*(_DWORD *)(v4 + 56) & 0x400) == 0 )
  {
    v15 = *(_QWORD *)(v4 + 8);
    v16 = (_QWORD *)(v4 + 8);
    if ( *(_QWORD **)(v15 + 8) != v16 )
      goto LABEL_12;
    *a2 = v15;
    a2[1] = v16;
    *(_QWORD *)(v15 + 8) = a2;
    *v16 = a2;
  }
LABEL_17:
  v19 = KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v9);
  KeAbPostRelease((unsigned __int64)v9);
  if ( v19->SpecialApcDisable++ == -1
    && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)v19->ApcState.ApcListHead[0].Flink != &v19->152 )
  {
    KiCheckForKernelApcDelivery(v21, v20);
  }
}
