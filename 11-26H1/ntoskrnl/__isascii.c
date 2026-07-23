/*
 * XREFs of __isascii @ 0x140539008
 * Callers:
 *     RtlIpv6StringToAddressA @ 0x1404B5690 (RtlIpv6StringToAddressA.c)
 *     RtlIpv4StringToAddressA @ 0x1404BD150 (RtlIpv4StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x140620960 (RtlEthernetStringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x140620A90 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv6StringToAddressExA @ 0x140620C60 (RtlIpv6StringToAddressExA.c)
 * Callees:
 *     <none>
 */

int __cdecl _isascii(int C)
{
  return (unsigned int)C < 0x80;
}
