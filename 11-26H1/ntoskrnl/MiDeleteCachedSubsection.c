/*
 * XREFs of MiDeleteCachedSubsection @ 0x14050A360
 * Callers:
 *     MiDeleteCachedSubsections @ 0x1404A05EC (MiDeleteCachedSubsections.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x140263F90 (ObFastDereferenceObjectDeferDelete.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     MiReleaseControlAreaWaiters @ 0x140272950 (MiReleaseControlAreaWaiters.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDecrementSubsectionViewCount @ 0x140370370 (MiDecrementSubsectionViewCount.c)
 *     MiInsertUnusedSubsectionInternal @ 0x1403704C4 (MiInsertUnusedSubsectionInternal.c)
 *     MiPurgeSubsection @ 0x1404199B0 (MiPurgeSubsection.c)
 *     MiFreeProtoPool @ 0x140450078 (MiFreeProtoPool.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140450590 (MiUpdateSystemProtoPtesTree.c)
 *     MiDecrementModifiedWriteCount @ 0x140462920 (MiDecrementModifiedWriteCount.c)
 *     MmIsWriteErrorFatal @ 0x140467358 (MmIsWriteErrorFatal.c)
 *     MiFlushSection @ 0x1404A70A8 (MiFlushSection.c)
 *     MiPrepareToFlushSubsection @ 0x1404E5300 (MiPrepareToFlushSubsection.c)
 *     MiTranslateSubsectionState @ 0x14050EA70 (MiTranslateSubsectionState.c)
 *     MiNotifyUserOfLostData @ 0x14052A188 (MiNotifyUserOfLostData.c)
 *     MiEntireSubsectionIsPurged @ 0x14052C1C0 (MiEntireSubsectionIsPurged.c)
 *     MiDeleteFileExtentList @ 0x1407735B4 (MiDeleteFileExtentList.c)
 *     FsRtlReleaseFileForCcFlush @ 0x140A6A590 (FsRtlReleaseFileForCcFlush.c)
 */

