/*
 * XREFs of ??$_Find_lower_bound@U_GUID@@@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@PEAX@std@@@1@AEBU_GUID@@@Z @ 0x180036668
 * Callers:
 *     ??$emplace@AEAU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@std@@@std@@@std@@_N@1@AEAU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@1@@Z @ 0x1800366F0 (--$emplace@AEAU_GUID@@V-$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@-$_Tr.c)
 *     ?GetGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAPEBUGameConfig@ExecutionModel@@U_GUID@@@Z @ 0x180036EC8 (-GetGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAPEBUGame.c)
 * Callees:
 *     memcmp_0 @ 0x180043364 (memcmp_0.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<_GUID,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>,Windows::Gaming::Preview::GamesEnumeration::GameIdLess,std::allocator<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>>,0>>::_Find_lower_bound<_GUID>(
        __int64 a1,
        _QWORD *a2,
        const void *a3)
{
  __int64 *v5; // r9
  __int64 *v6; // rbx
  int v7; // eax

  v5 = *(__int64 **)(*(_QWORD *)a1 + 8LL);
  *a2 = v5;
  v6 = v5;
  a2[1] = 0LL;
  for ( a2[2] = *(_QWORD *)a1; !*((_BYTE *)v6 + 25); v6 = (__int64 *)*v6 )
  {
    *a2 = v6;
    if ( memcmp_0(v6 + 4, a3, 0x10uLL) >= 0 )
    {
      a2[2] = v6;
      v7 = 1;
    }
    else
    {
      v6 += 2;
      v7 = 0;
    }
    *((_DWORD *)a2 + 2) = v7;
  }
  return a2;
}
