/*
 * XREFs of iswctype @ 0x18012AE10
 * Callers:
 *     RtlIpv4StringToAddressExW @ 0x1800ABFF0 (RtlIpv4StringToAddressExW.c)
 *     RtlIpv4StringToAddressW @ 0x1800AC1D0 (RtlIpv4StringToAddressW.c)
 *     RtlCanonicalizeDomainName @ 0x1800AC4D0 (RtlCanonicalizeDomainName.c)
 *     RtlIpv6StringToAddressExW @ 0x1800ACB10 (RtlIpv6StringToAddressExW.c)
 *     RtlIpv6StringToAddressW @ 0x1800ACDF0 (RtlIpv6StringToAddressW.c)
 *     RtlEthernetStringToAddressW @ 0x180111890 (RtlEthernetStringToAddressW.c)
 *     RtlUnicodeStringToLcid @ 0x1801148C4 (RtlUnicodeStringToLcid.c)
 *     iswalnum @ 0x18012AD40 (iswalnum.c)
 *     iswalpha @ 0x18012AD50 (iswalpha.c)
 *     iswdigit @ 0x18012AD80 (iswdigit.c)
 *     iswgraph @ 0x18012AD90 (iswgraph.c)
 *     iswlower @ 0x18012ADA0 (iswlower.c)
 *     iswprint @ 0x18012ADB0 (iswprint.c)
 *     iswspace @ 0x18012ADC0 (iswspace.c)
 *     iswxdigit @ 0x18012ADD0 (iswxdigit.c)
 *     towlower @ 0x18012D8E0 (towlower.c)
 *     _whiteout @ 0x180136E40 (_whiteout.c)
 *     _winput_s @ 0x180136E98 (_winput_s.c)
 * Callees:
 *     <none>
 */

int __cdecl iswctype(wint_t C, wctype_t Type)
{
  if ( C >= 0x100u )
    return 0;
  else
    return Type & pwctype[C];
}
