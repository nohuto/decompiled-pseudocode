/*
 * XREFs of isdigit @ 0x140536BA0
 * Callers:
 *     RtlIpv6StringToAddressA @ 0x1404BBF50 (RtlIpv6StringToAddressA.c)
 *     RtlIpv4StringToAddressA @ 0x1404C3900 (RtlIpv4StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x14061D910 (RtlEthernetStringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x14061DA40 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv6StringToAddressExA @ 0x14061DC10 (RtlIpv6StringToAddressExA.c)
 *     I_MinAsn1ScanFrac @ 0x1408A41E0 (I_MinAsn1ScanFrac.c)
 *     MinAsn1DecodeGeneralizedTime @ 0x1408A42CC (MinAsn1DecodeGeneralizedTime.c)
 *     MinAsn1DecodeUtcTime @ 0x1408A4588 (MinAsn1DecodeUtcTime.c)
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
