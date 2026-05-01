/*
 * XREFs of ??0?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@QEAA@XZ @ 0x18029483C
 * Callers:
 *     ??$tip_make_shared_nothrow@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@$$V@details@tip2@@YA?AV?$com_ptr_t@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1802947FC (--$tip_make_shared_nothrow@V-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@$$V@details@ti.c)
 * Callees:
 *     ??0?$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z @ 0x18028A4F4 (--0-$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>(
        __int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  tip2::details::shared_data<1,0,0>::shared_data<1,0,0>(a1 + 8, a1);
  *(_BYTE *)(a1 + 272) = 0;
  *(_DWORD *)(a1 + 284) = 10;
  *(_DWORD *)(a1 + 288) = 10;
  *(_DWORD *)(a1 + 276) = 0;
  *(_WORD *)(a1 + 292) = 0;
  *(_BYTE *)(a1 + 294) = 0;
  *(_QWORD *)(a1 + 264) = 1LL;
  *(_DWORD *)(a1 + 280) = 11;
  *(_OWORD *)(a1 + 296) = 0LL;
  *(_QWORD *)(a1 + 312) = 0LL;
  *(_QWORD *)(a1 + 320) = 7LL;
  *(_WORD *)(a1 + 296) = 0;
  *(_QWORD *)a1 = &tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>::`vftable';
  *(_QWORD *)(a1 + 256) = a1 + 16;
  result = a1;
  *(_DWORD *)(a1 + 328) = 1;
  return result;
}
