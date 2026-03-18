/*
 * XREFs of ?AllocateBucket@InputObjectMap@@CAPEAX_KPEAX@Z @ 0x14023DE70
 * Callers:
 *     ?AddMapping@InputObjectMap@@SAJAEBU_LUID@@PEBUCompositionInputObject@@@Z @ 0x14023DA94 (-AddMapping@InputObjectMap@@SAJAEBU_LUID@@PEBUCompositionInputObject@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InputObjectMap::AllocateBucket(__int64 a1, void *a2)
{
  return ExAllocatePool2(258LL, a1, 1986945877LL);
}
