/*
 * XREFs of ?CreateTitlebarConfiguration@GamingPosturePositioner@@AEAA?AV?$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1804E2390
 * Callers:
 *     ?GetChromeConfigurationForView@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1804E26B0 (-GetChromeConfigurationForView@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIA.c)
 *     std::_Func_impl_no_alloc__lambda_dd8ee389a9f4f5ab7613fcb53428afe0__wil::com_ptr_t_IApplicationViewTitlebarConfiguration_wil::err_exception_policy___::_Do_call @ 0x1804E5190 (std--_Func_impl_no_alloc__lambda_dd8ee389a9f4f5ab7613fcb53428afe0__wil--com_ptr_t_I_ea_1804E5190.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitializeOrThrow@VApplicationViewTitlebarConfiguration@@$$V@wil@@YA?AV?$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@XZ @ 0x1801167AC (--$MakeAndInitializeOrThrow@VApplicationViewTitlebarConfiguration@@$$V@wil@@YA-AV-$ComPtr@VAppli.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@IEAAKXZ @ 0x180116888 (-InternalRelease@-$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetVisibleButtons@ApplicationViewTitlebarConfiguration@@UEAAJW4TITLE_BAR_BUTTONS@@0@Z @ 0x180117340 (-SetVisibleButtons@ApplicationViewTitlebarConfiguration@@UEAAJW4TITLE_BAR_BUTTONS@@0@Z.c)
 */

__int64 *__fastcall GamingPosturePositioner::CreateTitlebarConfiguration(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 *v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  wil::MakeAndInitializeOrThrow<ApplicationViewTitlebarConfiguration,>(&v10);
  *((_WORD *)v10 + 24) = 1;
  v3 = (__int64)v10;
  *((_DWORD *)v10 + 13) = 1;
  *(_DWORD *)(v3 + 56) = 1;
  v4 = ApplicationViewTitlebarConfiguration::SetVisibleButtons((__int64)v10, 55, 0);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x462,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
      (const char *)(unsigned int)v4);
  v5 = (__int64)v10;
  *((_DWORD *)v10 + 18) = 0;
  *(_DWORD *)(v5 + 68) = 255;
  *((_DWORD *)v10 + 19) = 128;
  v6 = (__int64)v10;
  *((_DWORD *)v10 + 20) = 0;
  *(_BYTE *)(v6 + 84) = 1;
  *((_DWORD *)v10 + 22) = 0;
  v7 = (__int64)v10;
  v10 = 0LL;
  *a2 = v7;
  Microsoft::WRL::ComPtr<ApplicationViewTitlebarConfiguration>::InternalRelease((__int64 *)&v10);
  return a2;
}
