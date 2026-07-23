/*
 * XREFs of isxdigit @ 0x180127A50
 * Callers:
 *     RtlIpv4StringToAddressExA @ 0x1800D7890 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv4StringToAddressA @ 0x1800D7A90 (RtlIpv4StringToAddressA.c)
 *     RtlIpv6StringToAddressExA @ 0x1800E0CC0 (RtlIpv6StringToAddressExA.c)
 *     RtlIpv6StringToAddressA @ 0x1800E0F40 (RtlIpv6StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x180146FD0 (RtlEthernetStringToAddressA.c)
 * Callees:
 *     <none>
 */

int __cdecl isxdigit(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return off_1801C4150[v1] & 0x80;
}
