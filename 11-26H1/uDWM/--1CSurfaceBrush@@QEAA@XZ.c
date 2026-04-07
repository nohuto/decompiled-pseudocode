/*
 * XREFs of ??1CSurfaceBrush@@QEAA@XZ @ 0x18008DFAC
 * Callers:
 *     _winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::DrawBackground_::_1_::dtor$2 @ 0x1800E94CC (_winrt--Udwm--Transitions--Private--implementation--ScreenRotationTransition--DrawB_ea_1800E94CC.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CSurfaceBrush::~CSurfaceBrush(__int64 *this)
{
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(this);
}
