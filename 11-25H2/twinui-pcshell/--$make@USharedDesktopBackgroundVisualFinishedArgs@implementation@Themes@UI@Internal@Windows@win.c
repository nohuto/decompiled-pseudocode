/*
 * XREFs of ??$make@USharedDesktopBackgroundVisualFinishedArgs@implementation@Themes@UI@Internal@Windows@winrt@@AEB_NAEB_N@winrt@@YA?A_PAEB_N0@Z @ 0x1805E43F4
 * Callers:
 *     _lambda_8b5f1623488306f7e465df1f94f78972_::operator() @ 0x1805E53B0 (_lambda_8b5f1623488306f7e465df1f94f78972_--operator().c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     ??0?$heap_implements@USharedDesktopBackgroundVisualFinishedArgs@implementation@Themes@UI@Internal@Windows@winrt@@@impl@winrt@@QEAA@_N0@Z @ 0x1805E4B94 (--0-$heap_implements@USharedDesktopBackgroundVisualFinishedArgs@implementation@Themes@UI@Interna.c)
 */

__int64 *__fastcall winrt::make<winrt::Windows::Internal::UI::Themes::implementation::SharedDesktopBackgroundVisualFinishedArgs,bool const &,bool const &>(
        __int64 *a1,
        _BYTE *a2,
        _BYTE *a3)
{
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rax
  void *v10; // [rsp+40h] [rbp+8h]

  v10 = operator new(0x20uLL);
  LOBYTE(v6) = *a3;
  LOBYTE(v7) = *a2;
  v8 = winrt::impl::heap_implements<winrt::Windows::Internal::UI::Themes::implementation::SharedDesktopBackgroundVisualFinishedArgs>::heap_implements<winrt::Windows::Internal::UI::Themes::implementation::SharedDesktopBackgroundVisualFinishedArgs>(
         v10,
         v7,
         v6);
  *a1 = (v8 + 16) & -(__int64)(v8 != 0);
  return a1;
}
