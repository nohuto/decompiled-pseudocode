/*
 * XREFs of ??$Make@VDelayedTileActivationCallSite@@PEAUIPropertySet@Collections@Foundation@Windows@@AEAPEAUHWND__@@AEAW4IAM_DESKTOP_SWITCH_OPTION@@AEAV?$optional@_N@std@@AEAV?$optional@H@9@AEA_N@Details@WRL@Microsoft@@YA?AV?$ComPtr@VDelayedTileActivationCallSite@@@12@$$QEAPEAUIPropertySet@Collections@Foundation@Windows@@AEAPEAUHWND__@@AEAW4IAM_DESKTOP_SWITCH_OPTION@@AEAV?$optional@_N@std@@AEAV?$optional@H@std@@AEA_N@Z @ 0x1804D5830
 * Callers:
 *     ?ActivateApp@CDelayedTileActivation@@UEAAJPEAUIImmersiveMonitor@@PEAUISplashScreen@@@Z @ 0x1804D5CC0 (-ActivateApp@CDelayedTileActivation@@UEAAJPEAUIImmersiveMonitor@@PEAUISplashScreen@@@Z.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0DelayedTileActivationCallSite@@QEAA@PEAUIUnknown@@PEAUHWND__@@W4IAM_DESKTOP_SWITCH_OPTION@@V?$optional@_N@std@@V?$optional@H@5@_N@Z @ 0x1804D5AA8 (--0DelayedTileActivationCallSite@@QEAA@PEAUIUnknown@@PEAUHWND__@@W4IAM_DESKTOP_SWITCH_OPTION@@V-.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCopyToViewValueSetBase@@UIOleWindow@@UIShouldSwitchToDesktop@@UIAppActivationUIInfo@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1804D6720 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCopyToViewValueS.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::Make<DelayedTileActivationCallSite,Windows::Foundation::Collections::IPropertySet *,HWND__ * &,enum IAM_DESKTOP_SWITCH_OPTION &,std::optional<bool> &,std::optional<int> &,bool &>(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned int *a4,
        __int16 *a5,
        _QWORD *a6,
        char *a7)
{
  __int64 v11; // rdi
  __int16 v13; // [rsp+20h] [rbp-28h]
  char v14; // [rsp+30h] [rbp-18h]
  void *v15; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v15 = operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v15 )
  {
    v14 = *a7;
    v13 = *a5;
    v11 = DelayedTileActivationCallSite::DelayedTileActivationCallSite(v15, *a2, *a3, *a4, v13, *a6, v14);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CopyToViewValueSetBase,IOleWindow,IShouldSwitchToDesktop,IAppActivationUIInfo>::Release();
    v15 = 0LL;
    *a1 = v11;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v15);
  return a1;
}