__int64 __fastcall MiDeleteCachedSubsection(__int64 a1, ULONG_PTR *a2)
{
  ULONG_PTR v2; // rdi
  __int64 v3; // r14
  PFILE_OBJECT v4; // rsi
  void *v5; // r12
  int v6; // ecx
  NTSTATUS v7; // ebx
  __int64 v8; // r13
  volatile LONG *v9; // r15
  __int64 v10; // rdx
  KIRQL v11; // r14
  __int64 result; // rax
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  NTSTATUS v16; // eax
  struct _FILE_OBJECT *v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 *v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // [rsp+28h] [rbp-51h]
  PFILE_OBJECT FileObject; // [rsp+40h] [rbp-39h] BYREF
  PVOID P; // [rsp+48h] [rbp-31h]
  __int64 v26; // [rsp+50h] [rbp-29h]
  __int128 v27; // [rsp+58h] [rbp-21h] BYREF
  __int64 v28[2]; // [rsp+68h] [rbp-11h] BYREF
  __int128 v29; // [rsp+78h] [rbp-1h]
  __int64 v30; // [rsp+88h] [rbp+Fh]
  int v33; // [rsp+F0h] [rbp+77h]
  __int64 v34; // [rsp+F8h] [rbp+7Fh] BYREF

  v2 = *a2;
  v3 = a1;
  P = 0LL;
  v26 = 0LL;
  v30 = 0LL;
  v4 = 0LL;
  LODWORD(v34) = 0;
  FileObject = 0LL;
  v27 = 0LL;
  v5 = 0LL;
  v6 = 8;
  *(_OWORD *)v28 = 0LL;
  v33 = 8;
  v7 = 0;
  v29 = 0LL;
  v8 = *(_QWORD *)v2;
  v9 = (volatile LONG *)(*(_QWORD *)v2 + 72LL);
  while ( 1 )
  {
    MiPurgeSubsection(
      (struct _KTHREAD *)v2,
      *(_QWORD *)(v2 + 8),
      *(_QWORD *)(v2 + 8) + 8LL * *(unsigned int *)(v2 + 44),
      v6,
      v28);
    if ( BYTE1(v28[1]) )
      MiNotifyUserOfLostData(v8, (unsigned int)v7);
    *(_QWORD *)(v3 + 80) += v28[0];
    LOBYTE(v10) = ExAcquireSpinLockExclusive(v9);
    v11 = v10;
    result = MiEntireSubsectionIsPurged(v2, v10);
    v7 = result;
    if ( (int)result >= 0 )
      return result;
    if ( (_DWORD)result == -1073741431 && !*(_DWORD *)(v2 + 104) )
    {
      MiUpdateSystemProtoPtesTree((_QWORD *)(v2 + 120), 2);
      P = *(PVOID *)(v2 + 8);
      v26 = 8LL * *(unsigned int *)(v2 + 44);
      *(_QWORD *)(v2 + 8) = 0LL;
      if ( *(_QWORD *)(v8 + 64) && (*(_DWORD *)(v8 + 56) & 0x30000000) == 0x20000000 )
      {
        v5 = *(void **)(v2 + 112);
        *(_QWORD *)(v2 + 112) = 0LL;
      }
      goto LABEL_33;
    }
    if ( (_DWORD)result != -1073741267 )
      goto LABEL_33;
    if ( (_DWORD)v34 )
    {
      v7 = -1073741245;
LABEL_33:
      MiDecrementSubsectionViewCount(v2, 0);
      if ( !*(_QWORD *)(v2 + 80) && (*(_DWORD *)(v8 + 56) & 1) == 0 )
        MiInsertUnusedSubsectionInternal(v2, (__int64)(a2 + 2));
      v20 = MiDecrementModifiedWriteCount(v8, 1);
      if ( v11 == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel(v9);
      else
        ExReleaseSpinLockExclusive(v9, v11);
      if ( v4 )
      {
        FsRtlReleaseFileForCcFlush(v4);
        ObfDereferenceObjectWithTag(v4, 0x63536D4Du);
      }
      if ( v20 )
        MiReleaseControlAreaWaiters(v20, v21, v22);
      if ( P )
      {
        MiFreeProtoPool(P, v26);
        if ( v5 )
          MiDeleteFileExtentList(v5);
        return 0;
      }
      return (unsigned int)v7;
    }
    v13 = MiPrepareToFlushSubsection((__int64 *)v2, v11, a1, &FileObject);
    v7 = v13;
    if ( v13 < 0 )
    {
      if ( v13 != -1073741267 )
      {
        result = 3221225499LL;
        if ( v7 == -1073741797 )
          return result;
        v4 = FileObject;
        goto LABEL_33;
      }
      if ( v11 == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel(v9);
      else
        ExReleaseSpinLockExclusive(v9, v11);
    }
    v14 = *(_QWORD *)(v2 + 8);
    v15 = *(unsigned int *)(v2 + 44) - 1LL;
    v34 = 0LL;
    KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)1;
    LODWORD(v23) = 2;
    v16 = MiFlushSection(v14, v14 + 8 * v15, v2, v2, 0LL, v23, &v34, &v27);
    v4 = FileObject;
    v7 = v16;
    v17 = FileObject;
    KeGetCurrentThread()[1].TrapFrame = 0LL;
    FsRtlReleaseFileForCcFlush(v17);
    *(_QWORD *)(a1 + 88) += v34;
    if ( v7 < 0 && v7 != -1073740749 && MmIsWriteErrorFatal(1, (v4->DeviceObject->Characteristics & 0x10) != 0, v7) )
      v33 |= 1u;
    if ( v4 )
    {
      ObFastDereferenceObjectDeferDelete((signed __int64 *)(v8 + 64), (ULONG_PTR)v4, 0x63536D4Du);
      v4 = 0LL;
      FileObject = 0LL;
    }
    v11 = ExAcquireSpinLockExclusive(v9);
    if ( (v33 & 1) == 0 )
    {
      if ( v7 < 0 )
        goto LABEL_33;
      v7 = MiTranslateSubsectionState(v2, 1LL, v18, v19);
      if ( v7 < 0 )
        goto LABEL_33;
    }
    if ( v11 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v9);
    else
      ExReleaseSpinLockExclusive(v9, v11);
    v6 = v33;
    v3 = a1;
    LODWORD(v34) = 1;
  }
}
