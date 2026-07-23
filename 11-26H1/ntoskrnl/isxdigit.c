/*
 * XREFs of isxdigit @ 0x140539110
 * Callers:
 *     RtlIpv6StringToAddressA @ 0x1404B5690 (RtlIpv6StringToAddressA.c)
 *     RtlIpv4StringToAddressA @ 0x1404BD150 (RtlIpv4StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x140620960 (RtlEthernetStringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x140620A90 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv6StringToAddressExA @ 0x140620C60 (RtlIpv6StringToAddressExA.c)
 * Callees:
 *     <none>
 */

int __cdecl isxdigit(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return off_140E00150[v1] & 0x80;
}
