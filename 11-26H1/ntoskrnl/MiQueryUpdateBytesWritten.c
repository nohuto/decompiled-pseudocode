/*
 * XREFs of MiQueryUpdateBytesWritten @ 0x1409202CC
 * Callers:
 *     MiGetWorkingSetInfo @ 0x14040F210 (MiGetWorkingSetInfo.c)
 *     MmQueryVirtualMemory @ 0x14091F870 (MmQueryVirtualMemory.c)
 *     MiQueryReturnResults @ 0x140920250 (MiQueryReturnResults.c)
 *     MiQueryMappedFileName @ 0x1409FE7DC (MiQueryMappedFileName.c)
 * Callees:
 *     MiModeCopyExceptionFilterEx @ 0x1404E5578 (MiModeCopyExceptionFilterEx.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
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
