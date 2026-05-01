/*
 * XREFs of ??1DragInputHandler@@EEAA@XZ @ 0x1804D44A4
 * Callers:
 *     ??_EDragInputHandler@@EEAAPEAXI@Z @ 0x1804D44F0 (--_EDragInputHandler@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

void __fastcall DragInputHandler::~DragInputHandler(DragInputHandler *this)
{
  *(_QWORD *)this = &DragInputHandler::`vftable'{for `Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ITabletModeInputSource>'};
  *((_QWORD *)this + 2) = &DragInputHandler::`vftable'{for `CWRLImpWndProc<DragInputHandler>'};
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 5);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 4);
  *((_DWORD *)this + 3) = -1073741823;
}
