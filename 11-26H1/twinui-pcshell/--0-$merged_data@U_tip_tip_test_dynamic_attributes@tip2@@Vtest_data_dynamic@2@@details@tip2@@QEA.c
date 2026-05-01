/*
 * XREFs of ??0?$merged_data@U_tip_tip_test_dynamic_attributes@tip2@@Vtest_data_dynamic@2@@details@tip2@@QEAA@XZ @ 0x1803AD9D0
 * Callers:
 *     ??$tip_make_shared_nothrow@V?$merged_data@U_tip_tip_test_dynamic_attributes@tip2@@Vtest_data_dynamic@2@@details@tip2@@$$V@details@tip2@@YA?AV?$com_ptr_t@V?$merged_data@U_tip_tip_test_dynamic_attributes@tip2@@Vtest_data_dynamic@2@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1803ACFF4 (--$tip_make_shared_nothrow@V-$merged_data@U_tip_tip_test_dynamic_attributes@tip2@@Vtest_data_dyn.c)
 * Callees:
 *     ??0test_state@tip2@@QEAA@XZ @ 0x180282F2C (--0test_state@tip2@@QEAA@XZ.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 */

__int64 __fastcall tip2::details::merged_data<tip2::_tip_tip_test_dynamic_attributes,tip2::test_data_dynamic>::merged_data<tip2::_tip_tip_test_dynamic_attributes,tip2::test_data_dynamic>(
        __int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  *(_QWORD *)(a1 + 8) = a1;
  tip2::test_state::test_state((tip2::test_state *)(a1 + 16));
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_DWORD *)(a1 + 192) = 0;
  *(_OWORD *)(a1 + 24) = 0x5C10000000000uLL;
  *(_DWORD *)(a1 + 240) = 0;
  *(_OWORD *)(a1 + 40) = 1uLL;
  *(_OWORD *)(a1 + 56) = 0uLL;
  InitializeCriticalSection((LPCRITICAL_SECTION)(a1 + 200));
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_QWORD *)(a1 + 280) = 0LL;
  *(_QWORD *)(a1 + 288) = 0LL;
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_QWORD *)(a1 + 312) = 0LL;
  *(_QWORD *)(a1 + 320) = 0LL;
  *(_QWORD *)(a1 + 328) = 0LL;
  *(_QWORD *)(a1 + 336) = 0LL;
  *(_QWORD *)(a1 + 344) = 0LL;
  *(_QWORD *)(a1 + 352) = 0LL;
  *(_QWORD *)(a1 + 360) = 0LL;
  *(_QWORD *)(a1 + 368) = 0LL;
  memset_0((void *)(a1 + 376), 0, 0x40uLL);
  *(_BYTE *)(a1 + 440) = 0;
  *(_QWORD *)a1 = &tip2::details::merged_data<tip2::_tip_tip_test_dynamic_attributes,tip2::test_data_dynamic>::`vftable';
  *(_QWORD *)(a1 + 256) = a1 + 16;
  result = a1;
  *(_DWORD *)(a1 + 448) = 1;
  return result;
}
