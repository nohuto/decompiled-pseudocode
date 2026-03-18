/*
 * XREFs of ViFilterYieldInitialization @ 0x140608DB0
 * Callers:
 *     ViFilterDispatchGeneric @ 0x140B8D000 (ViFilterDispatchGeneric.c)
 *     ViFilterDispatchPnp @ 0x140B8D0D0 (ViFilterDispatchPnp.c)
 *     ViFilterDispatchPower @ 0x140B8D290 (ViFilterDispatchPower.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ViFilterYieldInitialization(__int64 a1)
{
  __int64 result; // rax

  for ( result = *(unsigned int *)(a1 + 100); (result & 1) == 0; result = *(unsigned int *)(a1 + 100) )
    _mm_pause();
  return result;
}
