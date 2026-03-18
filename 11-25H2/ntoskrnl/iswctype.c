/*
 * XREFs of iswctype @ 0x1404FE4B0
 * Callers:
 *     RtlIpv6StringToAddressExW @ 0x140471BC0 (RtlIpv6StringToAddressExW.c)
 *     RtlIpv6StringToAddressW @ 0x140471DF0 (RtlIpv6StringToAddressW.c)
 *     RtlIpv4StringToAddressExW @ 0x1404749F0 (RtlIpv4StringToAddressExW.c)
 *     RtlIpv4StringToAddressW @ 0x140474B60 (RtlIpv4StringToAddressW.c)
 *     iswalnum @ 0x1404FC350 (iswalnum.c)
 *     iswalpha @ 0x1404FC36C (iswalpha.c)
 *     iswdigit @ 0x1404FC390 (iswdigit.c)
 *     iswspace @ 0x1404FC3B0 (iswspace.c)
 *     towlower @ 0x1404FD490 (towlower.c)
 *     _whiteout @ 0x1405049D0 (_whiteout.c)
 *     _winput_s @ 0x140504A28 (_winput_s.c)
 *     RtlEthernetStringToAddressW @ 0x1405E1ED0 (RtlEthernetStringToAddressW.c)
 * Callees:
 *     <none>
 */

int __cdecl iswctype(wint_t C, wctype_t Type)
{
  if ( C >= 0x100u )
    return 0;
  else
    return Type & (*pwctype)[C];
}
