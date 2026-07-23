/*
 * XREFs of __isascii @ 0x1801277C0
 * Callers:
 *     RtlIpv4StringToAddressExA @ 0x1800D7890 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv4StringToAddressA @ 0x1800D7A90 (RtlIpv4StringToAddressA.c)
 *     RtlIpv6StringToAddressExA @ 0x1800E0CC0 (RtlIpv6StringToAddressExA.c)
 *     RtlIpv6StringToAddressA @ 0x1800E0F40 (RtlIpv6StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x180146FD0 (RtlEthernetStringToAddressA.c)
 * Callees:
 *     <none>
 */

int __cdecl _isascii(int C)
{
  return (unsigned int)C < 0x80;
}
