/*
 * XREFs of KdDecodeDataBlock @ 0x1405E3670
 * Callers:
 *     IopLiveDumpCollectPages @ 0x1405CE958 (IopLiveDumpCollectPages.c)
 *     KeBugCheck2 @ 0x1405E5F10 (KeBugCheck2.c)
 * Callees:
 *     KdCopyDataBlock @ 0x1405E35A4 (KdCopyDataBlock.c)
 */

unsigned __int64 KdDecodeDataBlock()
{
  unsigned __int64 result; // rax

  if ( KdpDataBlockEncoded )
  {
    result = KdCopyDataBlock(&KdDebuggerDataBlock);
    KdpDataBlockEncoded = 0;
  }
  return result;
}
