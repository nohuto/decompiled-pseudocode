/*
 * XREFs of ??1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18000D438
 * Callers:
 *     _Windows::Gaming::Preview::GamesEnumeration::GameConfigAppDisplayInfoServer::_GetFileDescription_::_1_::dtor$0 @ 0x180043B9C (_Windows--Gaming--Preview--GamesEnumeration--GameConfigAppDisplayInfoServer--_GetFileDescription.c)
 *     __lambda_c7e28edb760347053732171cef665d5d_::operator()_::_1_::dtor$2 @ 0x180043CAD (__lambda_c7e28edb760347053732171cef665d5d_--operator()_--_1_--dtor$2.c)
 *     __lambda_88afd6bbfe2a61dd98f4359340091e1e_::operator()_::_1_::dtor$1 @ 0x180043E5A (__lambda_88afd6bbfe2a61dd98f4359340091e1e_--operator()_--_1_--dtor$1.c)
 *     __lambda_88afd6bbfe2a61dd98f4359340091e1e_::operator()_::_1_::dtor$3 @ 0x180043E6C (__lambda_88afd6bbfe2a61dd98f4359340091e1e_--operator()_--_1_--dtor$3.c)
 *     __lambda_c7e28edb760347053732171cef665d5d_::operator()_::_1_::dtor$6 @ 0x180043EEA (__lambda_c7e28edb760347053732171cef665d5d_--operator()_--_1_--dtor$6.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_CreateStorageFileForFilePath_::_1_::dtor$2 @ 0x1800441E4 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_CreateStorageFileForFilePath_.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeProperties_::_1_::dtor$5 @ 0x18004423E (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeProper_ea_18004423E.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HStringReference::~HStringReference(
        Microsoft::WRL::Wrappers::HStringReference *this)
{
  *((_QWORD *)this + 3) = 0LL;
}
