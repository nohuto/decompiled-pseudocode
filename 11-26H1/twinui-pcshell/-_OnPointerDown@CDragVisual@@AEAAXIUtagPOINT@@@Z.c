/*
 * XREFs of ?_OnPointerDown@CDragVisual@@AEAAXIUtagPOINT@@@Z @ 0x180543C78
 * Callers:
 *     ?_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x180544B70 (-_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ?_OnPressDown@CDragVisual@@AEAAJUtagPOINT@@@Z @ 0x180543F50 (-_OnPressDown@CDragVisual@@AEAAJUtagPOINT@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDragVisual::_OnPointerDown(CDragVisual *this, unsigned int a2, struct tagPOINT a3)
{
  HWND v6; // rdi
  void *v7; // rax
  _BYTE v8[40]; // [rsp+20h] [rbp-68h] BYREF
  void *v9; // [rsp+48h] [rbp-40h]
  void *ppvOut; // [rsp+90h] [rbp+8h] BYREF

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
  else
  {
    v6 = (HWND)*((_QWORD *)this + 19);
    if ( GetCapture() != v6 && !*((_DWORD *)this + 82) )
    {
      memset_0(v8, 0, 0x60uLL);
      if ( (unsigned int)GetPointerInfo(a2, v8) )
      {
        ppvOut = v9;
        v7 = v9;
        *(_QWORD *)((char *)this + 316) = v9;
        *(_QWORD *)((char *)this + 308) = v7;
        *((_DWORD *)this + 82) = a2;
        *(struct tagPOINT *)((char *)this + 300) = a3;
      }
      if ( *((_DWORD *)this + 37) == 6 )
        CDragVisual::_OnPressDown(this, a3);
    }
  }
}
