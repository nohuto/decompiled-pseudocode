/*
 * XREFs of ACPIFreePhysicalDeviceLocationDescriptor @ 0x1400C1DAC
 * Callers:
 *     ACPIFreePhysicalDeviceLocationDescriptors @ 0x1400C0034 (ACPIFreePhysicalDeviceLocationDescriptors.c)
 *     ACPIQueryPhysicalDeviceLocation @ 0x1400C098C (ACPIQueryPhysicalDeviceLocation.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1400C1884 (ACPIProcessPhysicalDeviceLocation.c)
 * Callees:
 *     <none>
 */

void __fastcall ACPIFreePhysicalDeviceLocationDescriptor(char *P)
{
  if ( *((_QWORD *)P + 16) )
    RtlFreeUnicodeString((PUNICODE_STRING)(P + 120));
  ExFreePoolWithTag(P, 0);
}
