/*
 * XREFs of MiRemoveSharedCommitNode @ 0x1409C7C70
 * Callers:
 *     MiDeleteNewlyCreatedPartialVads @ 0x14087EFD4 (MiDeleteNewlyCreatedPartialVads.c)
 *     MiDeleteVad @ 0x14095BF10 (MiDeleteVad.c)
 *     MiDeletePartialCloneVads @ 0x1409619E4 (MiDeletePartialCloneVads.c)
 *     MiCloneAncillaryVadInfo @ 0x140961D0C (MiCloneAncillaryVadInfo.c)
 *     MiInsertSharedCommitNode @ 0x1409C6360 (MiInsertSharedCommitNode.c)
 *     MiDataVadErrorCleanup @ 0x1409C670C (MiDataVadErrorCleanup.c)
 *     MiSectionClose @ 0x1409C7C40 (MiSectionClose.c)
 *     MiRemoveSharedCommitNode @ 0x1409C7C70 (MiRemoveSharedCommitNode.c)
 *     MiMapViewOfImageSection @ 0x1409CD37C (MiMapViewOfImageSection.c)
 *     MmLinkJobProcess @ 0x140ADDB9C (MmLinkJobProcess.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     RtlAvlRemoveNode @ 0x14030C5E0 (RtlAvlRemoveNode.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     MiIncludeSharedCommit @ 0x14044F630 (MiIncludeSharedCommit.c)
 *     MiGetCommittedPages @ 0x14045C518 (MiGetCommittedPages.c)
 *     MiRemoveSharedCommitNode @ 0x1409C7C70 (MiRemoveSharedCommitNode.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiRemoveSharedCommitNode(__int64 a1, unsigned __int64 a2, char a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rbp
  bool v9; // zf
  _QWORD *v10; // rdi
  struct _KTHREAD *v11; // rbp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // rdx
  int v14; // r12d
  AutoBoost *v15; // rax
  void *v16; // rdx
  AutoBoost *v17; // rdi
  int v18; // r15d
  unsigned __int64 *v19; // rsi
  AutoBoost *v20; // rax
  void *v21; // rdx
  AutoBoost *v22; // rdi
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  struct _KTHREAD *v30; // [rsp+68h] [rbp+10h]
  __int64 v32; // [rsp+78h] [rbp+20h]

  if ( (a2 & 1) != 0 )
  {
    v8 = a2 & 0xFFFFFFFFFFFFFFFEuLL;
    v7 = 0LL;
  }
  else
  {
    v7 = a2;
    if ( !(unsigned int)MiIncludeSharedCommit(a1)
      || (*(_DWORD *)(a1 + 56) & 0x20) != 0
      || (*(_DWORD *)(a2 + 1532) & 0x10) != 0 )
    {
      return;
    }
    v8 = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  v13 = *(_QWORD *)a1;
  v30 = CurrentThread;
  v32 = *(_QWORD *)a1;
  v14 = a3 & 1;
  if ( (a3 & 1) == 0 )
  {
    --CurrentThread->SpecialApcDisable;
    v15 = (AutoBoost *)KeAbPreAcquire(v7 + 1712, 0LL, 0LL, a4);
    v17 = v15;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 1712), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v7 + 1712), v15, v7 + 1712);
    if ( v17 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v17, v16);
      else
        *((_BYTE *)v17 + 10) = 1;
    }
    CurrentThread = v30;
    v13 = v32;
  }
  v18 = a3 & 2;
  if ( !v18 )
  {
    --CurrentThread->SpecialApcDisable;
    v19 = (unsigned __int64 *)(v13 + 40);
    v20 = (AutoBoost *)KeAbPreAcquire(v13 + 40, 0LL, 0LL, a4);
    v22 = v20;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v19, 0LL) )
      ExfAcquirePushLockExclusiveEx(v19, v20, (__int64)v19);
    if ( v22 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v22, v21);
      else
        *((_BYTE *)v22 + 10) = 1;
    }
  }
  v10 = *(_QWORD **)(v32 + 72);
  while ( v10 )
  {
    if ( a2 > v10[3] )
    {
      v10 = (_QWORD *)v10[1];
    }
    else
    {
      if ( a2 >= v10[3] )
        break;
      v10 = (_QWORD *)*v10;
    }
  }
  v9 = v10[4]-- == 1LL;
  if ( v9 )
  {
    RtlAvlRemoveNode((unsigned __int64 *)(v32 + 72), (__int64)v10);
    v23 = -MiGetCommittedPages((_QWORD *)a1);
    if ( v7 )
    {
      _InterlockedAdd64((volatile signed __int64 *)(v7 + 1704), v23);
      v24 = v10[5];
      if ( *(_QWORD **)(v24 + 8) != v10 + 5 || (v25 = (_QWORD *)v10[6], (_QWORD *)*v25 != v10 + 5) )
        __fastfail(3u);
      *v25 = v24;
      *(_QWORD *)(v24 + 8) = v25;
      if ( (a3 & 4) == 0 && (*(_DWORD *)(v7 + 1532) & 8) != 0 )
        MiRemoveSharedCommitNode(a1, *(_QWORD *)(v7 + 672) | 1LL, 3LL);
    }
    else
    {
      _InterlockedAdd64((volatile signed __int64 *)(v8 + 1568), v23);
    }
  }
  else
  {
    v10 = 0LL;
  }
  if ( v18 )
  {
    v11 = v30;
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v32 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v32 + 40));
    KeAbPostRelease(v32 + 40);
    v11 = v30;
    v9 = v30->SpecialApcDisable++ == -1;
    if ( v9 && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)v30->ApcState.ApcListHead[0].Flink != &v30->152 )
      KiCheckForKernelApcDelivery(v27, v26);
  }
  if ( !v14 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 1712), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v7 + 1712));
    KeAbPostRelease(v7 + 1712);
    v9 = v11->SpecialApcDisable++ == -1;
    if ( v9 && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)v11->ApcState.ApcListHead[0].Flink != &v11->152 )
      KiCheckForKernelApcDelivery(v29, v28);
  }
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
}
