/*
 * XREFs of ?FindPinEntryFromAppId@CPinList@@QEAAPEAVPINENTRY@@PEBG_NPEAH@Z @ 0x18068EDB0
 * Callers:
 *     ?FindPidlOrAppID@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@_NPEAH@Z @ 0x18068EC70 (-FindPidlOrAppID@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@_NPEAH@Z.c)
 *     ?GetPinnedItemForAppID@CPinnedList@@UEAAJPEBGPEAPEFAU_ITEMIDLIST@@@Z @ 0x180691860 (-GetPinnedItemForAppID@CPinnedList@@UEAAJPEBGPEAPEFAU_ITEMIDLIST@@@Z.c)
 * Callees:
 *     DSA_GetItemPtr @ 0x1801F27A0 (DSA_GetItemPtr.c)
 *     ?ILGetHiddenStringAllocW@@YAHPEFBU_ITEMIDLIST@@W4IDLHID@@PEAPEAG@Z @ 0x1802AC430 (-ILGetHiddenStringAllocW@@YAHPEFBU_ITEMIDLIST@@W4IDLHID@@PEAPEAG@Z.c)
 *     ?ILFindHiddenIDOn@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@W4IDLHID@@H@Z @ 0x1802AC4C0 (-ILFindHiddenIDOn@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@W4IDLHID@@H@Z.c)
 */

const ITEMIDLIST **__fastcall CPinList::FindPinEntryFromAppId(HDSA *this, const unsigned __int16 *a2, char a3, int *a4)
{
  const ITEMIDLIST **v4; // rdi
  int v9; // esi
  __int64 *ItemPtr; // rax
  __int64 *v11; // r15
  int v12; // ebx
  LPCWCH lpString1; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0LL;
  if ( *this )
  {
    v9 = *(_DWORD *)*this;
    while ( --v9 >= 0 )
    {
      ItemPtr = (__int64 *)DSA_GetItemPtr(*this, v9);
      lpString1 = 0LL;
      v11 = ItemPtr;
      if ( ILGetHiddenStringAllocW(*ItemPtr, 3203334173LL, (void **)&lpString1) )
      {
        v12 = CompareStringOrdinal(lpString1, -1, a2, -1, 1);
        CoTaskMemFree((LPVOID)lpString1);
        if ( v12 == 2 )
        {
          if ( a4 )
            *a4 = v9;
          v4 = (const ITEMIDLIST **)v11;
        }
      }
    }
  }
  if ( !a3 )
  {
    if ( v4 )
    {
      if ( ILFindHiddenIDOn(*v4, -1091633108) )
      {
        v4 = 0LL;
        if ( a4 )
          *a4 = -1;
      }
    }
  }
  return v4;
}
