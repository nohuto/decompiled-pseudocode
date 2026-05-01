/*
 * XREFs of _CacheAppIDInIDList @ 0x180671C30
 * Callers:
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x18066C480 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 *     ?ItemChangeNotify@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@0@Z @ 0x18066D840 (-ItemChangeNotify@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@0@Z.c)
 *     ?PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z @ 0x18066E4A0 (-PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z.c)
 *     ?ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFAU3@@Z @ 0x18066EF00 (-ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFA.c)
 *     ?Resolve@CPinnedList@@UEAAJPEAUHWND__@@KPEFBU_ITEMIDLIST@@PEAPEFAU3@@Z @ 0x18066F6E0 (-Resolve@CPinnedList@@UEAAJPEAUHWND__@@KPEFBU_ITEMIDLIST@@PEAPEFAU3@@Z.c)
 *     ?v_UpgradeItem@CPinnedList@@UEAAJKPEFAU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x180674B90 (-v_UpgradeItem@CPinnedList@@UEAAJKPEFAU_ITEMIDLIST@@PEAPEFAU2@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?ILAppendHiddenStringW@@YAPEFAU_ITEMIDLIST@@PEFAU1@W4IDLHID@@PEBG@Z @ 0x18066BFA4 (-ILAppendHiddenStringW@@YAPEFAU_ITEMIDLIST@@PEFAU1@W4IDLHID@@PEBG@Z.c)
 *     ?_GetAppIDFromIDList@@YAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@PEAPEAGPEAH@Z @ 0x180672810 (-_GetAppIDFromIDList@@YAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@PEAPEAGPEAH@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CacheAppIDInIDList(struct _ITEMIDLIST *a1, struct _ITEMIDLIST **a2)
{
  HRESULT Instance; // ebx
  struct _ITEMIDLIST *v5; // rax
  void *v6; // rcx
  struct _ITEMIDLIST *v7; // rbx
  LPVOID pv; // [rsp+30h] [rbp-28h] BYREF
  struct IApplicationResolver *v10; // [rsp+38h] [rbp-20h] BYREF

  *a2 = 0LL;
  v10 = 0LL;
  Instance = CoCreateInstance(
               &CLSID_StartMenuCacheAndAppResolver,
               0LL,
               3u,
               &GUID_de25675a_72de_44b4_9373_05170450c140,
               (LPVOID *)&v10);
  if ( Instance >= 0 )
  {
    pv = 0LL;
    if ( _GetAppIDFromIDList(v10, a1, (unsigned __int16 **)&pv, 0LL) < 0 )
    {
      *a2 = a1;
    }
    else
    {
      v5 = ILAppendHiddenStringW(a1, -1091633123, (WCHAR *)pv);
      v6 = pv;
      v7 = v5;
      *a2 = v5;
      CoTaskMemFree(v6);
      Instance = v7 == 0LL ? 0x8007000E : 0;
    }
    (*(void (__fastcall **)(struct IApplicationResolver *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return (unsigned int)Instance;
}
