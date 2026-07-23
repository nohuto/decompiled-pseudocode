/*
 * XREFs of KdDecodeDataBlock @ 0x1405E5FE0
 * Callers:
 *     IopLiveDumpCollectPages @ 0x1405D1168 (IopLiveDumpCollectPages.c)
 *     KeBugCheck2 @ 0x1405E8880 (KeBugCheck2.c)
 * Callees:
 *     KdCopyDataBlock @ 0x1405E5F14 (KdCopyDataBlock.c)
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
