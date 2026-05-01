/*
 * XREFs of ??1GamingApplicationViewCollection@@QEAA@XZ @ 0x1802C1CD4
 * Callers:
 *     _GamingPosturePositioner::GamingPosturePositioner_::_1_::dtor$17 @ 0x1806F25A1 (_GamingPosturePositioner--GamingPosturePositioner_--_1_--dtor$17.c)
 *     _GamingPosturePositioner::GamingPosturePositioner_::_1_::dtor$18 @ 0x1806F25BA (_GamingPosturePositioner--GamingPosturePositioner_--_1_--dtor$18.c)
 *     _GamingPosturePositioner::GetSecondaryView_::_1_::dtor$1 @ 0x1806F2BF9 (_GamingPosturePositioner--GetSecondaryView_--_1_--dtor$1.c)
 *     _GamingPosturePositioner::TryGetTopTwoApplicationViews_::_1_::dtor$0 @ 0x1806F32FA (_GamingPosturePositioner--TryGetTopTwoApplicationViews_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall GamingApplicationViewCollection::~GamingApplicationViewCollection(
        GamingApplicationViewCollection *this)
{
  std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::_Tidy(this);
}
