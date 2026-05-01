/*
 * XREFs of ??1CPinList@@QEAA@XZ @ 0x18068C154
 * Callers:
 *     ?ApplyInPlaceTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@@Z @ 0x18068CB10 (-ApplyInPlaceTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@@Z.c)
 *     ?GetPinnedItem@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x1806917B0 (-GetPinnedItem@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z.c)
 *     ?GetPinnedItemForAppID@CPinnedList@@UEAAJPEBGPEAPEFAU_ITEMIDLIST@@@Z @ 0x180691860 (-GetPinnedItemForAppID@CPinnedList@@UEAAJPEBGPEAPEFAU_ITEMIDLIST@@@Z.c)
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180692D40 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 *     ?IsPinned@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@@Z @ 0x180693E50 (-IsPinned@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@@Z.c)
 *     ?ItemChangeNotify@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@0@Z @ 0x180694120 (-ItemChangeNotify@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@0@Z.c)
 *     ?PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z @ 0x1806950C0 (-PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z.c)
 *     ?Resolve@CPinnedList@@UEAAJPEAUHWND__@@KPEFBU_ITEMIDLIST@@PEAPEFAU3@@Z @ 0x180696380 (-Resolve@CPinnedList@@UEAAJPEAUHWND__@@KPEFBU_ITEMIDLIST@@PEAPEFAU3@@Z.c)
 *     _CPinnedList::ApplyInPlaceTaskbarLayout_::_1_::dtor$3 @ 0x180705DA1 (_CPinnedList--ApplyInPlaceTaskbarLayout_--_1_--dtor$3.c)
 *     _CPinnedList::IsPinned_::_1_::dtor$0 @ 0x180705FDB (_CPinnedList--IsPinned_--_1_--dtor$0.c)
 *     _CPinnedList::InternalModify_::_1_::dtor$5 @ 0x180706035 (_CPinnedList--InternalModify_--_1_--dtor$5.c)
 *     _CPinnedList::ItemChangeNotify_::_1_::dtor$0 @ 0x1807060FB (_CPinnedList--ItemChangeNotify_--_1_--dtor$0.c)
 *     _CPinnedList::PinShellLink_::_1_::dtor$3 @ 0x1807061A8 (_CPinnedList--PinShellLink_--_1_--dtor$3.c)
 *     _CPinnedList::Resolve_::_1_::dtor$0 @ 0x1807061CC (_CPinnedList--Resolve_--_1_--dtor$0.c)
 * Callees:
 *     ??$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z @ 0x1802B7548 (--$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z.c)
 *     DSA_Destroy @ 0x180684254 (DSA_Destroy.c)
 *     DSA_EnumCallback @ 0x1806842C4 (DSA_EnumCallback.c)
 */

void __fastcall CPinList::~CPinList(CPinList *this)
{
  struct _DSA *v2; // rdi

  SafeRelease<IShellItemArray>((__int64 *)this + 1);
  v2 = *(struct _DSA **)this;
  if ( *(_QWORD *)this )
  {
    DSA_EnumCallback(*(HDSA *)this, PINENTRY::DestroyCallback, 0LL);
    DSA_Destroy(v2);
    *(_QWORD *)this = 0LL;
  }
}
