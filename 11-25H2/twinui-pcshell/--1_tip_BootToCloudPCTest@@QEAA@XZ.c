/*
 * XREFs of ??1_tip_BootToCloudPCTest@@QEAA@XZ @ 0x180619108
 * Callers:
 *     ??1?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@QEAA@XZ @ 0x180618DE0 (--1-$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@QEAA@XZ.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall _tip_BootToCloudPCTest::~_tip_BootToCloudPCTest(void **this)
{
  std::wstring::_Tidy_deallocate(this + 8);
  std::wstring::_Tidy_deallocate(this + 4);
}
