/*
 * XREFs of ??0?$test_data_control@V?$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@IEAA@AEBV?$com_ptr_t@V?$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1802800AC
 * Callers:
 *     ?AdvanceGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJ_K@Z @ 0x18016C5A0 (-AdvanceGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJ_K@Z.c)
 *     _lambda_017e4516d3db66192a06ba57bc482270_::operator() @ 0x180222078 (_lambda_017e4516d3db66192a06ba57bc482270_--operator().c)
 *     ??C?$tip_test@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@1@XZ @ 0x18027FB80 (--C-$tip_test@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_.c)
 *     ?data@?$tip_test@V?$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@U12@@details@tip2@@@2@XZ @ 0x1804694D0 (-data@-$tip_test@V-$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTip.c)
 * Callees:
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802816D8 (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 */

__int64 *__fastcall tip2::test_data_control<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2,KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2>>::test_data_control<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2,KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // rax

  v2 = *a2;
  *a1 = *a2;
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 296));
  tip2::details::shared_data<1,0,0>::begin_update(*a1 + 8);
  return a1;
}
