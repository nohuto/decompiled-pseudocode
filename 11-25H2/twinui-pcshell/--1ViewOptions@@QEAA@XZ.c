/*
 * XREFs of ??1ViewOptions@@QEAA@XZ @ 0x180029B0C
 * Callers:
 *     _KeyboardHosting::TabTipAdapter::OnInputAppRequestedShow_::_1_::dtor$4 @ 0x1806A9B15 (_KeyboardHosting--TabTipAdapter--OnInputAppRequestedShow_--_1_--dtor$4.c)
 *     _GetViewOptions_::_1_::dtor$1 @ 0x1806A9BFF (_GetViewOptions_--_1_--dtor$1.c)
 *     _KeyboardHosting::TabTipAdapter::InvokeInputAppRequestedShow_::_1_::dtor$0 @ 0x1806A9CBA (_KeyboardHosting--TabTipAdapter--InvokeInputAppRequestedShow_--_1_--dtor$0.c)
 *     _TouchKeyboardExperienceManager::OnInputAppRequestedShow_::_1_::dtor$0 @ 0x1806B318E (_TouchKeyboardExperienceManager--OnInputAppRequestedShow_--_1_--dtor$0.c)
 *     _TouchKeyboardExperienceManager::Show_::_1_::dtor$3 @ 0x1806B31C4 (_TouchKeyboardExperienceManager--Show_--_1_--dtor$3.c)
 *     _KeyboardHosting::TabTipAdapter::OnPrimaryViewShowingResponse_::_1_::dtor$1 @ 0x1806C7514 (_KeyboardHosting--TabTipAdapter--OnPrimaryViewShowingResponse_--_1_--dtor$1.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall ViewOptions::~ViewOptions(ViewOptions *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 4);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (*((_QWORD *)this + 6) - v2) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
  }
}
