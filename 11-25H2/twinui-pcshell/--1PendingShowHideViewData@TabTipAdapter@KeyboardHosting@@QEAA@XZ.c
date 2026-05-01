/*
 * XREFs of ??1PendingShowHideViewData@TabTipAdapter@KeyboardHosting@@QEAA@XZ @ 0x18046B3D0
 * Callers:
 *     _KeyboardHosting::TabTipAdapter::OnInputAppRequestedShow_::_1_::dtor$8 @ 0x1806A9B27 (_KeyboardHosting--TabTipAdapter--OnInputAppRequestedShow_--_1_--dtor$8.c)
 *     _KeyboardHosting::TabTipAdapter::OnInputAppRequestedHide_::_1_::dtor$4 @ 0x1806AEF13 (_KeyboardHosting--TabTipAdapter--OnInputAppRequestedHide_--_1_--dtor$4.c)
 *     _KeyboardHosting::TabTipAdapter::OnPrimaryViewHidingResponse_::_1_::dtor$0 @ 0x1806C74F0 (_KeyboardHosting--TabTipAdapter--OnPrimaryViewHidingResponse_--_1_--dtor$0.c)
 *     _KeyboardHosting::TabTipAdapter::OnPrimaryViewShowingResponse_::_1_::dtor$0 @ 0x1806C7502 (_KeyboardHosting--TabTipAdapter--OnPrimaryViewShowingResponse_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall KeyboardHosting::TabTipAdapter::PendingShowHideViewData::~PendingShowHideViewData(
        KeyboardHosting::TabTipAdapter::PendingShowHideViewData *this)
{
  std::vector<Geometry::CRect>::_Tidy((__int64)this + 104);
}
