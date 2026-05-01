/*
 * XREFs of ?get_Bounds@?$produce@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow@34567@@impl@winrt@@UEAAHPEAURect@Foundation@Windows@3@@Z @ 0x1801B3AA0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow>::get_Bounds(
        __int64 a1,
        struct tagRECT *a2)
{
  __int64 v4; // rcx
  LONG v5; // xmm3_4
  LONG v6; // xmm2_4
  struct tagRECT v7; // xmm0
  __int64 result; // rax
  unsigned int v9; // [rsp+20h] [rbp-28h] BYREF
  struct tagRECT Rect; // [rsp+28h] [rbp-20h] BYREF

  Rect = 0LL;
  v4 = a1 + 48;
  if ( !a1 )
    v4 = 64LL;
  if ( GetWindowRect(*(HWND *)v4, &Rect) )
  {
    *(float *)&v5 = (float)(Rect.bottom - Rect.top);
    *(float *)&v6 = (float)(Rect.right - Rect.left);
    *(float *)&Rect.left = (float)Rect.left;
    *(float *)&Rect.top = (float)Rect.top;
    Rect.right = v6;
    Rect.bottom = v5;
    v7 = Rect;
  }
  else
  {
    v7 = 0LL;
  }
  *a2 = v7;
  result = 0LL;
  while ( 2 )
  {
    try
    {
    }
    catch ( ... )
    {
      v9 = *(_DWORD *)winrt::to_hresult(&v9);
      result = v9;
      continue;
    }
    break;
  }
  return result;
}
