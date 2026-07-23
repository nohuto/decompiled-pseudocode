/*
 * XREFs of MiInsertInSystemSpace @ 0x1404E7024
 * Callers:
 *     MiMapViewInSystemSpace @ 0x140988260 (MiMapViewInSystemSpace.c)
 *     AlpcpCreateView @ 0x140993130 (AlpcpCreateView.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x14099A770 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiMapImageInSystemSpace @ 0x14099D80C (MiMapImageInSystemSpace.c)
 *     KsepSdbMapToMemory @ 0x1409D65BC (KsepSdbMapToMemory.c)
 *     NtGetNlsSectionPtr @ 0x140A9B7D0 (NtGetNlsSectionPtr.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     MiManageSubsectionView @ 0x14027D1E0 (MiManageSubsectionView.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     MiReleasePtes @ 0x140281250 (MiReleasePtes.c)
 *     MiMapWithLargePages @ 0x1402A1BE4 (MiMapWithLargePages.c)
 *     MiGetPageTablesForLargeMap @ 0x1402A2624 (MiGetPageTablesForLargeMap.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiChargeCommit @ 0x1402D8520 (MiChargeCommit.c)
 *     RtlAvlInsertNodeEx @ 0x1402EEAE0 (RtlAvlInsertNodeEx.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     MiUnlockVadTree @ 0x140328470 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x140328600 (MiLockVadTree.c)
 *     MiReferenceDataSubsections @ 0x14034125C (MiReferenceDataSubsections.c)
 *     MiAddMappedPtes @ 0x140341E90 (MiAddMappedPtes.c)
 *     MiOffsetToProtos @ 0x1403422D4 (MiOffsetToProtos.c)
 *     MiReservePtes @ 0x14035FBF0 (MiReservePtes.c)
 *     MiReturnCommit @ 0x14036F050 (MiReturnCommit.c)
 *     MiSectionControlArea @ 0x14038C760 (MiSectionControlArea.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     MiGetAnyMultiplexedVm @ 0x14044F0E0 (MiGetAnyMultiplexedVm.c)
 *     MiReferenceActiveSubsection @ 0x140454670 (MiReferenceActiveSubsection.c)
 *     MiRemoveFromSystemSpace @ 0x140489AA8 (MiRemoveFromSystemSpace.c)
 *     MiUnmapLargePages @ 0x1405053F4 (MiUnmapLargePages.c)
 *     MiDereferenceDataSubsections @ 0x14070EE8C (MiDereferenceDataSubsections.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiCreatePerSessionProtos @ 0x1409A0A14 (MiCreatePerSessionProtos.c)
 *     MiReferenceFileObjectForMap @ 0x140A73EF0 (MiReferenceFileObjectForMap.c)
 *     MiDereferencePerSessionProtos @ 0x140A9AEB4 (MiDereferencePerSessionProtos.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiInsertInSystemSpace(unsigned __int64 a1, __int64 a2, __int64 *a3, char a4, ULONG_PTR *a5)
{
  __int64 v7; // r13
  ULONG_PTR v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rbp
  unsigned __int64 *v11; // r15
  unsigned int v12; // r12d
  __int64 *v13; // r14
  unsigned __int64 v14; // rdx
  __int64 v15; // r8
  unsigned __int64 v16; // r9
  int active; // ebx
  int v18; // eax
  int v19; // eax
  unsigned __int64 PageTablesForLargeMap; // rax
  unsigned __int64 v21; // rax
  __int64 PoolMm; // rax
  unsigned int v23; // ecx
  struct _KLOCK_ENTRIES *v24; // r9
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int64 *v26; // rbx
  KIRQL v27; // al
  bool v28; // r8
  KIRQL v29; // bp
  _QWORD *v30; // rdx
  unsigned __int64 v31; // r8
  _QWORD *v32; // rax
  volatile LONG *v33; // rcx
  AutoBoost *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  AutoBoost *v37; // rbp
  KIRQL v38; // al
  struct _LIST_ENTRY *Flink; // rdx
  bool v40; // r8
  KIRQL v41; // bp
  unsigned __int64 v42; // r8
  struct _LIST_ENTRY *Blink; // rax
  struct _KLOCK_ENTRIES *v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rcx
  bool v47; // zf
  unsigned __int64 v48; // r13
  unsigned __int64 v49; // r15
  unsigned __int64 v50; // rbp
  _QWORD *v51; // rbx
  char *AnyMultiplexedVm; // rsi
  __int64 v53; // r8
  _QWORD *v54; // rdx
  _QWORD *v55; // rdi
  unsigned __int64 v56; // r8
  unsigned int v57; // ecx
  __int64 v58; // rdx
  ULONG_PTR v60; // [rsp+40h] [rbp-128h] BYREF
  unsigned int v61; // [rsp+48h] [rbp-120h]
  __int64 v62; // [rsp+50h] [rbp-118h]
  unsigned __int64 v63; // [rsp+58h] [rbp-110h]
  unsigned __int64 v64; // [rsp+60h] [rbp-108h]
  ULONG *v65; // [rsp+68h] [rbp-100h]
  unsigned __int64 v66; // [rsp+70h] [rbp-F8h] BYREF
  __int64 v67; // [rsp+78h] [rbp-F0h]
  _QWORD v68[29]; // [rsp+80h] [rbp-E8h] BYREF
  char v69; // [rsp+170h] [rbp+8h]

  v66 = 0LL;
  memset_0(v68, 0, 0xA0uLL);
  v7 = 0LL;
  v8 = 0LL;
  v69 = 0;
  v9 = 0LL;
  v63 = 0LL;
  v10 = 0LL;
  v65 = 0LL;
  *a5 = 0LL;
  v11 = 0LL;
  v12 = 3;
  v61 = 0x7FFFF;
  LODWORD(v60) = 3;
  v13 = (__int64 *)MiSectionControlArea(a2);
  v14 = *a3;
  v64 = (a1 >> 16) + ((_WORD)a1 != 0);
  v62 = MiOffsetToProtos((__int64)v13, v14, &v66);
  if ( !v62 )
    goto LABEL_2;
  v7 = 16 * v64;
  v63 = (a1 >> 12) + ((a1 & 0xFFF) != 0);
  v65 = *(ULONG **)(stru_140E2ED08.ThreadLock + 8LL * (unsigned __int16)word_140E3716E);
  v18 = *((_DWORD *)v13 + 14);
  v64 *= 16LL;
  if ( (v18 & 0x20) != 0 )
    goto LABEL_9;
  v19 = MiReferenceDataSubsections((__int64)v13, a3, (a1 >> 12) + ((a1 & 0xFFF) != 0), &v60);
  v12 = v60;
  active = v19;
  if ( v19 < 0 )
    goto LABEL_25;
  v69 = 1;
  if ( (unsigned int)v60 >= 3 )
  {
LABEL_9:
    v21 = MiReservePtes((__int64)&unk_140E34B60, v7, v15, v16);
    v11 = (unsigned __int64 *)v21;
    if ( !v21 )
      goto LABEL_7;
    v8 = (__int64)(v21 << 25) >> 16;
    v60 = v8;
  }
  else
  {
    PageTablesForLargeMap = MiGetPageTablesForLargeMap(v7, 8u, v60, 0);
    v60 = PageTablesForLargeMap;
    v8 = PageTablesForLargeMap;
    if ( !PageTablesForLargeMap )
    {
LABEL_7:
      active = -1073741670;
      goto LABEL_25;
    }
    v11 = (unsigned __int64 *)(((PageTablesForLargeMap >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  }
  PoolMm = ExAllocatePoolMm(
             64LL,
             0x60uLL,
             2002151757,
             KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
  v67 = PoolMm;
  v9 = PoolMm;
  if ( !PoolMm )
    goto LABEL_7;
  v23 = *(_DWORD *)(PoolMm + 56) & 0xFFFFFFF3 | (4 * (v12 & 3));
  *(_DWORD *)(PoolMm + 56) = v23;
  if ( (*(_DWORD *)(a2 + 56) & 0x40000000) != 0 )
  {
    v23 |= 1u;
    *(_DWORD *)(PoolMm + 56) = v23;
  }
  if ( (a4 & 1) != 0 )
    *(_DWORD *)(PoolMm + 56) = v23 | 2;
  if ( (v13[7] & 0x20) != 0 )
  {
    if ( (v13[7] & 8) != 0 && (v13[7] & 0x20) != 0 )
    {
      v61 = -1;
      if ( (int)MiCreatePerSessionProtos(v13, 0xFFFFFFFFLL) < 0 )
      {
LABEL_2:
        active = -1073741801;
LABEL_25:
        _InterlockedIncrement(&dword_140E34B90);
        if ( v11 )
        {
          if ( v12 >= 3 )
            MiReleasePtes((__int64)&unk_140E34B60, v11, v7);
          else
            MiUnmapLargePages(v8, v7 << 12, 8LL);
        }
        if ( v69 )
          MiDereferenceDataSubsections(v13, a3, v63, v12 < 3);
        if ( v10 )
          MiReturnCommit((__int64)v65, v10, 0);
        if ( v9 )
        {
          if ( (*(_DWORD *)(v9 + 56) & 0x20) != 0 )
            MiDereferencePerSessionProtos(v13, v61);
          ExFreePoolWithTag((PVOID)v9, 0);
        }
        return (unsigned int)active;
      }
      *(_DWORD *)(v9 + 56) |= 0x20u;
    }
    v10 = *(_QWORD *)(*v13 + 48);
    if ( v10 && !(unsigned int)MiChargeCommit(v65, *(_QWORD *)(*v13 + 48), 0) )
    {
      v10 = 0LL;
      active = -1073741523;
      goto LABEL_25;
    }
    v62 = (__int64)(v13 + 16);
    active = MiReferenceActiveSubsection(v13 + 16, 0x46u, 0x11u);
    if ( active < 0 )
      goto LABEL_25;
  }
  *(_QWORD *)(v9 + 32) = v63 << 12;
  *(_QWORD *)(v9 + 48) = v62;
  *(_QWORD *)(v9 + 24) = (unsigned __int64)*a3 >> 12;
  *(_QWORD *)(v9 + 40) = v10;
  *(_QWORD *)(v9 + 88) = v8 | 2;
  *(_QWORD *)(v9 + 64) = MiReferenceFileObjectForMap(a2);
  CurrentThread = KeGetCurrentThread();
  if ( v12 )
  {
    --CurrentThread->SpecialApcDisable;
    v34 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140E34D88, 0LL, 0LL, v24);
    v37 = v34;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&stru_140E34D88, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140E34D88, v34, (__int64)&stru_140E34D88);
    if ( v37 )
    {
      v35 = 1LL;
      if ( (KiAbpGlobalState & 1) != 0 )
      {
        LOBYTE(v35) = 2;
        AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v37 + 33), (volatile unsigned __int8 *)v35, 1);
      }
      else
      {
        *((_BYTE *)v37 + 10) = 1;
      }
    }
    v38 = MiLockVadTree(6u, v35, v36);
    Flink = stru_140E34D88.Header.WaitListHead.Flink;
    ++LODWORD(stru_140E34D88.Header.WaitListHead.Blink);
    v40 = 0;
    v41 = v38;
    if ( stru_140E34D88.Header.WaitListHead.Flink )
    {
      while ( 1 )
      {
        v42 = (unsigned __int64)Flink[5].Blink & 0xFFFFFFFFFFFFF000uLL;
        if ( (struct _LIST_ENTRY *)v8 >= (struct _LIST_ENTRY *)((char *)Flink[2].Flink + v42) || v8 >= v42 )
        {
          Blink = Flink->Blink;
          if ( !Blink )
          {
            v40 = 1;
            break;
          }
        }
        else
        {
          Blink = Flink->Flink;
          if ( !Flink->Flink )
          {
            v40 = 0;
            break;
          }
        }
        Flink = Blink;
      }
    }
    RtlAvlInsertNodeEx(
      (unsigned __int64 *)&stru_140E34D88.Header.WaitListHead,
      (unsigned __int64)Flink,
      v40,
      (_QWORD *)v9);
    MiUnlockVadTree(6, v41);
    v68[0] = v13;
    MiManageSubsectionView(v68, (_QWORD *)(v9 + 72), 3, v44);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140E34D88, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&stru_140E34D88.Header.Lock);
    KeAbPostRelease((unsigned __int64)&stru_140E34D88);
    v47 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v47 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v46, v45);
  }
  else
  {
    v26 = &stru_140E34D88.AffinityVersion + 2 * (unsigned __int8)(v8 >> 30);
    v27 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v26 + 3);
    v28 = 0;
    ++*((_DWORD *)v26 + 2);
    v29 = v27;
    v30 = (_QWORD *)*v26;
    if ( *v26 )
    {
      while ( 1 )
      {
        v31 = v30[11] & 0xFFFFFFFFFFFFF000uLL;
        if ( v8 >= v31 + v30[4] || v8 >= v31 )
        {
          v32 = (_QWORD *)v30[1];
          if ( !v32 )
          {
            v28 = 1;
            break;
          }
        }
        else
        {
          v32 = (_QWORD *)*v30;
          if ( !*v30 )
          {
            v28 = 0;
            break;
          }
        }
        v30 = v32;
      }
    }
    RtlAvlInsertNodeEx(v26, (unsigned __int64)v30, v28, (_QWORD *)v9);
    v33 = (volatile LONG *)v26 + 3;
    if ( v29 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v33);
    else
      ExReleaseSpinLockExclusive(v33, v29);
  }
  if ( (*(_DWORD *)(v9 + 56) & 1) != 0 )
    _InterlockedAdd((volatile signed __int32 *)v13 + 23, 1u);
  if ( v12 >= 3 )
  {
    v56 = v63;
    v57 = 0;
    if ( v63 )
    {
      v58 = 0LL;
      do
      {
        ++v57;
        v11[v58] = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        v58 = v57;
      }
      while ( v57 < v56 );
    }
    active = MiAddMappedPtes((__int64)&unk_140E370C0, (__int64 *)v11, v56, v13, a3, 0);
    if ( active < 0 )
    {
      _InterlockedAdd(&dword_140E34B90, 1u);
      MiRemoveFromSystemSpace(v8);
      return (unsigned int)active;
    }
  }
  else
  {
    v48 = 0LL;
    v49 = v8;
    v50 = MiPageSizes[v12];
    v51 = (_QWORD *)(*(_QWORD *)(v62 + 8) + 8 * v66);
    if ( v64 )
    {
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(4);
      v55 = v54;
      do
      {
        if ( v51 == v55 )
        {
          v62 = *(_QWORD *)(v53 + 16);
          v51 = *(_QWORD **)(v62 + 8);
          v55 = &v51[*(unsigned int *)(v62 + 44)];
        }
        MiMapWithLargePages((__int64)AnyMultiplexedVm, v49, (*v51 >> 12) & 0xFFFFFFFFFFLL, v50, v12, 4, 1);
        v53 = v62;
        v51 += v50;
        v49 += v50 << 12;
        v48 += v50;
      }
      while ( v48 < v64 );
      v9 = v67;
      v8 = v60;
    }
    active = 0;
  }
  *(_DWORD *)(v9 + 56) |= 0x10u;
  *a5 = v8;
  return (unsigned int)active;
}
