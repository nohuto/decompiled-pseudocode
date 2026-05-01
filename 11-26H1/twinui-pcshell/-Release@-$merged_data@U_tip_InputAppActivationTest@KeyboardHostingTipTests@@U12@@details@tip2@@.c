/*
 * XREFs of ?Release@?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@AEAAKXZ @ 0x18046FB80
 * Callers:
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1802A2934 (-reset@-$com_ptr_t@V-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@det.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1802A33C4 (-ensure_data@-$tip_test@V-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802B7310 (--1-$com_ptr_t@V-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details.c)
 * Callees:
 *     ??1?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@QEAA@XZ @ 0x1804689E8 (--1-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@QEAA@X.c)
 */

__int64 __fastcall tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 74);
  if ( !v2 )
  {
    tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>::~merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>(pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
