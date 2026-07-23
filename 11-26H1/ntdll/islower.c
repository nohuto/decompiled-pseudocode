/*
 * XREFs of islower @ 0x180127960
 * Callers:
 *     RtlIpv4StringToAddressExA @ 0x1800D7890 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv4StringToAddressA @ 0x1800D7A90 (RtlIpv4StringToAddressA.c)
 *     RtlIpv6StringToAddressExA @ 0x1800E0CC0 (RtlIpv6StringToAddressExA.c)
 *     RtlEthernetStringToAddressA @ 0x180146FD0 (RtlEthernetStringToAddressA.c)
 * Callees:
 *     <none>
 */

int __cdecl islower(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return off_1801C4150[v1] & 2;
}
