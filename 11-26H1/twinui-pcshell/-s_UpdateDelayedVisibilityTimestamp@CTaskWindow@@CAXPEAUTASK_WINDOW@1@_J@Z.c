/*
 * XREFs of ?s_UpdateDelayedVisibilityTimestamp@CTaskWindow@@CAXPEAUTASK_WINDOW@1@_J@Z @ 0x1803027E0
 * Callers:
 *     ?SendVisibilityChanged@CTaskWindow@@UEAAX_J@Z @ 0x1803021B0 (-SendVisibilityChanged@CTaskWindow@@UEAAX_J@Z.c)
 *     ?s_SetWindowCloak@CTaskWindow@@CAJPEBUWINDOW_ACTION_DATA@1@@Z @ 0x1803026B0 (-s_SetWindowCloak@CTaskWindow@@CAJPEBUWINDOW_ACTION_DATA@1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTaskWindow::s_UpdateDelayedVisibilityTimestamp(struct CTaskWindow::TASK_WINDOW *a1, char a2)
{
  if ( (a2 & 2) != 0 )
    QueryUnbiasedInterruptTime((PULONGLONG)a1 + 9);
  else
    *((_QWORD *)a1 + 9) = 0LL;
  *((_BYTE *)a1 + 80) = a2 & 1;
}
