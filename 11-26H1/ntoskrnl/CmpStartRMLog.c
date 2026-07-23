/*
 * XREFs of CmpStartRMLog @ 0x1408B2784
 * Callers:
 *     CmpStartRMLogs @ 0x1408B2F7C (CmpStartRMLogs.c)
 *     CmpInitCmRM @ 0x140A7E4A0 (CmpInitCmRM.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     Feature_CLFS_Signing__private_IsEnabledDeviceUsageNoInline @ 0x1404F3CAC (Feature_CLFS_Signing__private_IsEnabledDeviceUsageNoInline.c)
 *     CmpRmAnalysisPhase @ 0x1408645EC (CmpRmAnalysisPhase.c)
 *     CmpRmReDoPhase @ 0x140864830 (CmpRmReDoPhase.c)
 *     CmpRmUnDoPhase @ 0x140864A08 (CmpRmUnDoPhase.c)
 *     CmpStartCLFSLog @ 0x140869768 (CmpStartCLFSLog.c)
 *     LockRMLog @ 0x1408B3D64 (LockRMLog.c)
 *     CmpQueryFileSecurityDescriptor @ 0x1408BC384 (CmpQueryFileSecurityDescriptor.c)
 *     RtlStringFromGUIDEx @ 0x1409FA570 (RtlStringFromGUIDEx.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     CmpIsFileInSystemConfig @ 0x140A80290 (CmpIsFileInSystemConfig.c)
 *     CmpQueryNameString @ 0x140A80688 (CmpQueryNameString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpStartRMLog(__int64 a1, _OWORD *a2)
{
  BOOL v2; // r13d
  unsigned int v3; // edi
  PVOID v6; // r15
  PCLFS_INFORMATION v7; // r12
  bool v9; // zf
  int FileSecurityDescriptor; // ebx
  ULONGLONG *v11; // r12
  struct _LIST_ENTRY *Blink; // r14
  __int64 v13; // rax
  int IsFileInSystemConfig; // eax
  __int64 v15; // r8
  PVOID *v16; // r14
  PLOG_FILE_OBJECT *v17; // r13
  unsigned int *v18; // rcx
  CLFS_INFORMATION *Pool2; // rax
  CLFS_INFORMATION *v20; // rbx
  FILE_OBJECT *v21; // rcx
  PVOID v22; // rcx
  NTSTATUS v23; // eax
  CLFS_LSN LastLsn; // rax
  CLFS_LSN v25; // rbx
  PVOID v26; // rcx
  NTSTATUS v27; // eax
  FILE_OBJECT *v28; // rcx
  int ppvReadContext; // [rsp+20h] [rbp-B9h]
  CLFS_LSN plsn2; // [rsp+50h] [rbp-89h] BYREF
  ULONG pcbWritten; // [rsp+58h] [rbp-81h] BYREF
  PVOID pvCursorContext; // [rsp+60h] [rbp-79h] BYREF
  PCLFS_INFORMATION pinfoBuffer; // [rsp+68h] [rbp-71h]
  PVOID pvReadContext; // [rsp+70h] [rbp-69h] BYREF
  ULONG pcbReadBuffer; // [rsp+78h] [rbp-61h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-59h] BYREF
  UNICODE_STRING GuidString; // [rsp+90h] [rbp-49h] BYREF
  ULONG pcbRestartBuffer; // [rsp+A0h] [rbp-39h] BYREF
  ULONGLONG *v39; // [rsp+A8h] [rbp-31h]
  PCUNICODE_STRING Source; // [rsp+B0h] [rbp-29h]
  PVOID ppvRestartBuffer; // [rsp+B8h] [rbp-21h] BYREF
  CLFS_LSN plsn; // [rsp+C0h] [rbp-19h] BYREF
  CLFS_LSN plsnPrevious; // [rsp+C8h] [rbp-11h] BYREF
  CLFS_LSN plsnUndoNext; // [rsp+D0h] [rbp-9h] BYREF
  PVOID ppvReadBuffer; // [rsp+D8h] [rbp-1h] BYREF
  CLFS_LSN plsnRecord; // [rsp+E0h] [rbp+7h] BYREF
  CLS_LSN pvRestartBuffer; // [rsp+E8h] [rbp+Fh] BYREF
  CLFS_LSN plsnFirst; // [rsp+F0h] [rbp+17h] BYREF
  ULONG pcbInfoBuffer; // [rsp+140h] [rbp+67h] BYREF
  char v50; // [rsp+150h] [rbp+77h]
  BOOL v51; // [rsp+158h] [rbp+7Fh]

  v3 = 0;
  LOBYTE(v2) = 0;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&GuidString.Length = 0LL;
  v6 = 0LL;
  GuidString.Buffer = 0LL;
  v50 = 1;
  ppvRestartBuffer = 0LL;
  pcbRestartBuffer = 0;
  plsn.ullOffset = 0LL;
  pvCursorContext = 0LL;
  plsn2.ullOffset = 0LL;
  pcbWritten = 0;
  pvRestartBuffer.ullOffset = 0LL;
  pvReadContext = 0LL;
  v51 = v2;
  LOBYTE(pcbInfoBuffer) = 0;
  LockRMLog();
  if ( (*(_DWORD *)(a1 + 104) & 1) != 0 )
    goto LABEL_4;
  pinfoBuffer = (PCLFS_INFORMATION)ExAllocatePool2(0x100uLL);
  v7 = pinfoBuffer;
  if ( !pinfoBuffer )
  {
    v3 = -1073741670;
LABEL_4:
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 128));
    KeLeaveCriticalRegion();
    return v3;
  }
  *(_DWORD *)(a1 + 104) |= 2u;
  v9 = a1 == *(_QWORD *)&WheapPfaLock.WaitBlockFill11[16];
  *(_QWORD *)(a1 + 120) = CLFS_LSN_INVALID_EXT;
  if ( v9 )
  {
    Source = &CmpLogPath;
    if ( a2 )
      *(_OWORD *)(stru_140E098B8.WaitBlock[2].Thread->ThreadLock + 128) = *a2;
    FileSecurityDescriptor = RtlStringFromGUIDEx(
                               (PGUID)(stru_140E098B8.WaitBlock[2].Thread->ThreadLock + 128),
                               &GuidString,
                               1u);
    if ( FileSecurityDescriptor < 0 )
      goto LABEL_56;
    v11 = (ULONGLONG *)(a1 + 72);
    *(_QWORD *)(a1 + 72) = 5242880LL;
    v39 = (ULONGLONG *)(a1 + 72);
    Blink = stru_140E098B8.WaitBlock[2].Thread[1].WaitBlock[0].WaitListEntry.Blink;
    v51 = Feature_CLFS_Signing__private_IsEnabledDeviceUsageNoInline() != 0;
  }
  else
  {
    FileSecurityDescriptor = CmpQueryNameString(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 1544LL), &UnicodeString);
    if ( FileSecurityDescriptor < 0 )
      goto LABEL_56;
    Source = &UnicodeString;
    if ( a2 )
      *(_OWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 64LL) + 128LL) = *a2;
    FileSecurityDescriptor = RtlStringFromGUIDEx(
                               (PGUID)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 64LL) + 128LL),
                               &GuidString,
                               1u);
    if ( FileSecurityDescriptor < 0 )
      goto LABEL_56;
    v13 = *(_QWORD *)(a1 + 80);
    v11 = (ULONGLONG *)(a1 + 72);
    *(_QWORD *)(a1 + 72) = 0x100000LL;
    v39 = (ULONGLONG *)(a1 + 72);
    Blink = *(struct _LIST_ENTRY **)(v13 + 1544);
    if ( (unsigned int)Feature_CLFS_Signing__private_IsEnabledDeviceUsageNoInline() )
    {
      IsFileInSystemConfig = CmpIsFileInSystemConfig(&UnicodeString);
      v39 = (ULONGLONG *)(a1 + 72);
      FileSecurityDescriptor = IsFileInSystemConfig;
      if ( IsFileInSystemConfig < 0 )
      {
LABEL_55:
        v7 = pinfoBuffer;
        goto LABEL_56;
      }
      LOBYTE(IsFileInSystemConfig) = pcbInfoBuffer;
      v51 = IsFileInSystemConfig;
    }
  }
  FileSecurityDescriptor = CmpQueryFileSecurityDescriptor(Blink);
  if ( FileSecurityDescriptor < 0 )
    goto LABEL_55;
  v6 = pvReadContext;
  v16 = (PVOID *)(a1 + 96);
  v17 = (PLOG_FILE_OBJECT *)(a1 + 88);
  v18 = (unsigned int *)(a1 + 68);
  while ( 1 )
  {
    FileSecurityDescriptor = CmpStartCLFSLog(
                               Source,
                               &GuidString,
                               v15,
                               v6,
                               ppvReadContext,
                               v11,
                               !v51,
                               v18,
                               (FILE_OBJECT **)(a1 + 88),
                               (PVOID *)(a1 + 96));
    if ( FileSecurityDescriptor < 0 )
      break;
    pcbInfoBuffer = 120;
    Pool2 = (CLFS_INFORMATION *)ExAllocatePool2(0x100uLL);
    v20 = Pool2;
    if ( Pool2 )
    {
      ClfsGetLogFileInformation(*v17, Pool2, &pcbInfoBuffer);
      ExFreePoolWithTag(v20, 0);
    }
    v21 = *v17;
    pcbWritten = 120;
    v7 = pinfoBuffer;
    FileSecurityDescriptor = ClfsGetLogFileInformation(v21, pinfoBuffer, &pcbWritten);
    *(_QWORD *)(a1 + 120) = v7->BaseLsn.ullOffset;
    if ( FileSecurityDescriptor < 0 )
      goto LABEL_49;
    if ( ClfsReadRestartArea(*v16, &ppvRestartBuffer, &pcbRestartBuffer, &plsn, &pvCursorContext) == 1075445772
      || !ppvRestartBuffer )
    {
      plsn2 = v7->BaseLsn;
      goto LABEL_35;
    }
    plsn2 = *(CLFS_LSN *)ppvRestartBuffer;
    if ( !ClfsLsnEqual(&plsn, &plsn2) )
      goto LABEL_35;
    v22 = *v16;
    plsnFirst = plsn2;
    pvReadContext = 0LL;
    ppvReadBuffer = 0LL;
    pcbReadBuffer = 0;
    plsnUndoNext.ullOffset = 0LL;
    plsnPrevious.ullOffset = 0LL;
    plsnRecord.ullOffset = 0LL;
    LOBYTE(pcbInfoBuffer) = 0;
    if ( ClfsReadLogRecord(
           v22,
           &plsnFirst,
           ClfsContextForward,
           &ppvReadBuffer,
           &pcbReadBuffer,
           (PCLFS_RECORD_TYPE)&pcbInfoBuffer,
           &plsnUndoNext,
           &plsnPrevious,
           &pvReadContext) >= 0 )
    {
      LOBYTE(pcbInfoBuffer) = 1;
      v23 = ClfsReadNextLogRecord(
              pvReadContext,
              &ppvReadBuffer,
              &pcbReadBuffer,
              (PCLFS_RECORD_TYPE)&pcbInfoBuffer,
              0LL,
              &plsnUndoNext,
              &plsnPrevious,
              &plsnRecord);
      if ( v23 == -1073741807 )
      {
        LastLsn = v7->LastLsn;
      }
      else
      {
        if ( v23 < 0 )
          goto LABEL_32;
        LastLsn = plsnRecord;
      }
      plsn2 = LastLsn;
    }
LABEL_32:
    if ( pvReadContext )
      ClfsTerminateReadLog(pvReadContext);
LABEL_35:
    if ( pvCursorContext )
    {
      ClfsTerminateReadLog(pvCursorContext);
      pvCursorContext = 0LL;
    }
    if ( !ClfsLsnEqual(&plsn2, &v7->LastLsn) && (*(_DWORD *)(a1 + 104) & 4) != 0 )
    {
      v25 = plsn2;
      if ( (int)CmpRmAnalysisPhase(a1, plsn2) >= 0 )
      {
        CmpRmReDoPhase(a1, v25);
        CmpRmUnDoPhase(a1);
      }
      *(_DWORD *)(a1 + 104) &= ~4u;
    }
    v26 = *v16;
    pvRestartBuffer = v7->LastLsn;
    v27 = ClfsWriteRestartArea(v26, &pvRestartBuffer, 8u, 0LL, 0, &pcbWritten, 0LL);
    FileSecurityDescriptor = v27;
    if ( !v50 || v27 != -1072037859 && *(_DWORD *)(a1 + 68) <= 0xAu )
      goto LABEL_49;
    v50 = 0;
    if ( pvCursorContext )
    {
      ClfsTerminateReadLog(pvCursorContext);
      pvCursorContext = 0LL;
    }
    ClfsDeleteLogByPointer(*v17);
    ClfsDeleteMarshallingArea(*v16);
    v28 = *v17;
    *v16 = 0LL;
    ClfsCloseLogFileObject(v28);
    v11 = v39;
    v18 = (unsigned int *)(a1 + 68);
    *(_DWORD *)(a1 + 68) = 0;
    *v17 = 0LL;
  }
  v7 = pinfoBuffer;
LABEL_49:
  if ( pvCursorContext )
    ClfsTerminateReadLog(pvCursorContext);
  if ( FileSecurityDescriptor >= 0 )
  {
    *(_DWORD *)(a1 + 104) = *(_DWORD *)(a1 + 104) & 0xFFFFFFFC | 1;
  }
  else if ( *v16 )
  {
    *v16 = 0LL;
  }
LABEL_56:
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 128));
  KeLeaveCriticalRegion();
  if ( UnicodeString.Buffer )
    RtlFreeAnsiString(&UnicodeString);
  if ( GuidString.Buffer )
    RtlFreeAnsiString(&GuidString);
  ExFreePoolWithTag(v7, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)FileSecurityDescriptor;
}
