/*
 * XREFs of iswctype @ 0x18012AB80
 * Callers:
 *     RtlIpv4StringToAddressExW @ 0x1800AB120 (RtlIpv4StringToAddressExW.c)
 *     RtlIpv4StringToAddressW @ 0x1800AB300 (RtlIpv4StringToAddressW.c)
 *     RtlCanonicalizeDomainName @ 0x1800AB600 (RtlCanonicalizeDomainName.c)
 *     RtlIpv6StringToAddressExW @ 0x1800ABC40 (RtlIpv6StringToAddressExW.c)
 *     RtlIpv6StringToAddressW @ 0x1800ABF20 (RtlIpv6StringToAddressW.c)
 *     RtlEthernetStringToAddressW @ 0x180111400 (RtlEthernetStringToAddressW.c)
 *     RtlUnicodeStringToLcid @ 0x1801140C0 (RtlUnicodeStringToLcid.c)
 *     iswalnum @ 0x18012AAB0 (iswalnum.c)
 *     iswalpha @ 0x18012AAC0 (iswalpha.c)
 *     iswdigit @ 0x18012AAF0 (iswdigit.c)
 *     iswgraph @ 0x18012AB00 (iswgraph.c)
 *     iswlower @ 0x18012AB10 (iswlower.c)
 *     iswprint @ 0x18012AB20 (iswprint.c)
 *     iswspace @ 0x18012AB30 (iswspace.c)
 *     iswxdigit @ 0x18012AB40 (iswxdigit.c)
 *     towlower @ 0x18012D650 (towlower.c)
 *     _whiteout @ 0x180136BB4 (_whiteout.c)
 *     _winput_s @ 0x180136C0C (_winput_s.c)
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
