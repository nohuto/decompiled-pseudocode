/*
 * XREFs of _CWindowSnapshot::Create_::_2_::_lambda_1_::operator() @ 0x18003465C
 * Callers:
 *     wil::details::lambda_call__CWindowSnapshot::Create_::_2_::_lambda_1___::_lambda_call__CWindowSnapshot::Create_::_2_::_lambda_1___ @ 0x18003414C (wil--details--lambda_call__CWindowSnapshot--Create_--_2_--_lambda_1___--_lambda_call__CWindowSna.c)
 *     ?Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z @ 0x18003457C (-Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CWindowSnapshot::Create_::_2_::_lambda_1_::operator()(CTopLevelWindow ***a1)
{
  CTopLevelWindow::OnSnapshotCompleted(**a1);
}
