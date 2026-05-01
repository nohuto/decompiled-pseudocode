/*
 * XREFs of ?NotifyView@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803CA790
 * Callers:
 *     ?NotifyAppWithTransitionType@CortanaDesktopExperienceView@@AEAAJPEBGW4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@@Z @ 0x1803CA340 (-NotifyAppWithTransitionType@CortanaDesktopExperienceView@@AEAAJPEBGW4CortanaAppTransitionType@E.c)
 *     ?NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803CA7E0 (-NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windo.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::NotifyView(
        CortanaDesktopExperienceView *this,
        HSTRING a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *((_QWORD *)this + 21);
  if ( !v3 )
    return 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, HSTRING, struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v3 + 120LL))(
         v3,
         a2,
         a3);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xB0C,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
