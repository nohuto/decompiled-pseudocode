/*
 * XREFs of ??0?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@QEAA@XZ @ 0x18047AE0C
 * Callers:
 *     ??$tip_make_shared_nothrow@V?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@$$V@details@tip2@@YA?AV?$com_ptr_t@V?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18047AC7C (--$tip_make_shared_nothrow@V-$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@$$.c)
 * Callees:
 *     ??0?$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z @ 0x18028A4F4 (--0-$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_EyeControllerAppLaunchTest,_tip_EyeControllerAppLaunchTest>::merged_data<_tip_EyeControllerAppLaunchTest,_tip_EyeControllerAppLaunchTest>(
        __int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  tip2::details::shared_data<1,0,0>::shared_data<1,0,0>(a1 + 8, a1);
  *(_WORD *)(a1 + 264) = 0;
  *(_DWORD *)(a1 + 268) = 0;
  *(_WORD *)(a1 + 272) = 0;
  *(_QWORD *)a1 = &tip2::details::merged_data<_tip_EyeControllerAppLaunchTest,_tip_EyeControllerAppLaunchTest>::`vftable';
  *(_QWORD *)(a1 + 256) = a1 + 16;
  result = a1;
  *(_BYTE *)(a1 + 266) = 0;
  *(_DWORD *)(a1 + 280) = 1;
  return result;
}
