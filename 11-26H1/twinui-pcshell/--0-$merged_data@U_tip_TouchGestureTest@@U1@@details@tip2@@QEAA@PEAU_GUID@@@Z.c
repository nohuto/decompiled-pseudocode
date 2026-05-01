/*
 * XREFs of ??0?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@QEAA@PEAU_GUID@@@Z @ 0x180590610
 * Callers:
 *     ??$tip_make_shared_nothrow@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@AEAPEAU_GUID@@@details@tip2@@YA?AV?$com_ptr_t@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@AEAPEAU_GUID@@@Z @ 0x1805905C0 (--$tip_make_shared_nothrow@V-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@AEAPEAU_GUID.c)
 * Callees:
 *     ?open_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@IEAAXPEAU_GUID@@@Z @ 0x180281DD4 (-open_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@IEAAXPEAU_GUID@@@Z.c)
 *     ??0?$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z @ 0x180282EC4 (--0-$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // r8

  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  tip2::details::shared_data<1,0,0>::shared_data<1,0,0>(a1 + 8, a1);
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_WORD *)(a1 + 280) = 0;
  *(_BYTE *)(a1 + 282) = 0;
  *(_QWORD *)(a1 + 284) = 0LL;
  *(_QWORD *)(a1 + 292) = 0LL;
  *(_QWORD *)(a1 + 300) = 0LL;
  *(_QWORD *)a1 = &tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>::`vftable';
  *(_QWORD *)(a1 + 264) = a1 + 16;
  *(_DWORD *)(a1 + 312) = 1;
  tip2::details::shared_data<1,0,0>::open_without_lock(a1 + 8, a2, v4);
  return a1;
}
