/*
 * XREFs of _PenInterface::PenInterface_::_1_::dtor$3 @ 0x1801DC728
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 PenInterface::PenInterface_::_1_::dtor_3()
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>();
}
