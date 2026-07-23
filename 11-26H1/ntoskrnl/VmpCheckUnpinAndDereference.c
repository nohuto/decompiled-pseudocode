/*
 * XREFs of VmpCheckUnpinAndDereference @ 0x1406C48D0
 * Callers:
 *     VmpUnpinMemoryRangeHelper @ 0x1406C644C (VmpUnpinMemoryRangeHelper.c)
 * Callees:
 *     VmpFindNextPinnedPageStateHelper @ 0x1406C4DA8 (VmpFindNextPinnedPageStateHelper.c)
 *     VmpRefDerefPinnedPages @ 0x1406C563C (VmpRefDerefPinnedPages.c)
 */

__int64 __fastcall VmpCheckUnpinAndDereference(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        _DWORD *a8)
{
  unsigned int v9; // ebx
  __int64 NextPinnedPageStateHelper; // rax

  v9 = 0;
  *a8 = 0;
  if ( VmpFindNextPinnedPageStateHelper(a1, a4, a5, 1LL) == a4
    && VmpFindNextPinnedPageStateHelper(a1, a4, a5, 0LL) == -1 )
  {
    if ( (a6 & 1) == 0 )
    {
      NextPinnedPageStateHelper = VmpFindNextPinnedPageStateHelper(a1, a4, a5, 2LL);
      if ( NextPinnedPageStateHelper == -1 )
      {
        *a8 = 1;
      }
      else if ( NextPinnedPageStateHelper != a4 || VmpFindNextPinnedPageStateHelper(a1, a4, a5, 3LL) != -1 )
      {
        return (unsigned int)-1073741267;
      }
    }
    VmpRefDerefPinnedPages(a1, a4, a5, a6, a7);
    return v9;
  }
  return (unsigned int)-1073741800;
}
