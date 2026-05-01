/*
 * XREFs of ??0?$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@QEAA@PEAU_GUID@@@Z @ 0x180288EF0
 * Callers:
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x180288E38 (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@detai.c)
 *     ??$open@V?$tip_test@V?$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?AV?$tip_test@V?$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@@0@XZ @ 0x180621964 (--$open@V-$tip_test@V-$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@@tip2@@@.c)
 * Callees:
 *     ?open_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@IEAAXPEAU_GUID@@@Z @ 0x180289A9C (-open_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@IEAAXPEAU_GUID@@@Z.c)
 *     ??0?$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z @ 0x18028A4F4 (--0-$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>(
        __int64 a1,
        __int64 a2)
{
  __int128 v5; // [rsp+20h] [rbp-60h]
  _OWORD v6[3]; // [rsp+50h] [rbp-30h] BYREF

  *(_QWORD *)&v5 = 0x4015028D7C74LL;
  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  *((_QWORD *)&v5 + 1) = "RecoverRemoteSessionTipTest";
  v6[0] = v5;
  v6[1] = 0x201uLL;
  v6[2] = 0uLL;
  tip2::details::shared_data<1,0,0>::shared_data<1,0,0>(a1 + 8, a1, v6);
  *(_OWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 288) = 7LL;
  *(_QWORD *)(a1 + 280) = 0LL;
  *(_WORD *)(a1 + 264) = 0;
  *(_OWORD *)(a1 + 296) = 0LL;
  *(_QWORD *)(a1 + 320) = 7LL;
  *(_QWORD *)(a1 + 312) = 0LL;
  *(_WORD *)(a1 + 296) = 0;
  *(_QWORD *)(a1 + 328) = 0LL;
  *(_QWORD *)(a1 + 336) = 0LL;
  *(_QWORD *)(a1 + 344) = 0LL;
  *(_QWORD *)(a1 + 352) = 0LL;
  *(_BYTE *)(a1 + 360) = 1;
  *(_QWORD *)a1 = &tip2::details::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>::`vftable';
  *(_QWORD *)(a1 + 256) = a1 + 16;
  *(_DWORD *)(a1 + 368) = 1;
  tip2::details::shared_data<1,0,0>::open_without_lock(a1 + 8, a2);
  return a1;
}
