/*
 * XREFs of s_SetDwmAttributes @ 0x180661198
 * Callers:
 *     s_OnDrawItemHelper @ 0x180660190 (s_OnDrawItemHelper.c)
 * Callees:
 *     ?IsHighContrast@@YAHXZ @ 0x1801544B0 (-IsHighContrast@@YAHXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HVCZMTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801FE418 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_HVCZMTest@@@details@wil@@QEAAX_NW4Reporti.c)
 *     _lambda_80c9c4321fda70fcbf4fd57f8d5fc182_::operator_int_(__cdecl_)(HWND_______int64) @ 0x18065F020 (_lambda_80c9c4321fda70fcbf4fd57f8d5fc182_--operator_int_(__cdecl_)(HWND_______int64).c)
 */

int __fastcall s_SetDwmAttributes(LPARAM a1, LPARAM a2, __int64 a3, __int64 a4)
{
  int result; // eax
  BOOL (__stdcall *v7)(HWND, LPARAM); // rax
  LPARAM lParam[3]; // [rsp+20h] [rbp-18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_HVCZMTest>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_HVCZMTest>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  result = IsHighContrast();
  if ( !result )
  {
    lParam[0] = a1;
    lParam[1] = a2;
    v7 = (BOOL (__stdcall *)(HWND, LPARAM))lambda_80c9c4321fda70fcbf4fd57f8d5fc182_::operator_int____cdecl___HWND_______int64_();
    return EnumWindows(v7, (LPARAM)lParam);
  }
  return result;
}
