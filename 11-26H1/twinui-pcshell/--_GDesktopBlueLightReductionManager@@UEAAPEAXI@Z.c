/*
 * XREFs of ??_GDesktopBlueLightReductionManager@@UEAAPEAXI@Z @ 0x18030DB64
 * Callers:
 *     ??_EDesktopBlueLightReductionManager@@WCI@EAAPEAXI@Z @ 0x18030DA90 (--_EDesktopBlueLightReductionManager@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1DesktopBlueLightReductionManager@@UEAA@XZ @ 0x18030D884 (--1DesktopBlueLightReductionManager@@UEAA@XZ.c)
 */

DesktopBlueLightReductionManager *__fastcall DesktopBlueLightReductionManager::`scalar deleting destructor'(
        DesktopBlueLightReductionManager *this,
        struct wil::details::wnf_subscription_state_base *a2)
{
  char v2; // bl

  v2 = (char)a2;
  DesktopBlueLightReductionManager::~DesktopBlueLightReductionManager(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xD8);
  return this;
}
