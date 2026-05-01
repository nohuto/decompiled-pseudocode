/*
 * XREFs of ?IgnoreRelativeToFocusedElementShowRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NAEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x18021012C
 * Callers:
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IEPEAIPEAURect@Foundation@8@PEAE@Z @ 0x18024EFF0 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ?IsRectNull@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@@Z @ 0x18013E8FC (-IsRectNull@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@@Z.c)
 *     ??0abi_guard@?$root_implements@Uiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAA@AEAUiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@3@@Z @ 0x18027F3E0 (--0abi_guard@-$root_implements@Uiterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@URemoteSyst.c)
 *     ??$IgnoreRelativeToFocusedElementShowRequest@AEA_N_NAEAMAEAM@TouchKeyboardExperienceTelemetryLogger@@SAXAEA_N$$QEA_NAEAM2@Z @ 0x180482548 (--$IgnoreRelativeToFocusedElementShowRequest@AEA_N_NAEAMAEAM@TouchKeyboardExperienceTelemetryLog.c)
 *     std::call_once__lambda_b845a5ef8d523a7a273348395baf5ff1___ @ 0x18048274C (std--call_once__lambda_b845a5ef8d523a7a273348395baf5ff1___.c)
 *     ?PreferUseUIAToGetBoundingBox@UIAutomationHelpers@KeyboardHosting@@QEAA_NXZ @ 0x18048A38C (-PreferUseUIAToGetBoundingBox@UIAutomationHelpers@KeyboardHosting@@QEAA_NXZ.c)
 */

char __fastcall KeyboardHosting::TabTipAdapterPolicy::IgnoreRelativeToFocusedElementShowRequest(
        KeyboardHosting::TabTipAdapterPolicy *this,
        const struct Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeRequest *a2)
{
  KeyboardHosting::TabTipAdapterPolicy *v2; // rdi
  char v3; // bl
  const char *v4; // r9
  bool BoundingBox; // al
  KeyboardHosting *v6; // rcx
  const struct Windows::Foundation::Rect *v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  bool v12; // [rsp+38h] [rbp+10h] BYREF
  bool IsRectNull; // [rsp+40h] [rbp+18h] BYREF

  v2 = this;
  v3 = 0;
  if ( *(_DWORD *)a2 == 6 )
  {
    v12 = 0;
    winrt::impl::root_implements<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>::abi_guard::abi_guard(
      &IsRectNull,
      this);
    try
    {
      std::call_once__lambda_b845a5ef8d523a7a273348395baf5ff1___();
      BoundingBox = KeyboardHosting::UIAutomationHelpers::PreferUseUIAToGetBoundingBox(*((KeyboardHosting::UIAutomationHelpers **)v2
                                                                                       + 121));
      v12 = BoundingBox;
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x6DF,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
        v4);
      v3 = 0;
      v2 = this;
      BoundingBox = v12;
    }
    v6 = (KeyboardHosting::TabTipAdapterPolicy *)((char *)v2 + 176);
    if ( !BoundingBox && !KeyboardHosting::IsRectNull(v6, v7) && *((float *)v2 + 38) < 1.0 && *((float *)v2 + 39) < 1.0 )
      v3 = 1;
    IsRectNull = KeyboardHosting::IsRectNull(v6, v7);
    TouchKeyboardExperienceTelemetryLogger::IgnoreRelativeToFocusedElementShowRequest<bool &,bool,float &,float &>(
      &v12,
      &IsRectNull,
      (char *)v2 + 152,
      (char *)v2 + 156);
  }
  return v3;
}
