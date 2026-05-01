/*
 * XREFs of ??$_Emplace_reallocate@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@?$vector@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAPEAUSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAU234567@$$QEAU234567@@Z @ 0x1805B7E70
 * Callers:
 *     ?GetSnappableWindowSuggestions@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SA?AU?$com_array@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@7@UWindowId@UI@67@@Z @ 0x18026B230 (-GetSnappableWindowSuggestions@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Inter.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x1801901F8 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x180285304 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAUSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@YAPEAUSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAU123456@0PEAU123456@AEAV?$allocator@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@0@@Z @ 0x1802A13A4 (--$_Uninitialized_move@PEAUSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@w.c)
 *     ?_Change_array@?$vector@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAXQEAUSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@_K1@Z @ 0x1802B6660 (-_Change_array@-$vector@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@win.c)
 *     ??1_Reallocation_guard@?$vector@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x1805B9BDC (--1_Reallocation_guard@-$vector@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Win.c)
 */

_QWORD *__fastcall std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion>::_Emplace_reallocate<winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion>(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3)
{
  unsigned __int64 v3; // rbx
  signed __int64 v4; // r14
  __int64 v6; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 size_of; // rax
  winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion *v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // r14
  __int64 v16; // rsi
  winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion *v17; // r8
  __int64 v18; // rcx
  __int64 *v19; // rdx
  __int64 *v20; // rcx
  _QWORD v22[3]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v23; // [rsp+38h] [rbp-40h]
  _QWORD *v24; // [rsp+40h] [rbp-38h]

  v3 = 0xFFFFFFFFFFFFFFFLL;
  v4 = (char *)a2 - (char *)*a1;
  v6 = ((char *)a1[1] - (char *)*a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v9 = v6 + 1;
  v10 = ((char *)a1[2] - (char *)*a1) >> 4;
  v11 = v10 >> 1;
  if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<16>(v3);
  v13 = (winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v14 = *a3;
  v15 = (_QWORD *)((char *)v13 + (v4 & 0xFFFFFFFFFFFFFFF0uLL));
  v22[0] = a1;
  v16 = (__int64)v13;
  v22[2] = v3;
  v23 = v15;
  v17 = v13;
  *v15 = v14;
  v18 = a3[1];
  a3[1] = 0LL;
  v15[1] = v18;
  v19 = a1[1];
  v20 = *a1;
  v24 = v15 + 2;
  if ( a2 != v19 )
  {
    std::_Uninitialized_move<winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion *>(
      v20,
      a2,
      v13);
    v19 = a1[1];
    v17 = (winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion *)(v15 + 2);
    v20 = a2;
    v23 = (_QWORD *)v16;
  }
  std::_Uninitialized_move<winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion *>(
    v20,
    v19,
    v17);
  v22[1] = 0LL;
  std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion>::_Change_array(
    (__int64)a1,
    v16,
    v9,
    v3);
  std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion>::_Reallocation_guard::~_Reallocation_guard(v22);
  return v15;
}
