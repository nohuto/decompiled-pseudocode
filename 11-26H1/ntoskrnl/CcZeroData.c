/*
 * XREFs of CcZeroData @ 0x140466A50
 * Callers:
 *     FsRtlPrepareMdlWriteDev @ 0x140790650 (FsRtlPrepareMdlWriteDev.c)
 *     FsRtlCopyWrite @ 0x140AC06C0 (FsRtlCopyWrite.c)
 * Callees:
 *     KeRcuReadUnlock @ 0x140222040 (KeRcuReadUnlock.c)
 *     IoGetRelatedDeviceObject @ 0x14026BFA0 (IoGetRelatedDeviceObject.c)
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     CcDereferencePartition @ 0x1403861A0 (CcDereferencePartition.c)
 *     KeRcuReadLock @ 0x140386340 (KeRcuReadLock.c)
 *     CcReferencePartitionFromFileObject @ 0x1403863DC (CcReferencePartitionFromFileObject.c)
 *     CcFlushCachePriv @ 0x14039A060 (CcFlushCachePriv.c)
 *     CcZeroDataInCache @ 0x1403A0CB8 (CcZeroDataInCache.c)
 *     CcZeroDataOnDisk @ 0x140466E10 (CcZeroDataOnDisk.c)
 */

BOOLEAN __stdcall CcZeroData(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER StartOffset,
        PLARGE_INTEGER EndOffset,
        BOOLEAN Wait)
{
  LONGLONG QuadPart; // rdi
  BOOLEAN v7; // si
  char v8; // r13
  __int64 v9; // rbx
  __int64 v10; // r14
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  unsigned int v12; // r14d
  _QWORD *v13; // rdi
  unsigned int v14; // r12d
  LONGLONG v15; // rax
  LONGLONG v17; // [rsp+48h] [rbp-60h] BYREF
  __int64 v18; // [rsp+50h] [rbp-58h]
  LONGLONG v19; // [rsp+58h] [rbp-50h]
  NTSTATUS Status[4]; // [rsp+60h] [rbp-48h] BYREF
  unsigned int SectorSize; // [rsp+B0h] [rbp+8h]
  _QWORD *p_QuadPart; // [rsp+B8h] [rbp+10h] BYREF
  PLARGE_INTEGER v23; // [rsp+C0h] [rbp+18h]
  BOOLEAN v24; // [rsp+C8h] [rbp+20h]

  v24 = Wait;
  v23 = EndOffset;
  p_QuadPart = &StartOffset->QuadPart;
  QuadPart = StartOffset->QuadPart;
  v17 = StartOffset->QuadPart;
  v7 = 0;
  v18 = 0LL;
  if ( (FileObject->Flags & 0x10) != 0 || (v8 = 0, !FileObject->PrivateCacheMap) )
    v8 = 1;
  v9 = EndOffset->QuadPart - QuadPart;
  KeRcuReadLock((__int64)FileObject);
  v10 = CcReferencePartitionFromFileObject((__int64)FileObject);
  v18 = v10;
  KeRcuReadUnlock();
  if ( !v8 && v9 <= 0x200000 && (*(_QWORD *)(**(_QWORD **)(v10 + 8) + 22464LL) >= 0x800uLL || v9 <= 0x2000) || Wait )
  {
    RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
    SectorSize = RelatedDeviceObject->SectorSize;
    if ( RelatedDeviceObject->SectorSize )
      v12 = IoGetRelatedDeviceObject(FileObject)->SectorSize - 1;
    else
      v12 = 0;
    if ( v8 )
    {
      if ( (v12 & (unsigned int)v17) != 0 )
      {
        *(_OWORD *)Status = 0LL;
        v17 = v12 + QuadPart;
        LODWORD(v17) = ~v12 & (v12 + QuadPart);
        v13 = p_QuadPart;
        v14 = v17 - *(_DWORD *)p_QuadPart;
        if ( !CcZeroDataInCache((__int64)FileObject, p_QuadPart, v14, v24) )
        {
LABEL_19:
          v10 = v18;
          goto LABEL_35;
        }
        CcFlushCachePriv(FileObject->SectionObjectPointer, (__int64)v13, v14, 0LL, 0, (__int128 *)Status, 0LL);
        if ( Status[0] < 0 )
          RtlRaiseStatus(Status[0]);
        QuadPart = v17;
      }
    }
    else
    {
      if ( *(_QWORD *)(**(_QWORD **)(v18 + 8) + 22464LL) < 0x800uLL && v9 > 0x2000 && ((unsigned int)v17 & v12) != 0 )
      {
        v19 = QuadPart + v12;
        LODWORD(v19) = ~v12 & (QuadPart + v12);
        LODWORD(v9) = v19 - v17;
      }
      else if ( *(_QWORD *)(**(_QWORD **)(v18 + 8) + 22464LL) >= 0x800uLL || v9 <= 0x2000 )
      {
        if ( v9 > 0x200000 )
        {
          *(_QWORD *)Status = QuadPart + 0x200000 + v12;
          Status[0] = ~v12 & (QuadPart + 0x200000 + v12);
          LODWORD(v9) = Status[0] - v17;
        }
      }
      else
      {
        LODWORD(v9) = 0;
      }
      if ( (_DWORD)v9 && !CcZeroDataInCache((__int64)FileObject, &v17, v9, v24) )
        goto LABEL_19;
      QuadPart += (unsigned int)v9;
      v17 = QuadPart;
    }
    if ( QuadPart < v23->QuadPart )
    {
      v15 = v12 + v23->QuadPart;
      p_QuadPart = (_QWORD *)((~v12 | 0xFFFFFFFF00000000uLL) & v15);
      CcZeroDataOnDisk(FileObject, &v17, &p_QuadPart, SectorSize);
    }
    v7 = 1;
    goto LABEL_19;
  }
LABEL_35:
  CcDereferencePartition(v10);
  return v7;
}
