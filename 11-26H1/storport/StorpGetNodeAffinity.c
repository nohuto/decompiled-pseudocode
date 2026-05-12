/*
 * XREFs of StorpGetNodeAffinity @ 0x14003C264
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorpGetNodeAffinity(__int64 a1, unsigned int a2, struct _GROUP_AFFINITY *a3)
{
  if ( !a3 || a2 > 0xFFFF )
    return 3238002694LL;
  KeQueryNodeActiveAffinity(a2, a3, 0LL);
  return 0LL;
}
