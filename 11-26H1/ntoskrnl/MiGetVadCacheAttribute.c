/*
 * XREFs of MiGetVadCacheAttribute @ 0x1404E25CC
 * Callers:
 *     MiAllocateLargeProcessPagesFromCache @ 0x14031070C (MiAllocateLargeProcessPagesFromCache.c)
 *     MiReferenceIncomingPhysicalPages @ 0x140702580 (MiReferenceIncomingPhysicalPages.c)
 *     MiProcessVaContiguityInformation @ 0x14070B810 (MiProcessVaContiguityInformation.c)
 *     MiProtectAwePrepare @ 0x140879020 (MiProtectAwePrepare.c)
 *     MmRotatePhysicalView @ 0x140AEC270 (MmRotatePhysicalView.c)
 *     MiRotateToFrameBufferNoCopy @ 0x140AEC50C (MiRotateToFrameBufferNoCopy.c)
 *     MiRotateToFrameBuffer @ 0x140AEC740 (MiRotateToFrameBuffer.c)
 *     MiReplaceRotateWithDemandZero @ 0x140AECA38 (MiReplaceRotateWithDemandZero.c)
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
