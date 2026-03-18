/*
 * XREFs of ?LooksLikeALocalHandle@@YA_NAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x140058E90
 * Callers:
 *     ?ValidateInputSink@CompositionInputObject@@SAJAEBUCOMPOSITION_INPUT_SINK_V2@@@Z @ 0x140058D78 (-ValidateInputSink@CompositionInputObject@@SAJAEBUCOMPOSITION_INPUT_SINK_V2@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall LooksLikeALocalHandle(const struct COMPOSITION_INPUT_QUEUE *a1)
{
  int v1; // eax

  if ( *(_DWORD *)a1 < 2u || *(_DWORD *)a1 == 4 )
    LOBYTE(v1) = 0;
  else
    return *((_DWORD *)a1 + 2) >> 31;
  return v1;
}
