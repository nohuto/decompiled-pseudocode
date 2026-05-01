/*
 * XREFs of ??$get_value_nothrow@K$0A@@reg@wil@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x18056C358
 * Callers:
 *     ?IsCTAUpdateAllowed@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x1805B0214 (-IsCTAUpdateAllowed@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 *     ?IsInternetUpdateAllowed@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x1805B0624 (-IsInternetUpdateAllowed@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 *     ?SendPressAndHoldStopSignalIfNeeded@CopilotHotkeyManager@@AEAA_NXZ @ 0x18060F350 (-SendPressAndHoldStopSignalIfNeeded@CopilotHotkeyManager@@AEAA_NXZ.c)
 *     ?UpdateRightEdgyOptions@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180676E2C (-UpdateRightEdgyOptions@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Interna.c)
 * Callees:
 *     ?get_value_flags_from_value_type@reg_view_details@reg@wil@@YAKK@Z @ 0x18033761C (-get_value_flags_from_value_type@reg_view_details@reg@wil@@YAKK@Z.c)
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
