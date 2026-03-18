/*
 * XREFs of __isascii @ 0x1404FC210
 * Callers:
 *     RtlIpv4StringToAddressA @ 0x14048C220 (RtlIpv4StringToAddressA.c)
 *     RtlIpv6StringToAddressA @ 0x14049D200 (RtlIpv6StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x1405E1930 (RtlEthernetStringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x1405E1A60 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv6StringToAddressExA @ 0x1405E1C30 (RtlIpv6StringToAddressExA.c)
 * Callees:
 *     <none>
 */

int __cdecl _isascii(int C)
{
  return (unsigned int)C < 0x80;
}
