/*
 * XREFs of EtwpRealtimeZeroTruncateLogfile @ 0x140B4652C
 * Callers:
 *     EtwpRealtimeCreateLogfile @ 0x140A138AC (EtwpRealtimeCreateLogfile.c)
 *     EtwpRealtimeFlushSavedBuffers @ 0x140A13CC8 (EtwpRealtimeFlushSavedBuffers.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwSetInformationFile @ 0x1407284A0 (ZwSetInformationFile.c)
 */

NTSTATUS __fastcall EtwpRealtimeZeroTruncateLogfile(__int64 a1)
{
  __int64 v1; // rdi
  void *v3; // rcx
  void *v4; // rcx
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-18h] BYREF
  __int64 FileInformation; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  v1 = 72LL;
  FileInformation = 0LL;
  v8 = 72LL;
  v3 = *(void **)(a1 + 360);
  IoStatusBlock = 0LL;
  if ( ZwSetInformationFile(v3, &IoStatusBlock, &v8, 8u, FileEndOfFileInformation) < 0
    || (v4 = *(void **)(a1 + 360),
        FileInformation = 72LL,
        result = ZwSetInformationFile(v4, &IoStatusBlock, &FileInformation, 8u, FileAllocationInformation),
        result < 0) )
  {
    result = ZwClose(*(HANDLE *)(a1 + 360));
    v1 = 0LL;
    *(_QWORD *)(a1 + 360) = 0LL;
  }
  *(_QWORD *)(a1 + 400) = v1;
  *(_QWORD *)(a1 + 392) = v1;
  *(_QWORD *)(a1 + 384) = v1;
  return result;
}
