/*
 * XREFs of BgpTxtDestroyRegion @ 0x140C51F4C
 * Callers:
 *     BgpDisplayCharacterDestroyContext @ 0x140C4FB88 (BgpDisplayCharacterDestroyContext.c)
 *     BgpDisplayCharacterGetContext @ 0x140C4FBB4 (BgpDisplayCharacterGetContext.c)
 *     BgpFwLibraryDisable @ 0x140C50AAC (BgpFwLibraryDisable.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140355E00 (BgpFwFreeMemory.c)
 *     BgpTxtCacheDestroy @ 0x140C52AAC (BgpTxtCacheDestroy.c)
 *     BgpGxRectangleDestroy @ 0x140C53414 (BgpGxRectangleDestroy.c)
 */

void __fastcall BgpTxtDestroyRegion(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  if ( a1 && (*(_DWORD *)(a1 + 72) & 1) != 0 )
  {
    v2 = *(_QWORD *)(a1 + 24);
    if ( v2 )
      BgpGxRectangleDestroy(v2);
    v3 = *(_QWORD *)(a1 + 32);
    if ( v3 )
      BgpGxRectangleDestroy(v3);
    if ( (*(_DWORD *)(a1 + 60) & 1) != 0 )
      BgpTxtCacheDestroy();
    BgpFwFreeMemory(a1);
  }
}
