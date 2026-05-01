/*
 * XREFs of ??1_tip_SearchWebProviderInstallTest@@QEAA@XZ @ 0x1803AE8EC
 * Callers:
 *     ??1?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@QEAA@XZ @ 0x1803AE1D8 (--1-$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@QEAA@XZ.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall _tip_SearchWebProviderInstallTest::~_tip_SearchWebProviderInstallTest(
        _tip_SearchWebProviderInstallTest *this)
{
  std::wstring::_Tidy_deallocate((_QWORD *)this + 17);
  std::wstring::_Tidy_deallocate((_QWORD *)this + 13);
  std::wstring::_Tidy_deallocate((_QWORD *)this + 8);
  std::wstring::_Tidy_deallocate((_QWORD *)this + 3);
}
