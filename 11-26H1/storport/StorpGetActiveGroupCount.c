/*
 * XREFs of StorpGetActiveGroupCount @ 0x14003C5CC
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorpGetActiveGroupCount(__int64 a1, USHORT *a2)
{
  if ( !a2 )
    return 3238002694LL;
  *a2 = KeQueryActiveGroupCount();
  return 0LL;
}
