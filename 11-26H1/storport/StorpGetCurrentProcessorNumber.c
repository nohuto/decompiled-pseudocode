/*
 * XREFs of StorpGetCurrentProcessorNumber @ 0x140001430
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorpGetCurrentProcessorNumber(__int64 a1, struct _PROCESSOR_NUMBER *a2)
{
  if ( !a2 )
    return 3238002694LL;
  KeGetCurrentProcessorNumberEx(a2);
  return 0LL;
}
