/*
 * XREFs of ILExpungeRemovedHiddenIDs @ 0x18030DD20
 * Callers:
 *     ?SetPinSourceForPinnedItem@@YAJPEFAU_ITEMIDLIST@@PEAPEFAU1@W4TaskbarPinningSource@@@Z @ 0x18066FFA0 (-SetPinSourceForPinnedItem@@YAJPEFAU_ITEMIDLIST@@PEAPEFAU1@W4TaskbarPinningSource@@@Z.c)
 *     ?v_UpgradeItem@CPinnedList@@UEAAJKPEFAU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x180674B90 (-v_UpgradeItem@CPinnedList@@UEAAJKPEFAU_ITEMIDLIST@@PEAPEFAU2@@Z.c)
 * Callees:
 *     ?ILFindHiddenIDOn@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@W4IDLHID@@H@Z @ 0x1802B5F74 (-ILFindHiddenIDOn@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@W4IDLHID@@H@Z.c)
 *     memmove_0 @ 0x1806A4B18 (memmove_0.c)
 */

void __fastcall ILExpungeRemovedHiddenIDs(const ITEMIDLIST *a1)
{
  LPITEMIDLIST ID; // rdi
  const ITEMIDLIST *i; // rcx
  __int64 v3; // rbx
  const struct _HIDDENITEMID *v4; // rax

  if ( a1 )
  {
    ID = ILFindLastID(a1);
    for ( i = ID; ; i = ID )
    {
      v4 = ILFindHiddenIDOn(i, -1091633152);
      if ( !v4 )
        break;
      v3 = *(unsigned __int16 *)v4;
      memmove_0(v4, (char *)v4 + v3, (size_t)&ID->mkid.abID[ID->mkid.cb - ((_QWORD)v4 + v3)]);
      ID->mkid.cb -= v3;
    }
  }
}
