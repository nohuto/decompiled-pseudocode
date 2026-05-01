/*
 * XREFs of ?InitializeDataAsync@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@XZ @ 0x18057E434
 * Callers:
 *     ?perform_delayed_initialization@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x18057FCA0 (-perform_delayed_initialization@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAX.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::WindowTabHost::InitializeDataAsync$_ResumeCoro$1 @ 0x18057E300 (winrt--Windows--Internal--Shell--implementation--WindowTabHost--InitializeDataAsync$_ResumeCoro$.c)
 */

// Hidden C++ exception states: #wind=1
_BYTE *__fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::InitializeDataAsync(
        void (__fastcall *a1)(__int64 a1, __int64 a2, void *a3),
        _BYTE *a2)
{
  __int64 v4; // rdx
  void *v5; // r8
  void (__fastcall **v7)(__int64, __int64, void *); // [rsp+40h] [rbp+8h]

  v7 = (void (__fastcall **)(__int64, __int64, void *))operator new(0x40uLL);
  v7[7] = a1;
  *v7 = winrt::Windows::Internal::Shell::implementation::WindowTabHost::InitializeDataAsync__ResumeCoro_1;
  *((_DWORD *)v7 + 2) = 65538;
  *a2 = 0;
  *((_BYTE *)v7 + 48) = 0;
  winrt::Windows::Internal::Shell::implementation::WindowTabHost::InitializeDataAsync__ResumeCoro_1((__int64)v7, v4, v5);
  return a2;
}
