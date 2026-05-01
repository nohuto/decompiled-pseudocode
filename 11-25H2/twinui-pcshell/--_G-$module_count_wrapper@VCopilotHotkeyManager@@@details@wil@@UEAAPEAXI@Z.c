/*
 * XREFs of ??_G?$module_count_wrapper@VCopilotHotkeyManager@@@details@wil@@UEAAPEAXI@Z @ 0x1805FE4D0
 * Callers:
 *     ??_E?$heap_implements@V?$module_count_wrapper@VCopilotHotkeyManager@@@details@wil@@@impl@winrt@@WDA@EAAPEAXI@Z @ 0x1805FE4B0 (--_E-$heap_implements@V-$module_count_wrapper@VCopilotHotkeyManager@@@details@wil@@@impl@winrt@@.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$module_count_wrapper@VCopilotHotkeyManager@@@details@wil@@UEAA@XZ @ 0x1805FDECC (--1-$module_count_wrapper@VCopilotHotkeyManager@@@details@wil@@UEAA@XZ.c)
 */

CopilotHotkeyManager *__fastcall wil::details::module_count_wrapper<CopilotHotkeyManager>::`scalar deleting destructor'(
        CopilotHotkeyManager *a1,
        char a2)
{
  wil::details::module_count_wrapper<CopilotHotkeyManager>::~module_count_wrapper<CopilotHotkeyManager>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x1E8);
  return a1;
}
