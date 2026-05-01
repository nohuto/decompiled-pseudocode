/*
 * XREFs of ??$make@USharedDesktopBackgroundVisualStartedArgs@implementation@Themes@UI@Internal@Windows@winrt@@AEB_N@winrt@@YA?A_PAEB_N@Z @ 0x180609058
 * Callers:
 *     _lambda_0ac2a96e912be1478a5c63e50e2d80bb_::operator() @ 0x180609F78 (_lambda_0ac2a96e912be1478a5c63e50e2d80bb_--operator().c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     ??0?$heap_implements@USharedDesktopBackgroundVisualStartedArgs@implementation@Themes@UI@Internal@Windows@winrt@@@impl@winrt@@QEAA@_N@Z @ 0x180609838 (--0-$heap_implements@USharedDesktopBackgroundVisualStartedArgs@implementation@Themes@UI@Internal.c)
 */

__int64 *__fastcall winrt::make<winrt::Windows::Internal::UI::Themes::implementation::SharedDesktopBackgroundVisualStartedArgs,bool const &>(
        __int64 *a1,
        _BYTE *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  void *v7; // [rsp+40h] [rbp+8h]

  v7 = operator new(0x20uLL);
  LOBYTE(v4) = *a2;
  v5 = winrt::impl::heap_implements<winrt::Windows::Internal::UI::Themes::implementation::SharedDesktopBackgroundVisualStartedArgs>::heap_implements<winrt::Windows::Internal::UI::Themes::implementation::SharedDesktopBackgroundVisualStartedArgs>(
         v7,
         v4);
  *a1 = (v5 + 16) & -(__int64)(v5 != 0);
  return a1;
}
