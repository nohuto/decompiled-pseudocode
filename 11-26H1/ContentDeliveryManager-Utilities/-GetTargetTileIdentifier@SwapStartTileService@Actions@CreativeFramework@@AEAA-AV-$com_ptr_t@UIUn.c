/*
 * XREFs of ?GetTargetTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180097488
 * Callers:
 *     ?SwapStartTiles@SwapStartTileService@Actions@CreativeFramework@@AEAAXXZ @ 0x1800985C4 (-SwapStartTiles@SwapStartTileService@Actions@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     ?CreatePackagedUnifiedTileIdentifier@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEB_W0@Z @ 0x1800961F8 (-CreatePackagedUnifiedTileIdentifier@Actions@CreativeFramework@@YA-AV-$com_ptr_t@UIUnifiedTileId.c)
 *     ?CreatePackagedUnifiedTileIdentifier@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEB_W@Z @ 0x180096328 (-CreatePackagedUnifiedTileIdentifier@Actions@CreativeFramework@@YA-AV-$com_ptr_t@UI_ea_180096328.c)
 *     ?DeserializeUnifiedTileIdentifier@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@AEBQEB_W@Z @ 0x180096614 (-DeserializeUnifiedTileIdentifier@Actions@CreativeFramework@@YA-AV-$com_ptr_t@UIUnifiedTileIdent.c)
 */

WCHAR *__fastcall CreativeFramework::Actions::SwapStartTileService::GetTargetTileIdentifier(
        const WCHAR *a1,
        WCHAR *a2,
        unsigned int a3)
{
  const WCHAR *v4; // rcx
  const WCHAR *v5; // rdx
  const WCHAR *v6; // r8
  const WCHAR *v7; // rdx
  const WCHAR *v9; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_QWORD *)a1 + 7) )
  {
    v4 = a1 + 20;
    if ( *((_QWORD *)v4 + 3) >= 8uLL )
      v4 = *(const WCHAR **)v4;
    v9 = v4;
    CreativeFramework::Actions::DeserializeUnifiedTileIdentifier(a2, &v9, a3);
  }
  else if ( *((_QWORD *)a1 + 11) )
  {
    v5 = a1 + 36;
    if ( *((_QWORD *)a1 + 12) >= 8uLL )
      v5 = *(const WCHAR **)v5;
    CreativeFramework::Actions::CreatePackagedUnifiedTileIdentifier(a2, v5, a3);
  }
  else
  {
    v6 = a1 + 68;
    if ( *((_QWORD *)a1 + 20) >= 8uLL )
      v6 = *(const WCHAR **)v6;
    v7 = a1 + 52;
    if ( *((_QWORD *)a1 + 16) >= 8uLL )
      v7 = *(const WCHAR **)v7;
    CreativeFramework::Actions::CreatePackagedUnifiedTileIdentifier(a2, v7, v6);
  }
  return a2;
}
