/*
 * XREFs of ?SetSourceViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@PEAUHWND__@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@@Z @ 0x18010B75C
 * Callers:
 *     ?GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18010B3F0 (-GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collect.c)
 *     ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIAsyncCallback@@PEAUIPresentationRequestedArgs@@@Z @ 0x1801C6A58 (-_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropert.c)
 *     ?EnsureApplication@CAppViewManager@@AEAAJPEBGPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x1802F6DF0 (-EnsureApplication@CAppViewManager@@AEAAJPEBGPEAPEAUIImmersiveApplicationInternal@@@Z.c)
 * Callees:
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18002D858 (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18010C19C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJIPEAPEAUIInspectable@@@ZI@Z @ 0x18010CDFC (--$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802B86EC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewSizePreferenceHelpers::SetSourceViewSizePreference(
        Windows::Internal::ShellHelpers::PropertySetHelper *a1,
        int a2,
        unsigned int a3)
{
  unsigned __int64 v4; // rbx
  unsigned int v5; // eax
  UINT32 v6; // edx
  HRESULT v7; // eax
  int v8; // edx
  unsigned int v9; // r8d
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v13; // rax
  HSTRING_HEADER hstringHeader; // [rsp+20h] [rbp-58h] BYREF
  HSTRING string; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  string = 0LL;
  v4 = -1LL;
  do
    ++v4;
  while ( aViewsizeprefer[v4] );
  if ( v4 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, a2, a3);
    JUMPOUT(0x18010B872LL);
  }
  v5 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v4, a2, a3);
  v6 = v5 - 1;
  if ( (unsigned int)v4 < v5 )
    v6 = v4;
  v7 = WindowsCreateStringReference(L"ViewSizePreferences.SourceViewSizePreference", v6, &hstringHeader, &string);
  if ( v7 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v7, v8, v9);
  v10 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(a1, string);
  if ( v10 < 0 )
  {
    v11 = 192LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"onecoreuap\\internal\\shell\\inc\\ViewSizePreference.h",
      (const char *)(unsigned int)v10);
    return (unsigned int)v10;
  }
  v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &off_180735290);
  v10 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(a1, *(HSTRING *)(v13 + 24));
  if ( v10 < 0 )
  {
    v11 = 193LL;
    goto LABEL_10;
  }
  return 0LL;
}
