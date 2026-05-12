/*
 * XREFs of RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x14007F5FC
 * Callers:
 *     StorPortAdapterPowerNotRequiredStep1 @ 0x14000FD40 (StorPortAdapterPowerNotRequiredStep1.c)
 *     StorPortAdapterPowerRequiredStep1 @ 0x1400108D0 (StorPortAdapterPowerRequiredStep1.c)
 *     StorPortAdapterDirectedPowerDown @ 0x140081520 (StorPortAdapterDirectedPowerDown.c)
 *     StorPortAdapterDirectedPowerUp @ 0x1400818A0 (StorPortAdapterDirectedPowerUp.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x14000EF30 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x140010D4C (RaidIsAdapterControlSupported.c)
 */

__int64 __fastcall RaidAdapterSendPoFxPowerRequiredToMiniport(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // ebx

  v1 = a1 + 376;
  v2 = -1073741637;
  if ( RaidIsAdapterControlSupported(a1 + 376, 7) )
    return (unsigned int)RaCallMiniportAdapterControl(v1);
  return v2;
}
