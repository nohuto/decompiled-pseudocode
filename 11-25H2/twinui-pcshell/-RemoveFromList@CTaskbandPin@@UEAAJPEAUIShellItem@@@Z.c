/*
 * XREFs of ?RemoveFromList@CTaskbandPin@@UEAAJPEAUIShellItem@@@Z @ 0x180662E70
 * Callers:
 *     <none>
 * Callees:
 *     ?SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z @ 0x1802C8390 (-SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?MarkAsTombstone@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@W4PINNEDLISTMODIFYCALLER@@@Z @ 0x18066DE00 (-MarkAsTombstone@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@W4PINNEDLISTMODIFYCALLER@@@Z.c)
 *     ?_GetRemovedGlobalChangeCount@CPinnedList@@IEAAKXZ @ 0x180672D80 (-_GetRemovedGlobalChangeCount@CPinnedList@@IEAAKXZ.c)
 *     ?s_GetDarwinLinkInfo@CPinnedList@@KAHPEAUIShellLinkW@@PEAHPEAGI@Z @ 0x18067408C (-s_GetDarwinLinkInfo@CPinnedList@@KAHPEAUIShellLinkW@@PEAHPEAGI@Z.c)
 *     ?s_RemoveDarwinShortcut@CPinnedList@@KAJPEAUIPinnedList3@@PEBGW4PINNEDLISTMODIFYCALLER@@@Z @ 0x1806741C4 (-s_RemoveDarwinShortcut@CPinnedList@@KAJPEAUIPinnedList3@@PEBGW4PINNEDLISTMODIFYCALLER@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTaskbandPin::RemoveFromList(CTaskbandPin *this, IUnknown *a2)
{
  HRESULT v4; // ebx
  struct IShellItemVtbl *lpVtbl; // rax
  CPinnedList *v6; // rcx
  unsigned int v7; // eax
  LPVOID v9; // [rsp+30h] [rbp-D0h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-C8h] BYREF
  LPVOID ppv; // [rsp+40h] [rbp-C0h] BYREF
  LPITEMIDLIST ppidl; // [rsp+48h] [rbp-B8h] BYREF
  struct IShellLinkW *v13; // [rsp+50h] [rbp-B0h] BYREF
  LPVOID dwItem1; // [rsp+58h] [rbp-A8h] BYREF
  int v15; // [rsp+60h] [rbp-A0h]
  unsigned __int16 v16[264]; // [rsp+70h] [rbp-90h] BYREF

  ppv = 0LL;
  if ( CoCreateInstance(&CLSID_StartMenuCacheAndAppResolver, 0LL, 1u, &GUID_de25675a_72de_44b4_9373_05170450c140, &ppv) >= 0 )
  {
    pv = 0LL;
    if ( (*(int (__fastcall **)(LPVOID, IUnknown *, LPVOID *))(*(_QWORD *)ppv + 24LL))(ppv, a2, &pv) >= 0 )
    {
      dwItem1 = 0LL;
      if ( CoCreateInstance(&CLSID_DestinationList, 0LL, 1u, &GUID_6332debf_87b5_4670_90c0_5e57b408a49e, &dwItem1) >= 0 )
      {
        (*(void (__fastcall **)(LPVOID, LPVOID))(*(_QWORD *)dwItem1 + 80LL))(dwItem1, pv);
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)dwItem1 + 16LL))(dwItem1);
      }
      v9 = 0LL;
      if ( CoCreateInstance(&CLSID_AutomaticDestinationList, 0LL, 1u, &GUID_e9c5ef8d_fd41_4f72_ba87_eb03bad5817c, &v9) >= 0 )
      {
        if ( (*(int (__fastcall **)(LPVOID, LPVOID, _QWORD, _QWORD))(*(_QWORD *)v9 + 24LL))(v9, pv, 0LL, 0LL) >= 0 )
          (*(void (__fastcall **)(LPVOID, __int64))(*(_QWORD *)v9 + 104LL))(v9, 1LL);
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v9 + 16LL))(v9);
      }
      CoTaskMemFree(pv);
    }
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  }
  ppidl = 0LL;
  v4 = SHGetIDListFromObject(a2, &ppidl);
  if ( v4 >= 0 )
  {
    v4 = CPinnedList::MarkAsTombstone((char *)this - 80, ppidl, 25LL);
    if ( v4 == -2147023728 )
      v4 = 1;
    ILFree(ppidl);
  }
  lpVtbl = (struct IShellItemVtbl *)a2->lpVtbl;
  v13 = 0LL;
  if ( ((int (__fastcall *)(IUnknown *, _QWORD, const GUID *, GUID *, struct IShellLinkW **))lpVtbl->BindToHandler)(
         a2,
         0LL,
         &BHID_SFUIObject,
         &GUID_000214f9_0000_0000_c000_000000000046,
         &v13) >= 0 )
  {
    if ( CPinnedList::s_GetDarwinLinkInfo(v13, 0LL, v16, 0x104u) )
    {
      v4 = CPinnedList::s_RemoveDarwinShortcut(
             ((unsigned __int64)this - 88) & -(__int64)(this != (CTaskbandPin *)112),
             v16);
      if ( v4 == -2147023728 )
        v4 = 1;
    }
    ((void (__fastcall *)(struct IShellLinkW *))v13->lpVtbl->Release)(v13);
  }
  v7 = CPinnedList::_GetRemovedGlobalChangeCount(v6);
  if ( (int)SHRegSetDWORD(
              HKEY_LOCAL_MACHINE,
              L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\StartPage",
              L"FavoritesRemovedChanges",
              v7 + 1) >= 0 )
  {
    HIWORD(dwItem1) = 0;
    v15 = 0;
    *(_DWORD *)((char *)&dwItem1 + 2) = 14;
    LOWORD(dwItem1) = 10;
    SHChangeNotify(0x4000000, 0x3000u, &dwItem1, 0LL);
  }
  return (unsigned int)v4;
}
