/*
 * XREFs of ??1?$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B092C
 * Callers:
 *     _wil::MakeAndInitializeOrThrow_CCommonApplicationViewPosition_Geometry::CRect_&__::_1_::dtor$0 @ 0x1806F1B4A (_wil--MakeAndInitializeOrThrow_CCommonApplicationViewPosition_Geometry--CRect_-__--_1_--dtor$0.c)
 *     _KioskPositioner::SetUwpViewFullScreen_::_1_::dtor$0 @ 0x1806F220D (_KioskPositioner--SetUwpViewFullScreen_--_1_--dtor$0.c)
 *     _GamingPosturePositioner::SetUwpViewFullScreen_::_1_::dtor$2 @ 0x1806F3274 (_GamingPosturePositioner--SetUwpViewFullScreen_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 Microsoft::WRL::ComPtr<CCommonApplicationViewPosition>::~ComPtr<CCommonApplicationViewPosition>()
{
  return Microsoft::WRL::ComPtr<CCommonApplicationViewPosition>::InternalRelease();
}
