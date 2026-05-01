/*
 * XREFs of ?CreateTitlebarConfiguration@KioskPositioner@@AEAA?AV?$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1804F0314
 * Callers:
 *     ?GetChromeConfigurationForView@KioskPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1804F05F0 (-GetChromeConfigurationForView@KioskPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicati.c)
 *     std::_Func_impl_no_alloc__lambda_cec8775a2fe12adc7fff08f1d1b8cc11__wil::com_ptr_t_IApplicationViewTitlebarConfiguration_wil::err_exception_policy___::_Do_call @ 0x1804F2370 (std--_Func_impl_no_alloc__lambda_cec8775a2fe12adc7fff08f1d1b8cc11__wil--com_ptr_t_I_ea_1804F2370.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitializeOrThrow@VApplicationViewTitlebarConfiguration@@$$V@wil@@YA?AV?$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@XZ @ 0x1801A2118 (--$MakeAndInitializeOrThrow@VApplicationViewTitlebarConfiguration@@$$V@wil@@YA-AV-$ComPtr@VAppli.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@IEAAKXZ @ 0x1801A21CC (-InternalRelease@-$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetVisibleButtons@ApplicationViewTitlebarConfiguration@@UEAAJW4TITLE_BAR_BUTTONS@@0@Z @ 0x180215990 (-SetVisibleButtons@ApplicationViewTitlebarConfiguration@@UEAAJW4TITLE_BAR_BUTTONS@@0@Z.c)
 */

ApplicationViewTitlebarConfiguration *__fastcall KioskPositioner::CreateTitlebarConfiguration(
        __int64 a1,
        ApplicationViewTitlebarConfiguration *a2)
{
  ApplicationViewTitlebarConfiguration *v3; // rax
  int v4; // eax
  ApplicationViewTitlebarConfiguration *v5; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  ApplicationViewTitlebarConfiguration *v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  wil::MakeAndInitializeOrThrow<ApplicationViewTitlebarConfiguration,>(&v8);
  *((_WORD *)v8 + 24) = 1;
  v3 = v8;
  *((_DWORD *)v8 + 13) = 1;
  *((_DWORD *)v3 + 14) = 1;
  v4 = ApplicationViewTitlebarConfiguration::SetVisibleButtons((__int64)v8, 55, 0);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3D3,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
      (const char *)(unsigned int)v4);
  *(_QWORD *)((char *)v8 + 68) = 255LL;
  *((_DWORD *)v8 + 19) = 128;
  v5 = v8;
  *((_DWORD *)v8 + 20) = 0;
  *((_BYTE *)v5 + 84) = 1;
  *((_DWORD *)v8 + 22) = 0;
  *(_QWORD *)a2 = v8;
  v8 = 0LL;
  Microsoft::WRL::ComPtr<ApplicationViewTitlebarConfiguration>::InternalRelease((__int64 *)&v8);
  return a2;
}
