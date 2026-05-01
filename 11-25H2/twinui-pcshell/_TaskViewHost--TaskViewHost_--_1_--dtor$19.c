/*
 * XREFs of _TaskViewHost::TaskViewHost_::_1_::dtor$19 @ 0x1806DE0A4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TaskViewHost::TaskViewHost_::_1_::dtor_19(__int64 a1, __int64 a2)
{
  std::vector<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>::_Tidy(*(_QWORD *)(a2 + 64) + 320LL);
}
