/*
 * XREFs of ?_DoNotifyPinListChange@CPinnedList@@IEAAXPEFBU_ITEMIDLIST@@H@Z @ 0x180699180
 * Callers:
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180692D40 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 *     ?ItemChangeNotify@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@0@Z @ 0x180694120 (-ItemChangeNotify@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@0@Z.c)
 *     ?PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z @ 0x1806950C0 (-PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z.c)
 *     ?Resolve@CPinnedList@@UEAAJPEAUHWND__@@KPEFBU_ITEMIDLIST@@PEAPEFAU3@@Z @ 0x180696380 (-Resolve@CPinnedList@@UEAAJPEAUHWND__@@KPEFBU_ITEMIDLIST@@PEAPEFAU3@@Z.c)
 *     ?UpdateForRemovedItemsAsNecessary@CPinnedList@@UEAAJXZ @ 0x180698620 (-UpdateForRemovedItemsAsNecessary@CPinnedList@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CPinnedList::_DoNotifyPinListChange(CPinnedList *this, const struct _ITEMIDLIST *a2, unsigned int a3)
{
  __int16 dwItem1; // [rsp+20h] [rbp-38h] BYREF
  int dwItem1_2; // [rsp+22h] [rbp-36h]
  __int16 dwItem1_6; // [rsp+26h] [rbp-32h]
  int v9; // [rsp+28h] [rbp-30h]

  if ( !*((_DWORD *)this + 20) )
  {
    dwItem1_6 = 0;
    v9 = 0;
    dwItem1_2 = 15;
    dwItem1 = 10;
    SHChangeNotify(0x4000000, 0x3000u, &dwItem1, 0LL);
  }
  (*(void (__fastcall **)(CPinnedList *, const struct _ITEMIDLIST *, _QWORD))(*(_QWORD *)this + 64LL))(this, a2, a3);
}
