/*
 * XREFs of ?UpdateShellLink@PINENTRY@@QEAAJXZ @ 0x18069883C
 * Callers:
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180692D40 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 *     ?ItemChangeNotify@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@0@Z @ 0x180694120 (-ItemChangeNotify@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@0@Z.c)
 *     ?PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z @ 0x1806950C0 (-PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z.c)
 *     ?ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFAU3@@Z @ 0x180695AE0 (-ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFA.c)
 * Callees:
 *     ??$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z @ 0x1802B7548 (--$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z.c)
 *     ?SetLinkFlags@CPinnedList@@SAKPEAUIShellLinkW@@KK@Z @ 0x180696BC4 (-SetLinkFlags@CPinnedList@@SAKPEAUIShellLinkW@@KK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall PINENTRY::UpdateShellLink(PINENTRY *this)
{
  LPVOID *ppv; // rbx
  HRESULT Instance; // edi

  ppv = (LPVOID *)((char *)this + 8);
  *((_DWORD *)this + 6) = 0;
  SafeRelease<IShellItemArray>((__int64 *)this + 1);
  Instance = CoCreateInstance(&CLSID_ShellLink, 0LL, 3u, &GUID_000214f9_0000_0000_c000_000000000046, ppv);
  if ( Instance >= 0 )
  {
    CPinnedList::SetLinkFlags((struct IShellLinkW *)*ppv);
    Instance = (*(__int64 (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)*ppv + 40LL))(*ppv, *(_QWORD *)this);
    if ( Instance < 0 )
    {
      *((_DWORD *)this + 6) = 0;
      SafeRelease<IShellItemArray>((__int64 *)ppv);
    }
  }
  return (unsigned int)Instance;
}
