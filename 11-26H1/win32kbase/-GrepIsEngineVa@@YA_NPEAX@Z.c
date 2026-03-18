/*
 * XREFs of ?GrepIsEngineVa@@YA_NPEAX@Z @ 0x140034420
 * Callers:
 *     ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x140033590 (-vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall GrepIsEngineVa(void *a1)
{
  return (unsigned __int8)MmIsKernelAddress(a1) != 0;
}
