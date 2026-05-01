/*
 * XREFs of ?RuntimeClassInitialize@CMultitaskingViewServiceProvider@@QEAAJXZ @ 0x1801348CC
 * Callers:
 *     ??$MakeAndInitialize@VCMultitaskingViewServiceProvider@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180230DF0 (--$MakeAndInitialize@VCMultitaskingViewServiceProvider@@UIUnknown@@$$V@Details@WRL@Microsoft@@YA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x18004A1A8 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x180084674 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 *     ??$MakeAndInitialize@VForegroundStagingWindow@@UIForegroundStagingWindow@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIForegroundStagingWindow@@@Z @ 0x180134A80 (--$MakeAndInitialize@VForegroundStagingWindow@@UIForegroundStagingWindow@@$$V@Details@WRL@Micros.c)
 *     ?_InitChildServices@CMultitaskingViewServiceProvider@@AEAAJXZ @ 0x180134CBC (-_InitChildServices@CMultitaskingViewServiceProvider@@AEAAJXZ.c)
 */

__int64 __fastcall CMultitaskingViewServiceProvider::RuntimeClassInitialize(IUnknown *punkSite)
{
  int inited; // edi
  __int64 v3; // rdx
  struct IUnknownVtbl *v5; // rax
  struct IUnknownVtbl *v6; // rax
  struct IUnknownVtbl *v7; // rax
  int v8; // eax
  unsigned int v9; // ebx
  int v10[4]; // [rsp+20h] [rbp-89h] BYREF
  __int128 v11; // [rsp+30h] [rbp-79h]
  __int128 v12; // [rsp+40h] [rbp-69h]
  struct IUnknownVtbl *lpVtbl; // [rsp+50h] [rbp-59h]
  __int64 v14; // [rsp+58h] [rbp-51h]
  __int128 v15; // [rsp+60h] [rbp-49h]
  struct IUnknownVtbl *v16; // [rsp+70h] [rbp-39h]
  __int64 v17; // [rsp+78h] [rbp-31h]
  __int128 v18; // [rsp+80h] [rbp-29h]
  struct IUnknownVtbl *v19; // [rsp+90h] [rbp-19h]
  __int64 v20; // [rsp+98h] [rbp-11h]
  __int128 v21; // [rsp+A0h] [rbp-9h]
  struct IUnknownVtbl *v22; // [rsp+B0h] [rbp+7h]
  __int64 v23; // [rsp+B8h] [rbp+Fh]
  __int128 v24; // [rsp+C0h] [rbp+17h]
  struct IUnknownVtbl *v25; // [rsp+D0h] [rbp+27h]
  __int64 v26; // [rsp+D8h] [rbp+2Fh]
  __int128 v27; // [rsp+E0h] [rbp+37h]
  struct IUnknownVtbl *v28; // [rsp+F0h] [rbp+47h]
  __int64 v29; // [rsp+F8h] [rbp+4Fh]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  inited = CObjectWithThreadUseDetection::InitApartmentId((CObjectWithThreadUseDetection *)&punkSite[14]);
  if ( inited < 0 )
  {
    v3 = 110LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)(unsigned int)inited);
    return (unsigned int)inited;
  }
  inited = CMultitaskingViewServiceProvider::_InitChildServices(punkSite);
  if ( inited < 0 )
  {
    v3 = 112LL;
    goto LABEL_3;
  }
  lpVtbl = punkSite[23].lpVtbl;
  v14 = 0LL;
  v16 = punkSite[24].lpVtbl;
  v17 = 0LL;
  v19 = punkSite[22].lpVtbl;
  *(_OWORD *)v10 = *(_OWORD *)&SID_MultitaskingViewServiceProvider.Revision;
  v20 = 0LL;
  v5 = punkSite[25].lpVtbl;
  v11 = 0LL;
  v22 = v5;
  v23 = 0LL;
  v6 = punkSite[27].lpVtbl;
  v15 = *(_OWORD *)&SID_PPIAllUpView.Revision;
  v25 = v6;
  v26 = 0LL;
  v7 = punkSite[29].lpVtbl;
  v18 = *(_OWORD *)&SID_MultitaskingViewGestureHandler.Revision;
  v28 = v7;
  v29 = 0LL;
  v12 = *(_OWORD *)&SID_AllUpView.Revision;
  v21 = *(_OWORD *)&SID_MultitaskingViewVisibilityService.Revision;
  v24 = *(_OWORD *)&SID_ApplicationViewIconLoaderService.Revision;
  v27 = *(_OWORD *)&SID_VirtualDesktopSwitcher.Revision;
  inited = CImmersiveShellComponent::RegisterServiceInformation(
             (CImmersiveShellComponent *)&punkSite[3],
             (__int64)v10,
             7uLL);
  if ( inited < 0 )
  {
    v3 = 128LL;
    goto LABEL_3;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punkSite[31]);
  v8 = Microsoft::WRL::Details::MakeAndInitialize<ForegroundStagingWindow,IForegroundStagingWindow,>(&punkSite[31]);
  v9 = v8;
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x15,
    (int)"pcshell\\twinui\\MultitaskingView\\inc\\ForegroundStagingWindow.h",
    (const char *)(unsigned int)v8);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x83,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
    (const char *)v9);
  return v9;
}
