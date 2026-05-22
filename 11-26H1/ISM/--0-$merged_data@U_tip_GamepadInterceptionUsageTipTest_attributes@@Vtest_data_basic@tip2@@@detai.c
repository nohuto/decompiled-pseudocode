/*
 * XREFs of ??0?$merged_data@U_tip_GamepadInterceptionUsageTipTest_attributes@@Vtest_data_basic@tip2@@@details@tip2@@QEAA@XZ @ 0x180109504
 * Callers:
 *     ?start@?$tip_test@V?$merged_data@U_tip_GamepadInterceptionUsageTipTest_attributes@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x18010B2A4 (-start@-$tip_test@V-$merged_data@U_tip_GamepadInterceptionUsageTipTest_attributes@@Vtest_data_ba.c)
 * Callees:
 *     ??0?$shared_data@$0A@$0A@$00@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z @ 0x180109664 (--0-$shared_data@$0A@$0A@$00@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_GamepadInterceptionUsageTipTest_attributes,tip2::test_data_basic>::merged_data<_tip_GamepadInterceptionUsageTipTest_attributes,tip2::test_data_basic>(
        __int64 a1)
{
  __int64 result; // rax
  __int128 v3; // [rsp+20h] [rbp-60h]
  _OWORD v4[3]; // [rsp+50h] [rbp-30h] BYREF

  *(_QWORD *)&v3 = 0x2C10002FD54E7LL;
  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Devices::Lights::Internal::AmbientManager *,Windows::Devices::Lights::Internal::AmbientDeviceMappingChangedEventArgs *>::`vftable';
  *((_QWORD *)&v3 + 1) = "GamepadInterceptionUsageTipTest";
  v4[0] = v3;
  v4[1] = 1uLL;
  v4[2] = 0uLL;
  tip2::details::shared_data<0,0,1>::shared_data<0,0,1>(a1 + 8, a1, v4);
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)a1 = &tip2::details::merged_data<_tip_HapticMouseAttachedTipTest_attributes,tip2::test_data_basic>::`vftable';
  *(_QWORD *)(a1 + 256) = a1 + 16;
  result = a1;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_QWORD *)(a1 + 280) = 0LL;
  *(_QWORD *)(a1 + 288) = 0LL;
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_QWORD *)(a1 + 312) = 0LL;
  *(_QWORD *)(a1 + 320) = 0LL;
  *(_QWORD *)(a1 + 328) = 0LL;
  *(_DWORD *)(a1 + 336) = 1;
  return result;
}
