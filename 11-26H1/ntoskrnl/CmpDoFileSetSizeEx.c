/*
 * XREFs of CmpDoFileSetSizeEx @ 0x140AA7F58
 * Callers:
 *     CmShutdownSystem2 @ 0x1406E6740 (CmShutdownSystem2.c)
 *     CmpLoadHiveThread @ 0x140851860 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1408525A8 (CmpMountPreloadedHives.c)
 *     CmpCompleteUnloadKey @ 0x1408C009C (CmpCompleteUnloadKey.c)
 *     HvWriteExternal @ 0x140AA7B6C (HvWriteExternal.c)
 *     HvWriteLogFile @ 0x140AA7DD4 (HvWriteLogFile.c)
 *     HvTruncateCurrentLogFileIfRequired @ 0x140AA8950 (HvTruncateCurrentLogFileIfRequired.c)
 *     HvTruncateAllLogFilesIfRequired @ 0x140AA89CC (HvTruncateAllLogFilesIfRequired.c)
 *     HvpPerformLogFileRecovery @ 0x140AEE1B4 (HvpPerformLogFileRecovery.c)
 *     HvpAddBin @ 0x140B87980 (HvpAddBin.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x14048B160 (IoSetThreadHardErrorMode.c)
 *     ZwSetInformationFile @ 0x1407284A0 (ZwSetInformationFile.c)
 *     HvpLogTypeToLogArrayIndex @ 0x140AA8A4C (HvpLogTypeToLogArrayIndex.c)
 *     CmpAdjustRequestedFileSize @ 0x140AA8E58 (CmpAdjustRequestedFileSize.c)
 */

__int64 __fastcall CmpDoFileSetSizeEx(__int64 a1, __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned int v4; // ebx
  void *v6; // r14
  unsigned __int64 v7; // rdi
  unsigned __int64 v9; // rbp
  BOOLEAN v10; // r15
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int v14; // edi
  unsigned __int64 FileInformation; // [rsp+30h] [rbp-38h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int64 v17; // [rsp+70h] [rbp+8h] BYREF

  v4 = a2;
  FileInformation = 0LL;
  v17 = 0LL;
  IoStatusBlock = 0LL;
  v6 = *(void **)(a1 + 8LL * (unsigned int)a2 + 1544);
  if ( !v6 )
    return 0LL;
  if ( (_DWORD)a2 )
    v7 = (_DWORD)a2 == 1 || (unsigned int)(a2 - 4) <= 1
       ? *(_QWORD *)(a1 + 8LL * (unsigned int)HvpLogTypeToLogArrayIndex((unsigned int)a2, a2, a3) + 1816)
       : 0LL;
  else
    v7 = *(_QWORD *)(a1 + 1808);
  if ( (a4 & 1) != 0 && v7 && a3 <= v7 )
    return 0LL;
  v9 = CmpAdjustRequestedFileSize(a1, v4, v7, a3);
  v10 = IoSetThreadHardErrorMode(0);
  if ( v9 < v7 )
  {
    v17 = v9;
    v11 = ZwSetInformationFile(v6, &IoStatusBlock, &v17, 8u, FileAllocationInformation);
  }
  else
  {
    FileInformation = v9;
    v11 = ZwSetInformationFile(v6, &IoStatusBlock, &FileInformation, 8u, FileEndOfFileInformation);
  }
  v14 = v11;
  if ( v11 < 0 )
  {
    LODWORD(PspSiloMonitorLock.WriteOperationCount) = 3;
    PspSiloMonitorLock.OtherOperationCount = (__int64)v6;
    LODWORD(PspSiloMonitorLock.ReadTransferCount) = v11;
  }
  else if ( v4 )
  {
    if ( v4 == 1 || v4 - 4 <= 1 )
      *(_QWORD *)(a1 + 8LL * (unsigned int)HvpLogTypeToLogArrayIndex(v4, v12, v13) + 1816) = v9;
  }
  else
  {
    *(_QWORD *)(a1 + 1808) = v9;
  }
  IoSetThreadHardErrorMode(v10);
  return v14;
}
