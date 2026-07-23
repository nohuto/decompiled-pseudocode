/*
 * XREFs of IopLiveDumpAllocateFromVMMemoryPartition @ 0x1405D00B4
 * Callers:
 *     IopLiveDumpAllocateDumpBuffers @ 0x1404DD93C (IopLiveDumpAllocateDumpBuffers.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     MiFreePagesFromMdl @ 0x140347540 (MiFreePagesFromMdl.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x14034A2E0 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14035F0D0 (MmMapLockedPagesSpecifyCache.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1405317E8 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpTrace @ 0x1405DA0A4 (IopLiveDumpTrace.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

PVOID __fastcall IopLiveDumpAllocateFromVMMemoryPartition(__int64 a1, unsigned __int64 a2, ULONG_PTR *a3)
{
  PVOID v3; // r15
  ULONG v6; // esi
  ULONG_PTR PartitionNodePagesForMdl; // r14
  bool v8; // al
  bool v10; // [rsp+40h] [rbp-49h] BYREF
  int v11[2]; // [rsp+48h] [rbp-41h] BYREF
  _QWORD v12[2]; // [rsp+50h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+60h] [rbp-29h] BYREF
  _QWORD *v14; // [rsp+80h] [rbp-9h]
  __int64 v15; // [rsp+88h] [rbp-1h]
  bool *v16; // [rsp+90h] [rbp+7h]
  __int64 v17; // [rsp+98h] [rbp+Fh]
  int *v18; // [rsp+A0h] [rbp+17h]
  __int64 v19; // [rsp+A8h] [rbp+1Fh]

  v3 = 0LL;
  *(_QWORD *)v11 = a2;
  *a3 = 0LL;
  if ( (*(_DWORD *)(a1 + 80) & 0xC) != 0 )
    return 0LL;
  v6 = BufferChunkSizeInBytes;
  PartitionNodePagesForMdl = MmAllocatePartitionNodePagesForMdlEx(
                               0,
                               -1,
                               BufferChunkSizeInBytes,
                               a2,
                               1u,
                               0,
                               0x65u,
                               *(_QWORD *)(a1 + 1104));
  if ( PartitionNodePagesForMdl
    || (PartitionNodePagesForMdl = MmAllocatePartitionNodePagesForMdlEx(
                                     0,
                                     -1,
                                     v6,
                                     *(unsigned __int64 *)v11,
                                     1u,
                                     0,
                                     0x25u,
                                     *(_QWORD *)(a1 + 1104))) != 0 )
  {
    if ( (*(_BYTE *)(PartitionNodePagesForMdl + 10) & 5) != 0 )
      v3 = *(PVOID *)(PartitionNodePagesForMdl + 24);
    else
      v3 = MmMapLockedPagesSpecifyCache((PMDL)PartitionNodePagesForMdl, 0, MmCached, 0LL, 0, 0x40000020u);
    if ( v3 )
    {
      *a3 = PartitionNodePagesForMdl;
    }
    else
    {
      MiFreePagesFromMdl(PartitionNodePagesForMdl, 0, 0, 0);
      ExFreePoolWithTag((PVOID)PartitionNodePagesForMdl, 0);
    }
  }
  else
  {
    *(_DWORD *)(a1 + 80) |= 8u;
    v11[0] = -1073741801;
    if ( IopLiveDumpIsTracingEnabled() )
    {
      v12[1] = 4LL;
      v12[0] = v11;
      IopLiveDumpTrace(LIVEDUMP_EVENT_SIZING_WORKFLOW_BUFFER_ALLOCATION_FROM_VM_MEMORY_PARTITION_FAILURE, 1LL, v12);
    }
    if ( (unsigned int)dword_140E06D90 > 5 && tlgKeywordOn((__int64)&dword_140E06D90, 0x400000000000LL) )
    {
      v12[0] = 0x1000000LL;
      v14 = v12;
      v8 = (*(_DWORD *)(a1 + 80) & 8) != 0;
      v15 = 8LL;
      v10 = v8;
      v17 = 1LL;
      v16 = &v10;
      v18 = v11;
      v11[0] = -1073741801;
      v19 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E06D90,
        (unsigned __int8 *)byte_140047728,
        (const GUID *)(a1 + 968),
        (const GUID *)(a1 + 952),
        5u,
        &v13);
    }
  }
  return v3;
}
