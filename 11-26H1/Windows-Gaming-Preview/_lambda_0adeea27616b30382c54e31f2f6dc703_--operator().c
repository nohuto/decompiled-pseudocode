/*
 * XREFs of _lambda_0adeea27616b30382c54e31f2f6dc703_::operator() @ 0x1800262E4
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_0adeea27616b30382c54e31f2f6dc703__Windows::Internal::CNoResult_::Run @ 0x18002E7E0 (Windows--Internal--COperationLambdaVar_0__lambda_0adeea27616b30382c54e31f2f6dc703___ea_18002E7E0.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008DD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetGamesListProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAPEAUIGamesListInfo@Shim@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x180030D58 (-_GetGamesListProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAPE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_0adeea27616b30382c54e31f2f6dc703_::operator()(
        unsigned int *a1,
        struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo *a2)
{
  Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *v3; // rcx
  int GamesListProperties; // eax
  unsigned int v5; // edi
  struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo *v6; // rcx
  int v8; // eax
  struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo *v9; // rcx
  struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo *v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo *v12; // [rsp+38h] [rbp+10h] BYREF

  v12 = a2;
  v3 = *(Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer **)a1;
  if ( a1[4] != *((_DWORD *)v3 + 36) )
  {
    v12 = 0LL;
    GamesListProperties = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_GetGamesListProperties(
                            v3,
                            &v12);
    v5 = GamesListProperties;
    if ( GamesListProperties < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x557,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)GamesListProperties);
      v6 = v12;
      if ( v12 )
      {
        v12 = 0LL;
        (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo *))(*(_QWORD *)v6 + 16LL))(v6);
      }
      return v5;
    }
    v8 = (*(__int64 (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo *, _QWORD))(*(_QWORD *)v12 + 56LL))(
           v12,
           a1[4]);
    v5 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x557,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v8);
      v9 = v12;
      if ( v12 )
      {
        v12 = 0LL;
        (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo *))(*(_QWORD *)v9 + 16LL))(v9);
      }
      return v5;
    }
    *(_DWORD *)(*(_QWORD *)a1 + 144LL) = a1[4];
    v10 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo *))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  return 0LL;
}
