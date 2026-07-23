/*
 * XREFs of MiInsertSharedCommitNode @ 0x140997340
 * Callers:
 *     MiInitializeDataVad @ 0x140996B10 (MiInitializeDataVad.c)
 *     MiSectionOpen @ 0x140997310 (MiSectionOpen.c)
 *     MiInsertSharedCommitNode @ 0x140997340 (MiInsertSharedCommitNode.c)
 *     MiInitializeImageVad @ 0x14099ED2C (MiInitializeImageVad.c)
 *     MiCloneAncillaryVadInfo @ 0x140A07A00 (MiCloneAncillaryVadInfo.c)
 *     MiAllocateSplitVads @ 0x140AC258C (MiAllocateSplitVads.c)
 *     MmLinkJobProcess @ 0x140ADA90C (MmLinkJobProcess.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     RtlAvlInsertNodeEx @ 0x1402EEAE0 (RtlAvlInsertNodeEx.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiIncludeSharedCommit @ 0x140447760 (MiIncludeSharedCommit.c)
 *     MiGetCommittedPages @ 0x1404560C0 (MiGetCommittedPages.c)
 *     MiInsertSharedCommitNode @ 0x140997340 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x140998C50 (MiRemoveSharedCommitNode.c)
 */

__int64 __fastcall MiInsertSharedCommitNode(__int64 a1, unsigned __int64 a2, int a3)
{
  struct _KLOCK_ENTRIES *v6; // r9
  int inserted; // r15d
  unsigned __int64 v8; // r13
  __int64 v9; // rax
  struct _KTHREAD *CurrentThread; // rbp
  AutoBoost *v11; // rax
  void *v12; // rdx
  AutoBoost *v13; // r14
  unsigned __int64 *v14; // rdi
  AutoBoost *v15; // rax
  void *v16; // rdx
  AutoBoost *v17; // r14
  bool v18; // r14
  _QWORD *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  bool v22; // zf
  __int64 v23; // rdx
  __int64 v24; // rcx
  _QWORD *v26; // rax
  int CurrentProcessorColor; // eax
  __int64 PoolMm; // rax
  unsigned __int64 CommittedPages; // rax
  _QWORD *v30; // r9
  _QWORD *v31; // r8
  _QWORD *v32; // rdx
  unsigned __int64 *v33; // [rsp+20h] [rbp-48h]
  ULONG_PTR v34; // [rsp+28h] [rbp-40h]
  unsigned __int64 v35; // [rsp+30h] [rbp-38h]
  __int64 v36; // [rsp+88h] [rbp+20h]

  if ( !(unsigned int)MiIncludeSharedCommit(a1) || (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
    return 0LL;
  inserted = 0;
  if ( (a2 & 1) == 0 )
  {
    v8 = a2;
    if ( (*(_DWORD *)(a2 + 1532) & 0x10) == 0 )
    {
      v35 = 0LL;
      v34 = 64LL;
      goto LABEL_6;
    }
    return 0LL;
  }
  v34 = 40LL;
  v8 = 0LL;
  v35 = a2 & 0xFFFFFFFFFFFFFFFEuLL;
LABEL_6:
  v9 = *(_QWORD *)a1;
  CurrentThread = KeGetCurrentThread();
  v33 = (unsigned __int64 *)(*(_QWORD *)a1 + 72LL);
  v36 = *(_QWORD *)a1;
  if ( (a3 & 1) == 0 )
  {
    --CurrentThread->SpecialApcDisable;
    v11 = (AutoBoost *)KeAbPreAcquire(v8 + 1712, 0LL, 0LL, v6);
    v13 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 1712), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v8 + 1712), v11, v8 + 1712);
    if ( v13 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v13, v12);
      else
        *((_BYTE *)v13 + 10) = 1;
    }
    v9 = v36;
  }
  if ( (a3 & 2) == 0 )
  {
    --CurrentThread->SpecialApcDisable;
    v14 = (unsigned __int64 *)(v9 + 40);
    v15 = (AutoBoost *)KeAbPreAcquire(v9 + 40, 0LL, 0LL, v6);
    v17 = v15;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v14, 0LL) )
      ExfAcquirePushLockExclusiveEx(v14, v15, (__int64)v14);
    if ( v17 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v17, v16);
      else
        *((_BYTE *)v17 + 10) = 1;
    }
  }
  v18 = 0;
  v19 = (_QWORD *)*v33;
  if ( !*v33 )
    goto LABEL_41;
  while ( 1 )
  {
    if ( a2 < v19[3] )
    {
      v26 = (_QWORD *)*v19;
      if ( !*v19 )
        goto LABEL_41;
      goto LABEL_39;
    }
    if ( a2 <= v19[3] )
    {
      ++v19[4];
      goto LABEL_23;
    }
    v26 = (_QWORD *)v19[1];
    if ( !v26 )
      break;
LABEL_39:
    v19 = v26;
  }
  v18 = 1;
LABEL_41:
  CurrentProcessorColor = MmGetCurrentProcessorColor();
  PoolMm = ExAllocatePoolMm(256LL, v34, 1850960205, CurrentProcessorColor | 0x80000000);
  if ( PoolMm )
  {
    *(_QWORD *)(PoolMm + 32) = 1LL;
    *(_QWORD *)(PoolMm + 24) = a2;
    CommittedPages = MiGetCommittedPages((_QWORD *)a1);
    if ( v8 )
    {
      v30[7] = a1;
      v31 = *(_QWORD **)(v8 + 1728);
      v32 = v30 + 5;
      if ( *v31 != v8 + 1720 )
        __fastfail(3u);
      *v32 = v8 + 1720;
      v30[6] = v31;
      *v31 = v32;
      *(_QWORD *)(v8 + 1728) = v32;
      _InterlockedAdd64((volatile signed __int64 *)(v8 + 1704), CommittedPages);
      RtlAvlInsertNodeEx(v33, (unsigned __int64)v19, v18, v30);
      if ( (*(_DWORD *)(v8 + 1532) & 8) != 0 )
      {
        inserted = MiInsertSharedCommitNode(a1, *(_QWORD *)(v8 + 672) | 1LL, 3LL);
        if ( inserted < 0 )
          MiRemoveSharedCommitNode(a1, v8, a3 | 7u);
      }
    }
    else
    {
      _InterlockedAdd64((volatile signed __int64 *)(v35 + 1568), CommittedPages);
      RtlAvlInsertNodeEx(v33, (unsigned __int64)v19, v18, v30);
    }
  }
  else
  {
    inserted = -1073741670;
  }
LABEL_23:
  if ( (a3 & 2) == 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v36 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v36 + 40));
    KeAbPostRelease(v36 + 40);
    v22 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v22 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v21, v20);
  }
  if ( (a3 & 1) == 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 1712), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v8 + 1712));
    KeAbPostRelease(v8 + 1712);
    v22 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v22 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v24, v23);
  }
  return (unsigned int)inserted;
}
