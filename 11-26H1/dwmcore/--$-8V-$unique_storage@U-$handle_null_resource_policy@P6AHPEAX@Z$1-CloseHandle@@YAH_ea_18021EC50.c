/*
 * XREFs of ??$?8V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@YA_N$$TAEBV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@0@@Z @ 0x18021EC50
 * Callers:
 *     ?CreateTokenThread@CSurfaceManager@@IEAAJP6AKPEAX@ZPEBG@Z @ 0x180133FF8 (-CreateTokenThread@CSurfaceManager@@IEAAJP6AKPEAX@ZPEBG@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall wil::operator==<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(
        __int64 a1,
        _QWORD *a2)
{
  char result; // al

  result = 0;
  if ( !*a2 || *a2 == -1LL )
    return 1;
  return result;
}
