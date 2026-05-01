/*
 * XREFs of ??0?$merged_data@U_tip_EduThemeInstalled@@U1@@details@tip2@@QEAA@XZ @ 0x1806058FC
 * Callers:
 *     ?start@?$tip_test@V?$merged_data@U_tip_EduThemeInstalled@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x180608074 (-start@-$tip_test@V-$merged_data@U_tip_EduThemeInstalled@@U1@@details@tip2@@@tip2@@QEAA-AU_GUID@.c)
 * Callees:
 *     ??0?$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z @ 0x180282EC4 (--0-$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_EduThemeInstalled,_tip_EduThemeInstalled>::merged_data<_tip_EduThemeInstalled,_tip_EduThemeInstalled>(
        __int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  tip2::details::shared_data<1,0,0>::shared_data<1,0,0>(a1 + 8, a1);
  *(_BYTE *)(a1 + 272) = 0;
  *(_QWORD *)a1 = &tip2::details::merged_data<_tip_EduThemeInstalled,_tip_EduThemeInstalled>::`vftable';
  *(_QWORD *)(a1 + 264) = a1 + 16;
  result = a1;
  *(_DWORD *)(a1 + 280) = 1;
  return result;
}
