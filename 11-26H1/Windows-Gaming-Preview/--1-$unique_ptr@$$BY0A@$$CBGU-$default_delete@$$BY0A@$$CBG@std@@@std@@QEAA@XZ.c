/*
 * XREFs of ??1?$unique_ptr@$$BY0A@$$CBGU?$default_delete@$$BY0A@$$CBG@std@@@std@@QEAA@XZ @ 0x180014108
 * Callers:
 *     _CQueryKnownGameList::GetGameEntryByIdentifier_::_1_::dtor$5 @ 0x180043BD2 (_CQueryKnownGameList--GetGameEntryByIdentifier_--_1_--dtor$5.c)
 *     _DoWorkOnGameConfigStore_::_1_::dtor$2 @ 0x180043BF6 (_DoWorkOnGameConfigStore_--_1_--dtor$2.c)
 *     _GetGameFromGameConfigStore_::_1_::dtor$0 @ 0x180043C4A (_GetGameFromGameConfigStore_--_1_--dtor$0.c)
 *     _CQueryKnownGameList::GetGameEntryByIdentifier_::_1_::dtor$0 @ 0x180043EB4 (_CQueryKnownGameList--GetGameEntryByIdentifier_--_1_--dtor$0.c)
 *     _CQueryKnownGameList::GetProcessWorkingDirectoryByPID_::_1_::dtor$3 @ 0x18004401B (_CQueryKnownGameList--GetProcessWorkingDirectoryByPID_--_1_--dtor$3.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_LoadPropertyValues_::_1_::dtor$3 @ 0x1800442CE (_Windows--Gaming--Preview--GamesEnumeration--GameModeConfigurationServer--_LoadProp_ea_1800442CE.c)
 *     _CQueryKnownGameList::GetGameEntryByIdentifier_::_1_::dtor$4 @ 0x1800443EE (_CQueryKnownGameList--GetGameEntryByIdentifier_--_1_--dtor$4.c)
 *     _CQueryKnownGameList::GetGameEntryByIdentifier_::_1_::dtor$6 @ 0x180044400 (_CQueryKnownGameList--GetGameEntryByIdentifier_--_1_--dtor$6.c)
 *     _CQueryKnownGameList::GetGameEntryFromGameConfig_::_1_::dtor$0 @ 0x180044412 (_CQueryKnownGameList--GetGameEntryFromGameConfig_--_1_--dtor$0.c)
 *     _CQueryKnownGameList::GetGameEntryFromPID_::_1_::dtor$0 @ 0x180044424 (_CQueryKnownGameList--GetGameEntryFromPID_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021F0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<unsigned short const [0]>::~unique_ptr<unsigned short const [0]>(
        void **a1,
        const struct std::nothrow_t *a2)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
    operator delete(v2, a2);
}
