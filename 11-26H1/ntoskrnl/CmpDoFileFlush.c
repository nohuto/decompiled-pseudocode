/*
 * XREFs of CmpDoFileFlush @ 0x1404C93FC
 * Callers:
 *     CmpFileFlush @ 0x140AA8F74 (CmpFileFlush.c)
 * Callees:
 *     ZwFlushBuffersFile @ 0x140728920 (ZwFlushBuffersFile.c)
 */

NTSTATUS __fastcall CmpDoFileFlush(void *a1)
{
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+20h] [rbp-18h] BYREF

  IoStatusBlock = 0LL;
  if ( BYTE1(NlsMbOemCodePageTag) )
    return -1073741823;
  result = ZwFlushBuffersFile(a1, &IoStatusBlock);
  if ( result < 0 )
  {
    LODWORD(PspSiloMonitorLock.WriteOperationCount) = 4;
    PspSiloMonitorLock.OtherOperationCount = (__int64)a1;
    LODWORD(PspSiloMonitorLock.ReadTransferCount) = result;
  }
  return result;
}
