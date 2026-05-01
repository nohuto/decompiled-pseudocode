/*
 * XREFs of ??0?$merged_data@U_tip_AppThumbnailTest@@U1@@details@tip2@@QEAA@PEAU_GUID@@@Z @ 0x180488A04
 * Callers:
 *     ??$open@V?$tip_test@V?$merged_data@U_tip_AppThumbnailTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?AV?$tip_test@V?$merged_data@U_tip_AppThumbnailTest@@U1@@details@tip2@@@0@XZ @ 0x180488970 (--$open@V-$tip_test@V-$merged_data@U_tip_AppThumbnailTest@@U1@@details@tip2@@@tip2@@@tip2@@YA-AV.c)
 * Callees:
 *     ?open_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@IEAAXPEAU_GUID@@@Z @ 0x180289A9C (-open_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@IEAAXPEAU_GUID@@@Z.c)
 *     ??0?$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z @ 0x18028A4F4 (--0-$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_AppThumbnailTest,_tip_AppThumbnailTest>::merged_data<_tip_AppThumbnailTest,_tip_AppThumbnailTest>(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // r8

  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  tip2::details::shared_data<1,0,0>::shared_data<1,0,0>(a1 + 8, a1);
  *(_DWORD *)(a1 + 264) = 1;
  *(_QWORD *)a1 = &tip2::details::merged_data<_tip_DisableCloudPCTipTest,_tip_DisableCloudPCTipTest>::`vftable';
  *(_QWORD *)(a1 + 256) = a1 + 16;
  tip2::details::shared_data<1,0,0>::open_without_lock(a1 + 8, a2, v4);
  return a1;
}
