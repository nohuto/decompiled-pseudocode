/*
 * XREFs of ??$get_value_nothrow@K$0A@@reg@wil@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1805C5B1C
 * Callers:
 *     ?IsCTAUpdateAllowed@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x1805D4124 (-IsCTAUpdateAllowed@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 *     ?IsInternetUpdateAllowed@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x1805D4540 (-IsInternetUpdateAllowed@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 *     ?SendPressAndHoldStopSignalIfNeeded@CopilotHotkeyManager@@AEAA_NXZ @ 0x1806348E4 (-SendPressAndHoldStopSignalIfNeeded@CopilotHotkeyManager@@AEAA_NXZ.c)
 *     ?UpdateRightEdgyOptions@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18069D970 (-UpdateRightEdgyOptions@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Interna.c)
 * Callees:
 *     ?get_value_flags_from_value_type@reg_view_details@reg@wil@@YAKK@Z @ 0x1803370AC (-get_value_flags_from_value_type@reg_view_details@reg@wil@@YAKK@Z.c)
 */

LSTATUS wil::reg::get_value_nothrow<unsigned long,0>()
{
  unsigned int value_flags_from_value_type; // eax
  DWORD v1; // eax
  LPCWSTR v2; // rdx
  LPCWSTR v3; // r8
  PVOID pvData; // r10
  HKEY v5; // r11
  LSTATUS result; // eax
  DWORD pcbData; // [rsp+50h] [rbp+8h] BYREF

  pcbData = 4;
  value_flags_from_value_type = wil::reg::reg_view_details::get_value_flags_from_value_type((wil::reg::reg_view_details *)4);
  v1 = wil::reg::reg_view_details::get_value_flags_from_value_type((wil::reg::reg_view_details *)value_flags_from_value_type);
  result = RegGetValueW(v5, v2, v3, v1, 0LL, pvData, &pcbData);
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
