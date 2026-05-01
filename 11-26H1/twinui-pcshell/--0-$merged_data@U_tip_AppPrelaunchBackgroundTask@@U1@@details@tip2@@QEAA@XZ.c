/*
 * XREFs of ??0?$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@QEAA@XZ @ 0x1805CAFD8
 * Callers:
 *     ?start@?$tip_test@V?$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x1805DCFDC (-start@-$tip_test@V-$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@@tip2@@QEAA.c)
 * Callees:
 *     ??0?$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z @ 0x180282EC4 (--0-$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z.c)
 *     ??0_tip_AppPrelaunchBackgroundTask@@QEAA@XZ @ 0x1805CBC30 (--0_tip_AppPrelaunchBackgroundTask@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_AppPrelaunchBackgroundTask,_tip_AppPrelaunchBackgroundTask>::merged_data<_tip_AppPrelaunchBackgroundTask,_tip_AppPrelaunchBackgroundTask>(
        __int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  tip2::details::shared_data<1,0,0>::shared_data<1,0,0>(a1 + 8, a1);
  _tip_AppPrelaunchBackgroundTask::_tip_AppPrelaunchBackgroundTask((_tip_AppPrelaunchBackgroundTask *)(a1 + 256));
  *(_DWORD *)(a1 + 312) = 1;
  *(_QWORD *)(a1 + 264) = a1 + 16;
  result = a1;
  *(_QWORD *)a1 = &tip2::details::merged_data<_tip_AppPrelaunchBackgroundTask,_tip_AppPrelaunchBackgroundTask>::`vftable';
  return result;
}
