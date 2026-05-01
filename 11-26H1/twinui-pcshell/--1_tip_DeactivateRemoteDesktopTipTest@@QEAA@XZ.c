/*
 * XREFs of ??1_tip_DeactivateRemoteDesktopTipTest@@QEAA@XZ @ 0x18064A3F0
 * Callers:
 *     ??1?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@QEAA@XZ @ 0x180649D30 (--1-$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@QEAA@XZ.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall _tip_DeactivateRemoteDesktopTipTest::~_tip_DeactivateRemoteDesktopTipTest(
        _tip_DeactivateRemoteDesktopTipTest *this)
{
  std::wstring::_Tidy_deallocate((_QWORD *)this + 7);
  std::wstring::_Tidy_deallocate((_QWORD *)this + 2);
}
