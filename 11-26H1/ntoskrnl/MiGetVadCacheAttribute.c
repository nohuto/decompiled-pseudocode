/*
 * XREFs of MiGetVadCacheAttribute @ 0x1404DBCAC
 * Callers:
 *     MiAllocateLargeProcessPagesFromCache @ 0x1402F278C (MiAllocateLargeProcessPagesFromCache.c)
 *     MiReferenceIncomingPhysicalPages @ 0x140707250 (MiReferenceIncomingPhysicalPages.c)
 *     MiProcessVaContiguityInformation @ 0x1407104C0 (MiProcessVaContiguityInformation.c)
 *     MiProtectAwePrepare @ 0x14087F400 (MiProtectAwePrepare.c)
 *     MmRotatePhysicalView @ 0x140AEF280 (MmRotatePhysicalView.c)
 *     MiRotateToFrameBufferNoCopy @ 0x140AEF51C (MiRotateToFrameBufferNoCopy.c)
 *     MiRotateToFrameBuffer @ 0x140AEF750 (MiRotateToFrameBuffer.c)
 *     MiReplaceRotateWithDemandZero @ 0x140AEFA48 (MiReplaceRotateWithDemandZero.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetVadCacheAttribute(unsigned int a1)
{
  __int64 result; // rax
  unsigned int v2; // ecx

  result = 1LL;
  v2 = (a1 >> 5) & 0x1F;
  if ( v2 >> 3 == 3 )
  {
    if ( (v2 & 7) != 0 )
      return 2LL;
  }
  else if ( v2 >> 3 == 1 )
  {
    return 0LL;
  }
  return result;
}
