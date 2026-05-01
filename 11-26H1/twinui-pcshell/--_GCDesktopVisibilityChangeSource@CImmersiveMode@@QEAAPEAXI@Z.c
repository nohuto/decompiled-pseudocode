/*
 * XREFs of ??_GCDesktopVisibilityChangeSource@CImmersiveMode@@QEAAPEAXI@Z @ 0x1802EB3B8
 * Callers:
 *     ?_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1801703D8 (-_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?_UnregisterDesktopVisibilitySource@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@@Z @ 0x180170944 (-_UnregisterDesktopVisibilitySource@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@@Z.c)
 *     ??1?$CAutoMemPtr@VCDesktopVisibilityChangeSource@CImmersiveMode@@@@QEAA@XZ @ 0x1802C42D4 (--1-$CAutoMemPtr@VCDesktopVisibilityChangeSource@CImmersiveMode@@@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CDesktopVisibilityChangeSource@CImmersiveMode@@QEAA@XZ @ 0x1802EB12C (--1CDesktopVisibilityChangeSource@CImmersiveMode@@QEAA@XZ.c)
 */

HWND *__fastcall CImmersiveMode::CDesktopVisibilityChangeSource::`scalar deleting destructor'(HWND *this)
{
  CImmersiveMode::CDesktopVisibilityChangeSource::~CDesktopVisibilityChangeSource(this);
  operator delete(this, (const struct std::nothrow_t *)0x18);
  return this;
}
