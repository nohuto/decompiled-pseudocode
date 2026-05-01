/*
 * XREFs of ??0?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@QEAA@XZ @ 0x18028BC70
 * Callers:
 *     ??$tip_make_shared_nothrow@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@$$V@details@tip2@@YA?AV?$com_ptr_t@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18028BC30 (--$tip_make_shared_nothrow@V-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@$$V@details@ti.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180034F0C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??0?$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z @ 0x180282EC4 (--0-$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>(
        __int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  tip2::details::shared_data<1,0,0>::shared_data<1,0,0>(a1 + 8, a1);
  *(_QWORD *)(a1 + 272) = 1LL;
  *(_DWORD *)(a1 + 292) = 10;
  *(_DWORD *)(a1 + 296) = 10;
  *(_BYTE *)(a1 + 280) = 0;
  *(_DWORD *)(a1 + 284) = 0;
  *(_DWORD *)(a1 + 288) = 11;
  *(_WORD *)(a1 + 300) = 0;
  *(_BYTE *)(a1 + 302) = 0;
  std::wstring::wstring(a1 + 304);
  *(_DWORD *)(a1 + 336) = 1;
  *(_QWORD *)(a1 + 264) = a1 + 16;
  result = a1;
  *(_QWORD *)a1 = &tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>::`vftable';
  return result;
}
