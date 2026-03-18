/*
 * XREFs of islower @ 0x1404FC260
 * Callers:
 *     RtlIpv4StringToAddressA @ 0x14048C220 (RtlIpv4StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x1405E1930 (RtlEthernetStringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x1405E1A60 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv6StringToAddressExA @ 0x1405E1C30 (RtlIpv6StringToAddressExA.c)
 * Callees:
 *     <none>
 */

int __cdecl islower(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return off_140E00150[v1] & 2;
}
