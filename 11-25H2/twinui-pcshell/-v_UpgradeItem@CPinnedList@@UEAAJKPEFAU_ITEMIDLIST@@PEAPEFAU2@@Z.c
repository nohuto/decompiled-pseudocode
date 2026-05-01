/*
 * XREFs of ?v_UpgradeItem@CPinnedList@@UEAAJKPEFAU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x180674B90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPinSourceForPinnedItem@@YAJPEFBU_ITEMIDLIST@@PEAW4TaskbarPinningSource@@@Z @ 0x1802198EC (-GetPinSourceForPinnedItem@@YAJPEFBU_ITEMIDLIST@@PEAW4TaskbarPinningSource@@@Z.c)
 *     ?ILFindHiddenIDOn@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@W4IDLHID@@H@Z @ 0x1802B5F74 (-ILFindHiddenIDOn@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@W4IDLHID@@H@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ILExpungeRemovedHiddenIDs @ 0x18030DD20 (ILExpungeRemovedHiddenIDs.c)
 *     ?SetPinSourceForPinnedItem@@YAJPEFAU_ITEMIDLIST@@PEAPEFAU1@W4TaskbarPinningSource@@@Z @ 0x18066FFA0 (-SetPinSourceForPinnedItem@@YAJPEFAU_ITEMIDLIST@@PEAPEFAU1@W4TaskbarPinningSource@@@Z.c)
 *     _CacheAppIDInIDList @ 0x180671C30 (_CacheAppIDInIDList.c)
 */

__int64 __fastcall CPinnedList::v_UpgradeItem(
        CPinnedList *this,
        int a2,
        struct _ITEMIDLIST *a3,
        struct _ITEMIDLIST **a4)
{
  struct _ITEMIDLIST *v4; // rbx
  const struct _HIDDENITEMID *v6; // rax
  __int64 v7; // r9
  _BYTE v9[8]; // [rsp+20h] [rbp-28h] BYREF
  struct _ITEMIDLIST *v10; // [rsp+28h] [rbp-20h] BYREF

  v4 = a3;
  v10 = a3;
  if ( a2 )
  {
    v6 = ILFindHiddenIDOn(a3, -1091633123);
    if ( v6 )
    {
      *((_DWORD *)v6 + 1) = -1091633152;
      ILExpungeRemovedHiddenIDs(v4);
    }
    if ( (int)GetPinSourceForPinnedItem(v4, (enum TaskbarPinningSource *)v9) < 0 )
    {
      SetPinSourceForPinnedItem(v4, &v10, 0LL, v7);
      v4 = v10;
    }
  }
  return CacheAppIDInIDList(v4, a4);
}
