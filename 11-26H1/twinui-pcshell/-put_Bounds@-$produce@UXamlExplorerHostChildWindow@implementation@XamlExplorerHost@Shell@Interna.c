/*
 * XREFs of ?put_Bounds@?$produce@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow@34567@@impl@winrt@@UEAAHURect@Foundation@Windows@3@@Z @ 0x1801CC870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow>::put_Bounds(
        __int64 a1,
        const __m128i *a2)
{
  __m128 v3; // xmm2
  int nHeight; // eax
  int v5; // r9d
  int v6; // r8d
  __int64 v7; // rcx

  v3 = (__m128)_mm_loadu_si128(a2);
  nHeight = (int)_mm_shuffle_ps(v3, v3, 255).m128_f32[0];
  v5 = (int)_mm_shuffle_ps(v3, v3, 170).m128_f32[0];
  v6 = (int)_mm_shuffle_ps(v3, v3, 85).m128_f32[0];
  v7 = a1 + 48;
  if ( !a1 )
    v7 = 64LL;
  MoveWindow(*(HWND *)v7, (int)v3.m128_f32[0], v6, v5, nHeight, 1);
  return 0LL;
}
