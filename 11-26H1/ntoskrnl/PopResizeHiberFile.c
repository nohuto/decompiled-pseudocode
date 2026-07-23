/*
 * XREFs of PopResizeHiberFile @ 0x140B0316C
 * Callers:
 *     PopEnlargeHiberFile @ 0x1407D32A4 (PopEnlargeHiberFile.c)
 *     PopAdjustHiberFile @ 0x140B03030 (PopAdjustHiberFile.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     ZwSetInformationFile @ 0x1407284A0 (ZwSetInformationFile.c)
 *     PopValidateHiberFileSize @ 0x140B03344 (PopValidateHiberFileSize.c)
 *     PopSetHiberFileMcb @ 0x140B03534 (PopSetHiberFileMcb.c)
 *     PopSanityCheckHiberFile @ 0x140B035D0 (PopSanityCheckHiberFile.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140B3B354 (FsRtlIssueFileNotificationFsctl.c)
 */

__int64 __fastcall PopResizeHiberFile(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rbx
  NTSTATUS Status; // ecx
  __int64 v7; // [rsp+30h] [rbp-30h] BYREF
  PVOID P; // [rsp+38h] [rbp-28h] BYREF
  __int64 FileInformation; // [rsp+40h] [rbp-20h] BYREF
  ULONG_PTR v10; // [rsp+48h] [rbp-18h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-10h] BYREF
  int v12; // [rsp+78h] [rbp+18h] BYREF
  ULONG_PTR v13; // [rsp+88h] [rbp+28h] BYREF

  IoStatusBlock = 0LL;
  v7 = 0LL;
  v4 = a1;
  P = 0LL;
  v12 = 0;
  if ( !FileObject )
    goto LABEL_15;
  if ( qword_140F108F0 == a1 )
  {
LABEL_17:
    Status = 0;
    goto LABEL_14;
  }
  if ( (int)PopValidateHiberFileSize(a1, &v7, a3, 0LL) < 0 )
    v4 = v7;
  v13 = v4;
  if ( v4 <= 0 )
  {
LABEL_15:
    Status = -1073741823;
    goto LABEL_14;
  }
  FileInformation = v4;
  Status = ZwSetInformationFile(PopHiberInfo, &IoStatusBlock, &FileInformation, 8u, FileAllocationInformation);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&FileObject->Event, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( Status >= 0 )
  {
    v10 = v13;
    Status = ZwSetInformationFile(PopHiberInfo, &IoStatusBlock, &v10, 8u, FileEndOfFileInformation);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&FileObject->Event, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status >= 0 )
    {
      Status = PopSanityCheckHiberFile(
                 (_DWORD)PopHiberInfo,
                 (_DWORD)FileObject,
                 (unsigned int)&v13,
                 (unsigned int)&P,
                 (__int64)&v12);
      if ( Status >= 0 )
      {
        Status = PopSetHiberFileMcb(P);
        if ( Status >= 0 )
        {
          qword_140F108F0 = v13;
          FsRtlIssueFileNotificationFsctl(FileObject);
          goto LABEL_17;
        }
      }
    }
  }
LABEL_14:
  *a2 = qword_140F108F0;
  return (unsigned int)Status;
}
