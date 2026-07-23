/*
 * XREFs of CmpLogCheckpoint @ 0x1408B3F84
 * Callers:
 *     CmpStopRMLog @ 0x1408B2FF0 (CmpStopRMLog.c)
 *     CmpCleanupTransactionState @ 0x1408B3328 (CmpCleanupTransactionState.c)
 *     CmpTransWriteLog @ 0x1408B3A74 (CmpTransWriteLog.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     LOCK_TRANSACTION_LIST @ 0x1408B527C (LOCK_TRANSACTION_LIST.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     CmListGetNextElement @ 0x140C5EA70 (CmListGetNextElement.c)
 */

__int64 __fastcall CmpLogCheckpoint(__int64 a1, __int64 a2, char a3)
{
  NTSTATUS LogFileInformation; // edi
  const CLFS_LSN *NextElement; // rax
  CLFS_INFORMATION *Pool2; // rax
  CLFS_INFORMATION *v8; // rbx
  CLFS_INFORMATION *v9; // rax
  CLFS_INFORMATION *v10; // rbx
  void *v12; // rcx
  NTSTATUS v13; // eax
  const CLFS_LSN *v14; // r14
  CLFS_CONTAINER_ID v15; // ebx
  CLFS_LSN plsn; // [rsp+40h] [rbp-C0h] BYREF
  ULONG pcbInfoBuffer[2]; // [rsp+48h] [rbp-B8h] BYREF
  ULONG pcbWritten; // [rsp+50h] [rbp-B0h] BYREF
  CLFS_LSN pvRestartBuffer; // [rsp+58h] [rbp-A8h] BYREF
  CLFS_LSN plsnNext; // [rsp+60h] [rbp-A0h] BYREF
  CLFS_INFORMATION pinfoBuffer; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+F0h] [rbp-10h] BYREF
  ULONG *v23; // [rsp+110h] [rbp+10h]
  __int64 v24; // [rsp+118h] [rbp+18h]

  LogFileInformation = 0;
  plsn.ullOffset = CLFS_LSN_INVALID_EXT;
  *(_QWORD *)pcbInfoBuffer = 0LL;
  plsnNext = *(CLFS_LSN *)&CLFS_LSN_NULL_EXT;
  pvRestartBuffer.ullOffset = 0LL;
  pcbWritten = 120;
  memset_0(&pinfoBuffer, 0, sizeof(pinfoBuffer));
  LOCK_TRANSACTION_LIST();
  while ( 1 )
  {
    NextElement = (const CLFS_LSN *)CmListGetNextElement(a1 + 16, pcbInfoBuffer, 0LL);
    if ( !NextElement )
      break;
    v14 = NextElement + 13;
    if ( !ClfsLsnInvalid(NextElement + 13) )
    {
      v15 = ClfsLsnContainer((const CLFS_LSN *)(a1 + 120));
      if ( ClfsLsnContainer(v14) == v15 )
      {
        ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
        KeLeaveCriticalRegion();
        return 0LL;
      }
    }
    if ( ClfsLsnInvalid(&plsn) || ClfsLsnLess(v14, &plsn) )
      plsn = *v14;
  }
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegion();
  if ( ClfsLsnInvalid(&plsn) )
  {
    LogFileInformation = ClfsGetLogFileInformation(*(PLOG_FILE_OBJECT *)(a1 + 88), &pinfoBuffer, &pcbWritten);
    if ( LogFileInformation >= 0 )
      plsn = pinfoBuffer.LastLsn;
  }
  pcbInfoBuffer[0] = 120;
  Pool2 = (CLFS_INFORMATION *)ExAllocatePool2(0x100uLL);
  v8 = Pool2;
  if ( Pool2 )
  {
    ClfsGetLogFileInformation(*(PLOG_FILE_OBJECT *)(a1 + 88), Pool2, pcbInfoBuffer);
    ExFreePoolWithTag(v8, 0);
  }
  if ( LogFileInformation >= 0 )
  {
    v12 = *(void **)(a1 + 96);
    pvRestartBuffer = plsn;
    v13 = ClfsWriteRestartArea(
            v12,
            &pvRestartBuffer,
            8u,
            (PCLFS_LSN)((unsigned __int64)&plsn & -(__int64)(a3 != 0)),
            0,
            &pcbWritten,
            &plsnNext);
    LogFileInformation = v13;
    if ( a3 )
    {
      if ( v13 >= 0 )
        *(CLFS_LSN *)(a1 + 120) = plsn;
    }
  }
  pcbInfoBuffer[0] = 120;
  v9 = (CLFS_INFORMATION *)ExAllocatePool2(0x100uLL);
  v10 = v9;
  if ( v9 )
  {
    ClfsGetLogFileInformation(*(PLOG_FILE_OBJECT *)(a1 + 88), v9, pcbInfoBuffer);
    ExFreePoolWithTag(v10, 0);
  }
  if ( (unsigned int)dword_140E09EE8 > 5 && (qword_140E09EF8 & 1) != 0 && (qword_140E09F00 & 1) == qword_140E09F00 )
  {
    pcbInfoBuffer[0] = LogFileInformation;
    v23 = pcbInfoBuffer;
    v24 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E09EE8, (unsigned __int8 *)byte_140057E61, 0LL, 0LL, 3u, &v22);
  }
  return (unsigned int)LogFileInformation;
}
