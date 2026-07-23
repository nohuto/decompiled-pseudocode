/*
 * XREFs of MiGetPageChainYield @ 0x14031A290
 * Callers:
 *     MiGetPageChain @ 0x140285330 (MiGetPageChain.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x1402B6790 (KeShouldYieldProcessor.c)
 *     MiWorkingSetIsContended @ 0x14031A300 (MiWorkingSetIsContended.c)
 */

_BOOL8 __fastcall MiGetPageChainYield(__int64 a1, __int64 a2)
{
  if ( a2 && ((a2 - 1) & *(_QWORD *)(a1 + 104)) != 0 || (*(_DWORD *)(a1 + 32) & 1) == 0 )
    return 0LL;
  if ( ((*(_DWORD *)(a1 + 28) >> 4) & 3) == 2 || !(unsigned int)MiWorkingSetIsContended(*(_QWORD *)(a1 + 8)) )
    return KeShouldYieldProcessor() != 0;
  return 1LL;
}
