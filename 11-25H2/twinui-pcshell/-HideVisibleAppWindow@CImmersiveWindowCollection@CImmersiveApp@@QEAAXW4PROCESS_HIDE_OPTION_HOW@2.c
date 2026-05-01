/*
 * XREFs of ?HideVisibleAppWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4PROCESS_HIDE_OPTION_HOW@2@@Z @ 0x1801380CC
 * Callers:
 *     ?_HideApplication@CImmersiveApp@@AEAA?AW4HIDE_WINDOW_RESULT@1@W4PROCESS_HIDE_OPTION_HOW@1@@Z @ 0x180137CCC (-_HideApplication@CImmersiveApp@@AEAA-AW4HIDE_WINDOW_RESULT@1@W4PROCESS_HIDE_OPTION_HOW@1@@Z.c)
 * Callees:
 *     ?HideFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x180138148 (-HideFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?_SetWindowVisibilityOptions@CImmersiveWindowCollection@CImmersiveApp@@AEAAXK@Z @ 0x1801381B4 (-_SetWindowVisibilityOptions@CImmersiveWindowCollection@CImmersiveApp@@AEAAXK@Z.c)
 *     ?SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z @ 0x1803040CC (-SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::HideVisibleAppWindow(__int64 a1, unsigned int a2)
{
  unsigned int v2; // eax
  __int64 result; // rax
  HWND v5; // rdx

  v2 = a2;
  if ( a2 )
  {
    a2 = 2;
    if ( v2 == 2 )
      a2 = 10;
  }
  CImmersiveApp::CImmersiveWindowCollection::_SetWindowVisibilityOptions(
    (CImmersiveApp::CImmersiveWindowCollection *)a1,
    a2);
  *(_BYTE *)(a1 + 192) = 0;
  result = CImmersiveApp::CImmersiveWindowCollection::HideFrame((CImmersiveApp::CImmersiveWindowCollection *)a1);
  if ( *(_QWORD *)(a1 + 168) )
    result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(***(_QWORD ***)(a1 + 160) + 136LL))(
               **(_QWORD **)(a1 + 160),
               0LL,
               0LL);
  v5 = *(HWND *)(a1 + 128);
  if ( v5 )
    return CImmersiveApp::CImmersiveWindowCollection::SetApplicationWindow(
             (CImmersiveApp::CImmersiveWindowCollection *)a1,
             v5);
  return result;
}
