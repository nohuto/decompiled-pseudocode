/*
 * XREFs of ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIWin32ApplicationView@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIWin32ApplicationView@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800F10D0
 * Callers:
 *     ?LoadIconW@CIconLoader@@UEAAJPEAUIApplicationView@@UtagSIZE@@1IPEAUIApplicationViewIconLoaderNotifications@@@Z @ 0x1800F0EF0 (-LoadIconW@CIconLoader@@UEAAJPEAUIApplicationView@@UtagSIZE@@1IPEAUIApplicationViewIconLoaderNot.c)
 *     ?_IsCortanaAltTabProxyWindowView@SwitchItem@@AEAA_NPEAUIApplicationView@@@Z @ 0x1804ABC80 (-_IsCortanaAltTabProxyWindowView@SwitchItem@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?IsRelatedWin32ViewPresentInLayout@ScreenManagerHelpers@@YAJPEAUIAppLayout@@PEAUIApplicationView@@PEAPEAU3@@Z @ 0x1804FFC54 (-IsRelatedWin32ViewPresentInLayout@ScreenManagerHelpers@@YAJPEAUIAppLayout@@PEAUIApplicationView.c)
 *     ?CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSHER_INPUT@@W4APPCRUSHER_SOURCE@@W4APPCRUSHER_CLOSE_OPTIONS@@@Z @ 0x180659AF8 (-CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSH.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IWin32ApplicationView>>(__int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return a1;
}
