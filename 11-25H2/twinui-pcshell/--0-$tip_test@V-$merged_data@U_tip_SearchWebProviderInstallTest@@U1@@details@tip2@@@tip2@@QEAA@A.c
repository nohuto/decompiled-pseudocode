/*
 * XREFs of ??0?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@@tip2@@QEAA@AEBV01@@Z @ 0x1803A4910
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_630b2476087197e3d624f13f03cc25bb___::Run @ 0x1803AFD00 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_630b2476087197e3d624f13f03cc25bb___--Run.c)
 *     ?TryInstallDefaultWebSearchProvider@UndockedSearchAppExperienceManager@@AEAAXW4InstallTrigger@@@Z @ 0x1803B15B4 (-TryInstallDefaultWebSearchProvider@UndockedSearchAppExperienceManager@@AEAAXW4InstallTrigger@@@.c)
 * Callees:
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1803B2FFC (-ensure_data@-$tip_test@V-$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@@ti.c)
 */

__int64 *__fastcall tip2::tip_test<tip2::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>>::tip_test<tip2::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>>(
        __int64 *a1,
        __int64 a2)
{
  __int64 *v3; // rax
  __int64 v4; // rdx

  v3 = (__int64 *)tip2::tip_test<tip2::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>>::ensure_data(a2);
  v4 = *v3;
  *a1 = *v3;
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 424));
  return a1;
}
