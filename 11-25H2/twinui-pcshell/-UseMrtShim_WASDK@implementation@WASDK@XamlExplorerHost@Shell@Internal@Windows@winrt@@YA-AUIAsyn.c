/*
 * XREFs of ?UseMrtShim_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@YA?AUIAsyncAction@Foundation@67@XZ @ 0x180229F2C
 * Callers:
 *     ??0XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180288360 (--0XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEA.c)
 * Callees:
 *     winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::UseMrtShim_WASDK$_InitCoro$2 @ 0x18024EB08 (winrt--Windows--Internal--Shell--XamlExplorerHost--WASDK--implementation--UseMrtShim_WASDK$_Init.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::UseMrtShim_WASDK(
        __int64 a1)
{
  char *v2; // rax
  int v4; // [rsp+100h] [rbp+8h] BYREF

  v2 = (char *)operator new(0xD0uLL);
  v4 = 0;
  winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::UseMrtShim_WASDK__InitCoro_2(
    &v4,
    v2 + 112,
    a1);
  return a1;
}
