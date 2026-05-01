/*
 * XREFs of ?_Destroy@?$_Ref_count_resource@PEAVFlyoutView@@U?$default_delete@VFlyoutView@@@std@@@std@@EEAAXXZ @ 0x1805F8050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Ref_count_resource<FlyoutView *,std::default_delete<FlyoutView>>::_Destroy(__int64 a1)
{
  return std::default_delete<SnapLayoutBase>::operator()(a1, *(__int64 (__fastcall ****)(_QWORD, __int64))(a1 + 16));
}
