/*
 * XREFs of ?_CreateTitleBarConfiguration@HolographicPositioner@@AEAAJPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x18040675C
 * Callers:
 *     ?GetChromeConfigurationForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1804035A0 (-GetChromeConfigurationForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApp.c)
 *     ?_EnsureHolographicViewConfiguration@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180406958 (-_EnsureHolographicViewConfiguration@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewTitlebarConfiguration@@@12@XZ @ 0x1800AF148 (--$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplica.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@IEAAKXZ @ 0x1801A21CC (-InternalRelease@-$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewTitlebarConfiguration@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewTitlebarConfiguration@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1801EF2DC (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIA_ea_1801EF2DC.c)
 */

__int64 __fastcall HolographicPositioner::_CreateTitleBarConfiguration(
        HolographicPositioner *this,
        struct IApplicationViewTitlebarConfiguration **a2)
{
  __int64 v3; // rcx
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r9
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HolographicPositioner *v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = this;
  *a2 = 0LL;
  Microsoft::WRL::Details::Make<ApplicationViewTitlebarConfiguration,>(&v10);
  v3 = (__int64)v10;
  if ( v10 )
  {
    *((_WORD *)v10 + 24) = 1;
    *(_DWORD *)(v3 + 52) = 1;
    *(_DWORD *)(v3 + 56) = 1;
    *(_DWORD *)(v3 + 88) = 64;
    *(_QWORD *)(v3 + 60) = 1023LL;
    *(_QWORD *)(v3 + 68) = 255LL;
    v7 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewTitlebarConfiguration,Microsoft::WRL::FtmBase>>(
           v3,
           &GUID_47dcddaf_0882_4312_b34f_a5ee46048bd6,
           a2);
    v4 = v7;
    if ( v7 >= 0 )
    {
      v4 = 0;
      goto LABEL_7;
    }
    v6 = (unsigned int)v7;
    v5 = 1237LL;
  }
  else
  {
    v4 = -2147024882;
    v5 = 1226LL;
    v6 = 2147942414LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)v6);
LABEL_7:
  Microsoft::WRL::ComPtr<ApplicationViewTitlebarConfiguration>::InternalRelease((__int64 *)&v10);
  return v4;
}
