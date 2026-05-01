/*
 * XREFs of ?Position@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA?AURect@Foundation@67@XZ @ 0x18045175C
 * Callers:
 *     ?get_Position@?$produce@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow_WASDK@34567@@impl@winrt@@UEAAHPEAURect@Foundation@Windows@3@@Z @ 0x180451B40 (-get_Position@-$produce@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Inte.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?FailFastIfNotOnCreationThread@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180451484 (-FailFastIfNotOnCreationThread@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shel.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK::Position(
        winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK *a1,
        __int64 a2)
{
  HWND v4; // rcx
  bool v5; // zf
  __int64 result; // rax
  unsigned int v7; // ecx
  float top; // xmm1_4
  __m128i v9; // xmm0
  int v10; // ecx
  struct tagRECT Rect; // [rsp+20h] [rbp-28h] BYREF

  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK::FailFastIfNotOnCreationThread(a1);
  v4 = (HWND)*((_QWORD *)a1 + 5);
  Rect = 0LL;
  v5 = !GetWindowRect(v4, &Rect);
  result = a2;
  if ( v5 )
  {
    *(_OWORD *)a2 = 0LL;
  }
  else
  {
    v7 = Rect.right - Rect.left;
    top = (float)Rect.top;
    *(float *)a2 = (float)Rect.left;
    v9 = _mm_cvtsi32_si128(v7);
    v10 = Rect.bottom - Rect.top;
    *(float *)(a2 + 4) = top;
    *(_DWORD *)(a2 + 8) = _mm_cvtepi32_ps(v9).m128_u32[0];
    *(float *)(a2 + 12) = (float)v10;
  }
  return result;
}
