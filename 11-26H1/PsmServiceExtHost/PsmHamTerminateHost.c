/*
 * XREFs of PsmHamTerminateHost @ 0x180064C30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PsmHamTerminateHost(__int64 a1, unsigned int a2)
{
  return HamSrvTerminateHostForBi((char *)RmSvcGlobals + 2360, a1, a2);
}
