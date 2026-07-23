/*
 * XREFs of MiQueryUpdateBytesWritten @ 0x140923A10
 * Callers:
 *     MiGetWorkingSetInfo @ 0x14040E930 (MiGetWorkingSetInfo.c)
 *     MiQueryMappedFileName @ 0x1409233DC (MiQueryMappedFileName.c)
 *     MiQueryReturnResults @ 0x140923994 (MiQueryReturnResults.c)
 *     MmQueryVirtualMemory @ 0x1409243E0 (MmQueryVirtualMemory.c)
 * Callees:
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 */

__int64 __fastcall MiQueryUpdateBytesWritten(__int64 a1, __int64 a2)
{
  __int64 *v2; // rax

  v2 = *(__int64 **)(a1 + 24);
  if ( v2 )
  {
    if ( *(_BYTE *)(a1 + 32) )
      RtlWriteULong64ToUser(*(_QWORD **)(a1 + 24), a2);
    else
      *v2 = a2;
  }
  return 0LL;
}
