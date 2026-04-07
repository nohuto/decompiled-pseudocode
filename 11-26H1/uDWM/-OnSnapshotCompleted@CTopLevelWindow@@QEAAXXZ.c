/*
 * XREFs of ?OnSnapshotCompleted@CTopLevelWindow@@QEAAXXZ @ 0x180034FA8
 * Callers:
 *     _CWindowSnapshot::Create_::_2_::_lambda_1_::operator() @ 0x18003465C (_CWindowSnapshot--Create_--_2_--_lambda_1_--operator().c)
 * Callees:
 *     <none>
 */

void __fastcall CTopLevelWindow::OnSnapshotCompleted(CTopLevelWindow *this)
{
  *((_BYTE *)this + 185) &= ~0x40u;
}
