/*
 * XREFs of ndisEtwWriteRundown @ 0x140099830
 * Callers:
 *     ?ndisEtwEventControlCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x140098D78 (-ndisEtwEventControlCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 * Callees:
 *     ndisEtwRundownFilterDrivers @ 0x140098DAC (ndisEtwRundownFilterDrivers.c)
 *     ndisEtwRundownMiniportDrivers @ 0x140098E64 (ndisEtwRundownMiniportDrivers.c)
 *     ndisEtwRundownMiniports @ 0x140098F20 (ndisEtwRundownMiniports.c)
 *     ndisEtwRundownProtocolDrivers @ 0x140098FCC (ndisEtwRundownProtocolDrivers.c)
 */

void ndisEtwWriteRundown()
{
  if ( (byte_14011D046 & 8) != 0 )
  {
    ndisEtwRundownMiniports();
    if ( (byte_14011D046 & 8) != 0 )
    {
      ndisEtwRundownMiniportDrivers();
      if ( (byte_14011D046 & 8) != 0 )
      {
        ndisEtwRundownFilterDrivers();
        if ( (byte_14011D046 & 8) != 0 )
          ndisEtwRundownProtocolDrivers();
      }
    }
  }
}
