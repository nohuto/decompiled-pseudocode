/*
 * XREFs of ??1CDesktopVisibilityChangeSource@CImmersiveMode@@QEAA@XZ @ 0x1802F0588
 * Callers:
 *     ??_GCDesktopVisibilityChangeSource@CImmersiveMode@@QEAAPEAXI@Z @ 0x1802F0818 (--_GCDesktopVisibilityChangeSource@CImmersiveMode@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CImmersiveMode::CDesktopVisibilityChangeSource::~CDesktopVisibilityChangeSource(HWND *this)
{
  DestroyWindow(this[2]);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this);
}
