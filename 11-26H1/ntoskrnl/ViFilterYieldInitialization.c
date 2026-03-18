/*
 * XREFs of ViFilterYieldInitialization @ 0x140647EF0
 * Callers:
 *     ViFilterDispatchGeneric @ 0x140C3BFD0 (ViFilterDispatchGeneric.c)
 *     ViFilterDispatchPnp @ 0x140C3C0A0 (ViFilterDispatchPnp.c)
 *     ViFilterDispatchPower @ 0x140C3C260 (ViFilterDispatchPower.c)
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
