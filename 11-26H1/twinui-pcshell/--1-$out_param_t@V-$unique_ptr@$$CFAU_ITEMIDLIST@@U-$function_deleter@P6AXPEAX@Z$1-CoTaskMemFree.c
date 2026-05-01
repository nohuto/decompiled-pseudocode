/*
 * XREFs of ??1?$out_param_t@V?$unique_ptr@$$CFAU_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x1802B976C
 * Callers:
 *     ?GetUnpackagedAppPinnableItem@@YA?AU?$com_ptr@UIShellItem@@@winrt@@AEBVPropertyStoreHelper@wil@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18028D584 (-GetUnpackagedAppPinnableItem@@YA-AU-$com_ptr@UIShellItem@@@winrt@@AEBVPropertyStoreHelper@wil@@.c)
 *     ?GetAsShellItem@Impl@TaskbarPinHelper@@YAJAEAVPropVariant@wil@@PEAPEAUIShellItem@@@Z @ 0x1805E5BF4 (-GetAsShellItem@Impl@TaskbarPinHelper@@YAJAEAVPropVariant@wil@@PEAPEAUIShellItem@@@Z.c)
 *     ?IsItemPinned@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@0@Z @ 0x1805E6F50 (-IsItemPinned@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@0@Z.c)
 *     ?v_IsAcceptableTarget@CTaskbandPin@@MEAAHPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAPEAUIShellItem@@PEAPEAG43@Z @ 0x18068A610 (-v_IsAcceptableTarget@CTaskbandPin@@MEAAHPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAP.c)
 *     ?ApplyReorderTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@H@Z @ 0x18068D210 (-ApplyReorderTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@H@Z.c)
 *     ?CreatePlaceholderPidl@@YAJPEBGPEAPEAUIShellItem@@@Z @ 0x18068DE48 (-CreatePlaceholderPidl@@YAJPEBGPEAPEAUIShellItem@@@Z.c)
 *     ?CreateTombstoneLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x18068E1DC (-CreateTombstoneLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z.c)
 *     ?GetTombstonePath@CBackupLocationManager@@QEBAJPEAPEAG@Z @ 0x18069268C (-GetTombstonePath@CBackupLocationManager@@QEBAJPEAPEAG@Z.c)
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180692D40 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 *     ?IsEmpty@CPinnedList@@UEAAJPEAH@Z @ 0x180693B50 (-IsEmpty@CPinnedList@@UEAAJPEAH@Z.c)
 *     ?IsTombstoneLink@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@@Z @ 0x180693F48 (-IsTombstoneLink@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@@Z.c)
 *     ?_CreateTombstone@CPinList@@AEAAJPEAVCPinnedList@@PEBGPEAVPINENTRY@@@Z @ 0x180698EC8 (-_CreateTombstone@CPinList@@AEAAJPEAVCPinnedList@@PEBGPEAVPINENTRY@@@Z.c)
 *     _CPinList::_CreateTombstone_::_1_::dtor$5 @ 0x1806DCF68 (_CPinList--_CreateTombstone_--_1_--dtor$5.c)
 *     _CreatePlaceholderPidl_::_1_::dtor$6 @ 0x1806DCFDD (_CreatePlaceholderPidl_--_1_--dtor$6.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::IsItemPinned_::_1_::dtor$5 @ 0x1806FE4A7 (_winrt--Windows--Internal--Shell--implementation--PinManager--IsItemPinned_--_1_--dtor$5.c)
 *     _CTaskbandPin::v_IsAcceptableTarget_::_1_::dtor$8 @ 0x180705CCB (_CTaskbandPin--v_IsAcceptableTarget_--_1_--dtor$8.c)
 *     _CPinnedList::ApplyReorderTaskbarLayout_::_1_::dtor$5 @ 0x180705E0D (_CPinnedList--ApplyReorderTaskbarLayout_--_1_--dtor$5.c)
 *     _CPinnedList::InternalModify_::_1_::dtor$8 @ 0x18070606B (_CPinnedList--InternalModify_--_1_--dtor$8.c)
 *     _CPinList::_CreateTombstone_::_1_::dtor$2 @ 0x18070626C (_CPinList--_CreateTombstone_--_1_--dtor$2.c)
 * Callees:
 *     ?reset@?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAU_ITEMIDLIST@@@Z @ 0x1802B97A0 (-reset@-$unique_ptr@U_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil@@@w.c)
 */

__int64 __fastcall wil::details::out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
    return wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
             *(_QWORD *)a1,
             *(_QWORD *)(a1 + 8));
  return result;
}
