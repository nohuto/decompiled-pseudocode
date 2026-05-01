/*
 * XREFs of ??0?$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@QEAA@XZ @ 0x1805B5988
 * Callers:
 *     ?start@?$tip_test@V?$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x180292A98 (-start@-$tip_test@V-$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@@tip2@@QEAA-AU_.c)
 * Callees:
 *     ??0?$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z @ 0x180282EC4 (--0-$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>(
        __int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  tip2::details::shared_data<1,0,0>::shared_data<1,0,0>(a1 + 8, a1);
  *(_BYTE *)(a1 + 274) = 0;
  *(_WORD *)(a1 + 272) = 256;
  *(_QWORD *)(a1 + 276) = 0LL;
  *(_QWORD *)(a1 + 284) = 0LL;
  *(_QWORD *)(a1 + 292) = 0LL;
  *(_QWORD *)(a1 + 300) = 0LL;
  *(_QWORD *)(a1 + 308) = 0LL;
  *(_QWORD *)(a1 + 316) = 0LL;
  *(_QWORD *)(a1 + 324) = 0LL;
  *(_QWORD *)(a1 + 332) = 0LL;
  *(_QWORD *)(a1 + 340) = 0LL;
  *(_QWORD *)a1 = &tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>::`vftable';
  *(_QWORD *)(a1 + 264) = a1 + 16;
  result = a1;
  *(_DWORD *)(a1 + 352) = 1;
  return result;
}
