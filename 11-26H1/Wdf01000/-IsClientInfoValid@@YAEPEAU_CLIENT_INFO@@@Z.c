/*
 * XREFs of ?IsClientInfoValid@@YAEPEAU_CLIENT_INFO@@@Z @ 0x14008E770
 * Callers:
 *     FxLibraryCommonRegisterClient @ 0x140077428 (FxLibraryCommonRegisterClient.c)
 *     FxLibraryIsV35DriverAllowed @ 0x14008E520 (FxLibraryIsV35DriverAllowed.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsClientInfoValid(_CLIENT_INFO *ClientInfo)
{
  _UNICODE_STRING *RegistryPath; // rax

  return ClientInfo
      && ClientInfo->Size == 24
      && ClientInfo->DriverObject
      && (RegistryPath = ClientInfo->RegistryPath) != 0LL
      && RegistryPath->Length
      && RegistryPath->Buffer != 0LL;
}
