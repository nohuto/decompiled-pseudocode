/*
 * XREFs of ?CreateInstance@?$wrl_factory_for_winrt_com_class@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1805F61F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?as@IUnknown@Foundation@Windows@winrt@@QEBA?AUhresult@4@AEBUguid@4@PEAPEAX@Z @ 0x1802294C0 (-as@IUnknown@Foundation@Windows@winrt@@QEBA-AUhresult@4@AEBUguid@4@PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     ??0?$heap_implements@V?$module_count_wrapper@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x1805F51CC (--0-$heap_implements@V-$module_count_wrapper@UDiscoverabilityManager@implementation@Shell@Intern.c)
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
  char v9; // r8
  char v10; // r10
  char v11; // r11
  char v12; // di
  char v13; // si
  char v14; // r14
  char v15; // r15
  __int16 v16; // dx
  __int16 v17; // cx
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
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/cppwinrt_wrl.h",
      (const char *)0x80040110LL);
    return 2147746064LL;
  }
  else
  {
    v7 = operator new(0x210uLL);
    memset_0(v7, 0, 0x210uLL);
    v8 = winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager>>::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager>>((winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *)v7);
    v19 = ((unsigned __int64)v8 + 16) & -(__int64)(v8 != 0LL);
    v9 = *((_BYTE *)a3 + 8);
    v10 = *((_BYTE *)a3 + 9);
    v11 = *((_BYTE *)a3 + 10);
    LOBYTE(v7) = *((_BYTE *)a3 + 11);
    v12 = *((_BYTE *)a3 + 12);
    v13 = *((_BYTE *)a3 + 13);
    v14 = *((_BYTE *)a3 + 14);
    v15 = *((_BYTE *)a3 + 15);
    v16 = *((_WORD *)a3 + 3);
    v17 = *((_WORD *)a3 + 2);
    v20 = *a3;
    v21 = v17;
    v22 = v16;
    v23 = v9;
    v24 = v10;
    v25 = v11;
    v26 = (char)v7;
    v27 = v12;
    v28 = v13;
    v29 = v14;
    v30 = v15;
    LODWORD(v7) = *winrt::Windows::Foundation::IUnknown::as(&v19, &v18, (__int64)&v20, (__int64)a4);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v19);
    return (unsigned int)v7;
  }
}
