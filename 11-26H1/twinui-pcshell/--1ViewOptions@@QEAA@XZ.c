/*
 * XREFs of ??1ViewOptions@@QEAA@XZ @ 0x1801AE1CC
 * Callers:
 *     _KeyboardHosting::TabTipAdapter::OnInputAppRequestedShow_::_1_::dtor$4 @ 0x1806CD319 (_KeyboardHosting--TabTipAdapter--OnInputAppRequestedShow_--_1_--dtor$4.c)
 *     _GetViewOptions_::_1_::dtor$1 @ 0x1806CD3A9 (_GetViewOptions_--_1_--dtor$1.c)
 *     _KeyboardHosting::TabTipAdapter::InvokeInputAppRequestedShow_::_1_::dtor$0 @ 0x1806CD4BE (_KeyboardHosting--TabTipAdapter--InvokeInputAppRequestedShow_--_1_--dtor$0.c)
 *     _TouchKeyboardExperienceManager::OnInputAppRequestedShow_::_1_::dtor$0 @ 0x1806DA498 (_TouchKeyboardExperienceManager--OnInputAppRequestedShow_--_1_--dtor$0.c)
 *     _TouchKeyboardExperienceManager::Show_::_1_::dtor$3 @ 0x1806DA5EB (_TouchKeyboardExperienceManager--Show_--_1_--dtor$3.c)
 *     _KeyboardHosting::TabTipAdapter::OnPrimaryViewShowingResponse_::_1_::dtor$1 @ 0x1806EF3CE (_KeyboardHosting--TabTipAdapter--OnPrimaryViewShowingResponse_--_1_--dtor$1.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall ViewOptions::~ViewOptions(ViewOptions *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 4);
  if ( v2 )
  {
    std::_Deallocate<16>(v2, (*((_QWORD *)this + 6) - v2) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
  }
}
