/*
 * XREFs of ?RuntimeClassInitialize@CMultitaskingViewServiceProvider@@QEAAJXZ @ 0x1800F9BD8
 * Callers:
 *     ??$MakeAndInitialize@VCMultitaskingViewServiceProvider@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18023F338 (--$MakeAndInitialize@VCMultitaskingViewServiceProvider@@UIUnknown@@$$V@Details@WRL@Microsoft@@YA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x180025070 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x180027CC0 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_InitChildServices@CMultitaskingViewServiceProvider@@AEAAJXZ @ 0x1800F9DAC (-_InitChildServices@CMultitaskingViewServiceProvider@@AEAAJXZ.c)
 *     ??$MakeAndInitialize@VForegroundStagingWindow@@UIForegroundStagingWindow@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIForegroundStagingWindow@@@Z @ 0x1800F9F88 (--$MakeAndInitialize@VForegroundStagingWindow@@UIForegroundStagingWindow@@$$V@Details@WRL@Micros.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

__int64 __fastcall CMultitaskingViewServiceProvider::RuntimeClassInitialize(CMultitaskingViewServiceProvider *this)
{
  int inited; // edi
  __int64 v3; // rdx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // eax
  unsigned int v9; // ebx
  int v10[4]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v11; // [rsp+30h] [rbp-D0h]
  __int128 v12; // [rsp+40h] [rbp-C0h]
  __int64 v13; // [rsp+50h] [rbp-B0h]
  __int64 v14; // [rsp+58h] [rbp-A8h]
  __int128 v15; // [rsp+60h] [rbp-A0h]
  __int64 v16; // [rsp+70h] [rbp-90h]
  __int64 v17; // [rsp+78h] [rbp-88h]
  __int128 v18; // [rsp+80h] [rbp-80h]
  __int64 v19; // [rsp+90h] [rbp-70h]
  __int64 v20; // [rsp+98h] [rbp-68h]
  __int128 v21; // [rsp+A0h] [rbp-60h]
  __int64 v22; // [rsp+B0h] [rbp-50h]
  __int64 v23; // [rsp+B8h] [rbp-48h]
  __int128 v24; // [rsp+C0h] [rbp-40h]
  __int64 v25; // [rsp+D0h] [rbp-30h]
  __int64 v26; // [rsp+D8h] [rbp-28h]
  __int128 v27; // [rsp+E0h] [rbp-20h]
  __int64 v28; // [rsp+F0h] [rbp-10h]
  __int64 v29; // [rsp+F8h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+18h]

  inited = CObjectWithThreadUseDetection::InitApartmentId((CMultitaskingViewServiceProvider *)((char *)this + 112));
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
  inited = CMultitaskingViewServiceProvider::_InitChildServices((IUnknown *)this);
  if ( inited < 0 )
  {
    v3 = 112LL;
    goto LABEL_3;
  }
  v13 = *((_QWORD *)this + 23);
  v14 = 0LL;
  v16 = *((_QWORD *)this + 24);
  v17 = 0LL;
  v19 = *((_QWORD *)this + 22);
  *(_OWORD *)v10 = *(_OWORD *)&SID_MultitaskingViewServiceProvider.Revision;
  v20 = 0LL;
  v5 = *((_QWORD *)this + 25);
  v11 = 0LL;
  v22 = v5;
  v23 = 0LL;
  v6 = *((_QWORD *)this + 27);
  v15 = *(_OWORD *)&SID_PPIAllUpView.Revision;
  v25 = v6;
  v26 = 0LL;
  v7 = *((_QWORD *)this + 29);
  v18 = *(_OWORD *)&SID_MultitaskingViewGestureHandler.Revision;
  v28 = v7;
  v29 = 0LL;
  v12 = *(_OWORD *)&SID_AllUpView.Revision;
  v21 = *(_OWORD *)&SID_MultitaskingViewVisibilityService.Revision;
  v24 = *(_OWORD *)&SID_ApplicationViewIconLoaderService.Revision;
  v27 = *(_OWORD *)&SID_VirtualDesktopSwitcher.Revision;
  inited = CImmersiveShellComponent::RegisterServiceInformation(
             (CMultitaskingViewServiceProvider *)((char *)this + 24),
             (__int64)v10,
             7uLL);
  if ( inited < 0 )
  {
    v3 = 128LL;
    goto LABEL_3;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 31);
  v8 = Microsoft::WRL::Details::MakeAndInitialize<ForegroundStagingWindow,IForegroundStagingWindow,>((char *)this + 248);
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
