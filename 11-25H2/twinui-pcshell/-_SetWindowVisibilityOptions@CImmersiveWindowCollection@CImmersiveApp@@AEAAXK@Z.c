/*
 * XREFs of ?_SetWindowVisibilityOptions@CImmersiveWindowCollection@CImmersiveApp@@AEAAXK@Z @ 0x1801381B4
 * Callers:
 *     ?HideVisibleAppWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4PROCESS_HIDE_OPTION_HOW@2@@Z @ 0x1801380CC (-HideVisibleAppWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4PROCESS_HIDE_OPTION_HOW@2.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CImmersiveApp::CImmersiveWindowCollection::_SetWindowVisibilityOptions(
        CImmersiveApp::CImmersiveWindowCollection *this,
        __int64 a2)
{
  if ( *((_QWORD *)this + 21) )
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(***((_QWORD ***)this + 20) + 136LL))(
      **((_QWORD **)this + 20),
      a2,
      (unsigned int)a2);
}
