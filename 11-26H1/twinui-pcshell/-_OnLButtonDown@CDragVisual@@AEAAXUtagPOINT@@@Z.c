/*
 * XREFs of ?_OnLButtonDown@CDragVisual@@AEAAXUtagPOINT@@@Z @ 0x1805437C0
 * Callers:
 *     ?_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x180544B70 (-_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_OnPressDown@CDragVisual@@AEAAJUtagPOINT@@@Z @ 0x180543F50 (-_OnPressDown@CDragVisual@@AEAAJUtagPOINT@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDragVisual::_OnLButtonDown(CDragVisual *this, struct tagPOINT a2)
{
  void *ppvOut; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 37) != 6 || *((_DWORD *)this + 82) )
  {
    if ( *((_QWORD *)this + 21) )
    {
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
      if ( IUnknown_QueryService(
             *((IUnknown **)this + 2),
             &GUID_b849acb5_8ac5_4fb8_88b6_55c749d25a44,
             &GUID_b849acb5_8ac5_4fb8_88b6_55c749d25a44,
             &ppvOut) >= 0 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)ppvOut + 48LL))(ppvOut);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
    }
  }
  else
  {
    SetCapture(*((HWND *)this + 19));
    *(struct tagPOINT *)((char *)this + 300) = a2;
    CDragVisual::_OnPressDown(this, a2);
  }
}
