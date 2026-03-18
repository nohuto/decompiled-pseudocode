/*
 * XREFs of HUBDSM_CreatingNewEndpoints @ 0x140021710
 * Callers:
 *     <none>
 * Callees:
 *     HUBUCX_CreateEndpointsInUCX @ 0x140026884 (HUBUCX_CreateEndpointsInUCX.c)
 */

__int64 __fastcall HUBDSM_CreatingNewEndpoints(__int64 a1)
{
  return HUBUCX_CreateEndpointsInUCX(*(_QWORD *)(a1 + 960));
}
