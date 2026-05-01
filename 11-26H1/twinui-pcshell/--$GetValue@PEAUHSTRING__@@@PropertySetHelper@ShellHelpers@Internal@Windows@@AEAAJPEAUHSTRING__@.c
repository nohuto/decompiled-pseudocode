/*
 * XREFs of ??$GetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAPEAU4@@Z1@Z @ 0x180172068
 * Callers:
 *     ?UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x180037DF0 (-UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowL.c)
 *     ?OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18003A800 (-OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING_.c)
 *     ?OnEventQueued@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18003B600 (-OnEventQueued@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAU.c)
 *     ?OnEventQueued@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18003BE00 (-OnEventQueued@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING.c)
 *     ?GetStringWithDefault@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA?AVHString@Wrappers@WRL@Microsoft@@PEAUHSTRING__@@PEBG@Z @ 0x180171FBC (-GetStringWithDefault@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA-AVHString@Wrappers@W.c)
 *     ?OnEventQueued@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180381710 (-OnEventQueued@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRI.c)
 *     ?HandleNotifyWindowName@CScreenClippingExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18039B7A0 (-HandleNotifyWindowName@CScreenClippingExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foun.c)
 *     ?HandleNotifyWindowName@CInsightsExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18039F510 (-HandleNotifyWindowName@CInsightsExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation.c)
 *     ?OnEventQueued@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803C3340 (-OnEventQueued@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@PEAUHSTRIN.c)
 *     ?_IsPropertySetActivationSourceAumidForeground@HolographicPositioner@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAUHWND__@@PEAH@Z @ 0x1804077AC (-_IsPropertySetActivationSourceAumidForeground@HolographicPositioner@@AEAAJPEAUIPropertySet@Coll.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropertyValue@Foundation@4@@Z @ 0x18003CB30 (-GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropert.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_9CPinnedList@@$BJI@AA @ 0x1803644D0 (--_9CPinnedList@@$BJI@AA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<HSTRING__ *>(
        Windows::Internal::ShellHelpers::PropertySetHelper *this,
        HSTRING a2,
        __int64 a3,
        _QWORD *a4)
{
  int PropVal; // ebx
  struct Windows::Foundation::IPropertyValue *v8; // rcx
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Windows::Foundation::IPropertyValue *v12; // [rsp+40h] [rbp+18h] BYREF

  *a4 = 0LL;
  v12 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v12);
  PropVal = Windows::Internal::ShellHelpers::PropertySetHelper::GetPropVal(this, a2, &v12);
  if ( PropVal >= 0 )
  {
    v10 =  CPinnedList::`vcall'{152,{flat}}(v12, a4);
    PropVal = v10;
    if ( v10 >= 0 )
      PropVal = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2F,
        (int)"onecore\\internal\\shell\\inc\\PropertySetHelpers.h",
        (const char *)(unsigned int)v10);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v12);
  }
  else
  {
    v8 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(struct Windows::Foundation::IPropertyValue *))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  return (unsigned int)PropVal;
}
