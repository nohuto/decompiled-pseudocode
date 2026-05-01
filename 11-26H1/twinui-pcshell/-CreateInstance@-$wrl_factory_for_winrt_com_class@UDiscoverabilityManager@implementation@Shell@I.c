/*
 * XREFs of ?CreateInstance@?$wrl_factory_for_winrt_com_class@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18061A940
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?as@IUnknown@Foundation@Windows@winrt@@QEBA?AUhresult@4@AEBUguid@4@PEAPEAX@Z @ 0x18021A770 (-as@IUnknown@Foundation@Windows@winrt@@QEBA-AUhresult@4@AEBUguid@4@PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ??0?$heap_implements@V?$module_count_wrapper@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x180619988 (--0-$heap_implements@V-$module_count_wrapper@UDiscoverabilityManager@implementation@Shell@Intern.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall wil::wrl_factory_for_winrt_com_class<winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager>::CreateInstance(
        __int64 a1,
        __int64 a2,
        int *a3,
        _QWORD *a4)
{
  void *v7; // rbx
  winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *v8; // rax
  char v9; // cl
  char v10; // dl
  char v11; // r8
  char v12; // r10
  char v13; // r11
  char v14; // di
  char v15; // si
  int v16; // [rsp+20h] [rbp-48h] BYREF
  __int64 v17; // [rsp+28h] [rbp-40h] BYREF
  int v18; // [rsp+30h] [rbp-38h] BYREF
  __int16 v19; // [rsp+34h] [rbp-34h]
  __int16 v20; // [rsp+36h] [rbp-32h]
  char v21; // [rsp+38h] [rbp-30h]
  char v22; // [rsp+39h] [rbp-2Fh]
  char v23; // [rsp+3Ah] [rbp-2Eh]
  char v24; // [rsp+3Bh] [rbp-2Dh]
  char v25; // [rsp+3Ch] [rbp-2Ch]
  char v26; // [rsp+3Dh] [rbp-2Bh]
  char v27; // [rsp+3Eh] [rbp-2Ah]
  char v28; // [rsp+3Fh] [rbp-29h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *a4 = 0LL;
  if ( a2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x45,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/cppwinrt_wrl.h",
      (const char *)0x80040110LL);
    return 2147746064LL;
  }
  else
  {
    v7 = operator new(0x210uLL);
    memset_0(v7, 0, 0x210uLL);
    v8 = winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager>>::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager>>((winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *)v7);
    v17 = ((unsigned __int64)v8 + 16) & -(__int64)(v8 != 0LL);
    v9 = *((_BYTE *)a3 + 8);
    v10 = *((_BYTE *)a3 + 9);
    v11 = *((_BYTE *)a3 + 10);
    v12 = *((_BYTE *)a3 + 11);
    v13 = *((_BYTE *)a3 + 12);
    LOBYTE(v7) = *((_BYTE *)a3 + 13);
    v14 = *((_BYTE *)a3 + 14);
    v15 = *((_BYTE *)a3 + 15);
    v18 = *a3;
    v19 = *((_WORD *)a3 + 2);
    v20 = *((_WORD *)a3 + 3);
    v21 = v9;
    v22 = v10;
    v23 = v11;
    v24 = v12;
    v25 = v13;
    v26 = (char)v7;
    v27 = v14;
    v28 = v15;
    LODWORD(v7) = *winrt::Windows::Foundation::IUnknown::as(&v17, &v16, (__int64)&v18, (__int64)a4);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v17);
    return (unsigned int)v7;
  }
}
