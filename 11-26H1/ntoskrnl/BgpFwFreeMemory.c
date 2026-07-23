/*
 * XREFs of BgpFwFreeMemory @ 0x140357BA8
 * Callers:
 *     RaspFreeMemory @ 0x140357B8C (RaspFreeMemory.c)
 *     BgpFwQueryBootGraphicsInformation @ 0x1404FB4C4 (BgpFwQueryBootGraphicsInformation.c)
 *     BgpDisplayCharacterDestroyContext @ 0x140C55B88 (BgpDisplayCharacterDestroyContext.c)
 *     BgpDisplayCharacterGetContext @ 0x140C55BB4 (BgpDisplayCharacterGetContext.c)
 *     BgConsoleDestroyInterface @ 0x140C55C94 (BgConsoleDestroyInterface.c)
 *     BgpConsoleInitialize @ 0x140C56420 (BgpConsoleInitialize.c)
 *     BgpFwLibraryDestroy @ 0x140C569EC (BgpFwLibraryDestroy.c)
 *     BgpFwLibraryDisable @ 0x140C56AAC (BgpFwLibraryDisable.c)
 *     ResFwpDestroyBackground @ 0x140C56EEC (ResFwpDestroyBackground.c)
 *     ResFwpPageInBackground @ 0x140C56F60 (ResFwpPageInBackground.c)
 *     ResFwpPageOutBackground @ 0x140C56FE4 (ResFwpPageOutBackground.c)
 *     BgpFoDestroy @ 0x140C57B24 (BgpFoDestroy.c)
 *     FopFreeFontData @ 0x140C57BE8 (FopFreeFontData.c)
 *     FopFreeMappingTable @ 0x140C57C94 (FopFreeMappingTable.c)
 *     BgpTxtCreateRegion @ 0x140C57CF0 (BgpTxtCreateRegion.c)
 *     BgpTxtDestroyRegion @ 0x140C57F4C (BgpTxtDestroyRegion.c)
 *     TxtpDestroyCacheEntry @ 0x140C58B30 (TxtpDestroyCacheEntry.c)
 *     AnFwDisplayFade @ 0x140C58BA0 (AnFwDisplayFade.c)
 *     BgpGxRectangleDestroy @ 0x140C59414 (BgpGxRectangleDestroy.c)
 *     BgpFwLibraryInitialize @ 0x140C5A5B8 (BgpFwLibraryInitialize.c)
 *     BgpFoInitialize @ 0x140D19C60 (BgpFoInitialize.c)
 *     FopReadCmapTable @ 0x140D1A010 (FopReadCmapTable.c)
 *     FopReadMappingTable @ 0x140D1A17C (FopReadMappingTable.c)
 *     FopReadNamingTable @ 0x140D1A380 (FopReadNamingTable.c)
 *     FopValidateFontNameTable @ 0x140D1A52C (FopValidateFontNameTable.c)
 *     BgpBcInitializeCriticalMode @ 0x140D1AA6C (BgpBcInitializeCriticalMode.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x140280C00 (MmUnmapLockedPages.c)
 *     MiFreePagesFromMdl @ 0x140347540 (MiFreePagesFromMdl.c)
 *     RtlClearBits @ 0x14035AF40 (RtlClearBits.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall BgpFwFreeMemory(__int64 a1)
{
  ULONG v2; // edx
  volatile unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // r10
  _QWORD *v6; // r9
  __int64 v7; // rax
  struct _MDL *v8; // rcx
  struct _MDL *v9; // rbx

  v2 = *(_DWORD *)(a1 - 24);
  if ( v2 == 1262700354 )
  {
    v3 = a1 - 24 - qword_140E64FB0 - 8;
    RtlClearBits(&stru_140E64FC0, v3, *(_DWORD *)(a1 - 16));
    if ( v3 < stru_140E3EAA8.ThreadTimerDelay )
      stru_140E3EAA8.ThreadTimerDelay = v3;
  }
  else
  {
    if ( v2 == 1262634818 )
    {
      v4 = a1 - 40;
      v5 = *(_QWORD *)(a1 - 40);
      if ( *(_QWORD *)(v5 + 8) != a1 - 40 || (v6 = *(_QWORD **)(v4 + 8), *v6 != v4) )
        __fastfail(3u);
      *v6 = v5;
      v7 = 48LL;
      *(_QWORD *)(v5 + 8) = v6;
    }
    else
    {
      v7 = 32LL;
    }
    v8 = (struct _MDL *)(a1 - v7);
    if ( *(_QWORD *)(a1 - 16) >= 0x1000uLL )
    {
      v9 = *(struct _MDL **)(a1 - 8);
      MmUnmapLockedPages(v8, v9);
      MiFreePagesFromMdl((ULONG_PTR)v9, 0, 0, 0);
      v2 = 0;
      v8 = v9;
    }
    ExFreePoolWithTag(v8, v2);
  }
}
