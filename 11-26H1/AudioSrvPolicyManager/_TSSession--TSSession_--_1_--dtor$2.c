/*
 * XREFs of _TSSession::TSSession_::_1_::dtor$2 @ 0x18004D885
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TSSession::TSSession_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return std::forward_list<wil::com_ptr_t<CProcess,wil::err_returncode_policy>>::~forward_list<wil::com_ptr_t<CProcess,wil::err_returncode_policy>>(*(_QWORD *)(a2 + 48) + 40LL);
}
