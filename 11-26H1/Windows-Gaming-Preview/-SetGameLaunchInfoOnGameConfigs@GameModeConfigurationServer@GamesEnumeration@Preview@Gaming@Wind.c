/*
 * XREFs of ?SetGameLaunchInfoOnGameConfigs@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJAEBVHString@Wrappers@WRL@Microsoft@@0@Z @ 0x1800374F0
 * Callers:
 *     _lambda_ef8eb52c9e6883c3173b82c9be862a9c_::operator() @ 0x180026A04 (_lambda_ef8eb52c9e6883c3173b82c9be862a9c_--operator().c)
 *     ?_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x180030178 (-_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008DD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetStringPropertyToGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GameProperty_t@2@AEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180016C98 (-SetStringPropertyToGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GamePrope.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::SetGameLaunchInfoOnGameConfigs(
        Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *this,
        HSTRING *a2,
        HSTRING *a3)
{
  __int64 *v6; // rbx
  bool v7; // zf
  __int64 *v8; // rcx
  int v9; // edi
  __int64 v10; // rdx
  __int64 *v12; // rcx
  __int64 **v13; // rcx
  __int64 *i; // rax
  __int64 *j; // rcx
  __int128 v16; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = (__int64 *)**((_QWORD **)this + 10);
  while ( !*((_BYTE *)v6 + 25) )
  {
    v7 = *a3 == 0LL;
    v8 = (__int64 *)*((_QWORD *)this + 8);
    v16 = *((_OWORD *)v6 + 2);
    if ( v7 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, __int64, const WCHAR *, int))(*v8 + 72))(
             v8,
             &v16,
             26LL,
             &String1,
             2);
      if ( v9 < 0 )
      {
        v10 = 240LL;
        goto LABEL_6;
      }
    }
    else
    {
      v9 = SetStringPropertyToGameConfigStore(v8, &v16, 0x1Au, a3);
      if ( v9 < 0 )
      {
        v10 = 233LL;
LABEL_6:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
          (const char *)(unsigned int)v9);
        return (unsigned int)v9;
      }
    }
    v7 = *a2 == 0LL;
    v12 = (__int64 *)*((_QWORD *)this + 8);
    v16 = *((_OWORD *)v6 + 2);
    if ( v7 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, __int64, const WCHAR *, int))(*v12 + 72))(
             v12,
             &v16,
             25LL,
             &String1,
             2);
      if ( v9 < 0 )
      {
        v10 = 257LL;
        goto LABEL_6;
      }
    }
    else
    {
      v9 = SetStringPropertyToGameConfigStore(v12, &v16, 0x19u, a2);
      if ( v9 < 0 )
      {
        v10 = 249LL;
        goto LABEL_6;
      }
    }
    v13 = (__int64 **)v6[2];
    if ( *((_BYTE *)v13 + 25) )
    {
      for ( i = (__int64 *)v6[1]; !*((_BYTE *)i + 25) && v6 == (__int64 *)i[2]; i = (__int64 *)i[1] )
        v6 = i;
      v6 = i;
    }
    else
    {
      v6 = (__int64 *)v6[2];
      for ( j = *v13; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v6 = j;
    }
  }
  return 0LL;
}
