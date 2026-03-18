/*
 * XREFs of MiWsSwapPageFileNumber @ 0x140405778
 * Callers:
 *     MiFindBestOutswapPagefile @ 0x1404056BC (MiFindBestOutswapPagefile.c)
 *     MiContractWsSwapPageFileWorker @ 0x140704250 (MiContractWsSwapPageFileWorker.c)
 *     MiContractWsSwapPageFile @ 0x140AF3E5C (MiContractWsSwapPageFile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiWsSwapPageFileNumber(__int64 a1)
{
  __int64 i; // r8

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 22296); i = (unsigned int)(i + 1) )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 8 * i + 22304) + 172LL) & 0x10) != 0 )
      return (unsigned int)i;
  }
  return 16LL;
}
