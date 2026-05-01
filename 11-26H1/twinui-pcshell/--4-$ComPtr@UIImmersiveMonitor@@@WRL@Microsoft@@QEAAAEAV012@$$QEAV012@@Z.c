/*
 * XREFs of ??4?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1804AEE94
 * Callers:
 *     ??4IntendedHotKeySnapInfo@HotkeyHandler@@QEAAAEAU01@$$QEAU01@@Z @ 0x1805AE70C (--4IntendedHotKeySnapInfo@HotkeyHandler@@QEAAAEAU01@$$QEAU01@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??0?$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z @ 0x1800A38E0 (--0-$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<IImmersiveMonitor>::operator=(__int64 *a1, _QWORD *a2)
{
  __int64 *v3; // rax
  __int64 v4; // r8
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::ComPtr<CFrameApplicationPresentation>(&v6, a2);
  v4 = *v3;
  *v3 = *a1;
  *a1 = v4;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v6);
  return a1;
}
