/*
 * XREFs of ??_E?$module_count_wrapper@VNPSMDesktopShellComponent@@@details@wil@@UEAAPEAXI@Z @ 0x18021C8CC
 * Callers:
 *     ??_E?$module_count_wrapper@VNPSMDesktopShellComponent@@@details@wil@@WCI@EAAPEAXI@Z @ 0x1805EB2B0 (--_E-$module_count_wrapper@VNPSMDesktopShellComponent@@@details@wil@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1?$module_count_wrapper@VNPSMDesktopShellComponent@@@details@wil@@UEAA@XZ @ 0x1802C47DC (--1-$module_count_wrapper@VNPSMDesktopShellComponent@@@details@wil@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

NPSMDesktopShellComponent *__fastcall wil::details::module_count_wrapper<NPSMDesktopShellComponent>::`vector deleting destructor'(
        NPSMDesktopShellComponent *a1,
        char a2)
{
  wil::details::module_count_wrapper<NPSMDesktopShellComponent>::~module_count_wrapper<NPSMDesktopShellComponent>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x120);
  return a1;
}
