/*
 * XREFs of ??1?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x1802D0D1C
 * Callers:
 *     _GetPinnablePidl_::_1_::dtor$1 @ 0x1806B2378 (_GetPinnablePidl_--_1_--dtor$1.c)
 *     _CPinnedList::ApplyReorderTaskbarLayout_::_1_::dtor$4 @ 0x1806B241A (_CPinnedList--ApplyReorderTaskbarLayout_--_1_--dtor$4.c)
 *     _CreatePlaceholderPidl_::_1_::dtor$7 @ 0x1806D61E0 (_CreatePlaceholderPidl_--_1_--dtor$7.c)
 *     _CTaskbandPin::v_IsAcceptableTarget_::_1_::dtor$6 @ 0x1806DD05C (_CTaskbandPin--v_IsAcceptableTarget_--_1_--dtor$6.c)
 *     _CTaskbandPin::v_IsAcceptableTarget_::_1_::dtor$7 @ 0x1806DD06E (_CTaskbandPin--v_IsAcceptableTarget_--_1_--dtor$7.c)
 *     _CreatePlaceholderPidl_::_1_::dtor$2 @ 0x1806DD1E6 (_CreatePlaceholderPidl_--_1_--dtor$2.c)
 *     _CreatePlaceholderPidl_::_1_::dtor$5 @ 0x1806DD1F8 (_CreatePlaceholderPidl_--_1_--dtor$5.c)
 *     _CBackupLocationManager::CreateTombstoneLnk_::_1_::dtor$0 @ 0x1806DD20A (_CBackupLocationManager--CreateTombstoneLnk_--_1_--dtor$0.c)
 *     _CBackupLocationManager::CreateTombstoneLnk_::_1_::dtor$2 @ 0x1806DD21C (_CBackupLocationManager--CreateTombstoneLnk_--_1_--dtor$2.c)
 *     _CBackupLocationManager::CreateTombstoneLnk_::_1_::dtor$4 @ 0x1806DD22E (_CBackupLocationManager--CreateTombstoneLnk_--_1_--dtor$4.c)
 *     _CBackupLocationManager::GetTombstonePath_::_1_::dtor$0 @ 0x1806DD3A2 (_CBackupLocationManager--GetTombstonePath_--_1_--dtor$0.c)
 *     _CPinnedList::InternalModify_::_1_::dtor$7 @ 0x1806DD420 (_CPinnedList--InternalModify_--_1_--dtor$7.c)
 *     _CPinnedList::IsEmpty_::_1_::dtor$1 @ 0x1806DD4B0 (_CPinnedList--IsEmpty_--_1_--dtor$1.c)
 *     _CPinList::_CreateTombstone_::_1_::dtor$1 @ 0x1806DD5FA (_CPinList--_CreateTombstone_--_1_--dtor$1.c)
 *     _CPinList::_CreateTombstone_::_1_::dtor$4 @ 0x1806DD639 (_CPinList--_CreateTombstone_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

void __fastcall wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(
        void **a1)
{
  wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(a1, 0LL);
}
