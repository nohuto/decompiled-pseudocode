/*
 * XREFs of ??1ThreadErrorContext@wil@@QEAA@XZ @ 0x1801F11F0
 * Callers:
 *     _CDesktopPositioner::_GetRestorePosition_::_1_::dtor$6 @ 0x1806DA60F (_CDesktopPositioner--_GetRestorePosition_--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::ThreadErrorContext::~ThreadErrorContext(wil::ThreadErrorContext *this)
{
  if ( *(_QWORD *)this )
    *(_DWORD *)(*(_QWORD *)this + 16LL) = *((_DWORD *)this + 3);
}
