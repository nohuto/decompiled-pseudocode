/*
 * XREFs of ?IsShowForTransitions@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEA_N@Z @ 0x1803C0AE4
 * Callers:
 *     ?Show@SearchAppDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x1803C35E0 (-Show@SearchAppDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x1801BCFF0 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 */

__int64 __fastcall SearchAppDesktopExperienceView::IsShowForTransitions(
        SearchAppDesktopExperienceView *this,
        HSTRING a2,
        bool *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  const wchar_t *StringRawBuffer; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  SearchAppDesktopExperienceView *length; // [rsp+30h] [rbp+8h] BYREF
  HSTRING v10; // [rsp+38h] [rbp+10h] BYREF
  HSTRING string; // [rsp+40h] [rbp+18h] BYREF

  v10 = a2;
  length = this;
  *a3 = 0;
  if ( a2 )
  {
    string = 0LL;
    v4 = Microsoft::WRL::Wrappers::HString::Set(&string, &v10);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x529,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)v4);
      WindowsDeleteString(string);
      return v5;
    }
    LODWORD(length) = 0;
    StringRawBuffer = WindowsGetStringRawBuffer(string, (UINT32 *)&length);
    if ( StringRawBuffer )
    {
      if ( wcsstr(StringRawBuffer, L"StartMode=AppTransition") )
        *a3 = 1;
    }
    WindowsDeleteString(string);
  }
  return 0LL;
}
