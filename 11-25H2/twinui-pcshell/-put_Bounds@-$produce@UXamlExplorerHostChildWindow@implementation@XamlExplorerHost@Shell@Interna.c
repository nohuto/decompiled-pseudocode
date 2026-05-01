/*
 * XREFs of ?put_Bounds@?$produce@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow@34567@@impl@winrt@@UEAAHURect@Foundation@Windows@3@@Z @ 0x1801D8060
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
  int v4; // edx
  int v5; // r8d
  int v6; // r9d
  float v7; // xmm2_4
  __int64 v8; // rcx

  v3 = (__m128)_mm_loadu_si128(a2);
  v4 = (int)v3.m128_f32[0];
  v5 = (int)_mm_shuffle_ps(v3, v3, 85).m128_f32[0];
  v6 = (int)_mm_shuffle_ps(v3, v3, 170).m128_f32[0];
  LODWORD(v7) = _mm_shuffle_ps(v3, v3, 255).m128_u32[0];
  v8 = a1 + 48;
  if ( !a1 )
    v8 = 64LL;
  MoveWindow(*(HWND *)v8, v4, v5, v6, (int)v7, 1);
  return 0LL;
}
