/*
 * XREFs of __isascii @ 0x140536B88
 * Callers:
 *     RtlIpv6StringToAddressA @ 0x1404BBF50 (RtlIpv6StringToAddressA.c)
 *     RtlIpv4StringToAddressA @ 0x1404C3900 (RtlIpv4StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x14061D910 (RtlEthernetStringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x14061DA40 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv6StringToAddressExA @ 0x14061DC10 (RtlIpv6StringToAddressExA.c)
 * Callees:
 *     <none>
 */

int __cdecl _isascii(int C)
{
  return (unsigned int)C < 0x80;
}
