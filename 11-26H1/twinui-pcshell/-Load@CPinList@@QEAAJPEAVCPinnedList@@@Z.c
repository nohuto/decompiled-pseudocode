/*
 * XREFs of ?Load@CPinList@@QEAAJPEAVCPinnedList@@@Z @ 0x1806943F0
 * Callers:
 *     ?ApplyInPlaceTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@@Z @ 0x18068CB10 (-ApplyInPlaceTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@@Z.c)
 *     ?GetPinnedItem@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x1806917B0 (-GetPinnedItem@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z.c)
 *     ?GetPinnedItemForAppID@CPinnedList@@UEAAJPEBGPEAPEFAU_ITEMIDLIST@@@Z @ 0x180691860 (-GetPinnedItemForAppID@CPinnedList@@UEAAJPEBGPEAPEFAU_ITEMIDLIST@@@Z.c)
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180692D40 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 *     ?IsPinned@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@@Z @ 0x180693E50 (-IsPinned@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@@Z.c)
 *     ?ItemChangeNotify@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@0@Z @ 0x180694120 (-ItemChangeNotify@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@0@Z.c)
 *     ?PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z @ 0x1806950C0 (-PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z.c)
 *     ?Resolve@CPinnedList@@UEAAJPEAUHWND__@@KPEFBU_ITEMIDLIST@@PEAPEFAU3@@Z @ 0x180696380 (-Resolve@CPinnedList@@UEAAJPEAUHWND__@@KPEFBU_ITEMIDLIST@@PEAPEFAU3@@Z.c)
 * Callees:
 *     DSA_GetItemPtr @ 0x1801F27A0 (DSA_GetItemPtr.c)
 *     ??$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z @ 0x1802B7548 (--$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     DSA_Create @ 0x180684170 (DSA_Create.c)
 *     ?AppendPidl@CPinList@@QEAAHPEAVCPinnedList@@PEFBU_ITEMIDLIST@@@Z @ 0x18068C6D4 (-AppendPidl@CPinList@@QEAAHPEAVCPinnedList@@PEFBU_ITEMIDLIST@@@Z.c)
 *     ?EnumAllObjects@CPinnedList@@QEAAJPEAPEAUIEnumFullIDList@@@Z @ 0x18068E9C0 (-EnumAllObjects@CPinnedList@@QEAAJPEAPEAUIEnumFullIDList@@@Z.c)
 *     ?IStream_GetPos@@YAJPEAUIStream@@PEAT_LARGE_INTEGER@@@Z @ 0x180692CEC (-IStream_GetPos@@YAJPEAUIStream@@PEAT_LARGE_INTEGER@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPinList::Load(struct IStream **this, struct CPinnedList *a2)
{
  HDSA v4; // rax
  int v5; // ebx
  __int64 v6; // rax
  int i; // ebx
  struct _DSA *v8; // rcx
  int v9; // eax
  union _LARGE_INTEGER *ItemPtr; // rax
  IStream *v11; // rcx
  union _LARGE_INTEGER *v12; // rsi
  int j; // ebx
  struct _DSA *v14; // rcx
  int v15; // eax
  PVOID v16; // rax
  struct IEnumFullIDList *v18; // [rsp+30h] [rbp-20h] BYREF
  LPITEMIDLIST pidl; // [rsp+38h] [rbp-18h] BYREF

  v4 = DSA_Create(32, 4);
  *this = v4;
  if ( v4 )
  {
    v18 = 0LL;
    v5 = CPinnedList::EnumAllObjects(a2, &v18);
    if ( v5 >= 0 )
    {
      for ( pidl = 0LL;
            !((unsigned int (__fastcall *)(struct IEnumFullIDList *, __int64, LPITEMIDLIST *))v18->lpVtbl->Next)(
               v18,
               1LL,
               &pidl);
            ILFree(pidl) )
      {
        if ( (int)CPinList::AppendPidl((CPinList *)this, a2, pidl) < 0 )
        {
          ILFree(pidl);
          v5 = -2147024882;
          break;
        }
      }
      ((void (__fastcall *)(struct IEnumFullIDList *))v18->lpVtbl->Release)(v18);
      if ( v5 >= 0 )
      {
        v6 = (*(__int64 (__fastcall **)(struct CPinnedList *, _QWORD))(*(_QWORD *)a2 + 56LL))(a2, 0LL);
        this[1] = (struct IStream *)v6;
        if ( v6 )
        {
          for ( i = 0; ; ++i )
          {
            v8 = *this;
            v9 = *this ? *(_DWORD *)v8 : 0;
            if ( i >= v9 )
              break;
            ItemPtr = (union _LARGE_INTEGER *)DSA_GetItemPtr(v8, i);
            v11 = this[1];
            pidl = 0LL;
            v12 = ItemPtr;
            if ( IStream_Read(v11, &pidl, 4u) < 0
              || (int)IStream_GetPos(this[1], v12 + 2) < 0
              || (*(int (__fastcall **)(struct IStream *, LPITEMIDLIST, __int64))(*(_QWORD *)this[1] + 40LL))(
                   this[1],
                   pidl,
                   1LL) < 0 )
            {
              goto LABEL_19;
            }
            v12[3].LowPart = (unsigned int)pidl;
          }
        }
        else
        {
LABEL_19:
          for ( j = 0; ; ++j )
          {
            v14 = *this;
            v15 = *this ? *(_DWORD *)v14 : 0;
            if ( j >= v15 )
              break;
            v16 = DSA_GetItemPtr(v14, j);
            *((_DWORD *)v16 + 6) = 0;
            SafeRelease<IShellItemArray>((__int64 *)v16 + 1);
          }
        }
        return 0;
      }
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
