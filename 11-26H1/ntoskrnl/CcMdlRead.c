/*
 * XREFs of CcMdlRead @ 0x140AF04E0
 * Callers:
 *     FsRtlMdlReadDev @ 0x140790420 (FsRtlMdlReadDev.c)
 * Callees:
 *     CcDecrementVacbActiveCount @ 0x1402BF9B0 (CcDecrementVacbActiveCount.c)
 *     CcGetVirtualAddress @ 0x1402C2D60 (CcGetVirtualAddress.c)
 *     CcFetchDataForRead @ 0x1402C8550 (CcFetchDataForRead.c)
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     CcUpdateReadHistory @ 0x14038A9B8 (CcUpdateReadHistory.c)
 *     IoFreeMdl @ 0x1403A0EF0 (IoFreeMdl.c)
 *     MmProbeAndLockPages @ 0x1403A1980 (MmProbeAndLockPages.c)
 *     IoAllocateMdl @ 0x1404046D0 (IoAllocateMdl.c)
 *     MmUnlockPages @ 0x140410330 (MmUnlockPages.c)
 *     CcUpdateSharedCacheMapFlag @ 0x1404AD134 (CcUpdateSharedCacheMapFlag.c)
 *     CcScheduleReadAheadEx @ 0x1404D3940 (CcScheduleReadAheadEx.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall CcMdlRead(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        PMDL *MdlChain,
        PIO_STATUS_BLOCK IoStatus)
{
  ULONG v5; // edi
  unsigned int v8; // r15d
  _RTL_BALANCED_NODE *SharedCacheMap; // r13
  _DWORD *PrivateCacheMap; // r12
  LONGLONG QuadPart; // rbx
  ULONG Thread; // r13d
  struct _MDL *Mdl; // rax
  struct _MDL *v14; // r12
  PMDL v15; // rax
  struct _KLOCK_ENTRIES v17; // [rsp+54h] [rbp-84h] BYREF

  v5 = Length;
  v8 = 0;
  memset((char *)&v17.Thread + 4, 0, 24);
  SharedCacheMap = (_RTL_BALANCED_NODE *)FileObject->SectionObjectPointer->SharedCacheMap;
  *(unsigned __int64 *)((char *)&v17.Entries[0].TreeNode.ParentValue + 4) = (unsigned __int64)SharedCacheMap;
  *(_RTL_BALANCED_NODE **)((char *)v17.Entries[0].TreeNode.Children + 4) = SharedCacheMap;
  PrivateCacheMap = FileObject->PrivateCacheMap;
  *(_QWORD *)(&v17.Entries[0].CpuPriorityKey + 4) = PrivateCacheMap;
  *(_QWORD *)(&v17.Entries[0].CpuPriorityKey + 12) = PrivateCacheMap;
  if ( (*PrivateCacheMap & 0x20000) != 0 )
    CcScheduleReadAheadEx(FileObject, FileOffset, *(__int64 *)&Length, 0LL);
  __incgsdword(0x8964u);
  KeGetCurrentThread()[1].Timer.DueTime.HighPart = 0;
  QuadPart = FileOffset->QuadPart;
  *(LARGE_INTEGER *)&v17.Entries[0].SpareFlags = *FileOffset;
  while ( v5 )
  {
    LODWORD(v17.Thread) = 0;
    *(_RTL_BALANCED_NODE **)((char *)&v17.Entries[0].TreeNode.Children[1] + 4) = (_RTL_BALANCED_NODE *)CcGetVirtualAddress((__int64)SharedCacheMap, QuadPart, (__int64 *)&v17.EntryCount, &v17, 0, 0);
    if ( ((__int64)SharedCacheMap[6].Right & 8) == 0 )
      CcFetchDataForRead(
        (int)FileObject,
        &v17.Entries[0].SpareFlags,
        v5,
        1,
        (_DWORD *)&v17.Thread + 1,
        *(_QWORD **)&v17.EntryCount,
        (*PrivateCacheMap >> 18) & 7,
        0LL,
        0LL);
    Thread = (ULONG)v17.Thread;
    if ( LODWORD(v17.Thread) > v5 )
      Thread = v5;
    LODWORD(v17.Thread) = Thread;
    QuadPart += Thread;
    Mdl = IoAllocateMdl(*(PVOID *)((char *)&v17.Entries[0].TreeNode.Children[1] + 4), Thread, 0, 0, 0LL);
    v14 = Mdl;
    *(_QWORD *)&v17.Entries[0].Reserved[3] = Mdl;
    if ( !Mdl )
      RtlRaiseStatus(-1073741670);
    MmProbeAndLockPages(Mdl, 0, IoReadAccess);
    CcDecrementVacbActiveCount(*(__int64 *)&v17.EntryCount);
    *(_QWORD *)&v17.EntryCount = 0LL;
    v15 = *MdlChain;
    if ( *MdlChain )
    {
      while ( v15->Next )
        v15 = v15->Next;
      v15->Next = v14;
    }
    else
    {
      *MdlChain = v14;
    }
    *(_QWORD *)&v17.Entries[0].Reserved[3] = 0LL;
    *(_QWORD *)&v17.Entries[0].SpareFlags = QuadPart;
    v8 += Thread;
    *(_DWORD *)&v17.AvailableEntryBitmap = v8;
    v5 -= Thread;
    SharedCacheMap = *(_RTL_BALANCED_NODE **)((char *)&v17.Entries[0].TreeNode.ParentValue + 4);
    PrivateCacheMap = *(_DWORD **)(&v17.Entries[0].CpuPriorityKey + 4);
  }
  __addgsdword(0x89A0u, KeGetCurrentThread()[1].Timer.DueTime.HighPart);
  if ( (*PrivateCacheMap & 0x20000) == 0 && HIDWORD(v17.Thread) )
    CcScheduleReadAheadEx(FileObject, FileOffset, Length, 0LL);
  CcUpdateReadHistory((__int64)FileObject, (__int64 *)FileOffset, Length);
  if ( ((__int64)SharedCacheMap[6].Right & 8) != 0 )
    CcUpdateSharedCacheMapFlag((__int64)SharedCacheMap, 8, 0);
  IoStatus->Status = 0;
  IoStatus->Information = v8;
}
