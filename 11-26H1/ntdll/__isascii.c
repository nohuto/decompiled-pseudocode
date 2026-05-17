/*
 * XREFs of __isascii @ 0x180127A50
 * Callers:
 *     RtlIpv4StringToAddressExA @ 0x1800DA8D0 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv4StringToAddressA @ 0x1800DAAD0 (RtlIpv4StringToAddressA.c)
 *     RtlIpv6StringToAddressExA @ 0x1800E2460 (RtlIpv6StringToAddressExA.c)
 *     RtlIpv6StringToAddressA @ 0x1800E26E0 (RtlIpv6StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x180147120 (RtlEthernetStringToAddressA.c)
 * Callees:
 *     <none>
 */

int __cdecl _isascii(int C)
{
  return (unsigned int)C < 0x80;
}
