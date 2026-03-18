/*
 * XREFs of islower @ 0x140536BD0
 * Callers:
 *     RtlIpv4StringToAddressA @ 0x1404C3900 (RtlIpv4StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x14061D910 (RtlEthernetStringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x14061DA40 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv6StringToAddressExA @ 0x14061DC10 (RtlIpv6StringToAddressExA.c)
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
