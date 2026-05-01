/*
 * XREFs of ??1ThreadErrorContext@wil@@QEAA@XZ @ 0x1801FBC50
 * Callers:
 *     _CDesktopPositioner::_GetRestorePosition_::_1_::dtor$6 @ 0x1806B3236 (_CDesktopPositioner--_GetRestorePosition_--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::ThreadErrorContext::~ThreadErrorContext(wil::ThreadErrorContext *this)
{
  if ( *(_QWORD *)this )
    *(_DWORD *)(*(_QWORD *)this + 16LL) = *((_DWORD *)this + 3);
}
