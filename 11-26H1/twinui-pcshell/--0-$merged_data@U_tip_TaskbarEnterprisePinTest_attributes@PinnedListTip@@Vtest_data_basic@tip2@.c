/*
 * XREFs of ??0?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@QEAA@XZ @ 0x18068BD78
 * Callers:
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18069A78C (-ensure_data@-$tip_test@V-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@.c)
 * Callees:
 *     ??0test_state@tip2@@QEAA@XZ @ 0x180282F2C (--0test_state@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>(
        __int64 a1)
{
  __int64 result; // rax
  __int128 v3; // [rsp+20h] [rbp-30h]
  __int128 v4; // [rsp+30h] [rbp-20h]
  __int128 v5; // [rsp+40h] [rbp-10h]

  *(_QWORD *)&v3 = 0x2C1000364F7C3LL;
  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  *(_QWORD *)(a1 + 8) = a1;
  *((_QWORD *)&v3 + 1) = "TaskbarEnterprisePinTest";
  *(_DWORD *)((char *)&v4 + 2) = 0;
  WORD3(v4) = 0;
  *((_QWORD *)&v4 + 1) = &`PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes::__flags_all_set'::`2'::args;
  *(_QWORD *)&v5 = &`PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes::__flags_any_set'::`2'::args;
  *((_QWORD *)&v5 + 1) = &`PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes::__flags_all_clear'::`2'::args;
  LOWORD(v4) = 513;
  tip2::test_state::test_state((tip2::test_state *)(a1 + 16));
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_OWORD *)(a1 + 24) = v3;
  *(_DWORD *)(a1 + 192) = 0;
  *(_DWORD *)(a1 + 240) = 0;
  *(_OWORD *)(a1 + 40) = v4;
  *(_OWORD *)(a1 + 56) = v5;
  InitializeCriticalSection((LPCRITICAL_SECTION)(a1 + 200));
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)a1 = &tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>::`vftable';
  *(_QWORD *)(a1 + 256) = a1 + 16;
  result = a1;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_QWORD *)(a1 + 280) = 0LL;
  *(_QWORD *)(a1 + 288) = 0LL;
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_QWORD *)(a1 + 312) = 0LL;
  *(_QWORD *)(a1 + 320) = 0LL;
  *(_QWORD *)(a1 + 328) = 0LL;
  *(_DWORD *)(a1 + 336) = 1;
  return result;
}
