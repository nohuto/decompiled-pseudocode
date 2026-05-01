/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCPinnedList@@UIStartMenuPinnedList@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802124E0
 * Callers:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UILockScreenDirectorServiceProvider@@VCImmersiveShellComponentWithGITSite@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1803E66F0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UILockScreenDirect.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UILockScreenDirectorServiceProvider@@VCImmersiveShellComponentWithGITSite@@@Details@WRL@Microsoft@@WDA@EAAKXZ @ 0x1803E6700 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UILoc_ea_1803E6700.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UILockScreenDirectorServiceProvider@@VCImmersiveShellComponentWithGITSite@@@Details@WRL@Microsoft@@WDI@EAAKXZ @ 0x1803E6710 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UILoc_ea_1803E6710.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIWindowManagementJointResizeEvents@@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@UIImmersiveRawInputKeyboardNotification@@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x18040A490 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImm_ea_18040A490.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIWindowManagementJointResizeEvents@@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@UIImmersiveRawInputKeyboardNotification@@@Details@WRL@Microsoft@@WCA@EAAKXZ @ 0x18040A4A0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImm_ea_18040A4A0.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIWindowManagementJointResizeEvents@@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@UIImmersiveRawInputKeyboardNotification@@@Details@WRL@Microsoft@@WFI@EAAKXZ @ 0x18040A4B0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImm_ea_18040A4B0.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIWindowManagementJointResizeEvents@@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@UIImmersiveRawInputKeyboardNotification@@@Details@WRL@Microsoft@@WGA@EAAKXZ @ 0x18040A4C0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImm_ea_18040A4C0.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIWindowManagementJointResizeEvents@@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@UIImmersiveRawInputKeyboardNotification@@@Details@WRL@Microsoft@@WGI@EAAKXZ @ 0x18040A4D0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImm_ea_18040A4D0.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIPeoplePaneViewManager@@UIPeopleExperienceHostManager@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@@Details@WRL@Microsoft@@WHA@EAAKXZ @ 0x18040A4E0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImm_ea_18040A4E0.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCPinnedList@@UIStartMenuPinnedList@@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x1806889C0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCPin_ea_1806889C0.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCPinnedList@@UIStartMenuPinnedList@@@Details@WRL@Microsoft@@WCI@EAAKXZ @ 0x1806889D0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCPin_ea_1806889D0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CPinnedList,IStartMenuPinnedList>::AddRef(
        __int64 a1,
        volatile int *a2)
{
  return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 124), a2);
}
