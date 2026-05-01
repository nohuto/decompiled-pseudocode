/*
 * XREFs of ??1?$com_ptr_t@VCreationThreadDispatcher@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18018DD64
 * Callers:
 *     ??1XamlBaseViewController@@IE$AAA@XZ @ 0x18009B22C (--1XamlBaseViewController@@IE$AAA@XZ.c)
 *     ??1ImmersiveShellStressTool@@UEAA@XZ @ 0x18018DC2C (--1ImmersiveShellStressTool@@UEAA@XZ.c)
 *     ??1CDesktopPositioner@@UEAA@XZ @ 0x18018DC58 (--1CDesktopPositioner@@UEAA@XZ.c)
 *     ??1ShellPositionerManager@@UEAA@XZ @ 0x1802158A8 (--1ShellPositionerManager@@UEAA@XZ.c)
 *     ??1GamingPosturePositioner@@UEAA@XZ @ 0x1804F779C (--1GamingPosturePositioner@@UEAA@XZ.c)
 *     _lambda_c876813055a0f8eb90a291ca9ab0fec3_::__lambda_c876813055a0f8eb90a291ca9ab0fec3_ @ 0x18055C7FC (_lambda_c876813055a0f8eb90a291ca9ab0fec3_--__lambda_c876813055a0f8eb90a291ca9ab0fec3_.c)
 *     ?MakeBackgroundThumbnailFromWallpaperPathAsync@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumbnail@@UtagRECT@@V?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@I0@Z @ 0x1805618A8 (-MakeBackgroundThumbnailFromWallpaperPathAsync@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumb.c)
 *     ??1TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180580278 (--1TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ??1ImmersiveShellThreadDispatcher@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18059DBD0 (--1ImmersiveShellThreadDispatcher@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UEA.c)
 *     _XamlBaseViewController::XamlBaseViewController_::_1_::dtor$5 @ 0x1806CFE47 (_XamlBaseViewController--XamlBaseViewController_--_1_--dtor$5.c)
 *     _CDesktopPositioner::CDesktopPositioner_::_1_::dtor$19 @ 0x1806D3AE9 (_CDesktopPositioner--CDesktopPositioner_--_1_--dtor$19.c)
 *     _GamingPosturePositioner::GamingPosturePositioner_::_1_::dtor$19 @ 0x1806F25D3 (_GamingPosturePositioner--GamingPosturePositioner_--_1_--dtor$19.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICreationThreadDispatcher@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800245A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICreationThreadD.c)
 */

__int64 __fastcall wil::com_ptr_t<CreationThreadDispatcher,wil::err_exception_policy>::~com_ptr_t<CreationThreadDispatcher,wil::err_exception_policy>(
        __int64 *a1,
        volatile int *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ICreationThreadDispatcher,Microsoft::WRL::FtmBase>::Release(
             v2,
             a2);
  return result;
}
