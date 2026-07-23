/*
 * XREFs of CmpStartCLFSLog @ 0x140869768
 * Callers:
 *     CmpStartRMLog @ 0x1408B2784 (CmpStartRMLog.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x14030FF30 (KeStackAttachProcess.c)
 *     RtlAppendUnicodeStringToString @ 0x14041FFA0 (RtlAppendUnicodeStringToString.c)
 *     Feature_CLFS_Signing__private_IsEnabledDeviceUsageNoInline @ 0x1404F3CAC (Feature_CLFS_Signing__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_AutoCleanupClfsLogfiles__private_IsEnabledDeviceUsageNoInline @ 0x14050BB08 (Feature_AutoCleanupClfsLogfiles__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140868F44 (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpDeleteCorruptedLogfile @ 0x1408691C8 (CmpDeleteCorruptedLogfile.c)
 *     PsRestoreImpersonation @ 0x140A51550 (PsRestoreImpersonation.c)
 *     PsDisableImpersonation @ 0x140A716E0 (PsDisableImpersonation.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpStartCLFSLog(
        PCUNICODE_STRING Source,
        PCUNICODE_STRING a2,
        __int64 a3,
        void *a4,
        int a5,
        ULONGLONG *a6,
        char a7,
        unsigned int *a8,
        FILE_OBJECT **a9,
        PVOID *a10)
{
  unsigned __int16 Length; // cx
  __int16 v14; // ax
  ULONG fLogOptionFlag; // edi
  NTSTATUS LogFileInformation; // ebx
  CLFS_INFORMATION *Pool2; // rax
  CLFS_INFORMATION *v19; // rsi
  unsigned int i; // edi
  BOOLEAN v21; // [rsp+60h] [rbp-89h]
  FILE_OBJECT *pplfoLog; // [rsp+68h] [rbp-81h] BYREF
  ULONG pcbInfoBuffer; // [rsp+70h] [rbp-79h] BYREF
  UNICODE_STRING Destination; // [rsp+78h] [rbp-71h] BYREF
  PVOID ppvMarshalContext; // [rsp+88h] [rbp-61h] BYREF
  PULONGLONG pcbContainer; // [rsp+90h] [rbp-59h]
  unsigned int *v27; // [rsp+98h] [rbp-51h]
  _SE_IMPERSONATION_STATE ImpersonationState; // [rsp+A0h] [rbp-49h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+B0h] [rbp-39h] BYREF

  pcbContainer = a6;
  *a9 = 0LL;
  *a10 = 0LL;
  Length = Source->Length;
  v27 = a8;
  v14 = a2->Length + 26;
  pcbInfoBuffer = 0;
  *(&Destination.MaximumLength + 2) = 0;
  *(_DWORD *)&Destination.MaximumLength = (unsigned __int16)(v14 + Length);
  ImpersonationState = 0LL;
  Destination.Length = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  Destination.Buffer = (wchar_t *)ExAllocatePool2(0x100uLL);
  if ( !Destination.Buffer )
    return 3221225626LL;
  *a9 = 0LL;
  *a10 = 0LL;
  RtlAppendUnicodeStringToString(&Destination, &CmpLogPrefix);
  RtlAppendUnicodeStringToString(&Destination, Source);
  RtlAppendUnicodeStringToString(&Destination, a2);
  RtlAppendUnicodeStringToString(&Destination, &CmpLogExt);
  fLogOptionFlag = 512;
  if ( (unsigned int)Feature_CLFS_Signing__private_IsEnabledDeviceUsageNoInline() && !a7 )
    fLogOptionFlag = 16777728;
  pplfoLog = 0LL;
  ppvMarshalContext = 0LL;
  v21 = PsDisableImpersonation(KeGetCurrentThread(), &ImpersonationState);
  KeStackAttachProcess(PsInitialSystemProcess, &ApcState);
  LogFileInformation = ClfsCreateLogFile(&pplfoLog, &Destination, 0xC0010000, 0, a4, 1u, 8u, 0, fLogOptionFlag, 0LL, 0);
  if ( !(unsigned int)Feature_CLFS_Signing__private_IsEnabledDeviceUsageNoInline()
    || !(unsigned int)Feature_AutoCleanupClfsLogfiles__private_IsEnabledDeviceUsageNoInline()
    || LogFileInformation != -1072037875 )
  {
    if ( LogFileInformation < 0 )
    {
      if ( LogFileInformation != -1073741772 )
        goto LABEL_18;
      LogFileInformation = ClfsCreateLogFile(
                             &pplfoLog,
                             &Destination,
                             0xC0010000,
                             0,
                             a4,
                             2u,
                             8u,
                             0,
                             fLogOptionFlag,
                             0LL,
                             0);
      if ( LogFileInformation < 0 )
        goto LABEL_18;
      for ( i = 0; i < 3; ++i )
      {
        LogFileInformation = CmpAddRemoveContainerToCLFSLog(
                               pplfoLog,
                               Source,
                               a2,
                               &CmpLogExt,
                               &CmpContainerSuffix,
                               i,
                               pcbContainer);
        if ( LogFileInformation < 0 )
          goto LABEL_18;
      }
    }
    else
    {
      pcbInfoBuffer = 120;
      Pool2 = (CLFS_INFORMATION *)ExAllocatePool2(0x100uLL);
      v19 = Pool2;
      if ( !Pool2 )
      {
        LogFileInformation = -1073741670;
        goto LABEL_18;
      }
      LogFileInformation = ClfsGetLogFileInformation(pplfoLog, Pool2, &pcbInfoBuffer);
      if ( LogFileInformation < 0 )
      {
        ExFreePoolWithTag(v19, 0);
        goto LABEL_18;
      }
      i = v19->TotalContainers;
      ExFreePoolWithTag(v19, 0);
    }
    LogFileInformation = ClfsCreateMarshallingArea(
                           pplfoLog,
                           PagedPool,
                           0LL,
                           0LL,
                           0x1000u,
                           2u,
                           0x14u,
                           &ppvMarshalContext);
    if ( LogFileInformation >= 0 )
    {
      *v27 = i;
      *a9 = pplfoLog;
      *a10 = ppvMarshalContext;
    }
    goto LABEL_18;
  }
  CmpDeleteCorruptedLogfile(Source, a2, &CmpLogExt, &CmpContainerSuffix, 0, L".%d", 0x10u);
LABEL_18:
  KiUnstackDetachProcess((__int64)&ApcState, 0);
  if ( v21 )
    PsRestoreImpersonation(KeGetCurrentThread(), &ImpersonationState);
  ExFreePoolWithTag(Destination.Buffer, 0);
  if ( LogFileInformation < 0 )
  {
    if ( pplfoLog )
      ClfsCloseLogFileObject(pplfoLog);
  }
  return (unsigned int)LogFileInformation;
}
