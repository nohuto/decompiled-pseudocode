/*
 * XREFs of islower @ 0x180127BF0
 * Callers:
 *     RtlIpv4StringToAddressExA @ 0x1800DA8D0 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv4StringToAddressA @ 0x1800DAAD0 (RtlIpv4StringToAddressA.c)
 *     RtlIpv6StringToAddressExA @ 0x1800E2460 (RtlIpv6StringToAddressExA.c)
 *     RtlEthernetStringToAddressA @ 0x180147120 (RtlEthernetStringToAddressA.c)
 * Callees:
 *     <none>
 */

int __cdecl islower(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return off_1801C5150[v1] & 2;
}
