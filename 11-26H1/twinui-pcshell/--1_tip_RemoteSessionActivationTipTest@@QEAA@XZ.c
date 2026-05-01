/*
 * XREFs of ??1_tip_RemoteSessionActivationTipTest@@QEAA@XZ @ 0x180658E74
 * Callers:
 *     ??1?$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@QEAA@XZ @ 0x180658B5C (--1-$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@QEAA@XZ.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall _tip_RemoteSessionActivationTipTest::~_tip_RemoteSessionActivationTipTest(
        _tip_RemoteSessionActivationTipTest *this)
{
  std::wstring::_Tidy_deallocate((_QWORD *)this + 15);
  std::wstring::_Tidy_deallocate((_QWORD *)this + 11);
  std::wstring::_Tidy_deallocate((_QWORD *)this + 7);
  std::wstring::_Tidy_deallocate((_QWORD *)this + 3);
}
