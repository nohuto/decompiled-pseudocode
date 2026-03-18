/*
 * XREFs of ACPIGpeIndexToByteIndex @ 0x1400201A8
 * Callers:
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x14001FC90 (ACPIWakeRemoveDevicesAndUpdate.c)
 *     ACPIInterruptDispatchEventDpc @ 0x140020600 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIVectorConnect @ 0x14006AC70 (ACPIVectorConnect.c)
 *     ACPIVectorDisconnect @ 0x14006AEA0 (ACPIVectorDisconnect.c)
 * Callees:
 *     ACPIGpeValidIndex @ 0x140020204 (ACPIGpeValidIndex.c)
 */

__int64 ACPIGpeIndexToByteIndex()
{
  unsigned int v0; // ecx
  unsigned int v1; // edx

  if ( !(unsigned __int8)ACPIGpeValidIndex() )
    KeBugCheckEx(0xA5u, 0x17uLL, v0, 1uLL, 0LL);
  v1 = *((unsigned __int16 *)AcpiInformation + 50);
  if ( v0 >= v1 )
    return v0 + *((unsigned __int16 *)AcpiInformation + 43) - v1;
  else
    return v0;
}
