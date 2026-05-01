/*
 * XREFs of ?shared_from_this@?$enable_shared_from_this@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA?AV?$shared_ptr@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1804AA0EC
 * Callers:
 *     ?SetRectAndCallback@CAppThumbnailWindow@@IEAAJAEBUCRect@Geometry@@PEAUIDCompThumbnail@@W4DCompThumbnailAnimation@@_N@Z @ 0x1804A75E4 (-SetRectAndCallback@CAppThumbnailWindow@@IEAAJAEBUCRect@Geometry@@PEAUIDCompThumbnail@@W4DCompTh.c)
 *     ?ActivateProvider@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA?AUTransitionScreenId@TransitionScreen@CloudDesktop@3456@AEBU8893456@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x180668320 (-ActivateProvider@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA-AUTran.c)
 *     winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection$_ResumeCoro$1 @ 0x18066CF40 (winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--CloseCloudPCConnection.c)
 * Callees:
 *     ?_Throw_bad_weak_ptr@std@@YAXXZ @ 0x18028E620 (-_Throw_bad_weak_ptr@std@@YAXXZ.c)
 *     ??$_Construct_from_weak@VCAppThumbnailWindow@@@?$_Ptr_base@VCAppThumbnailWindow@@@std@@IEAA_NAEBV?$weak_ptr@VCAppThumbnailWindow@@@1@@Z @ 0x1804A2544 (--$_Construct_from_weak@VCAppThumbnailWindow@@@-$_Ptr_base@VCAppThumbnailWindow@@@std@@IEAA_NAEB.c)
 */

__int64 __fastcall std::enable_shared_from_this<winrt::Windows::Internal::Shell::implementation::BootProviderActivator>::shared_from_this(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // r10

  *a2 = 0LL;
  a2[1] = 0LL;
  if ( !std::_Ptr_base<CAppThumbnailWindow>::_Construct_from_weak<CAppThumbnailWindow>((__int64)a2, a1) )
    std::_Throw_bad_weak_ptr();
  return v2;
}
