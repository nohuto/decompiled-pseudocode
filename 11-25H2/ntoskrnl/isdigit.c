/*
 * XREFs of isdigit @ 0x1404FC230
 * Callers:
 *     RtlIpv4StringToAddressA @ 0x14048C220 (RtlIpv4StringToAddressA.c)
 *     RtlIpv6StringToAddressA @ 0x14049D200 (RtlIpv6StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x1405E1930 (RtlEthernetStringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x1405E1A60 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv6StringToAddressExA @ 0x1405E1C30 (RtlIpv6StringToAddressExA.c)
 *     I_MinAsn1ScanFrac @ 0x140817D14 (I_MinAsn1ScanFrac.c)
 *     MinAsn1DecodeGeneralizedTime @ 0x140817D94 (MinAsn1DecodeGeneralizedTime.c)
 *     MinAsn1DecodeUtcTime @ 0x140818268 (MinAsn1DecodeUtcTime.c)
 * Callees:
 *     <none>
 */

int __cdecl isdigit(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return off_140E00150[v1] & 4;
}
