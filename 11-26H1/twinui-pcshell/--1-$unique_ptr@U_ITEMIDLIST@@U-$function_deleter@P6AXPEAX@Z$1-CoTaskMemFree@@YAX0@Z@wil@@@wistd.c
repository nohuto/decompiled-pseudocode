/*
 * XREFs of ??1?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x1802B9790
 * Callers:
 *     _GetPinnablePidl_::_1_::dtor$1 @ 0x1806DCF3B (_GetPinnablePidl_--_1_--dtor$1.c)
 *     _GetUnpackagedAppPinnableItem_::_1_::dtor$2 @ 0x1806DCFCB (_GetUnpackagedAppPinnableItem_--_1_--dtor$2.c)
 *     _CBackupLocationManager::CreateTombstoneLnk_::_1_::dtor$2 @ 0x1806FE495 (_CBackupLocationManager--CreateTombstoneLnk_--_1_--dtor$2.c)
 *     _CTaskbandPin::v_IsAcceptableTarget_::_1_::dtor$6 @ 0x180705CA7 (_CTaskbandPin--v_IsAcceptableTarget_--_1_--dtor$6.c)
 *     _CTaskbandPin::v_IsAcceptableTarget_::_1_::dtor$7 @ 0x180705CB9 (_CTaskbandPin--v_IsAcceptableTarget_--_1_--dtor$7.c)
 *     _CBackupLocationManager::CreateTombstoneLnk_::_1_::dtor$0 @ 0x180705DFB (_CBackupLocationManager--CreateTombstoneLnk_--_1_--dtor$0.c)
 *     _CreatePlaceholderPidl_::_1_::dtor$2 @ 0x180705E31 (_CreatePlaceholderPidl_--_1_--dtor$2.c)
 *     _CreatePlaceholderPidl_::_1_::dtor$5 @ 0x180705E55 (_CreatePlaceholderPidl_--_1_--dtor$5.c)
 *     _CreatePlaceholderPidl_::_1_::dtor$7 @ 0x180705E67 (_CreatePlaceholderPidl_--_1_--dtor$7.c)
 *     _CBackupLocationManager::CreateTombstoneLnk_::_1_::dtor$4 @ 0x180705E79 (_CBackupLocationManager--CreateTombstoneLnk_--_1_--dtor$4.c)
 *     _CBackupLocationManager::GetTombstonePath_::_1_::dtor$0 @ 0x180705FED (_CBackupLocationManager--GetTombstonePath_--_1_--dtor$0.c)
 *     _CPinnedList::InternalModify_::_1_::dtor$7 @ 0x180706059 (_CPinnedList--InternalModify_--_1_--dtor$7.c)
 *     _CPinList::_CreateTombstone_::_1_::dtor$4 @ 0x1807060E9 (_CPinList--_CreateTombstone_--_1_--dtor$4.c)
 *     _CPinList::_CreateTombstone_::_1_::dtor$1 @ 0x18070625A (_CPinList--_CreateTombstone_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(
        __int64 a1)
{
  return wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
           a1,
           0LL);
}
