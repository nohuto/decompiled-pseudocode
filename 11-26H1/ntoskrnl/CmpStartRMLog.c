/*
 * XREFs of CmpStartRMLog @ 0x1408AC340
 * Callers:
 *     CmpStartRMLogs @ 0x1408ACB38 (CmpStartRMLogs.c)
 *     CmpInitCmRM @ 0x140A75780 (CmpInitCmRM.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     Feature_CLFS_Signing__private_IsEnabledDeviceUsageNoInline @ 0x1404FA69C (Feature_CLFS_Signing__private_IsEnabledDeviceUsageNoInline.c)
 *     CmpRmAnalysisPhase @ 0x14085E2FC (CmpRmAnalysisPhase.c)
 *     CmpRmReDoPhase @ 0x14085E540 (CmpRmReDoPhase.c)
 *     CmpRmUnDoPhase @ 0x14085E718 (CmpRmUnDoPhase.c)
 *     CmpStartCLFSLog @ 0x140863388 (CmpStartCLFSLog.c)
 *     LockRMLog @ 0x1408AD924 (LockRMLog.c)
 *     CmpQueryFileSecurityDescriptor @ 0x1408B5DB0 (CmpQueryFileSecurityDescriptor.c)
 *     RtlFreeAnsiString @ 0x140A007C0 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x140A3EB50 (RtlStringFromGUIDEx.c)
 *     CmpIsFileInSystemConfig @ 0x140A77570 (CmpIsFileInSystemConfig.c)
 *     CmpQueryNameString @ 0x140A77968 (CmpQueryNameString.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpStartRMLog(__int64 a1, _OWORD *a2)
{
  BOOL v2; // r13d
  unsigned int v3; // edi
  PVOID v6; // r15
  __int64 v7; // r8
  PCLFS_INFORMATION v8; // r12
  bool v10; // zf
  int FileSecurityDescriptor; // ebx
  ULONGLONG *v12; // r12
  struct _LIST_ENTRY *Blink; // r14
  __int64 v14; // rax
  int IsFileInSystemConfig; // eax
  __int64 v16; // r8
  PVOID *v17; // r14
  PLOG_FILE_OBJECT *v18; // r13
  unsigned int *v19; // rcx
  CLFS_INFORMATION *Pool2; // rax
  CLFS_INFORMATION *v21; // rbx
  FILE_OBJECT *v22; // rcx
  PVOID v23; // rcx
  NTSTATUS v24; // eax
  CLFS_LSN LastLsn; // rax
  CLFS_LSN v26; // rbx
  PVOID v27; // rcx
  NTSTATUS v28; // eax
  FILE_OBJECT *v29; // rcx
  int ppvReadContext; // [rsp+20h] [rbp-B9h]
  CLFS_LSN plsn2; // [rsp+50h] [rbp-89h] BYREF
  ULONG pcbWritten; // [rsp+58h] [rbp-81h] BYREF
  PVOID pvCursorContext; // [rsp+60h] [rbp-79h] BYREF
  PCLFS_INFORMATION pinfoBuffer; // [rsp+68h] [rbp-71h]
  PVOID pvReadContext; // [rsp+70h] [rbp-69h] BYREF
  ULONG pcbReadBuffer; // [rsp+78h] [rbp-61h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-59h] BYREF
  UNICODE_STRING v38; // [rsp+90h] [rbp-49h] BYREF
  ULONG pcbRestartBuffer; // [rsp+A0h] [rbp-39h] BYREF
  ULONGLONG *v40; // [rsp+A8h] [rbp-31h]
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
  char v51; // [rsp+150h] [rbp+77h]
  BOOL v52; // [rsp+158h] [rbp+7Fh]

  v3 = 0;
  LOBYTE(v2) = 0;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&v38.Length = 0LL;
  v6 = 0LL;
  v38.Buffer = 0LL;
  v51 = 1;
  ppvRestartBuffer = 0LL;
  pcbRestartBuffer = 0;
  plsn.ullOffset = 0LL;
  pvCursorContext = 0LL;
  plsn2.ullOffset = 0LL;
  pcbWritten = 0;
  pvRestartBuffer.ullOffset = 0LL;
  pvReadContext = 0LL;
  v52 = v2;
  LOBYTE(pcbInfoBuffer) = 0;
  LockRMLog();
  if ( (*(_DWORD *)(a1 + 104) & 1) != 0 )
    goto LABEL_4;
  pinfoBuffer = (PCLFS_INFORMATION)ExAllocatePool2(0x100uLL);
  v8 = pinfoBuffer;
  if ( !pinfoBuffer )
  {
    v3 = -1073741670;
LABEL_4:
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 128));
    KeLeaveCriticalRegion();
    return v3;
  }
  *(_DWORD *)(a1 + 104) |= 2u;
  v10 = (struct _LIST_ENTRY *)a1 == WheapPfaLock.Timer.Header.WaitListHead.Flink;
  *(_QWORD *)(a1 + 120) = CLFS_LSN_INVALID_EXT;
  if ( v10 )
  {
    Source = &CmpLogPath;
    if ( a2 )
      *(_OWORD *)(stru_140E098B8.WaitBlock[2].Thread->ThreadLock + 128) = *a2;
    LOBYTE(v7) = 1;
    FileSecurityDescriptor = RtlStringFromGUIDEx(stru_140E098B8.WaitBlock[2].Thread->ThreadLock + 128, &v38, v7);
    if ( FileSecurityDescriptor < 0 )
      goto LABEL_56;
    v12 = (ULONGLONG *)(a1 + 72);
    *(_QWORD *)(a1 + 72) = 5242880LL;
    v40 = (ULONGLONG *)(a1 + 72);
    Blink = stru_140E098B8.WaitBlock[2].Thread[1].WaitBlock[0].WaitListEntry.Blink;
    v52 = Feature_CLFS_Signing__private_IsEnabledDeviceUsageNoInline() != 0;
  }
  else
  {
    FileSecurityDescriptor = CmpQueryNameString(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 1544LL), &UnicodeString);
    if ( FileSecurityDescriptor < 0 )
      goto LABEL_56;
    Source = &UnicodeString;
    if ( a2 )
      *(_OWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 64LL) + 128LL) = *a2;
    FileSecurityDescriptor = RtlStringFromGUIDEx(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 64LL) + 128LL, &v38, 1LL);
    if ( FileSecurityDescriptor < 0 )
      goto LABEL_56;
    v14 = *(_QWORD *)(a1 + 80);
    v12 = (ULONGLONG *)(a1 + 72);
    *(_QWORD *)(a1 + 72) = 0x100000LL;
    v40 = (ULONGLONG *)(a1 + 72);
    Blink = *(struct _LIST_ENTRY **)(v14 + 1544);
    if ( (unsigned int)Feature_CLFS_Signing__private_IsEnabledDeviceUsageNoInline() )
    {
      IsFileInSystemConfig = CmpIsFileInSystemConfig(&UnicodeString);
      v40 = (ULONGLONG *)(a1 + 72);
      FileSecurityDescriptor = IsFileInSystemConfig;
      if ( IsFileInSystemConfig < 0 )
      {
LABEL_55:
        v8 = pinfoBuffer;
        goto LABEL_56;
      }
      LOBYTE(IsFileInSystemConfig) = pcbInfoBuffer;
      v52 = IsFileInSystemConfig;
    }
  }
  FileSecurityDescriptor = CmpQueryFileSecurityDescriptor(Blink);
  if ( FileSecurityDescriptor < 0 )
    goto LABEL_55;
  v6 = pvReadContext;
  v17 = (PVOID *)(a1 + 96);
  v18 = (PLOG_FILE_OBJECT *)(a1 + 88);
  v19 = (unsigned int *)(a1 + 68);
  while ( 1 )
  {
    FileSecurityDescriptor = CmpStartCLFSLog(
                               Source,
                               &v38,
                               v16,
                               v6,
                               ppvReadContext,
                               v12,
                               !v52,
                               v19,
                               (FILE_OBJECT **)(a1 + 88),
                               (PVOID *)(a1 + 96));
    if ( FileSecurityDescriptor < 0 )
      break;
    pcbInfoBuffer = 120;
    Pool2 = (CLFS_INFORMATION *)ExAllocatePool2(0x100uLL);
    v21 = Pool2;
    if ( Pool2 )
    {
      ClfsGetLogFileInformation(*v18, Pool2, &pcbInfoBuffer);
      ExFreePoolWithTag(v21, 0);
    }
    v22 = *v18;
    pcbWritten = 120;
    v8 = pinfoBuffer;
    FileSecurityDescriptor = ClfsGetLogFileInformation(v22, pinfoBuffer, &pcbWritten);
    *(_QWORD *)(a1 + 120) = v8->BaseLsn.ullOffset;
    if ( FileSecurityDescriptor < 0 )
      goto LABEL_49;
    if ( ClfsReadRestartArea(*v17, &ppvRestartBuffer, &pcbRestartBuffer, &plsn, &pvCursorContext) == 1075445772
      || !ppvRestartBuffer )
    {
      plsn2 = v8->BaseLsn;
      goto LABEL_35;
    }
    plsn2 = *(CLFS_LSN *)ppvRestartBuffer;
    if ( !ClfsLsnEqual(&plsn, &plsn2) )
      goto LABEL_35;
    v23 = *v17;
    plsnFirst = plsn2;
    pvReadContext = 0LL;
    ppvReadBuffer = 0LL;
    pcbReadBuffer = 0;
    plsnUndoNext.ullOffset = 0LL;
    plsnPrevious.ullOffset = 0LL;
    plsnRecord.ullOffset = 0LL;
    LOBYTE(pcbInfoBuffer) = 0;
    if ( ClfsReadLogRecord(
           v23,
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
      v24 = ClfsReadNextLogRecord(
              pvReadContext,
              &ppvReadBuffer,
              &pcbReadBuffer,
              (PCLFS_RECORD_TYPE)&pcbInfoBuffer,
              0LL,
              &plsnUndoNext,
              &plsnPrevious,
              &plsnRecord);
      if ( v24 == -1073741807 )
      {
        LastLsn = v8->LastLsn;
      }
      else
      {
        if ( v24 < 0 )
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
    if ( !ClfsLsnEqual(&plsn2, &v8->LastLsn) && (*(_DWORD *)(a1 + 104) & 4) != 0 )
    {
      v26 = plsn2;
      if ( (int)CmpRmAnalysisPhase(a1, plsn2) >= 0 )
      {
        CmpRmReDoPhase(a1, v26);
        CmpRmUnDoPhase(a1);
      }
      *(_DWORD *)(a1 + 104) &= ~4u;
    }
    v27 = *v17;
    pvRestartBuffer = v8->LastLsn;
    v28 = ClfsWriteRestartArea(v27, &pvRestartBuffer, 8u, 0LL, 0, &pcbWritten, 0LL);
    FileSecurityDescriptor = v28;
    if ( !v51 || v28 != -1072037859 && *(_DWORD *)(a1 + 68) <= 0xAu )
      goto LABEL_49;
    v51 = 0;
    if ( pvCursorContext )
    {
      ClfsTerminateReadLog(pvCursorContext);
      pvCursorContext = 0LL;
    }
    ClfsDeleteLogByPointer(*v18);
    ClfsDeleteMarshallingArea(*v17);
    v29 = *v18;
    *v17 = 0LL;
    ClfsCloseLogFileObject(v29);
    v12 = v40;
    v19 = (unsigned int *)(a1 + 68);
    *(_DWORD *)(a1 + 68) = 0;
    *v18 = 0LL;
  }
  v8 = pinfoBuffer;
LABEL_49:
  if ( pvCursorContext )
    ClfsTerminateReadLog(pvCursorContext);
  if ( FileSecurityDescriptor >= 0 )
  {
    *(_DWORD *)(a1 + 104) = *(_DWORD *)(a1 + 104) & 0xFFFFFFFC | 1;
  }
  else if ( *v17 )
  {
    *v17 = 0LL;
  }
LABEL_56:
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 128));
  KeLeaveCriticalRegion();
  if ( UnicodeString.Buffer )
    RtlFreeAnsiString(&UnicodeString);
  if ( v38.Buffer )
    RtlFreeAnsiString(&v38);
  ExFreePoolWithTag(v8, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)FileSecurityDescriptor;
}
