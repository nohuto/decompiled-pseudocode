/*
 * XREFs of MiCreateImageOrDataSection @ 0x1409BAFEC
 * Callers:
 *     MiCreateSection @ 0x1409BA4D4 (MiCreateSection.c)
 * Callees:
 *     PsReferencePartitionSafe @ 0x140258850 (PsReferencePartitionSafe.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     IoAllowExecution @ 0x14026F1B4 (IoAllowExecution.c)
 *     MiReleaseControlAreaWaiters @ 0x1402733E0 (MiReleaseControlAreaWaiters.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     MiDereferenceControlAreaBySection @ 0x14036D708 (MiDereferenceControlAreaBySection.c)
 *     ObReferenceObjectExWithTag @ 0x14044E6F0 (ObReferenceObjectExWithTag.c)
 *     IoSetTopLevelIrp @ 0x14044F910 (IoSetTopLevelIrp.c)
 *     MiGetControlAreaPartition @ 0x140457F60 (MiGetControlAreaPartition.c)
 *     IoGetTopLevelIrp @ 0x1404611F0 (IoGetTopLevelIrp.c)
 *     MiReferenceControlArea @ 0x14046FD70 (MiReferenceControlArea.c)
 *     ObDereferenceObjectExWithTag @ 0x14047DD60 (ObDereferenceObjectExWithTag.c)
 *     CcWaitForUninitializeCacheMap @ 0x14048B908 (CcWaitForUninitializeCacheMap.c)
 *     IoGetFileMemoryPartitionInformation @ 0x140490A7C (IoGetFileMemoryPartitionInformation.c)
 *     MiReferenceExistingControlArea @ 0x1404A4A50 (MiReferenceExistingControlArea.c)
 *     MiForceSectionClosed @ 0x1404B0200 (MiForceSectionClosed.c)
 *     MiZeroSectionObjectPointer @ 0x1404DAECC (MiZeroSectionObjectPointer.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1408FA680 (ObpReferenceObjectByHandleWithTag.c)
 *     MiCallCreateSectionFilters @ 0x1409BB52C (MiCallCreateSectionFilters.c)
 *     MiCreateNewSection @ 0x140A562D8 (MiCreateNewSection.c)
 *     MiShareExistingControlArea @ 0x140A56A00 (MiShareExistingControlArea.c)
 *     FsRtlReleaseFile @ 0x140A56BA0 (FsRtlReleaseFile.c)
 *     MiDereferenceFailedControlArea @ 0x140B25454 (MiDereferenceFailedControlArea.c)
 */

