/*
 * XREFs of ?ValidateActivation@CTaskWindow@@UEAA_NXZ @ 0x180302460
 * Callers:
 *     <none>
 * Callees:
 *     ?_Invoke@CTaskWindow@@AEAAJW4WINDOW_ACTION_TYPE@1@@Z @ 0x180302490 (-_Invoke@CTaskWindow@@AEAAJW4WINDOW_ACTION_TYPE@1@@Z.c)
 */

char __fastcall CTaskWindow::ValidateActivation(CTaskWindow *this)
{
  char *v1; // rcx
  char v2; // bl

  v1 = (char *)this - 8;
  v2 = 0;
  if ( (v1[68] & 4) == 0 )
    return (int)CTaskWindow::_Invoke(v1, 2LL) >= 0;
  return v2;
}
