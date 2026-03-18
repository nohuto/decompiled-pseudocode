/*
 * XREFs of VmpCheckPinAndReference @ 0x1406C0C08
 * Callers:
 *     VmpPinMemoryRanges @ 0x1406C1F74 (VmpPinMemoryRanges.c)
 * Callees:
 *     VmpFindNextPinnedPageStateHelper @ 0x1406C11C8 (VmpFindNextPinnedPageStateHelper.c)
 *     VmpRefDerefPinnedPages @ 0x1406C1A5C (VmpRefDerefPinnedPages.c)
 */

__int64 __fastcall VmpCheckPinAndReference(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, _DWORD *a6)
{
  unsigned int v6; // ebx
  BOOL v8; // r10d
  __int64 NextPinnedPageStateHelper; // rax

  v6 = 0;
  v8 = (*(_DWORD *)(a2 + 72) & 1) == 0;
  *a6 = 0;
  if ( (a5 == 0) != v8 )
    return (unsigned int)-1073741755;
  NextPinnedPageStateHelper = VmpFindNextPinnedPageStateHelper(a1, a3, a4, 1LL);
  if ( NextPinnedPageStateHelper != a3 )
  {
    if ( NextPinnedPageStateHelper == -1 )
      return v6;
    return (unsigned int)-1073741267;
  }
  if ( VmpFindNextPinnedPageStateHelper(a1, a3, a4, 0LL) != -1 )
    return (unsigned int)-1073741267;
  if ( VmpFindNextPinnedPageStateHelper(a1, a3, a4, 4LL) == -1 )
  {
    VmpRefDerefPinnedPages(a1, a3, a4, 0, 0LL);
    *a6 = 1;
  }
  else
  {
    return (unsigned int)-1073741631;
  }
  return v6;
}
