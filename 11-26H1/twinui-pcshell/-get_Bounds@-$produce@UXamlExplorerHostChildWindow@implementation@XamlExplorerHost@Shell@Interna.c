/*
 * XREFs of ?get_Bounds@?$produce@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow@34567@@impl@winrt@@UEAAHPEAURect@Foundation@Windows@3@@Z @ 0x1801ABC90
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow>::get_Bounds(
        __int64 a1,
        float *a2)
{
  __int64 v4; // rcx
  float v5; // xmm0_4
  float v6; // xmm1_4
  float top; // xmm2_4
  float left; // xmm3_4
  __int64 result; // rax
  unsigned int v10; // [rsp+20h] [rbp-28h] BYREF
  struct tagRECT Rect; // [rsp+28h] [rbp-20h] BYREF

  Rect = 0LL;
  v4 = a1 + 48;
  if ( !a1 )
    v4 = 64LL;
  if ( GetWindowRect(*(HWND *)v4, &Rect) )
  {
    v5 = (float)(Rect.bottom - Rect.top);
    v6 = (float)(Rect.right - Rect.left);
    top = (float)Rect.top;
    left = (float)Rect.left;
  }
  else
  {
    v5 = 0.0;
    v6 = 0.0;
    top = 0.0;
    left = 0.0;
  }
  *a2 = left;
  a2[1] = top;
  a2[2] = v6;
  a2[3] = v5;
  result = 0LL;
  while ( 2 )
  {
    try
    {
    }
    catch ( ... )
    {
      v10 = *(_DWORD *)winrt::to_hresult(&v10);
      result = v10;
      continue;
    }
    break;
  }
  return result;
}
