/*
 * XREFs of ??1_tip_SwitchToRemoteTipTest@@QEAA@XZ @ 0x1806246E4
 * Callers:
 *     ??1?$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@QEAA@XZ @ 0x1806240FC (--1-$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@QEAA@XZ.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall _tip_SwitchToRemoteTipTest::~_tip_SwitchToRemoteTipTest(void **this)
{
  std::wstring::_Tidy_deallocate(this + 13);
  std::wstring::_Tidy_deallocate(this + 6);
  std::wstring::_Tidy_deallocate(this + 2);
}
