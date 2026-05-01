/*
 * XREFs of ?AttachGameConfigs@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJ$$QEAV?$map@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@7@@Z @ 0x180027730
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000222C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008DD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeConfiguration@GamesEnumeration@Preview@Gaming@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000E920 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeConfigur.c)
 *     ??0GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ @ 0x180025284 (--0GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ.c)
 *     ??4?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180026264 (--4-$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x180030178 (-_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@.c)
 *     ?_ReinitializeAfterAttachingGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAX_N@Z @ 0x180034C38 (-_ReinitializeAfterAttachingGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windo.c)
 *     ??4?$map@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180036814 (--4-$map@U_GUID@@V-$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess.c)
 *     ?_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x1800376F0 (-_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJX.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::AttachGameConfigs(
        __int64 a1,
        __int64 ***a2,
        _QWORD *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  struct _RTL_CRITICAL_SECTION *v9; // rdi
  Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *v10; // r12
  bool v11; // r13
  __int64 *v12; // rbx
  int v13; // eax
  unsigned int v14; // esi
  __int64 **v15; // rcx
  __int64 *i; // rax
  __int64 *j; // rcx
  volatile signed __int64 *v18; // rcx
  Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *v19; // rax
  unsigned int v20; // ebp
  Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *v21; // rbx
  int PropertyValues; // eax
  signed __int64 v23; // rcx
  bool v24; // zf
  signed __int64 v25; // rax
  signed __int32 v26; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( !a2[1] )
  {
    v6 = -2147024809;
    v7 = 821LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)v6);
    return v6;
  }
  if ( !*a3 )
  {
    v6 = -2147467261;
    v7 = 822LL;
    goto LABEL_3;
  }
  v9 = (struct _RTL_CRITICAL_SECTION *)(a1 + 144);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 144));
  v10 = (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)(a1 - 24);
  if ( *(_QWORD *)(a1 - 24 + 272) && *(_QWORD *)(a1 + 256) )
  {
    v11 = 1;
    v12 = **a2;
    while ( !*((_BYTE *)v12 + 25) )
    {
      v13 = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_AttachGameModeConfig(v10);
      v14 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x350,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
          (const char *)(unsigned int)v13);
        if ( v9 )
          LeaveCriticalSection(v9);
        return v14;
      }
      v15 = (__int64 **)v12[2];
      if ( *((_BYTE *)v15 + 25) )
      {
        for ( i = (__int64 *)v12[1]; !*((_BYTE *)i + 25) && v12 == (__int64 *)i[2]; i = (__int64 *)i[1] )
          v12 = i;
        v12 = i;
      }
      else
      {
        v12 = (__int64 *)v12[2];
        for ( j = *v15; !*((_BYTE *)j + 25); j = (__int64 *)*j )
          v12 = j;
      }
    }
LABEL_44:
    Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_ReinitializeAfterAttachingGameConfig(v10, v11);
    if ( v9 )
      LeaveCriticalSection(v9);
    return 0LL;
  }
  v18 = *(volatile signed __int64 **)(a1 + 248);
  v11 = 0;
  if ( v18 )
  {
    *(_QWORD *)(a1 + 248) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration,Microsoft::WRL::FtmBase>::Release(v18);
  }
  *(_QWORD *)(a1 + 248) = 0LL;
  v19 = (Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *)operator new(
                                                                                     0xD0uLL,
                                                                                     (const struct std::nothrow_t *)&std::nothrow);
  if ( v19 )
  {
    v21 = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GameModeConfigurationServer(v19);
    std::map<_GUID,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>,Windows::Gaming::Preview::GamesEnumeration::GameIdLess,std::allocator<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>>>::operator=(
      (char *)v21 + 80,
      a2);
    std::shared_ptr<ExecutionModel::IGameConfigStore>::operator=((_QWORD *)v21 + 8, a3);
    PropertyValues = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_LoadPropertyValues(v21);
    v20 = PropertyValues;
    if ( PropertyValues >= 0 )
    {
      if ( v21 )
      {
        v23 = *((_QWORD *)v21 + 7);
        while ( v23 >= 0 )
        {
          if ( (_DWORD)v23 != 0x7FFFFFFF )
          {
            v25 = _InterlockedCompareExchange64((volatile signed __int64 *)v21 + 7, v23 + 1, v23);
            v24 = v23 == v25;
            v23 = v25;
            if ( !v24 )
              continue;
          }
          *(_QWORD *)(a1 + 248) = v21;
          goto LABEL_42;
        }
        do
          v26 = *(_DWORD *)(2 * v23 + 0x10);
        while ( v26 != 0x7FFFFFFF
             && v26 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v23 + 16), v26 + 1, v26) );
      }
      *(_QWORD *)(a1 + 248) = v21;
      if ( v21 )
LABEL_42:
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)v21);
      std::shared_ptr<ExecutionModel::IGameConfigStore>::operator=((_QWORD *)(a1 + 256), a3);
      goto LABEL_44;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
      (const char *)(unsigned int)PropertyValues);
    if ( v21 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)v21);
  }
  else
  {
    v20 = -2147024882;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x344,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
    (const char *)v20);
  if ( v9 )
    LeaveCriticalSection(v9);
  return v20;
}
