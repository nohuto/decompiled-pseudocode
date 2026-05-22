/*
 * XREFs of ??0OneCoreUAPInputHost@@IEAA@XZ @ 0x180059770
 * Callers:
 *     ?Create@OneCoreUAPInputHost@@SAJPEAXPEAPEAUISystemInputHost@@_N@Z @ 0x1800591D4 (-Create@OneCoreUAPInputHost@@SAJPEAXPEAPEAUISystemInputHost@@_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?TelemetryRegisterMicrosoft_OneCore_MinInput@@YAXXZ @ 0x180097FFC (-TelemetryRegisterMicrosoft_OneCore_MinInput@@YAXXZ.c)
 */

OneCoreUAPInputHost *__fastcall OneCoreUAPInputHost::OneCoreUAPInputHost(OneCoreUAPInputHost *this)
{
  *((_QWORD *)this + 4) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 10) = 1;
  *(_QWORD *)this = &OneCoreUAPInputHost::`vftable'{for `ISystemInputHost'};
  *((_QWORD *)this + 1) = &OneCoreUAPInputHost::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 2) = &OneCoreUAPInputHost::`vftable'{for `ISessionMonitorOwner'};
  *((_QWORD *)this + 3) = &OneCoreUAPInputHost::`vftable'{for `IInkCanvasInputHost'};
  *((_QWORD *)this + 4) = &OneCoreUAPInputHost::`vftable'{for `RefCountedObject'};
  *((_DWORD *)this + 12) = RoInitialize(1LL);
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_BYTE *)this + 96) = 1;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  TelemetryRegisterMicrosoft_OneCore_MinInput();
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 7);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 8);
  return this;
}
