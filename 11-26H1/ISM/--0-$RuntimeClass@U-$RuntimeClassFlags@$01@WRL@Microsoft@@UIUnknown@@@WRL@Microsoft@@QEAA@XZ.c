/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x18002D1A8
 * Callers:
 *     ??$Make@VInputSite@@AEAV?$span@UInputSiteId@@$0?0@gsl@@AEAKPEAVInputSiteManager@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VInputSite@@@12@AEAV?$span@UInputSiteId@@$0?0@gsl@@AEAK$$QEAPEAVInputSiteManager@@@Z @ 0x18002CFB8 (--$Make@VInputSite@@AEAV-$span@UInputSiteId@@$0-0@gsl@@AEAKPEAVInputSiteManager@@@Details@WRL@Mi.c)
 *     ??0ForegroundManager@@AEAA@XZ @ 0x180047AD0 (--0ForegroundManager@@AEAA@XZ.c)
 *     ??$MakeAndInitialize@UCUIWindow@@U1@AEA_KAEA_KAEA_N@Details@WRL@Microsoft@@YAJPEAPEAUCUIWindow@@AEA_K1AEA_N@Z @ 0x1800A7448 (--$MakeAndInitialize@UCUIWindow@@U1@AEA_KAEA_KAEA_N@Details@WRL@Microsoft@@YAJPEAPEAUCUIWindow@@.c)
 *     ??0HapticProcessor@@QEAA@XZ @ 0x1800C7F04 (--0HapticProcessor@@QEAA@XZ.c)
 *     ??0GamepadInterceptionHelper@@QEAA@XZ @ 0x1801096CC (--0GamepadInterceptionHelper@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x1801642E4 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     ??0DeviceState@MagnifierProcessor@@QEAA@XZ @ 0x1801B1BB4 (--0DeviceState@MagnifierProcessor@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VVirtualHotKeyTracker@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVVirtualHotKeyTracker@@@Z @ 0x1801B502C (--$MakeAndInitialize@VVirtualHotKeyTracker@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVVirtualHotKe.c)
 *     ??$MakeAndInitialize@VHotkeyClientRegistration@@V1@PEAUIMessageProxy@@AEA_NAEAU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAVHotkeyClientRegistration@@$$QEAPEAUIMessageProxy@@AEA_NAEAU_GUID@@@Z @ 0x1801CD940 (--$MakeAndInitialize@VHotkeyClientRegistration@@V1@PEAUIMessageProxy@@AEA_NAEAU_GUID@@@Details@W.c)
 * Callees:
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x18002DDA4 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>(
        _QWORD *a1)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>();
  *a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
