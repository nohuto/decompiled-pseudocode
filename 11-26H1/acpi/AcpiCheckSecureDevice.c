/*
 * XREFs of AcpiCheckSecureDevice @ 0x1400C1820
 * Callers:
 *     AcpiSdevIdentifierInterface @ 0x1400BA6AC (AcpiSdevIdentifierInterface.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1400C0E70 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     PnpBiosGetDeviceResourceList @ 0x1400CA68C (PnpBiosGetDeviceResourceList.c)
 * Callees:
 *     AcpiIsDeviceSecure @ 0x1400C1CA4 (AcpiIsDeviceSecure.c)
 */

bool __fastcall AcpiCheckSecureDevice(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 1008);
  if ( (v1 & 0x80000000) == 0 )
  {
    if ( (unsigned __int8)AcpiIsDeviceSecure() )
      *(_QWORD *)(a1 + 1008) |= 0x2000000000uLL;
    *(_QWORD *)(a1 + 1008) |= 0x80000000uLL;
    v1 = *(_QWORD *)(a1 + 1008);
  }
  return (v1 & 0x2000000000LL) != 0;
}
