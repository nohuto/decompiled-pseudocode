/*
 * XREFs of StorpGetNodeAffinity2 @ 0x14007CE90
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidNtStatusToStorStatus @ 0x1400018E8 (RaidNtStatusToStorStatus.c)
 */

__int64 __fastcall StorpGetNodeAffinity2(__int64 a1, unsigned int a2, __int64 a3, unsigned __int16 a4, __int64 a5)
{
  int NodeActiveAffinity2; // eax

  if ( a2 > 0xFFFF || !a3 || !a4 || !a5 )
    return 3238002694LL;
  NodeActiveAffinity2 = KeQueryNodeActiveAffinity2((unsigned __int16)a2, a3, a4);
  return RaidNtStatusToStorStatus(NodeActiveAffinity2);
}
