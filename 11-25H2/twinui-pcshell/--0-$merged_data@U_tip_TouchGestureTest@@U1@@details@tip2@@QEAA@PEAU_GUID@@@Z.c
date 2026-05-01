/*
 * XREFs of ??0?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@QEAA@PEAU_GUID@@@Z @ 0x18056C824
 * Callers:
 *     ??$open@V?$tip_test@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?AV?$tip_test@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@0@XZ @ 0x18056C3B8 (--$open@V-$tip_test@V-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@@tip2@@YA-AV.c)
 * Callees:
 *     ?open_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@IEAAXPEAU_GUID@@@Z @ 0x180289A9C (-open_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@IEAAXPEAU_GUID@@@Z.c)
 *     ??0?$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z @ 0x18028A4F4 (--0-$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // r8

  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  tip2::details::shared_data<1,0,0>::shared_data<1,0,0>(a1 + 8, a1);
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_WORD *)(a1 + 272) = 0;
  *(_BYTE *)(a1 + 274) = 0;
  *(_QWORD *)(a1 + 276) = 0LL;
  *(_QWORD *)(a1 + 284) = 0LL;
  *(_QWORD *)(a1 + 292) = 0LL;
  *(_QWORD *)a1 = &tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>::`vftable';
  *(_QWORD *)(a1 + 256) = a1 + 16;
  *(_DWORD *)(a1 + 304) = 1;
  tip2::details::shared_data<1,0,0>::open_without_lock(a1 + 8, a2, v4);
  return a1;
}
