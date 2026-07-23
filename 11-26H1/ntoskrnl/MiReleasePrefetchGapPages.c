/*
 * XREFs of MiReleasePrefetchGapPages @ 0x140339E38
 * Callers:
 *     MiPfPutPagesInTransition @ 0x140374A10 (MiPfPutPagesInTransition.c)
 * Callees:
 *     MiReturnPfnReferenceCountAtDpc @ 0x140320354 (MiReturnPfnReferenceCountAtDpc.c)
 *     MiUnlinkPageChainHead @ 0x140367C90 (MiUnlinkPageChainHead.c)
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
