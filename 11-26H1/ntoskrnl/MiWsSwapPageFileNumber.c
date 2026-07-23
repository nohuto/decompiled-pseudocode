/*
 * XREFs of MiWsSwapPageFileNumber @ 0x1403FE86C
 * Callers:
 *     MiFindBestOutswapPagefile @ 0x1403FE7B0 (MiFindBestOutswapPagefile.c)
 *     MiContractWsSwapPageFileWorker @ 0x140708F20 (MiContractWsSwapPageFileWorker.c)
 *     MiContractWsSwapPageFile @ 0x140AF687C (MiContractWsSwapPageFile.c)
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
