/*
 * XREFs of iswctype @ 0x14053B358
 * Callers:
 *     RtlIpv6StringToAddressExW @ 0x1404A76B0 (RtlIpv6StringToAddressExW.c)
 *     RtlIpv6StringToAddressW @ 0x1404A78D0 (RtlIpv6StringToAddressW.c)
 *     RtlIpv4StringToAddressExW @ 0x1404AD980 (RtlIpv4StringToAddressExW.c)
 *     RtlIpv4StringToAddressW @ 0x1404ADAE0 (RtlIpv4StringToAddressW.c)
 *     iswalnum @ 0x140539140 (iswalnum.c)
 *     iswalpha @ 0x14053915C (iswalpha.c)
 *     iswdigit @ 0x140539180 (iswdigit.c)
 *     iswspace @ 0x1405391A0 (iswspace.c)
 *     towlower @ 0x14053A250 (towlower.c)
 *     _whiteout @ 0x140541918 (_whiteout.c)
 *     _winput_s @ 0x140541970 (_winput_s.c)
 *     RtlEthernetStringToAddressW @ 0x140620F00 (RtlEthernetStringToAddressW.c)
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
