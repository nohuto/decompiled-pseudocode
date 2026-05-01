/*
 * XREFs of ??0?$test_data_control@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@IEAA@AEBV?$com_ptr_t@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1802BDC48
 * Callers:
 *     ??C?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@1@XZ @ 0x1802BDC1C (--C-$tip_test@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip.c)
 *     __lambda_bef5e417c8b7d926babf502a16e6c1c1_::operator()_::_1_::catch$3 @ 0x1806D5E05 (__lambda_bef5e417c8b7d926babf502a16e6c1c1_--operator()_--_1_--catch$3.c)
 *     __lambda_e444c801a41511fb3819c6a1e051bb24_::operator()_::_1_::catch$3 @ 0x1806D5E76 (__lambda_e444c801a41511fb3819c6a1e051bb24_--operator()_--_1_--catch$3.c)
 *     __lambda_e9273f30aaf408505b3f0162e09ecc61_::operator()_::_1_::catch$4 @ 0x1806D5EF9 (__lambda_e9273f30aaf408505b3f0162e09ecc61_--operator()_--_1_--catch$4.c)
 * Callees:
 *     ?begin_update@?$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ @ 0x18028A668 (-begin_update@-$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ.c)
 */

__int64 *__fastcall tip2::test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // rax

  v2 = *a2;
  *a1 = *a2;
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 1328));
  tip2::details::shared_data<0,0,1>::begin_update(*a1 + 8);
  return a1;
}
