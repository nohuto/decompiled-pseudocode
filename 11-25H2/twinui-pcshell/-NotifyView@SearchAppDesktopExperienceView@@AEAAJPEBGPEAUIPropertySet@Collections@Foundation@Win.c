/*
 * XREFs of ?NotifyView@SearchAppDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803C13EC
 * Callers:
 *     ?NotifyShellModeChanged@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1803C0F8C (-NotifyShellModeChanged@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?NotifyTaskbarSearchBoxChanged@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1803C10C0 (-NotifyTaskbarSearchBoxChanged@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnMessage@SearchAppDesktopExperienceView@@EEAAJI_K_J@Z @ 0x1803C1470 (-OnMessage@SearchAppDesktopExperienceView@@EEAAJI_K_J@Z.c)
 *     ?OnUIATreesUnlinked@SearchAppDesktopExperienceView@@UEAAJXZ @ 0x1803C17B0 (-OnUIATreesUnlinked@SearchAppDesktopExperienceView@@UEAAJXZ.c)
 *     ?OnViewCloaking@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1803C18D4 (-OnViewCloaking@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewHidden@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1803C1E70 (-OnViewHidden@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewUncloaking@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1803C22B8 (-OnViewUncloaking@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?TryInvokeBack@SearchAppDesktopExperienceView@@EEAAJXZ @ 0x1803C4E30 (-TryInvokeBack@SearchAppDesktopExperienceView@@EEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18010C19C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?NotifyView@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803C139C (-NotifyView@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Fou.c)
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
