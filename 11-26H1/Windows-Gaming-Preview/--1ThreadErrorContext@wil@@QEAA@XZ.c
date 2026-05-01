/*
 * XREFs of ??1ThreadErrorContext@wil@@QEAA@XZ @ 0x18000D448
 * Callers:
 *     _Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_Start_::_1_::dtor$42 @ 0x180043B66 (_Windows--Gaming--Preview--GamesEnumeration--FindAllOperation--_Start_--_1_--dtor$42.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::ThreadErrorContext::~ThreadErrorContext(wil::ThreadErrorContext *this)
{
  if ( *(_QWORD *)this )
    *(_DWORD *)(*(_QWORD *)this + 16LL) = *((_DWORD *)this + 3);
}
