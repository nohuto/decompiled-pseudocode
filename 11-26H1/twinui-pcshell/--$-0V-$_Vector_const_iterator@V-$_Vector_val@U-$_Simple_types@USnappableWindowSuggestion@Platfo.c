/*
 * XREFs of ??$?0V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@X@?$com_array@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@winrt@@QEAA@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@0@Z @ 0x1802910F8
 * Callers:
 *     ?GetSnappableWindowSuggestions@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SA?AU?$com_array@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@7@UWindowId@UI@67@@Z @ 0x18026B230 (-GetSnappableWindowSuggestions@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Inter.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@YAXPEAUSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAU123456@AEAV?$allocator@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@0@@Z @ 0x1802911D4 (--$_Destroy_range@V-$allocator@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Wind.c)
 *     _CxxThrowException_0 @ 0x1802C9ED8 (_CxxThrowException_0.c)
 *     __Platform_CoTaskMemAlloc @ 0x1802CA560 (__Platform_CoTaskMemAlloc.c)
 *     ??$_Emplace_back_deref@PEBUSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@?$_Uninitialized_backout@PEAUSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@QEAAXAEAPEBUSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@Z @ 0x1805B7A84 (--$_Emplace_back_deref@PEBUSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@w.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::com_array<winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion>::com_array<winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rsi
  winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion *v6; // rdi
  __int64 v7; // rbp
  winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion *v8; // rax
  void **pExceptionObject; // [rsp+20h] [rbp-38h] BYREF
  const char *v11; // [rsp+28h] [rbp-30h]
  __int64 v12; // [rsp+30h] [rbp-28h]
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  v4 = a2;
  v6 = 0LL;
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 8) = 0;
  v7 = (a3 - a2) >> 4;
  if ( (_DWORD)v7 )
  {
    v8 = (winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion *)_Platform_CoTaskMemAlloc(16LL * (unsigned int)v7);
    *(_QWORD *)a1 = v8;
    if ( !v8 )
    {
      v12 = 0LL;
      v11 = "bad allocation";
      pExceptionObject = &std::bad_alloc::`vftable';
      throw (std::bad_alloc *)&pExceptionObject;
    }
    *(_DWORD *)(a1 + 8) = v7;
    v6 = v8;
  }
  v13 = v4;
  pExceptionObject = (void **)v6;
  v11 = (const char *)v6;
  if ( v4 != a3 )
  {
    do
    {
      std::_Uninitialized_backout<winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion *>::_Emplace_back_deref<winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion const *>(
        &pExceptionObject,
        &v13);
      v4 += 16LL;
      v13 = v4;
    }
    while ( v4 != a3 );
    v6 = (winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion *)v11;
  }
  std::_Destroy_range<std::allocator<winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion>>(v6);
  return a1;
}
