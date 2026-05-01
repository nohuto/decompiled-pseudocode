/*
 * XREFs of ??1CDesktopVisibilityChangeSource@CImmersiveMode@@QEAA@XZ @ 0x1802EB12C
 * Callers:
 *     ??_GCDesktopVisibilityChangeSource@CImmersiveMode@@QEAAPEAXI@Z @ 0x1802EB3B8 (--_GCDesktopVisibilityChangeSource@CImmersiveMode@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CImmersiveMode::CDesktopVisibilityChangeSource::~CDesktopVisibilityChangeSource(HWND *this)
{
  DestroyWindow(this[2]);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this);
}
