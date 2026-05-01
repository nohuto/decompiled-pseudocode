/*
 * XREFs of ?ILCloneWithHiddenID@@YAJPEFBU_ITEMIDLIST@@PEFBU_HIDDENITEMID@@PEAPEFAU1@@Z @ 0x18066C08C
 * Callers:
 *     ?ILAppendHiddenID@@YAPEFAU_ITEMIDLIST@@PEFAU1@PEFBU_HIDDENITEMID@@@Z @ 0x18066BF40 (-ILAppendHiddenID@@YAPEFAU_ITEMIDLIST@@PEFAU1@PEFBU_HIDDENITEMID@@@Z.c)
 *     ?SetPinTimeForPinnedItem@@YAJPEFBU_ITEMIDLIST@@PEAU_FILETIME@@PEAPEFAU1@@Z @ 0x1806700C4 (-SetPinTimeForPinnedItem@@YAJPEFBU_ITEMIDLIST@@PEAU_FILETIME@@PEAPEFAU1@@Z.c)
 *     ?_CreateTombstone@CPinList@@AEAAJPEAVCPinnedList@@PEBGPEAVPINENTRY@@@Z @ 0x180672200 (-_CreateTombstone@CPinList@@AEAAJPEAVCPinnedList@@PEBGPEAVPINENTRY@@@Z.c)
 * Callees:
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x1801C3B64 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?ILFindFirstHiddenID@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@@Z @ 0x18030D920 (-ILFindFirstHiddenID@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@@Z.c)
 *     memcpy_0 @ 0x1806A4B0C (memcpy_0.c)
 *     memmove_0 @ 0x1806A4B18 (memmove_0.c)
 */

__int64 __fastcall ILCloneWithHiddenID(
        const struct _ITEMIDLIST *Src,
        const struct _HIDDENITEMID *a2,
        struct _ITEMIDLIST **a3)
{
  UINT v6; // r14d
  void *v7; // rcx
  int v8; // ebx
  __int64 v9; // rbx
  struct _ITEMIDLIST *ID; // r14
  const struct _HIDDENITEMID *HiddenID; // rax
  __int64 cb; // r15
  char *v13; // rsi
  unsigned __int16 v14; // ax
  USHORT v15; // ax

  *a3 = 0LL;
  if ( Src && Src->mkid.cb && HIWORD(*((_DWORD *)a2 + 1)) == 0xBEEF )
  {
    v6 = ILGetSize(Src);
    v8 = CTCoAllocPolicy::Alloc(v7, 1, v6 + *(unsigned __int16 *)a2 + 2, (void **)a3);
    if ( v8 >= 0 )
    {
      v9 = v6;
      memcpy_0(*a3, Src, v6);
      ID = ILFindLastID(*a3);
      HiddenID = ILFindFirstHiddenID(ID);
      cb = ID->mkid.cb;
      if ( HiddenID )
        LOWORD(cb) = *(_WORD *)((char *)ID + cb - 2);
      v13 = (char *)*a3 + v9;
      memmove_0(v13 - 2, a2, *(unsigned __int16 *)a2);
      v14 = *((_WORD *)v13 - 1) + 2;
      if ( v14 < *((_WORD *)v13 - 1) || (*((_WORD *)v13 - 1) = v14, v15 = ID->mkid.cb + v14, v15 < ID->mkid.cb) )
      {
        v8 = -2147024362;
        CoTaskMemFree(*a3);
        *a3 = 0LL;
      }
      else
      {
        ID->mkid.cb = v15;
        v8 = 0;
        *(_WORD *)&v13[*((unsigned __int16 *)v13 - 1) - 4] = cb;
      }
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)v8;
}
