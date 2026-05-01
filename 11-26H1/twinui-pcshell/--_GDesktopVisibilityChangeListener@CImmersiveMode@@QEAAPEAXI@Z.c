/*
 * XREFs of ??_GDesktopVisibilityChangeListener@CImmersiveMode@@QEAAPEAXI@Z @ 0x1802EB42C
 * Callers:
 *     ?RegisterForDesktopVisibilityChanges@CImmersiveMode@@UEAAJW4DESKTOP_VISIBILITY_NOTIFICATION_TYPE@@PEAUIDesktopVisibilityChangesNotification@@PEAK@Z @ 0x18016FE60 (-RegisterForDesktopVisibilityChanges@CImmersiveMode@@UEAAJW4DESKTOP_VISIBILITY_NOTIFICATION_TYPE.c)
 *     ?UnregisterForDesktopVisibilityChanges@CImmersiveMode@@UEAAJK@Z @ 0x180229B50 (-UnregisterForDesktopVisibilityChanges@CImmersiveMode@@UEAAJK@Z.c)
 *     ??1?$CAutoMemPtr@UDesktopVisibilityChangeListener@CImmersiveMode@@@@QEAA@XZ @ 0x1802C4348 (--1-$CAutoMemPtr@UDesktopVisibilityChangeListener@CImmersiveMode@@@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1DesktopVisibilityChangeListener@CImmersiveMode@@QEAA@XZ @ 0x1802EB310 (--1DesktopVisibilityChangeListener@CImmersiveMode@@QEAA@XZ.c)
 */

CImmersiveMode::DesktopVisibilityChangeListener *__fastcall CImmersiveMode::DesktopVisibilityChangeListener::`scalar deleting destructor'(
        CImmersiveMode::DesktopVisibilityChangeListener *this)
{
  CImmersiveMode::DesktopVisibilityChangeListener::~DesktopVisibilityChangeListener(this);
  operator delete(this, (const struct std::nothrow_t *)8);
  return this;
}
