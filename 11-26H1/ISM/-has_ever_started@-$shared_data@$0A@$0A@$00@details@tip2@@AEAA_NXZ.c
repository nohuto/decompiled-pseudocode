/*
 * XREFs of ?has_ever_started@?$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ @ 0x18010A7F4
 * Callers:
 *     ?start@?$tip_test@V?$merged_data@U_tip_GamepadInterceptionUsageTipTest_attributes@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x18010B2A4 (-start@-$tip_test@V-$merged_data@U_tip_GamepadInterceptionUsageTipTest_attributes@@Vtest_data_ba.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_HapticMouseAttachedTipTest_attributes@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x180192018 (-start@-$tip_test@V-$merged_data@U_tip_HapticMouseAttachedTipTest_attributes@@Vtest_data_basic@t.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_HapticPenAttachedTipTest_attributes@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x1801920C0 (-start@-$tip_test@V-$merged_data@U_tip_HapticPenAttachedTipTest_attributes@@Vtest_data_basic@tip.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_HapticTouchpadAttachedTipTest_attributes@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x180192168 (-start@-$tip_test@V-$merged_data@U_tip_HapticTouchpadAttachedTipTest_attributes@@Vtest_data_basi.c)
 * Callees:
 *     <none>
 */

char __fastcall tip2::details::shared_data<0,0,1>::has_ever_started(__int64 a1)
{
  char result; // al

  result = 0;
  if ( *(_QWORD *)(a1 + 240) || (*(_DWORD *)(a1 + 64) & 0x100) != 0 )
    return 1;
  return result;
}
