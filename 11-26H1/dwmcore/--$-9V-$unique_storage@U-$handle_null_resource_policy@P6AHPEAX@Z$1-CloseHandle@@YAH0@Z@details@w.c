/*
 * XREFs of ??$?9V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@YA_NAEBV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@0@$$T@Z @ 0x18018F3C4
 * Callers:
 *     ?InternalUpdateDXGIFactory@CDisplayManager@@AEAAJXZ @ 0x1802130E4 (-InternalUpdateDXGIFactory@CDisplayManager@@AEAAJXZ.c)
 *     ?Stop@CKstBase@@QEAAXXZ @ 0x1802950BC (-Stop@CKstBase@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall wil::operator!=<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(
        _QWORD *a1)
{
  char result; // al

  result = 0;
  if ( *a1 )
  {
    if ( *a1 != -1LL )
      return 1;
  }
  return result;
}
