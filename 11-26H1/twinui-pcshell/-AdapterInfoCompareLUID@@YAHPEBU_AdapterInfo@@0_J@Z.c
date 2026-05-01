/*
 * XREFs of ?AdapterInfoCompareLUID@@YAHPEBU_AdapterInfo@@0_J@Z @ 0x180675200
 * Callers:
 *     ?_BuildDisplayIndex@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@0IPEAV?$CDSA@U_AdapterInfo@@@@HI_NPEAH3@Z @ 0x180675420 (-_BuildDisplayIndex@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@0IPEAV-$CDSA@U_AdapterInfo@@@@HI_NPEAH3@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall AdapterInfoCompareLUID(const struct _LUID *a1, const struct _LUID *a2)
{
  return LUIDCompare(a1, a2);
}
