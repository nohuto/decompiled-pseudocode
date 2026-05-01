/*
 * XREFs of ?v_NotifyPinListChange@CTaskbandPin@@UEAAXPEFBU_ITEMIDLIST@@H@Z @ 0x180664770
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

void __fastcall CTaskbandPin::v_NotifyPinListChange(CTaskbandPin *this, const struct _ITEMIDLIST *a2, int a3)
{
  HWND WindowW; // rax
  HWND PropW; // rax
  __int16 dwItem1; // [rsp+20h] [rbp-28h] BYREF
  int dwItem1_2; // [rsp+22h] [rbp-26h]
  __int16 dwItem1_6; // [rsp+26h] [rbp-22h]
  int v8; // [rsp+28h] [rbp-20h]

  if ( !*((_DWORD *)this + 20) )
  {
    dwItem1_6 = 0;
    v8 = 0;
    dwItem1_2 = 13;
    dwItem1 = 10;
    SHChangeNotify(0x4000000, a3 != 0 ? 12288 : 4096, &dwItem1, 0LL);
    WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
    if ( WindowW )
    {
      PropW = (HWND)GetPropW(WindowW, L"TaskbandHWND");
      PostMessageW(PropW, 0x446u, 0LL, 0LL);
    }
  }
}
