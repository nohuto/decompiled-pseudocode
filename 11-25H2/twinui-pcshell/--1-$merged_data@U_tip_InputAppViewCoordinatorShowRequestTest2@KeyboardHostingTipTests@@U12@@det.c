/*
 * XREFs of ??1?$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@U12@@details@tip2@@QEAA@XZ @ 0x18045C69C
 * Callers:
 *     ?Release@?$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@U12@@details@tip2@@AEAAKXZ @ 0x180463CF8 (-Release@-$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@U1.c)
 * Callees:
 *     ?on_destroy@?$shared_data@$00$0A@$0A@@details@tip2@@IEAAXXZ @ 0x180294FA0 (-on_destroy@-$shared_data@$00$0A@$0A@@details@tip2@@IEAAXXZ.c)
 */

void __fastcall tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2,KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2>::~merged_data<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2,KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2>(
        _QWORD *a1)
{
  __int64 v1; // rbx

  v1 = (__int64)(a1 + 1);
  *a1 = &tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2,KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2>::`vftable';
  tip2::details::shared_data<1,0,0>::on_destroy((__int64)(a1 + 1));
  tip2::details::shared_data<0,0,1>::~shared_data<0,0,1>(v1);
}
