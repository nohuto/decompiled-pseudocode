/*
 * XREFs of _Util::FileMappingHelpers::ReadBufferFromSharedMemory_::_1_::dtor$5 @ 0x1806DAEE8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall Util::FileMappingHelpers::ReadBufferFromSharedMemory_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)(a2 + 72));
}
