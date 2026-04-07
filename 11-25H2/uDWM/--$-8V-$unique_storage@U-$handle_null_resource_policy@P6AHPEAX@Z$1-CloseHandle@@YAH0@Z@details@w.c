/*
 * XREFs of ??$?8V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@YA_N$$TAEBV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@0@@Z @ 0x18006EBFC
 * Callers:
 *     ?CaptureDesktop@CWindowList@@UEAAJHHHH_KW4DXGI_FORMAT@@PEAPEAX@Z @ 0x18006E940 (-CaptureDesktop@CWindowList@@UEAAJHHHH_KW4DXGI_FORMAT@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall wil::operator==<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(
        __int64 a1,
        _QWORD *a2)
{
  return (unsigned __int64)(*a2 - 1LL) > 0xFFFFFFFFFFFFFFFDuLL;
}
