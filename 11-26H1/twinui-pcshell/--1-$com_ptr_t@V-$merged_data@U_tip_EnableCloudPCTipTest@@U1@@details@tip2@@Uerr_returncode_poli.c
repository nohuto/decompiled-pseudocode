/*
 * XREFs of ??1?$com_ptr_t@V?$merged_data@U_tip_EnableCloudPCTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180499BE8
 * Callers:
 *     ??1?$test_watcher@V?$merged_data@U_tip_AppThumbnailTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180499CBC (--1-$test_watcher@V-$merged_data@U_tip_AppThumbnailTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ?AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z @ 0x18049A930 (-AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z.c)
 *     ?CreateAndOpenAppThumbnailWindows@MultitaskingViewGestureHandler@@AEAAJXZ @ 0x18049ADEC (-CreateAndOpenAppThumbnailWindows@MultitaskingViewGestureHandler@@AEAAJXZ.c)
 *     ?open_helper@?$tip_test@V?$merged_data@U_tip_AppThumbnailTest@@U1@@details@tip2@@@tip2@@AEAA_NPEAU_GUID@@@Z @ 0x18049DEDC (-open_helper@-$tip_test@V-$merged_data@U_tip_AppThumbnailTest@@U1@@details@tip2@@@tip2@@AEAA_NPE.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_AppThumbnailTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x18049DFDC (-start@-$tip_test@V-$merged_data@U_tip_AppThumbnailTest@@U1@@details@tip2@@@tip2@@QEAA-AU_GUID@@.c)
 *     ?DisableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@00@Z @ 0x18063FC18 (-DisableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6.c)
 *     ?EnableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@000@Z @ 0x18063FDF0 (-EnableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@.c)
 *     ?IsSupported@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x1806412B4 (-IsSupported@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_DisableCloudPCTipTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x180643538 (-start@-$tip_test@V-$merged_data@U_tip_DisableCloudPCTipTest@@U1@@details@tip2@@@tip2@@QEAA-AU_G.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_EnableCloudPCTipTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x1806435E0 (-start@-$tip_test@V-$merged_data@U_tip_EnableCloudPCTipTest@@U1@@details@tip2@@@tip2@@QEAA-AU_GU.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_IsSupportedTipTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x180643688 (-start@-$tip_test@V-$merged_data@U_tip_IsSupportedTipTest@@U1@@details@tip2@@@tip2@@QEAA-AU_GUID.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_AppThumbnailTest@@U1@@details@tip2@@AEAAKXZ @ 0x18049CDD8 (-Release@-$merged_data@U_tip_AppThumbnailTest@@U1@@details@tip2@@AEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<tip2::details::merged_data<_tip_EnableCloudPCTipTest,_tip_EnableCloudPCTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_EnableCloudPCTipTest,_tip_EnableCloudPCTipTest>,wil::err_returncode_policy>(
        void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return tip2::details::merged_data<_tip_AppThumbnailTest,_tip_AppThumbnailTest>::Release(v1);
  return result;
}
