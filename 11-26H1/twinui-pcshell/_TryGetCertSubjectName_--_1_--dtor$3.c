/*
 * XREFs of _TryGetCertSubjectName_::_1_::dtor$3 @ 0x1806F4EA9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 TryGetCertSubjectName_::_1_::dtor_3()
{
  return wil::unique_any_t<wil::cert_context_t>::~unique_any_t<wil::cert_context_t>();
}
