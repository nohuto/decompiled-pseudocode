/*
 * XREFs of ??1_tip_DeactivateRemoteDesktopTipTest@@QEAA@XZ @ 0x1806246BC
 * Callers:
 *     ??1?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@QEAA@XZ @ 0x180624054 (--1-$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@QEAA@XZ.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall _tip_DeactivateRemoteDesktopTipTest::~_tip_DeactivateRemoteDesktopTipTest(void **this)
{
  std::wstring::_Tidy_deallocate(this + 7);
  std::wstring::_Tidy_deallocate(this + 2);
}
