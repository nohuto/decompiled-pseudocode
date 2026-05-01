/*
 * XREFs of ??_ECopilotHotkeyManager@@UEAAPEAXI@Z @ 0x18062355C
 * Callers:
 *     ??_ECopilotHotkeyManager@@WDA@EAAPEAXI@Z @ 0x180623510 (--_ECopilotHotkeyManager@@WDA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CopilotHotkeyManager@@UEAA@XZ @ 0x180623008 (--1CopilotHotkeyManager@@UEAA@XZ.c)
 */

CopilotHotkeyManager *__fastcall CopilotHotkeyManager::`vector deleting destructor'(
        CopilotHotkeyManager *this,
        struct wil::details::wnf_subscription_state_base *a2)
{
  char v2; // bl

  v2 = (char)a2;
  CopilotHotkeyManager::~CopilotHotkeyManager(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x280);
  return this;
}
