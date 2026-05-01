/*
 * XREFs of ?FindPidl@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@PEAH@Z @ 0x1801F2630
 * Callers:
 *     ?FindPidlOrAppID@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@_NPEAH@Z @ 0x18068EC70 (-FindPidlOrAppID@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@_NPEAH@Z.c)
 *     ?ItemChangeNotify@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@0@Z @ 0x180694120 (-ItemChangeNotify@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@0@Z.c)
 * Callees:
 *     ILIsEqualByPath @ 0x1801F2708 (ILIsEqualByPath.c)
 *     DSA_GetItemPtr @ 0x1801F27A0 (DSA_GetItemPtr.c)
 */

LPCITEMIDLIST *__fastcall CPinList::FindPidl(HDSA *this, const struct _ITEMIDLIST *a2, int *a3)
{
  LPCITEMIDLIST *v3; // rdi
  int v7; // ebx
  LPCITEMIDLIST *ItemPtr; // rsi
  LPCITEMIDLIST *v9; // rsi

  v3 = 0LL;
  if ( *this )
  {
    v7 = *(_DWORD *)*this - 1;
    if ( v7 >= 0 )
    {
      if ( a3 )
      {
        do
        {
          ItemPtr = (LPCITEMIDLIST *)DSA_GetItemPtr(*this, v7);
          if ( ILIsEqual(*ItemPtr, a2) || (unsigned int)ILIsEqualByPath(*ItemPtr, a2) )
          {
            *a3 = v7;
            v3 = ItemPtr;
          }
          --v7;
        }
        while ( v7 >= 0 );
      }
      else
      {
        do
        {
          v9 = (LPCITEMIDLIST *)DSA_GetItemPtr(*this, v7);
          if ( ILIsEqual(*v9, a2) || (unsigned int)ILIsEqualByPath(*v9, a2) )
            v3 = v9;
          --v7;
        }
        while ( v7 >= 0 );
      }
    }
  }
  return v3;
}
