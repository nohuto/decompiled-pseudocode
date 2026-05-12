/*
 * XREFs of RaCallMiniportAdapterControlSafe @ 0x14000FACC
 * Callers:
 *     StorReset @ 0x140050A30 (StorReset.c)
 *     RaidAdapterStartMiniport @ 0x140053D94 (RaidAdapterStartMiniport.c)
 *     StorInitializeMFND @ 0x1400CA970 (StorInitializeMFND.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x14000EF30 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x140010D4C (RaidIsAdapterControlSupported.c)
 */

__int64 __fastcall RaCallMiniportAdapterControlSafe(__int64 a1, __int64 a2)
{
  if ( (unsigned __int8)RaidIsAdapterControlSupported(a1, a2) )
    return RaCallMiniportAdapterControl(a1);
  else
    return 3221225659LL;
}
