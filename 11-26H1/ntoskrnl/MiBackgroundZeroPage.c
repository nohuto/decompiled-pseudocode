/*
 * XREFs of MiBackgroundZeroPage @ 0x140456DB4
 * Callers:
 *     MiBackgroundZeroNodePages @ 0x140491210 (MiBackgroundZeroNodePages.c)
 * Callees:
 *     MiInitializeBackgroundZeroingContext @ 0x140456E64 (MiInitializeBackgroundZeroingContext.c)
 *     MiTryZeroMemory @ 0x140456F34 (MiTryZeroMemory.c)
 *     MiLockPageToZero @ 0x1405215D8 (MiLockPageToZero.c)
 *     MiUnlockZeroedPage @ 0x140521994 (MiUnlockZeroedPage.c)
 *     MiUnmapZeroedPage @ 0x140521B08 (MiUnmapZeroedPage.c)
 *     MiMoveZeroedPage @ 0x140521CB0 (MiMoveZeroedPage.c)
 *     MiMarkZeroedPageCold @ 0x1407132E0 (MiMarkZeroedPageCold.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiBackgroundZeroPage(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  _BYTE v6[72]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v7; // [rsp+80h] [rbp+18h] BYREF

  v7 = 0LL;
  memset_0(v6, 0, 0x40uLL);
  MiInitializeBackgroundZeroingContext(a2, a1, v6);
  v4 = MiTryZeroMemory(a2);
  if ( (unsigned int)MiLockPageToZero(v6) )
  {
    MiUnmapZeroedPage(a2, v6);
    MiMoveZeroedPage(v6);
    MiUnlockZeroedPage(v6, &v7);
    if ( v7 )
      MiMarkZeroedPageCold(v6, &v7);
  }
  return v4;
}
