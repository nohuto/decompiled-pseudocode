/*
 * XREFs of ?CreateInstance@?$wrl_factory_for_winrt_com_class@UGamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18032A470
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?as@IUnknown@Foundation@Windows@winrt@@QEBA?AUhresult@4@AEBUguid@4@PEAPEAX@Z @ 0x18021A770 (-as@IUnknown@Foundation@Windows@winrt@@QEBA-AUhresult@4@AEBUguid@4@PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$make@V?$module_count_wrapper@UGamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@@details@wil@@$$V@winrt@@YA?A_PXZ @ 0x1803266F8 (--$make@V-$module_count_wrapper@UGamingPostureController@implementation@Posture@GamingExperience.c)
 */

__int64 __fastcall wil::wrl_factory_for_winrt_com_class<winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController>::CreateInstance(
        __int64 a1,
        __int64 a2,
        int *a3,
        _QWORD *a4)
{
  __int64 result; // rax
  __int64 *v7; // rax
  char v8; // dl
  char v9; // r8
  char v10; // r10
  char v11; // r11
  char v12; // bl
  char v13; // di
  char v14; // si
  char v15; // r14
  unsigned int v16; // ebx
  const char *v17; // r9
  int v18; // [rsp+20h] [rbp-58h] BYREF
  __int64 v19; // [rsp+28h] [rbp-50h] BYREF
  int v20; // [rsp+30h] [rbp-48h] BYREF
  __int16 v21; // [rsp+34h] [rbp-44h]
  __int16 v22; // [rsp+36h] [rbp-42h]
  char v23; // [rsp+38h] [rbp-40h]
  char v24; // [rsp+39h] [rbp-3Fh]
  char v25; // [rsp+3Ah] [rbp-3Eh]
  char v26; // [rsp+3Bh] [rbp-3Dh]
  char v27; // [rsp+3Ch] [rbp-3Ch]
  char v28; // [rsp+3Dh] [rbp-3Bh]
  char v29; // [rsp+3Eh] [rbp-3Ah]
  char v30; // [rsp+3Fh] [rbp-39h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  *a4 = 0LL;
  if ( a2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x45,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\cppwinrt_wrl.h",
      (const char *)0x80040110LL);
    return 2147746064LL;
  }
  else
  {
    try
    {
      v7 = winrt::make<wil::details::module_count_wrapper<winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController>,>(&v19);
      v8 = *((_BYTE *)a3 + 8);
      v9 = *((_BYTE *)a3 + 9);
      v10 = *((_BYTE *)a3 + 10);
      v11 = *((_BYTE *)a3 + 11);
      v12 = *((_BYTE *)a3 + 12);
      v13 = *((_BYTE *)a3 + 13);
      v14 = *((_BYTE *)a3 + 14);
      v15 = *((_BYTE *)a3 + 15);
      v20 = *a3;
      v21 = *((_WORD *)a3 + 2);
      v22 = *((_WORD *)a3 + 3);
      v23 = v8;
      v24 = v9;
      v25 = v10;
      v26 = v11;
      v27 = v12;
      v28 = v13;
      v29 = v14;
      v30 = v15;
      v16 = *winrt::Windows::Foundation::IUnknown::as(v7, &v18, (__int64)&v20, (__int64)a4);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v19);
      result = v16;
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x49,
                             (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\cppwinrt_wrl.h",
                             v17);
    }
  }
  return result;
}
