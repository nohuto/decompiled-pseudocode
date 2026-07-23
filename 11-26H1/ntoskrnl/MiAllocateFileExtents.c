/*
 * XREFs of MiAllocateFileExtents @ 0x140B62A58
 * Callers:
 *     MiAddViewsForSection @ 0x1402C51E0 (MiAddViewsForSection.c)
 *     MiCreatePrototypePtes @ 0x14048DBBC (MiCreatePrototypePtes.c)
 *     MiInitializeCachedExtentWalker @ 0x1404FDCAC (MiInitializeCachedExtentWalker.c)
 *     MiFaultGetFileExtents @ 0x14050664C (MiFaultGetFileExtents.c)
 *     MiUpdateActiveSubsection @ 0x1406FCE68 (MiUpdateActiveSubsection.c)
 *     MiInitializeImageExtents @ 0x140873770 (MiInitializeImageExtents.c)
 * Callees:
 *     MiDereferenceControlAreaFile @ 0x140263F30 (MiDereferenceControlAreaFile.c)
 *     MiEndingOffset @ 0x14036E8D0 (MiEndingOffset.c)
 *     MiStartingOffset @ 0x14036EC40 (MiStartingOffset.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiReferenceControlAreaFile @ 0x1404419A0 (MiReferenceControlAreaFile.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiSetSubsectionBase @ 0x1404504B8 (MiSetSubsectionBase.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140450590 (MiUpdateSystemProtoPtesTree.c)
 *     MiSubsectionProtosCreated @ 0x140507A40 (MiSubsectionProtosCreated.c)
 *     FsRtlGetFileExtents @ 0x1405B7980 (FsRtlGetFileExtents.c)
 *     MiChangingSubsectionProtos @ 0x1406FDDF0 (MiChangingSubsectionProtos.c)
 *     MiEliminateOverlappingExtents @ 0x1406FE3B4 (MiEliminateOverlappingExtents.c)
 *     MiInsertCopyExtents @ 0x1406FF27C (MiInsertCopyExtents.c)
 *     MiMergeCopyExtents @ 0x1406FF634 (MiMergeCopyExtents.c)
 *     MiUnlinkSubsectionWaitBlock @ 0x1406FFA90 (MiUnlinkSubsectionWaitBlock.c)
 *     MiReplaceSystemProtoPtesNode @ 0x140714D44 (MiReplaceSystemProtoPtesNode.c)
 *     MiDeleteFileExtentList @ 0x1407735B4 (MiDeleteFileExtentList.c)
 *     MiNewPfnsSuitable @ 0x14086D01C (MiNewPfnsSuitable.c)
 *     MiConvertRunsToPages @ 0x1408733DC (MiConvertRunsToPages.c)
 *     MiCreateFileOnlyPfns @ 0x140873544 (MiCreateFileOnlyPfns.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAllocateFileExtents(
        struct _KTHREAD *a1,
        unsigned int a2,
        ULONG_PTR a3,
        unsigned int a4,
        char a5,
        __int64 a6)
{
  unsigned __int64 v7; // r9
  unsigned __int64 v9; // rax
  unsigned int *inserted; // r12
  __int64 v11; // r15
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rbx
  int CurrentProcessorColor; // eax
  _DWORD *PoolMm; // rax
  _DWORD *v18; // rsi
  int v19; // edx
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned __int64 v22; // r13
  void *v23; // rdi
  int FileOnlyPfns; // ebx
  __int64 v25; // r8
  __int64 v27; // r13
  int v28; // eax
  __int128 *v29; // rcx
  char v30; // dl
  unsigned __int64 v31; // [rsp+28h] [rbp-A9h]
  unsigned int v32; // [rsp+38h] [rbp-99h] BYREF
  int v33; // [rsp+3Ch] [rbp-95h]
  __int64 v34; // [rsp+40h] [rbp-91h]
  unsigned __int64 v35; // [rsp+48h] [rbp-89h] BYREF
  struct _FILE_OBJECT *v36; // [rsp+50h] [rbp-81h]
  unsigned int *v37; // [rsp+58h] [rbp-79h] BYREF
  unsigned __int64 v38; // [rsp+60h] [rbp-71h]
  unsigned __int64 v39; // [rsp+68h] [rbp-69h]
  __int128 v40; // [rsp+70h] [rbp-61h] BYREF
  __int128 v41; // [rsp+80h] [rbp-51h]
  __int128 v42; // [rsp+90h] [rbp-41h]
  _OWORD v43[7]; // [rsp+A0h] [rbp-31h] BYREF
  int v44; // [rsp+128h] [rbp+57h]
  unsigned int v45; // [rsp+130h] [rbp+5Fh]

  v45 = a2;
  v7 = a3;
  v9 = a4 << 12;
  inserted = 0LL;
  v39 = (unsigned int)v9;
  memset(v43, 0, 48);
  v38 = 0LL;
  v37 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
LABEL_2:
  v11 = *(_QWORD *)&a1->Header.Lock;
  v12 = v9;
  if ( (*(_DWORD *)(*(_QWORD *)&a1->Header.Lock + 56LL) & 0x20) != 0 )
  {
    v44 = 1;
    if ( a1->Header.WaitListHead.Flink )
      v13 = MiStartingOffset((__int64 *)&a1->Header.Lock, v7, 0);
    else
      v13 = (unsigned __int64)a2 << 12;
    v14 = MiEndingOffset(a1);
    v38 = v14;
    if ( v13 == v14 && !v13 )
      return 0LL;
    if ( v13 + v12 > v14 )
      v12 = ((unsigned int)(v14 - v13) + 511LL) & 0xFFFFFFFFFFFFFE00uLL;
  }
  else
  {
    v44 = 2;
    v13 = (a2 + (HIDWORD(a1->QuantumTarget) | ((unsigned __int64)(a1->QuantumTarget & 0xFFC0) << 26))) << 12;
  }
  v36 = (struct _FILE_OBJECT *)MiReferenceControlAreaFile(v11);
  v32 = 1;
  v15 = ((unsigned int)(__rdtsc() >> 4) & 7) + 8;
  while ( 1 )
  {
    v35 = v15;
    if ( !(_DWORD)v15 )
      break;
    CurrentProcessorColor = MmGetCurrentProcessorColor();
    PoolMm = (_DWORD *)ExAllocatePoolMm(
                         64LL,
                         16LL * (unsigned int)(v15 - 1) + 24,
                         877029709,
                         CurrentProcessorColor | 0x80000000);
    v18 = PoolMm;
    if ( PoolMm )
    {
      v19 = v44;
      *PoolMm = v15;
      PoolMm[1] = 0;
      v32 = 0;
      v33 = 0;
      if ( v44 == 1 )
      {
        if ( v13 + v12 > v38 )
          v12 = (unsigned int)(v38 - v13);
        if ( a1->Header.WaitListHead.Flink
          && (*(_DWORD *)((*(_QWORD *)(v11 + 96) & 0xFFFFFFFFFFFFFFF8uLL) + 56) & 0x1000) != 0 )
        {
          v13 = (__int64)(a3 - *(_QWORD *)(*(_QWORD *)v11 + 64LL)) >> 3 << 12;
        }
      }
      v12 = (v12 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      if ( v44 != 1 || (*(_DWORD *)(v11 + 56) & 2) == 0 )
      {
        LODWORD(v34) = MiChangingSubsectionProtos(a1, a5 | 8u, v43);
        if ( (int)v34 < 0 )
        {
          MiDereferenceControlAreaFile(v11, (unsigned __int64)v36);
LABEL_98:
          ExFreePoolWithTag(v18, 0);
          return (unsigned int)v34;
        }
        v19 = v44;
        v33 = 1;
      }
      LODWORD(v34) = FsRtlGetFileExtents(v36, v19, v13, v12, v18);
      if ( (int)v34 < 0 )
      {
        MiDereferenceControlAreaFile(v11, (unsigned __int64)v36);
        if ( v33 )
          MiUnlinkSubsectionWaitBlock((__int64 *)&a1->Header.Lock, (__int64)v43, 0);
        goto LABEL_98;
      }
      if ( v18[1] <= (unsigned int)v15 )
      {
        MiDereferenceControlAreaFile(v11, (unsigned __int64)v36);
        if ( (unsigned int)MiNewPfnsSuitable((__int64)v18) )
        {
          v22 = 0LL;
          v32 = 3;
          v23 = 0LL;
          v35 = 0LL;
          if ( v18[1] )
          {
            v23 = (void *)MiConvertRunsToPages(v21, v20, &v35, &v32);
            if ( v23 )
            {
              if ( a5 >= 0 || v32 <= 1 )
              {
                if ( v44 != 1 || (*(_DWORD *)(v11 + 56) & 2) == 0 )
                {
                  v22 = v35;
                  goto LABEL_43;
                }
                v22 = v35;
                goto LABEL_62;
              }
              FileOnlyPfns = -1073741800;
            }
            else
            {
LABEL_36:
              FileOnlyPfns = -1073741670;
            }
          }
          else
          {
            if ( a5 >= 0 && v44 != 1 )
            {
              if ( (*(_DWORD *)(v11 + 56) & 0x30000000) == 0x20000000 )
                goto LABEL_36;
LABEL_43:
              FileOnlyPfns = MiChangingSubsectionProtos(a1, a5 | 0x10u, v43);
              if ( FileOnlyPfns < 0 )
                goto LABEL_44;
              if ( v23 && (*(_DWORD *)(v11 + 56) & 0x30000000) == 0x10000000 && (a5 & 1) == 0 )
                MiEliminateOverlappingExtents((__int64 *)&a1->Header.Lock, a3, (__int64)v23, v22);
              FileOnlyPfns = MiChangingSubsectionProtos(a1, a5 | 0x20u, v43);
              if ( FileOnlyPfns < 0 )
              {
LABEL_44:
                ExFreePoolWithTag(v18, 0);
                if ( v23 )
                  ExFreePoolWithTag(v23, 0);
                if ( FileOnlyPfns == -1073740748 )
                {
                  v7 = a3;
                  a2 = v45;
                  v9 = v39;
                  goto LABEL_2;
                }
                return (unsigned int)FileOnlyPfns;
              }
              if ( v44 == 1 || (*(_DWORD *)(v11 + 56) & 0x30000000) != 0x20000000 )
                goto LABEL_62;
              if ( (a5 & 1) != 0 )
              {
                inserted = (unsigned int *)MiInsertCopyExtents((__int64)v18, 0LL, 1);
                if ( !inserted )
                {
                  FileOnlyPfns = -1073741670;
                  goto LABEL_67;
                }
LABEL_62:
                ExFreePoolWithTag(v18, 0);
                if ( inserted )
                {
                  v27 = a3;
                  FileOnlyPfns = 0;
                  goto LABEL_73;
                }
                if ( v23
                  && (*(_BYTE *)(v11 + 56) & 0x20) == 0
                  && (a5 & 1) != 0
                  && (*(_DWORD *)(v11 + 56) & 0x30000000) == 0x10000000 )
                {
                  *((_QWORD *)&v42 + 1) = v22;
                  *((_QWORD *)&v41 + 1) = *((_QWORD *)&v41 + 1) & 0xFFFFFFFFFFFFFFF8uLL | 4;
                  *(_QWORD *)&v42 = a3;
                  MiUpdateSystemProtoPtesTree(&v40, 1);
                }
                v31 = v22;
                v27 = a3;
                FileOnlyPfns = MiCreateFileOnlyPfns(a1, a3, a5, (__int64)v23, v31, a6);
                if ( FileOnlyPfns < 0 )
                {
                  if ( !(_QWORD)v42 )
                    goto LABEL_84;
                  v30 = 0;
                  v29 = &v40;
                }
                else
                {
LABEL_73:
                  if ( (a5 & 1) == 0 )
                    goto LABEL_84;
                  if ( a5 < 0 )
                    HIDWORD(a1->SchedulingGroup) = 2;
                  MiSetSubsectionBase((ULONG_PTR)a1, v27, v32, 0, (__int64)inserted);
                  v29 = (__int128 *)((char *)&a1->116 + 4);
                  if ( (_QWORD)v42 )
                  {
                    MiReplaceSystemProtoPtesNode(&v40, ($C9C4F79064DE35237E3F199A7D1BD3E1 *)((char *)&a1->116 + 4));
LABEL_84:
                    if ( v44 != 1 || (*(_DWORD *)(v11 + 56) & 2) == 0 )
                      MiSubsectionProtosCreated(a1, v43, a4, 0);
                    if ( v23 )
                      ExFreePoolWithTag(v23, 0);
                    return (unsigned int)FileOnlyPfns;
                  }
                  if ( (*(_DWORD *)(v11 + 56) & 0x20) != 0 )
                    goto LABEL_84;
                  v30 = 1;
                }
                MiUpdateSystemProtoPtesTree(v29, v30);
                goto LABEL_84;
              }
              v28 = MiMergeCopyExtents(a1, (__int64)v18, v25, &v37);
              inserted = v37;
              FileOnlyPfns = v28;
              if ( v28 >= 0 )
                goto LABEL_62;
              if ( v28 == -1073741302 )
                FileOnlyPfns = 0;
LABEL_67:
              MiSubsectionProtosCreated(a1, v43, 0LL, 0);
LABEL_93:
              ExFreePoolWithTag(v18, 0);
              if ( inserted )
                MiDeleteFileExtentList(inserted);
              return (unsigned int)FileOnlyPfns;
            }
            FileOnlyPfns = -1073741823;
          }
        }
        else
        {
          FileOnlyPfns = -1073740761;
        }
        if ( v33 )
          MiUnlinkSubsectionWaitBlock((__int64 *)&a1->Header.Lock, (__int64)v43, 0);
        goto LABEL_93;
      }
      if ( v33 )
        MiUnlinkSubsectionWaitBlock((__int64 *)&a1->Header.Lock, (__int64)v43, 0);
      v15 = (unsigned int)v18[1];
      v18[1] = v35;
      ExFreePoolWithTag(v18, 0);
    }
    else
    {
      if ( !v32 )
        break;
      v15 = (unsigned int)v15 >> 1;
    }
  }
  MiDereferenceControlAreaFile(v11, (unsigned __int64)v36);
  return 3221225626LL;
}
