/*
 * XREFs of StorpGetGroupAffinity @ 0x14005C120
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorpGetGroupAffinity(__int64 a1, USHORT a2, KAFFINITY *a3)
{
  if ( !a3 )
    return 3238002694LL;
  if ( a2 > KeQueryActiveGroupCount() )
    return 3238002689LL;
  *a3 = KeQueryGroupAffinity(a2);
  return 0LL;
}
