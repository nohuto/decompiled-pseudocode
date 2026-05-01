/*
 * XREFs of ?CreateInstance@GamingOverlayExperienceManagerFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180235520
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180057770 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ??$MakeAndInitialize@VGamingOverlayExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGamingOverlayExperienceManager@@@Z @ 0x1802348D0 (--$MakeAndInitialize@VGamingOverlayExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGa.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VCImmersiveShellComponentWithGITSite@@@Details@23@UIWeakReferenceSource@@UIImmersiveLayoutChanges@@UIApplicationFrameEventHandler@@UIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@UIGameBarWindowManager@GamingOverlay@Internal@Windows@@UIGameBarGameLauncher@GamingOverlay@Internal@Windows@@UIGameBarProtocolForResultsLauncher@GamingOverlay@Internal@Windows@@UIImmersiveWindowMessageNotification@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1803458E0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00U-$Impleme_ea_1803458E0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIImmersiveLayoutChanges@@UIApplicationFrameEventHandler@@UIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@UIGameBarWindowManager@89Windows@@UIGameBarGameLauncher@89Windows@@UIGameBarProtocolForResultsLauncher@89Windows@@UIImmersiveWindowMessageNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180351CF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_180351CF0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GamingOverlayExperienceManagerFactory::CreateInstance(
        GamingOverlayExperienceManagerFactory *this,
        struct IUnknown *a2,
        const struct _GUID *a3,
        void **a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  const struct _GUID *v9; // rcx
  const struct _GUID *v10; // rdx
  const struct _GUID *v11; // rcx
  BOOL IsEqualGUID; // eax
  __int64 v13; // rbx
  int CanCastTo; // edi
  int v15[2]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a4 = 0LL;
  if ( a2 )
    return 2147746064LL;
  *(_QWORD *)v15 = 0LL;
  v7 = Microsoft::WRL::Details::MakeAndInitialize<GamingOverlayExperienceManager,GamingOverlayExperienceManager,>((GamingOverlayExperienceManager **)v15);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x109C,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)(unsigned int)v7);
    if ( *(_QWORD *)v15 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IImmersiveLayoutChanges,IApplicationFrameEventHandler,Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager,Windows::Internal::GamingOverlay::IGameBarWindowManager,Windows::Internal::GamingOverlay::IGameBarGameLauncher,Windows::Internal::GamingOverlay::IGameBarProtocolForResultsLauncher,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>::Release(*(_QWORD *)v15);
    return v8;
  }
  *a4 = 0LL;
  if ( InlineIsEqualGUID(a3, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v9, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    v13 = *(_QWORD *)v15;
    *a4 = *(void **)v15;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    CanCastTo = 0;
    goto LABEL_14;
  }
  IsEqualGUID = InlineIsEqualGUID(v11, v10);
  v13 = *(_QWORD *)v15;
  if ( IsEqualGUID )
  {
    *a4 = *(void **)v15;
    CanCastTo = 0;
LABEL_12:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 8LL))(*a4);
    goto LABEL_14;
  }
  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IWeakReferenceSource,IImmersiveLayoutChanges,IApplicationFrameEventHandler,Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager,Windows::Internal::GamingOverlay::IGameBarWindowManager,Windows::Internal::GamingOverlay::IGameBarGameLauncher,Windows::Internal::GamingOverlay::IGameBarProtocolForResultsLauncher,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>::CanCastTo(
                *(_QWORD *)v15 + 8LL,
                a3,
                a4);
  if ( CanCastTo >= 0 )
    goto LABEL_12;
LABEL_14:
  if ( CanCastTo < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x109D,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)(unsigned int)CanCastTo);
  if ( v13 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IImmersiveLayoutChanges,IApplicationFrameEventHandler,Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager,Windows::Internal::GamingOverlay::IGameBarWindowManager,Windows::Internal::GamingOverlay::IGameBarGameLauncher,Windows::Internal::GamingOverlay::IGameBarProtocolForResultsLauncher,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>::Release(v13);
  return (unsigned int)CanCastTo;
}
