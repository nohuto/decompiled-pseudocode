/*
 * XREFs of ?NotifyView@SearchAppDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803CA570
 * Callers:
 *     ?NotifyShellModeChanged@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1803CA100 (-NotifyShellModeChanged@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?NotifyTaskbarSearchBoxChanged@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1803CA238 (-NotifyTaskbarSearchBoxChanged@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnMessage@SearchAppDesktopExperienceView@@EEAAJI_K_J@Z @ 0x1803CA600 (-OnMessage@SearchAppDesktopExperienceView@@EEAAJI_K_J@Z.c)
 *     ?OnUIATreesUnlinked@SearchAppDesktopExperienceView@@UEAAJXZ @ 0x1803CA940 (-OnUIATreesUnlinked@SearchAppDesktopExperienceView@@UEAAJXZ.c)
 *     ?OnViewCloaking@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1803CAA64 (-OnViewCloaking@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewHidden@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1803CB00C (-OnViewHidden@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewUncloaking@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1803CB464 (-OnViewUncloaking@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?TryInvokeBack@SearchAppDesktopExperienceView@@EEAAJXZ @ 0x1803CE030 (-TryInvokeBack@SearchAppDesktopExperienceView@@EEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180114CC8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?NotifyView@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803CA520 (-NotifyView@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Fou.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SearchAppDesktopExperienceView::NotifyView(
        SearchAppDesktopExperienceView *this,
        const unsigned __int16 *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  HSTRING_HEADER *v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  const WCHAR *v9; // [rsp+20h] [rbp-38h] BYREF
  HSTRING_HEADER v10; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v9 = a2;
  v5 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v10, &v9, (unsigned int)a3);
  v6 = SearchAppDesktopExperienceView::NotifyView(this, (HSTRING)v5[1].Reserved.Reserved1, a3);
  v7 = v6;
  if ( v6 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8D1,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)v6);
  return v7;
}
