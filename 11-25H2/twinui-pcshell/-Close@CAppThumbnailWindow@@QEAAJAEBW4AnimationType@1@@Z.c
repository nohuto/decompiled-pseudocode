/*
 * XREFs of ?Close@CAppThumbnailWindow@@QEAAJAEBW4AnimationType@1@@Z @ 0x18049218C
 * Callers:
 *     ?AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z @ 0x180489CB0 (-AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Cancel@?$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18005D894 (-Cancel@-$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@W.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801D2024 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputDrivenGTGAnimations@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801F9F68 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputDrivenGTGAnimations@@@details@wil@@Q.c)
 *     ??0implements_delegate_base@impl@winrt@@QEAA@XZ @ 0x1802921A4 (--0implements_delegate_base@impl@winrt@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     ??0?$weak_ptr@VCAppThumbnailWindow@@@std@@QEAA@AEBV01@@Z @ 0x180491EBC (--0-$weak_ptr@VCAppThumbnailWindow@@@std@@QEAA@AEBV01@@Z.c)
 *     ?Completed@?$consume_Windows_UI_Composition_ICompositionScopedBatch@UICompositionScopedBatch@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UCompositionBatchCompletedEventArgs@Composition@UI@34@@Foundation@Windows@3@@Z @ 0x180492400 (-Completed@-$consume_Windows_UI_Composition_ICompositionScopedBatch@UICompositionScopedBatch@Com.c)
 *     ?CreateScopedBatch@?$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBW4CompositionBatchTypes@Composition@UI@Windows@3@@Z @ 0x180493B70 (-CreateScopedBatch@-$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Wind.c)
 *     ?PlayThreeFingerUpKeyframeAnimation@CAppThumbnailWindow@@IEAAJXZ @ 0x180496238 (-PlayThreeFingerUpKeyframeAnimation@CAppThumbnailWindow@@IEAAJXZ.c)
 *     ?SetRectAndCallback@CAppThumbnailWindow@@IEAAJAEBUCRect@Geometry@@PEAUIDCompThumbnail@@W4DCompThumbnailAnimation@@_N@Z @ 0x1804967CC (-SetRectAndCallback@CAppThumbnailWindow@@IEAAJAEBUCRect@Geometry@@PEAUIDCompThumbnail@@W4DCompTh.c)
 *     ?Uninitialize@CAppThumbnailWindow@@IEAAXXZ @ 0x180498F50 (-Uninitialize@CAppThumbnailWindow@@IEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAppThumbnailWindow::Close(
        CAppThumbnailWindow *this,
        const enum CAppThumbnailWindow::AnimationType *a2,
        __int64 a3,
        __int64 a4)
{
  int v5; // ecx
  int v6; // eax
  char v7; // si
  unsigned int v8; // r14d
  std::_Ref_count_base **v9; // rdx
  int v10; // eax
  unsigned int v11; // edi
  int v13; // eax
  char v14; // [rsp+20h] [rbp-29h]
  std::_Ref_count_base **v15; // [rsp+30h] [rbp-19h] BYREF
  __int64 v16; // [rsp+38h] [rbp-11h] BYREF
  std::_Ref_count_base *v17[2]; // [rsp+40h] [rbp-9h] BYREF
  __int64 v18; // [rsp+50h] [rbp+7h] BYREF
  std::_Ref_count_base *v19; // [rsp+58h] [rbp+Fh]
  _BYTE v20[8]; // [rsp+60h] [rbp+17h] BYREF
  CAppThumbnailWindow *v21; // [rsp+68h] [rbp+1Fh]
  char v22; // [rsp+70h] [rbp+27h]
  _DWORD v23[4]; // [rsp+78h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  v21 = this;
  v22 = 1;
  v5 = *((_DWORD *)this + 37) - *((_DWORD *)this + 35);
  v6 = *((_DWORD *)this + 36) - *((_DWORD *)this + 34);
  v23[0] = 0;
  v23[1] = 0;
  v23[2] = v6;
  v23[3] = v5;
  if ( *(_DWORD *)a2 == 3 )
  {
    v7 = 1;
  }
  else
  {
    v7 = 0;
    if ( *(_DWORD *)a2 == 1 )
    {
      v8 = 29;
      goto LABEL_4;
    }
  }
  v8 = 30;
  if ( !*(_DWORD *)a2 )
  {
LABEL_22:
    CAppThumbnailWindow::Uninitialize(this);
    return 0LL;
  }
LABEL_4:
  if ( *((_BYTE *)this + 168) && !*((_BYTE *)this + 169) )
    goto LABEL_22;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputDrivenGTGAnimations>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_InputDrivenGTGAnimations>::GetImpl'::`2'::impl,
    1u,
    3u,
    a4);
  if ( *((_BYTE *)this + 169) && !*((_BYTE *)this + 184) )
  {
    v8 = 0;
    LODWORD(v15) = 1;
    winrt::impl::consume_Windows_UI_Composition_ICompositor<winrt::Windows::UI::Composition::ICompositor>::CreateScopedBatch(
      (char *)this + 384,
      &v16,
      &v15);
    std::weak_ptr<CAppThumbnailWindow>::weak_ptr<CAppThumbnailWindow>(&v18, this);
    std::weak_ptr<CAppThumbnailWindow>::weak_ptr<CAppThumbnailWindow>(v17, &v18);
    v15 = v17;
    v15 = (std::_Ref_count_base **)operator new(0x20uLL);
    winrt::impl::implements_delegate_base::implements_delegate_base((winrt::impl::implements_delegate_base *)(v15 + 1));
    v9[2] = 0LL;
    v9[3] = 0LL;
    v9[2] = v17[0];
    v9[3] = v17[1];
    *(_OWORD *)v17 = 0LL;
    _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
    *v9 = (std::_Ref_count_base *)off_18071D9E8;
    v15 = v9;
    if ( v17[1] )
      std::_Ref_count_base::_Decwref(v17[1]);
    winrt::impl::consume_Windows_UI_Composition_ICompositionScopedBatch<winrt::Windows::UI::Composition::ICompositionScopedBatch>::Completed(
      &v16,
      v20,
      &v15);
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v15);
    v10 = CAppThumbnailWindow::PlayThreeFingerUpKeyframeAnimation(this);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x86,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
        (const char *)(unsigned int)v10);
      if ( v19 )
        std::_Ref_count_base::_Decwref(v19);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v16);
      CAppThumbnailWindow::Uninitialize(this);
      return v11;
    }
    winrt::impl::consume_Windows_System_Threading_IThreadPoolTimer<winrt::Windows::System::Threading::IThreadPoolTimer>::Cancel(&v16);
    if ( v19 )
      std::_Ref_count_base::_Decwref(v19);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v16);
  }
  v14 = v7;
  v13 = CAppThumbnailWindow::SetRectAndCallback(this, v23, *((_QWORD *)this + 8), v8, v14);
  v11 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x93,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
      (const char *)(unsigned int)v13);
    CAppThumbnailWindow::Uninitialize(this);
    return v11;
  }
  return 0LL;
}
