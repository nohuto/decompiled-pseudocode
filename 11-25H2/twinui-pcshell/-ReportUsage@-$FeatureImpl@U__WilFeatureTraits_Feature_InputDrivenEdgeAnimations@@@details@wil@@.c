/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputDrivenEdgeAnimations@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801F9878
 * Callers:
 *     ??0TouchGestureComponent@@QEAA@XZ @ 0x18026F720 (--0TouchGestureComponent@@QEAA@XZ.c)
 *     ?perform_delayed_initialization@TouchGestureComponent@@UEAAXXZ @ 0x180568280 (-perform_delayed_initialization@TouchGestureComponent@@UEAAXXZ.c)
 *     ?subscribe_to_services@TouchGestureComponent@@UEAAXPEAUIServiceProvider@@@Z @ 0x180568320 (-subscribe_to_services@TouchGestureComponent@@UEAAXPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180072930 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_InputDrivenEdgeAnimations@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180216658 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_InputDrivenEdgeAnimation.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputDrivenEdgeAnimations>::ReportUsage(
        _DWORD *a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r8
  unsigned int v6; // edi
  _BYTE v7[24]; // [rsp+40h] [rbp-18h] BYREF
  int v8; // [rsp+60h] [rbp+8h] BYREF
  __int16 v9; // [rsp+64h] [rbp+Ch]
  __int64 v10; // [rsp+78h] [rbp+20h]

  v10 = a4;
  LODWORD(v4) = *a1;
  v6 = a2;
  if ( (*a1 & 4) == 0 )
  {
    v4 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputDrivenEdgeAnimations>::GetCachedFeatureEnabledState(
                      a1,
                      v7);
    v10 = v4;
  }
  v8 = 0;
  v9 = 3;
  wil::details::ReportUsageToService(
    (__int64)(a1 + 2),
    0x227C1D2u,
    ((unsigned int)v4 >> 10) & 1,
    ((unsigned int)v4 >> 11) & 1,
    (__int64)&v8,
    v6,
    3);
}
