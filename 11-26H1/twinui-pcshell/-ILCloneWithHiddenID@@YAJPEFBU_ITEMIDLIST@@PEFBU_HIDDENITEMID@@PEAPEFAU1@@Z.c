/*
 * XREFs of ?ILCloneWithHiddenID@@YAJPEFBU_ITEMIDLIST@@PEFBU_HIDDENITEMID@@PEAPEFAU1@@Z @ 0x18069294C
 * Callers:
 *     ?ILAppendHiddenID@@YAPEFAU_ITEMIDLIST@@PEFAU1@PEFBU_HIDDENITEMID@@@Z @ 0x180692800 (-ILAppendHiddenID@@YAPEFAU_ITEMIDLIST@@PEFAU1@PEFBU_HIDDENITEMID@@@Z.c)
 *     ?SetPinTimeForPinnedItem@@YAJPEFBU_ITEMIDLIST@@PEAU_FILETIME@@PEAPEFAU1@@Z @ 0x180696D88 (-SetPinTimeForPinnedItem@@YAJPEFBU_ITEMIDLIST@@PEAU_FILETIME@@PEAPEFAU1@@Z.c)
 *     ?_CreateTombstone@CPinList@@AEAAJPEAVCPinnedList@@PEBGPEAVPINENTRY@@@Z @ 0x180698EC8 (-_CreateTombstone@CPinList@@AEAAJPEAVCPinnedList@@PEBGPEAVPINENTRY@@@Z.c)
 * Callees:
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x1801B6528 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     memcpy_0 @ 0x1802CE20A (memcpy_0.c)
 *     ?ILFindFirstHiddenID@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@@Z @ 0x1803096D8 (-ILFindFirstHiddenID@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@@Z.c)
 *     memmove_0 @ 0x1806CCBD4 (memmove_0.c)
 */

__int64 __fastcall ILCloneWithHiddenID(
        const struct _ITEMIDLIST *Src,
        const struct _HIDDENITEMID *a2,
        struct _ITEMIDLIST **a3)
{
  UINT v6; // r14d
  void *v7; // rcx
  int v8; // ebx
  struct _ITEMIDLIST *ID; // rsi
  struct _ITEMIDLIST *v10; // rax
  char *v11; // r14
  USHORT cb; // r15
  unsigned __int16 v13; // cx
  USHORT v14; // ax

  *a3 = 0LL;
  if ( Src && Src->mkid.cb && HIWORD(*((_DWORD *)a2 + 1)) == 0xBEEF )
  {
    v6 = ILGetSize(Src);
    v8 = CTCoAllocPolicy::Alloc(v7, 1, v6 + *(unsigned __int16 *)a2 + 2, (void **)a3);
    if ( v8 >= 0 )
    {
      memcpy_0(*a3, Src, v6);
      ID = ILFindLastID(*a3);
      if ( ILFindFirstHiddenID(ID) )
        v10 = (struct _ITEMIDLIST *)((char *)ID + ID->mkid.cb - 2);
      else
        v10 = ID;
      v11 = (char *)*a3 + v6;
      cb = v10->mkid.cb;
      memmove_0(v11 - 2, a2, *(unsigned __int16 *)a2);
      v13 = *((_WORD *)v11 - 1) + 2;
      if ( v13 < *((_WORD *)v11 - 1) || (*((_WORD *)v11 - 1) = v13, v14 = v13 + ID->mkid.cb, v14 < ID->mkid.cb) )
      {
        v8 = -2147024362;
        CoTaskMemFree(*a3);
        *a3 = 0LL;
      }
      else
      {
        ID->mkid.cb = v14;
        v8 = 0;
        *(_WORD *)&v11[*((unsigned __int16 *)v11 - 1) - 4] = cb;
      }
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)v8;
}
