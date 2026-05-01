/*
 * XREFs of _TouchEdgeGripperWindow::CreateAnimation_::_1_::dtor$0 @ 0x1806F7F6D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TouchEdgeGripperWindow::CreateAnimation_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  winrt::handle_type<winrt::impl::hstring_traits>::close(*(volatile signed __int32 ***)(a2 + 192));
}
