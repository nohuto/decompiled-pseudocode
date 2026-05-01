/*
 * XREFs of ??1?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@QEAA@XZ @ 0x18028A868
 * Callers:
 *     ?Release@?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@AEAAKXZ @ 0x18028A748 (-Release@-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@AEAAKXZ.c)
 * Callees:
 *     ?on_destroy@?$shared_data@$0A@$0A@$0A@@details@tip2@@IEAAXXZ @ 0x18028A898 (-on_destroy@-$shared_data@$0A@$0A@$0A@@details@tip2@@IEAAXXZ.c)
 */

__int64 __fastcall tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>::~merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>(
        _QWORD *a1)
{
  _QWORD *v1; // rbx

  v1 = a1 + 1;
  *a1 = &tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>::`vftable';
  tip2::details::shared_data<0,0,0>::on_destroy(a1 + 1);
  return tip2::details::shared_data<0,0,1>::~shared_data<0,0,1>(v1);
}
