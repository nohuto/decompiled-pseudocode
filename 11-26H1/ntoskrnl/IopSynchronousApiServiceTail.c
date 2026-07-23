/*
 * XREFs of IopSynchronousApiServiceTail @ 0x1409829A4
 * Callers:
 *     IopSetEaOrQuotaInformationFile @ 0x140797D78 (IopSetEaOrQuotaInformationFile.c)
 *     NtQueryQuotaInformationFile @ 0x14079C100 (NtQueryQuotaInformationFile.c)
 *     NtSetVolumeInformationFile @ 0x14079C810 (NtSetVolumeInformationFile.c)
 *     NtSetEaFile @ 0x140980DA0 (NtSetEaFile.c)
 *     NtUnlockFile @ 0x1409810F0 (NtUnlockFile.c)
 *     NtQueryEaFile @ 0x1409815E0 (NtQueryEaFile.c)
 *     IopFlushBuffersFile @ 0x140981E10 (IopFlushBuffersFile.c)
 *     NtQueryVolumeInformationFile @ 0x140982460 (NtQueryVolumeInformationFile.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     IopCancelAlertedRequest @ 0x140B21254 (IopCancelAlertedRequest.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopSynchronousApiServiceTail(
        unsigned int a1,
        void *a2,
        IRP *a3,
        KPROCESSOR_MODE a4,
        unsigned int *Src,
        void *a6)
{
  unsigned int v9; // edi

  v9 = a1;
  if ( a1 == 259 )
  {
    if ( KeWaitForSingleObject(a2, Executive, a4, 0, 0LL) == 192 )
      IopCancelAlertedRequest(a2, a3);
    v9 = *Src;
  }
  if ( a4 )
    RtlCopyToUser(a6, Src, 0x10uLL);
  else
    RtlCopyVolatileMemory(a6, Src, 0x10uLL);
  ExFreePoolWithTag(a2, 0);
  return v9;
}
