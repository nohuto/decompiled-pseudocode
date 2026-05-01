/*
 * XREFs of ?Dismiss@TouchEdgeGripperWindow@@QEAAX_N@Z @ 0x180576898
 * Callers:
 *     TouchEdgeGripperHost::DismissGripperWindowAsync$_ResumeCoro$1 @ 0x180572590 (TouchEdgeGripperHost--DismissGripperWindowAsync$_ResumeCoro$1.c)
 * Callees:
 *     <none>
 */

void __fastcall TouchEdgeGripperWindow::Dismiss(TouchEdgeGripperWindow *this, char a2)
{
  if ( a2 && *((_QWORD *)this + 15) )
    TouchEdgeGripperWindow::StartDismissAnimation(this);
  else
    TouchEdgeGripperWindow::DestroyXamlWindow(this);
}
