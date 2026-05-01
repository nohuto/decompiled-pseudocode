/*
 * XREFs of ?_AreStringsEqual@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@CA_NAEBVHString@Wrappers@WRL@Microsoft@@0_N@Z @ 0x1800300EC
 * Callers:
 *     ?_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x180030178 (-_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@.c)
 *     ?_SetTitleIdInternal@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180034F50 (-_SetTitleIdInternal@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJVHString@.c)
 * Callees:
 *     <none>
 */

bool __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_AreStringsEqual(
        HSTRING *a1,
        HSTRING *a2,
        unsigned __int8 a3)
{
  HSTRING v3; // rcx
  int bIgnoreCase; // esi
  PCWSTR StringRawBuffer; // rax
  HSTRING v7; // rcx
  const WCHAR *v8; // rdi
  const WCHAR *v9; // rax
  int cchCount1; // [rsp+40h] [rbp+8h] BYREF
  UINT32 length; // [rsp+50h] [rbp+18h] BYREF

  v3 = *a1;
  bIgnoreCase = a3;
  cchCount1 = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(v3, (UINT32 *)&cchCount1);
  v7 = *a2;
  v8 = StringRawBuffer;
  length = 0;
  v9 = WindowsGetStringRawBuffer(v7, &length);
  return CompareStringOrdinal(v8, cchCount1, v9, length, bIgnoreCase) == 2;
}
