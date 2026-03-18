/*
 * XREFs of iswctype @ 0x140538ED8
 * Callers:
 *     RtlIpv6StringToAddressExW @ 0x1404AE020 (RtlIpv6StringToAddressExW.c)
 *     RtlIpv6StringToAddressW @ 0x1404AE240 (RtlIpv6StringToAddressW.c)
 *     RtlIpv4StringToAddressExW @ 0x1404B43B0 (RtlIpv4StringToAddressExW.c)
 *     RtlIpv4StringToAddressW @ 0x1404B4510 (RtlIpv4StringToAddressW.c)
 *     iswalnum @ 0x140536CC0 (iswalnum.c)
 *     iswalpha @ 0x140536CDC (iswalpha.c)
 *     iswdigit @ 0x140536D00 (iswdigit.c)
 *     iswspace @ 0x140536D20 (iswspace.c)
 *     towlower @ 0x140537DD0 (towlower.c)
 *     _whiteout @ 0x14053F494 (_whiteout.c)
 *     _winput_s @ 0x14053F4EC (_winput_s.c)
 *     RtlEthernetStringToAddressW @ 0x14061DEB0 (RtlEthernetStringToAddressW.c)
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
