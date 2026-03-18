/*
 * XREFs of ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndShell@UtagWND@@@tagKERNELDESKTOPINFO@@PEAU_HEAD@@@Z @ 0x1402239DC
 * Callers:
 *     xxxSetShellWindow @ 0x14025E314 (xxxSetShellWindow.c)
 *     ?RegisterShell@@YA_NPEAUtagWND@@@Z @ 0x1402C20D0 (-RegisterShell@@YA_NPEAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall LockPointer(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  _QWORD *result; // rax

  v3 = *(_QWORD *)(a2 - 168);
  if ( a3 )
    *(_QWORD *)(v3 + 24) = *(_QWORD *)(a3 + 48);
  else
    *(_QWORD *)(v3 + 24) = 0LL;
  *a1 = a2;
  result = a1;
  a1[1] = a3;
  return result;
}
