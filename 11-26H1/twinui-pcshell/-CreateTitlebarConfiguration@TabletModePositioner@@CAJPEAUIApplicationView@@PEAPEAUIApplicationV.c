/*
 * XREFs of ?CreateTitlebarConfiguration@TabletModePositioner@@CAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180517840
 * Callers:
 *     ?CreateAndInitApplicationViewOperation@TabletModePositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x180517674 (-CreateAndInitApplicationViewOperation@TabletModePositioner@@AEAAJPEAUIApplicationView@@PEAPEAUI.c)
 *     ?GetChromeConfigurationForView@TabletModePositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180518210 (-GetChromeConfigurationForView@TabletModePositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIAppl.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewTitlebarConfiguration@@@12@XZ @ 0x1800AF148 (--$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplica.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@IEAAKXZ @ 0x1801A21CC (-InternalRelease@-$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewTitlebarConfiguration@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewTitlebarConfiguration@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1801EF2DC (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIA_ea_1801EF2DC.c)
 *     ?SetVisibleButtons@ApplicationViewTitlebarConfiguration@@UEAAJW4TITLE_BAR_BUTTONS@@0@Z @ 0x180215990 (-SetVisibleButtons@ApplicationViewTitlebarConfiguration@@UEAAJW4TITLE_BAR_BUTTONS@@0@Z.c)
 *     ?OverlayTitlebarsInTabletMode@TitlebarOverlayHelpers@@YA_NXZ @ 0x180519C98 (-OverlayTitlebarsInTabletMode@TitlebarOverlayHelpers@@YA_NXZ.c)
 */

__int64 __fastcall TabletModePositioner::CreateTitlebarConfiguration(
        struct IApplicationView *a1,
        struct IApplicationViewTitlebarConfiguration **a2)
{
  unsigned int v2; // edi
  TitlebarOverlayHelpers *v4; // rcx
  __int64 v5; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IApplicationView *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a1;
  v2 = 0;
  *a2 = 0LL;
  Microsoft::WRL::Details::Make<ApplicationViewTitlebarConfiguration,>(&v8);
  v5 = (__int64)v8;
  if ( v8 )
  {
    if ( TitlebarOverlayHelpers::OverlayTitlebarsInTabletMode(v4) )
    {
      *(_WORD *)(v5 + 48) = 1;
      *(_DWORD *)(v5 + 52) = 1;
      *(_DWORD *)(v5 + 56) = 1;
    }
    else
    {
      *(_WORD *)(v5 + 48) = 257;
      *(_QWORD *)(v5 + 52) = 1LL;
    }
    *(_DWORD *)(v5 + 88) = 0;
    ApplicationViewTitlebarConfiguration::SetVisibleButtons(v5, 55, 20);
    *(_DWORD *)(v5 + 76) = 64;
    *(_QWORD *)(v5 + 68) = 255LL;
    *(_DWORD *)(v5 + 80) = 1;
    *(_BYTE *)(v5 + 84) = 1;
    Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewTitlebarConfiguration,Microsoft::WRL::FtmBase>>(
      v5,
      &GUID_47dcddaf_0882_4312_b34f_a5ee46048bd6,
      a2);
  }
  else
  {
    v2 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBB1,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)0x8007000ELL);
  }
  Microsoft::WRL::ComPtr<ApplicationViewTitlebarConfiguration>::InternalRelease((__int64 *)&v8);
  return v2;
}
