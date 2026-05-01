/*
 * XREFs of __lambda_e9273f30aaf408505b3f0162e09ecc61_::operator()_::_1_::catch$4 @ 0x1806D5EF9
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$test_data_control@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@IEAA@AEBV?$com_ptr_t@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1802BDC48 (--0-$test_data_control@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@t.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802C92C4 (--1-$test_data_control@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@t.c)
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802E0170 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x1802E0404 (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

__int64 __fastcall _lambda_e9273f30aaf408505b3f0162e09ecc61_::operator()_::_1_::catch_4(wil *a1, __int64 a2)
{
  int v3; // ebx
  const char *v4; // r9

  v3 = wil::ResultFromCaughtException(a1);
  **(_DWORD **)(*(_QWORD *)(a2 + 56) + 24LL) = v3;
  tip2::test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>(
    (__int64 *)(a2 + 48),
    (__int64 *)(a2 + 112));
  *(_DWORD *)(*(_QWORD *)(a2 + 48) + 1320LL) = v3;
  tip2::test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>((volatile signed __int32 **)(a2 + 48));
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 136),
    (void *)0xDC,
    (int)"pcshell\\twinui\\PinManager\\lib\\PinManager.cpp",
    v4);
  return 0LL;
}
