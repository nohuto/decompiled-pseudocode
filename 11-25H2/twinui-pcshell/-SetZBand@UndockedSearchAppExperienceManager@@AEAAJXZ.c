/*
 * XREFs of ?SetZBand@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1800126F8
 * Callers:
 *     ?OnViewCreated@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180012520 (-OnViewCreated@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shel.c)
 *     ?PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x18024A45C (-PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18002EB20 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UINtUserViewWrapper@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UINtUserViewWrapper@@@WRL@Microsoft@@@Details@12@@Z @ 0x180041480 (--$As@UINtUserViewWrapper@@@-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@W.c)
 *     ?UndockedSearchAppExperienceManager_SetZBand@SearchAppExperienceManagerTelemetry@@SAXXZ @ 0x180230650 (-UndockedSearchAppExperienceManager_SetZBand@SearchAppExperienceManagerTelemetry@@SAXXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_56257248@@@details@wil@@QEAA_NXZ @ 0x1803B2714 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_56257248@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_56470062@@@details@wil@@QEAA_NXZ @ 0x1803B278C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_56470062@@@details@wil@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall UndockedSearchAppExperienceManager::SetZBand(UndockedSearchAppExperienceManager *this)
{
  ExperienceManagerUtils **v2; // rsi
  unsigned int v4; // ebp
  float v5; // xmm0_4
  float v6; // xmm1_4
  HRESULT v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  int v10; // eax
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v11; // rdx
  HWND v12; // rax
  int pvAttribute; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+28h] [rbp-30h] BYREF
  _DWORD v15[4]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetZBand();
  v2 = (ExperienceManagerUtils **)((char *)this + 56);
  if ( !*((_QWORD *)this + 7) )
    return 0LL;
  v4 = 13;
  v5 = *((float *)this + 32);
  v6 = *((float *)this + 33);
  v15[0] = (int)v5;
  v15[1] = (int)v6;
  v15[2] = (int)(float)(v5 + *((float *)this + 34));
  v15[3] = (int)(float)(v6 + *((float *)this + 35));
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + 12) + 40LL))(
          *((_QWORD *)this + 12),
          v15)
    || *((_BYTE *)this + 880) )
  {
    v4 = 6;
  }
  v14 = 0LL;
  v7 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<INtUserViewWrapper>(
         (char *)this + 56,
         &v14);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 40LL))(v14, v4);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xBCF,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
        (const char *)(unsigned int)v10,
        pvAttribute);
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_56257248>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_56257248>::GetImpl'::`2'::impl) )
    {
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_56470062>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_56470062>::GetImpl'::`2'::impl) )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD, ExperienceManagerUtils *))(**((_QWORD **)this + 11) + 88LL))(
               *((_QWORD *)this + 11),
               *v2);
        v8 = v7;
        if ( v7 < 0 )
        {
          v9 = 3030LL;
          goto LABEL_14;
        }
      }
      else
      {
        pvAttribute = 1;
        v12 = ExperienceManagerUtils::WindowFromViewWrapper(*v2, v11);
        if ( v12 )
        {
          v7 = DwmSetWindowAttribute(v12, 0xCu, &pvAttribute, 4u);
          v8 = v7;
          if ( v7 < 0 )
          {
            v9 = 3038LL;
            goto LABEL_14;
          }
        }
      }
    }
    v8 = 0;
    goto LABEL_19;
  }
  v9 = 3022LL;
LABEL_14:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
    (const char *)(unsigned int)v7,
    pvAttribute);
LABEL_19:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
  return v8;
}
