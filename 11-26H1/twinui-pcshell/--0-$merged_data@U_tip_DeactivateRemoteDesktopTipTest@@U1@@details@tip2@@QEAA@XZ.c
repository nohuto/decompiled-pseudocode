/*
 * XREFs of ??0?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@QEAA@XZ @ 0x1806488F4
 * Callers:
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180653808 (-ensure_data@-$tip_test@V-$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@.c)
 * Callees:
 *     ??0?$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z @ 0x180282EC4 (--0-$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z.c)
 *     ??0_tip_DeactivateRemoteDesktopTipTest@@QEAA@XZ @ 0x180649720 (--0_tip_DeactivateRemoteDesktopTipTest@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>(
        __int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  tip2::details::shared_data<1,0,0>::shared_data<1,0,0>(a1 + 8, a1);
  _tip_DeactivateRemoteDesktopTipTest::_tip_DeactivateRemoteDesktopTipTest((_tip_DeactivateRemoteDesktopTipTest *)(a1 + 256));
  *(_DWORD *)(a1 + 344) = 1;
  *(_QWORD *)(a1 + 264) = a1 + 16;
  result = a1;
  *(_QWORD *)a1 = &tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>::`vftable';
  return result;
}
