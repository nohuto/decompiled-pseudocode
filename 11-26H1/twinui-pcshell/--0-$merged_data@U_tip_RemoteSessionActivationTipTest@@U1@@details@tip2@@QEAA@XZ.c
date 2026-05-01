/*
 * XREFs of ??0?$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@QEAA@XZ @ 0x180658378
 * Callers:
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18065D0D8 (-ensure_data@-$tip_test@V-$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@@.c)
 * Callees:
 *     ??0?$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z @ 0x180282EC4 (--0-$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z.c)
 *     ??0_tip_RemoteSessionActivationTipTest@@QEAA@XZ @ 0x18065890C (--0_tip_RemoteSessionActivationTipTest@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_RemoteSessionActivationTipTest,_tip_RemoteSessionActivationTipTest>::merged_data<_tip_RemoteSessionActivationTipTest,_tip_RemoteSessionActivationTipTest>(
        __int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  tip2::details::shared_data<1,0,0>::shared_data<1,0,0>(a1 + 8, a1);
  _tip_RemoteSessionActivationTipTest::_tip_RemoteSessionActivationTipTest((_tip_RemoteSessionActivationTipTest *)(a1 + 256));
  *(_DWORD *)(a1 + 408) = 1;
  *(_QWORD *)(a1 + 264) = a1 + 16;
  result = a1;
  *(_QWORD *)a1 = &tip2::details::merged_data<_tip_RemoteSessionActivationTipTest,_tip_RemoteSessionActivationTipTest>::`vftable';
  return result;
}
