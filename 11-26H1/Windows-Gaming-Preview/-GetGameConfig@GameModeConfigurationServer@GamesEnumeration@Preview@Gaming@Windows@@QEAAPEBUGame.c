/*
 * XREFs of ?GetGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAPEBUGameConfig@ExecutionModel@@U_GUID@@@Z @ 0x180036EC8
 * Callers:
 *     ?_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x180030178 (-_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@.c)
 *     ?_InitializePackageFamilyName@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180032410 (-_InitializePackageFamilyName@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJ.c)
 * Callees:
 *     ??$_Find_lower_bound@U_GUID@@@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@PEAX@std@@@1@AEBU_GUID@@@Z @ 0x180036668 (--$_Find_lower_bound@U_GUID@@@-$_Tree@V-$_Tmap_traits@U_GUID@@V-$unique_ptr@UGameConfig@Executio.c)
 *     memcmp_0 @ 0x180043364 (memcmp_0.c)
 */

const struct ExecutionModel::GameConfig *__fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetGameConfig(
        Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *this,
        struct _GUID *a2)
{
  __int64 v4; // rbx
  _QWORD *v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  v4 = 0LL;
  if ( !memcmp_0(a2, &xmmword_18004EB48, 0x10uLL) && *((_QWORD *)this + 11) )
    return *(const struct ExecutionModel::GameConfig **)(**((_QWORD **)this + 10) + 48LL);
  v6 = (_QWORD *)((char *)this + 80);
  std::_Tree<std::_Tmap_traits<_GUID,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>,Windows::Gaming::Preview::GamesEnumeration::GameIdLess,std::allocator<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>>,0>>::_Find_lower_bound<_GUID>(
    (__int64)this + 80,
    &v8,
    a2);
  v7 = v9;
  if ( !*(_BYTE *)(v9 + 25) && memcmp_0(a2, (const void *)(v9 + 32), 0x10uLL) >= 0 && v7 != *v6 )
    return *(const struct ExecutionModel::GameConfig **)(v7 + 48);
  return (const struct ExecutionModel::GameConfig *)v4;
}
