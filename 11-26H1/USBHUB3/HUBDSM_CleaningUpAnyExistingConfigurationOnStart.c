/*
 * XREFs of HUBDSM_CleaningUpAnyExistingConfigurationOnStart @ 0x1400210D0
 * Callers:
 *     <none>
 * Callees:
 *     HUBUCX_DeleteEndpointsAndFreeResourcesForCurrentConfiguration @ 0x140026D44 (HUBUCX_DeleteEndpointsAndFreeResourcesForCurrentConfiguration.c)
 */

__int64 __fastcall HUBDSM_CleaningUpAnyExistingConfigurationOnStart(__int64 a1)
{
  HUBUCX_DeleteEndpointsAndFreeResourcesForCurrentConfiguration(*(_QWORD *)(a1 + 960));
  return 4077LL;
}
