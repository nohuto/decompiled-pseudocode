/*
 * XREFs of ??0?$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@QEAA@XZ @ 0x1805514F0
 * Callers:
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1805589A8 (-ensure_data@-$tip_test@V-$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@@tip2@@.c)
 * Callees:
 *     ??0?$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z @ 0x180282EC4 (--0-$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z.c)
 *     ??0_tip_VDSlideAnimationPerfTest@@QEAA@XZ @ 0x18055192C (--0_tip_VDSlideAnimationPerfTest@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>(
        __int64 a1)
{
  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  tip2::details::shared_data<1,0,0>::shared_data<1,0,0>(a1 + 8, a1);
  _tip_VDSlideAnimationPerfTest::_tip_VDSlideAnimationPerfTest((_tip_VDSlideAnimationPerfTest *)(a1 + 256));
  *(_QWORD *)a1 = &tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>::`vftable';
  *(_DWORD *)(a1 + 352) = 1;
  *(_QWORD *)(a1 + 264) = a1 + 16;
  return a1;
}
