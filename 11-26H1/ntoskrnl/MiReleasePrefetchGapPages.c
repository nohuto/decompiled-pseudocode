/*
 * XREFs of MiReleasePrefetchGapPages @ 0x140337DB8
 * Callers:
 *     MiPfPutPagesInTransition @ 0x140372C60 (MiPfPutPagesInTransition.c)
 * Callees:
 *     MiReturnPfnReferenceCountAtDpc @ 0x14031E324 (MiReturnPfnReferenceCountAtDpc.c)
 *     MiUnlinkPageChainHead @ 0x140365EF0 (MiUnlinkPageChainHead.c)
 */

__int64 __fastcall MiReleasePrefetchGapPages(__int64 a1)
{
  __int64 i; // rbx
  __int64 result; // rax

  for ( i = a1; ; a1 = i )
  {
    result = MiUnlinkPageChainHead(a1);
    if ( !result )
      break;
    MiReturnPfnReferenceCountAtDpc(result);
  }
  return result;
}