__int64 __fastcall MiCreateImageOrDataSection(__int64 a1)
{
  int v2; // r15d
  int v3; // eax
  __int64 v4; // r14
  int v5; // eax
  unsigned __int64 v6; // rsi
  int v7; // ebx
  __int64 *FileMemoryPartitionInformation; // rax
  bool v9; // zf
  struct _KTHREAD *CurrentThread; // r12
  int v11; // r14d
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r14
  int v18; // edx
  __int64 v19; // rax
  __int64 *v20; // rax
  int v21; // ecx
  __int64 *v22; // r8
  __int64 v23; // rax
  __int64 v24; // r8
  _QWORD *v25; // r13
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rcx
  int v29; // ecx
  char v31; // dl
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // ecx
  __int64 *v36; // rcx
  _BYTE v37[56]; // [rsp+40h] [rbp-59h] BYREF
  int v38; // [rsp+78h] [rbp-21h]
  unsigned __int64 v39; // [rsp+80h] [rbp-19h]
  char v40; // [rsp+100h] [rbp+67h]
  __int64 v41; // [rsp+108h] [rbp+6Fh] BYREF
  PVOID Object; // [rsp+110h] [rbp+77h] BYREF

  v41 = 0LL;
  memset_0(v37, 0, 0x80uLL);
  Object = 0LL;
  v2 = 0;
  v40 = 1;
  if ( *(_BYTE *)(a1 + 192) )
    return (unsigned int)-1073741580;
  v3 = *(_DWORD *)(a1 + 16);
  if ( (v3 & 0x80000) != 0 )
    return (unsigned int)-1073741580;
  v4 = *(_QWORD *)(a1 + 48);
  if ( v4 )
  {
    v6 = *(_QWORD *)(a1 + 48);
    goto LABEL_8;
  }
  if ( v3 < 0 || (v3 & 0x20000) != 0 )
    return (unsigned int)-1073741580;
  v5 = ObpReferenceObjectByHandleWithTag(
         *(_QWORD *)(a1 + 40),
         *((unsigned int *)MmMakeFileAccess + (*(_DWORD *)(a1 + 32) & 7)),
         IoFileObjectType,
         *(_BYTE *)(a1 + 72),
         0x43536D4Du,
         &Object,
         0LL,
         0LL);
  v6 = (unsigned __int64)Object;
  v7 = v5;
  if ( v5 < 0 )
  {
LABEL_40:
    if ( v7 != -1073740682 )
      goto LABEL_41;
    goto LABEL_57;
  }
  v2 = 1;
  if ( !*((_QWORD *)Object + 5) )
  {
    v7 = -1073741792;
    goto LABEL_42;
  }
LABEL_8:
  FileMemoryPartitionInformation = (__int64 *)IoGetFileMemoryPartitionInformation(v6);
  if ( FileMemoryPartitionInformation )
  {
    if ( !PsReferencePartitionSafe(*FileMemoryPartitionInformation) )
    {
      v7 = -1073740640;
      goto LABEL_41;
    }
    *(_QWORD *)(a1 + 176) = v34;
    if ( (*(_DWORD *)(v33 + 8) & 1) != 0 )
      *(_DWORD *)a1 |= 0x200000u;
  }
  if ( !v4 )
  {
    ObfReferenceObjectWithTag((PVOID)v6, 0x43536D4Du);
    ++v2;
LABEL_11:
    v9 = (*(_DWORD *)(a1 + 16) & 0x1000000) == 0;
    *(_QWORD *)(a1 + 56) = v6;
    v38 = 2;
    v39 = v6;
    Object = 0LL;
    if ( !v9 )
    {
      if ( (*(_DWORD *)a1 & 0x200) != 0 && !IoAllowExecution(v6) )
      {
        v7 = -1073741790;
        goto LABEL_41;
      }
      CcWaitForUninitializeCacheMap(v6);
      v31 = *(_BYTE *)(a1 + 24);
      if ( (v31 & 0x10) != 0 )
      {
        if ( (*(_DWORD *)a1 & 0x200) != 0 )
        {
          v35 = *(_DWORD *)a1 | 0x10;
          *(_DWORD *)a1 = v35;
          if ( (v31 & 0x30) == 0x30 )
            *(_DWORD *)a1 = v35 | 0x800;
        }
        *(_BYTE *)(a1 + 24) = v31 & 0xF;
      }
      v40 = 2;
    }
    CurrentThread = KeGetCurrentThread();
    v11 = 0;
    --CurrentThread->KernelApcDisable;
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = MiCallCreateSectionFilters(a1);
        if ( v7 < 0 )
          goto LABEL_39;
        if ( (*(_DWORD *)a1 & 0x4000) == 0 || (*(_DWORD *)(a1 + 16) & 0x1000000) == 0 )
          break;
        if ( (*(_DWORD *)a1 & 0x8000) != 0 )
          break;
        v36 = *(__int64 **)(v6 + 40);
        if ( !*v36 || v11 || (unsigned int)MiForceSectionClosed(v36, 1, 2) != 1 )
          break;
        if ( (*(_DWORD *)a1 & 1) == 0 )
          FsRtlReleaseFile((PFILE_OBJECT)v6);
        MiForceSectionClosed(*(__int64 **)(v6 + 40), 1, 1);
        v11 = 1;
      }
      if ( (*(_DWORD *)a1 & 1) == 0 )
      {
        *(_QWORD *)(a1 + 184) = IoGetTopLevelIrp();
        IoSetTopLevelIrp((PIRP)1);
        *(_DWORD *)a1 |= 2u;
      }
      v14 = MiReferenceControlArea(a1, (__int64)v37, &v41);
      v7 = v14;
      if ( v14 >= 0 )
        break;
      if ( v14 == -1073740277 )
      {
        KeLeaveCriticalRegionThread((__int64)CurrentThread, v15, v16);
        goto LABEL_41;
      }
      if ( v14 == -1073740682 )
      {
        KeLeaveCriticalRegionThread((__int64)CurrentThread, v15, v16);
        goto LABEL_57;
      }
    }
    v17 = v41;
    *(_QWORD *)(a1 + 64) = v41;
    if ( (*(_DWORD *)(v17 + 56) & 2) != 0 )
    {
      v7 = MiCreateNewSection(a1, &Object);
      if ( v7 < 0 )
      {
        if ( Object )
        {
          v17 = *(_QWORD *)Object;
          *(_QWORD *)(a1 + 64) = *(_QWORD *)Object;
        }
        v25 = (_QWORD *)MiZeroSectionObjectPointer(v6, v17, *(_DWORD *)(a1 + 16));
        --v2;
        if ( (_BYTE *)v17 == v37 )
        {
          ObfDereferenceObjectWithTag((PVOID)v6, 0x43536D4Du);
          v28 = _InterlockedExchange64((volatile __int64 *)(v17 + 64), 0LL);
          v6 = v28 & 0xFFFFFFFFFFFFFFF0uLL;
          if ( (v28 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
          {
            v29 = v28 & 0xF;
            if ( v29 )
              _InterlockedAdd64((volatile signed __int64 *)(v6 - 48), -v29);
          }
        }
        else
        {
          if ( _InterlockedIncrement64((volatile signed __int64 *)(MiGetControlAreaPartition(v17) + 2120)) <= 1 )
            __fastfail(0xEu);
          MiDereferenceControlAreaBySection(v17, 1u);
        }
        MiReleaseControlAreaWaiters(v25, v26, v27);
      }
      else
      {
        v32 = *(_QWORD *)Object;
        *(_QWORD *)(a1 + 64) = *(_QWORD *)Object;
        if ( _InterlockedIncrement64((volatile signed __int64 *)(MiGetControlAreaPartition(v32) + 2120)) <= 1 )
          __fastfail(0xEu);
        v2 -= 2;
      }
LABEL_39:
      KeLeaveCriticalRegionThread((__int64)CurrentThread, v12, v13);
      goto LABEL_40;
    }
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v15, v16);
    v7 = MiShareExistingControlArea(a1);
    if ( v7 >= 0 )
    {
      --v2;
      goto LABEL_41;
    }
    MiDereferenceFailedControlArea(a1);
    goto LABEL_40;
  }
  v18 = *(_DWORD *)(a1 + 16);
  if ( (v18 & 0x1000000) != 0 )
  {
    if ( (*(_DWORD *)a1 & 1) != 0 )
    {
      v7 = -1073741580;
      goto LABEL_41;
    }
    if ( *(_QWORD *)(a1 + 152) )
    {
      v7 = -1073741582;
      goto LABEL_41;
    }
  }
  if ( !*(_QWORD *)(v4 + 40) )
  {
    v7 = -1073741792;
    goto LABEL_41;
  }
  v19 = *(_QWORD *)(a1 + 8);
  if ( v19 && (*(_DWORD *)(v19 + 24) & 0x200) != 0 )
    *(_BYTE *)(a1 + 72) = 0;
  v7 = -1073741823;
  v20 = (__int64 *)(*(_QWORD *)(v4 + 40) + 16LL);
  if ( (v18 & 0x1000000) == 0 )
    v20 = *(__int64 **)(v4 + 40);
  v41 = *v20;
  if ( v41 )
  {
    v7 = MiReferenceExistingControlArea(a1);
    if ( v7 >= 0 )
    {
      v21 = *(_DWORD *)a1 | 4;
      v9 = (*(_DWORD *)(a1 + 16) & 0x1000000) == 0;
      *(_DWORD *)a1 = v21;
      v22 = *(__int64 **)(v4 + 40);
      if ( v9 )
      {
        v23 = *(_QWORD *)(a1 + 152);
        v24 = *v22;
        *(_QWORD *)(a1 + 128) = v23;
        if ( (v21 & 1) != 0 || v23 )
          goto LABEL_31;
      }
      else
      {
        v24 = v22[2];
      }
      *(_QWORD *)(a1 + 128) = _InterlockedCompareExchange64(
                                (volatile signed __int64 *)(*(_QWORD *)v24 + 24LL),
                                -1LL,
                                -1LL);
LABEL_31:
      *(_QWORD *)(a1 + 64) = v24;
      goto LABEL_41;
    }
  }
  ObReferenceObjectExWithTag(v6, 2, 0x43536D4Du);
  v2 += 2;
  if ( v7 != -1073740682 )
    goto LABEL_11;
LABEL_57:
  if ( (*(_DWORD *)a1 & 1) == 0 )
    CcWaitForUninitializeCacheMap(v6);
  if ( (unsigned int)MiForceSectionClosed(*(__int64 **)(v6 + 40), v40, 0) > 1 && (*(_DWORD *)a1 & 0x400000) != 0 )
  {
    ++LODWORD(stru_140E2EB88.CycleTime);
    v7 = -1073740277;
  }
LABEL_41:
  if ( v2 )
LABEL_42:
    ObDereferenceObjectExWithTag(v6, v2, 0x43536D4Du);
  return (unsigned int)v7;
}
