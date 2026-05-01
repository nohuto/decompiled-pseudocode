/*
 * XREFs of ??1?$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@QEAA@XZ @ 0x18022EAC8
 * Callers:
 *     _wil::MakeAndInitializeOrThrow_CCommonApplicationViewPosition_Geometry::CRect_&__::_1_::dtor$0 @ 0x1806C9C3B (_wil--MakeAndInitializeOrThrow_CCommonApplicationViewPosition_Geometry--CRect_-__--_1_--dtor$0.c)
 *     _KioskPositioner::SetUwpViewFullScreen_::_1_::dtor$0 @ 0x1806CA34B (_KioskPositioner--SetUwpViewFullScreen_--_1_--dtor$0.c)
 *     _GamingPosturePositioner::SetUwpViewFullScreen_::_1_::dtor$0 @ 0x1806CAD4A (_GamingPosturePositioner--SetUwpViewFullScreen_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CCommonApplicationViewPosition>::~ComPtr<CCommonApplicationViewPosition>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<CCommonApplicationViewPosition>::InternalRelease(a1);
}
