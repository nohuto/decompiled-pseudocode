/*
 * XREFs of ??4?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18049DB64
 * Callers:
 *     ??4IntendedHotKeySnapInfo@HotkeyHandler@@QEAAAEAU01@$$QEAU01@@Z @ 0x18058A57C (--4IntendedHotKeySnapInfo@HotkeyHandler@@QEAAAEAU01@$$QEAU01@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<IImmersiveMonitor>::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0LL;
  if ( v7 != a2 )
  {
    v4 = *a2;
    *a2 = 0LL;
    v3 = v4;
  }
  v5 = *a1;
  *a1 = v3;
  v7[0] = v5;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v7);
  return a1;
}
