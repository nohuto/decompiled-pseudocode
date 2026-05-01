/*
 * XREFs of ??$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreationThreadDispatcher@@@Z @ 0x18021E19C
 * Callers:
 *     ??$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@@012@@Z @ 0x18007F0BC (--$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJV-$ComPtrRef@V-.c)
 *     ?RuntimeClassInitialize@ShellPositionerManager@@QEAAJXZ @ 0x1801EBAF0 (-RuntimeClassInitialize@ShellPositionerManager@@QEAAJXZ.c)
 *     _lambda_e637c9f76490f66fe2e1ec9f853f38ce_::operator() @ 0x18021E084 (_lambda_e637c9f76490f66fe2e1ec9f853f38ce_--operator().c)
 *     ?SubscribeToServices@GamingOverlayExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180245720 (-SubscribeToServices@GamingOverlayExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CDesktopPositioner@@QEAAJXZ @ 0x1802ADB48 (-RuntimeClassInitialize@CDesktopPositioner@@QEAAJXZ.c)
 *     ??0?$heap_implements@UImmersiveShellThreadDispatcher@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEAA@XZ @ 0x1802C268C (--0-$heap_implements@UImmersiveShellThreadDispatcher@implementation@SnapComponent@Shell@Internal.c)
 *     ??$MakeAndInitialize@VImmersiveShellStressTool@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1803DCD38 (--$MakeAndInitialize@VImmersiveShellStressTool@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAU.c)
 *     ??0GamingPosturePositioner@@QEAA@XZ @ 0x1804E1340 (--0GamingPosturePositioner@@QEAA@XZ.c)
 *     ?MakeBackgroundThumbnailFromWallpaperPathAsync@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumbnail@@UtagRECT@@V?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@I0@Z @ 0x18053DA54 (-MakeBackgroundThumbnailFromWallpaperPathAsync@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumb.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18003C9F0 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180069F2C (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ @ 0x1801D2050 (-InternalAddRef@-$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1?$MakeAllocator@VNonAgileDispatcher@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18022DF84 (--1-$MakeAllocator@VNonAgileDispatcher@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CreationThreadDispatcher@@QEAAJXZ @ 0x1802452B8 (-RuntimeClassInitialize@CreationThreadDispatcher@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CreationThreadDispatcher,CreationThreadDispatcher,>(
        _QWORD *a1)
{
  _DWORD *v2; // rbx
  int v3; // edi
  volatile int *v4; // rdx
  _DWORD *v6; // [rsp+20h] [rbp-28h] BYREF
  _DWORD *v7; // [rsp+28h] [rbp-20h] BYREF

  *a1 = 0LL;
  v2 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v2;
  if ( v2 )
  {
    *(_QWORD *)v2 = &ICreationThreadDispatcher::`vftable';
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v2 + 2));
    v2[11] = 1;
    *(_QWORD *)v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ICreationThreadDispatcher,Microsoft::WRL::FtmBase>::`vftable'{for `ICreationThreadDispatcher'};
    *((_QWORD *)v2 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ICreationThreadDispatcher,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v2 = &CreationThreadDispatcher::`vftable'{for `ICreationThreadDispatcher'};
    *((_QWORD *)v2 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ICreationThreadDispatcher,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    *((_QWORD *)v2 + 6) = 0LL;
    v6 = v2;
    v7 = 0LL;
    v3 = CreationThreadDispatcher::RuntimeClassInitialize((CreationThreadDispatcher *)v2);
    if ( v3 >= 0 )
    {
      Microsoft::WRL::ComPtr<ScreenManager>::InternalAddRef((__int64 *)&v6, v4);
      *a1 = v2;
      Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease((__int64 *)&v6);
      v3 = 0;
    }
    else
    {
      Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease((__int64 *)&v6);
    }
  }
  else
  {
    v3 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<NonAgileDispatcher>::~MakeAllocator<NonAgileDispatcher>(&v7);
  return (unsigned int)v3;
}
