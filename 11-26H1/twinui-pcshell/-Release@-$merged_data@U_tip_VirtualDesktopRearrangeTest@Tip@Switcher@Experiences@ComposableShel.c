/*
 * XREFs of ?Release@?$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@U123456@@details@tip2@@AEAAKXZ @ 0x180492E40
 * Callers:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@U123456@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18049151C (--1-$com_ptr_t@V-$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@Composa.c)
 *     ??4?$com_ptr_t@V?$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@U123456@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180491594 (--4-$com_ptr_t@V-$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@Composa.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@U123456@@details@tip2@@@tip2@@QEAA@XZ @ 0x18054E39C (--1-$test_data_control@V-$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences.c)
 * Callees:
 *     ??1?$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@U123456@@details@tip2@@QEAA@XZ @ 0x18049153C (--1-$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@Wind.c)
 */

__int64 __fastcall tip2::details::merged_data<WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest,WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 72);
  if ( !v2 )
  {
    tip2::details::merged_data<WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest,WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest>::~merged_data<WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest,WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest>(pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
