/*
 * XREFs of ??0?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UISwitchItemElement@@UIGlyphButtonHost@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1802AE810
 * Callers:
 *     ??0?$Selector@U?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIWindowingEnvironmentConfig@@UIWindowingEnvironmentConfigInternal@@@Details@WRL@Microsoft@@U?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VFtmBase@WRL@Microsoft@@@Details@23@UIWindowingEnvironmentConfig@@UIWindowingEnvironmentConfigInternal@@@234@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1802AE7F8 (--0-$Selector@U-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIWind_ea_1802AE7F8.c)
 *     ??0?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIMultitaskingViewGridElement@@UISwitchItemElement@@UIGlyphButtonHost@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1804B505C (--0-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIMultitaskingViewGridElement@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ISwitchItemElement,IGlyphButtonHost>::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ISwitchItemElement,IGlyphButtonHost>(
        __int64 a1)
{
  *(_QWORD *)(a1 + 8) = &winrt::impl::producers_base<GamingPosturePositioner,std::tuple<IGamingPosturePositioner,IBasicPositioner,IShellPositionerViewHandoff,IImmersiveMonitorNotification,IPositionerApplicationClosePolicy,IApplicationViewChangeListener,IInternalFullScreenHandler,IWindowManagementShowMoveSizeEvents>>::`vftable'{for `winrt::impl::producer_convert<GamingPosturePositioner,IInternalFullScreenHandler,void>'};
  return a1;
}
