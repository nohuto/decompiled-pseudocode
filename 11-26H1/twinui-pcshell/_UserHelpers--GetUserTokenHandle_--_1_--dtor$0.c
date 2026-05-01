/*
 * XREFs of _UserHelpers::GetUserTokenHandle_::_1_::dtor$0 @ 0x1806E7FCB
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x1800C1DD0 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 */

BOOL __fastcall UserHelpers::GetUserTokenHandle_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  BOOL result; // eax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(*(void ***)(a2 + 64));
  }
  return result;
}
