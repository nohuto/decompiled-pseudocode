/*
 * XREFs of BgpFwFreeMemory @ 0x140355E00
 * Callers:
 *     RaspFreeMemory @ 0x140355DE4 (RaspFreeMemory.c)
 *     BgpFwQueryBootGraphicsInformation @ 0x140501CD4 (BgpFwQueryBootGraphicsInformation.c)
 *     BgpDisplayCharacterDestroyContext @ 0x140C4FB88 (BgpDisplayCharacterDestroyContext.c)
 *     BgpDisplayCharacterGetContext @ 0x140C4FBB4 (BgpDisplayCharacterGetContext.c)
 *     BgConsoleDestroyInterface @ 0x140C4FC94 (BgConsoleDestroyInterface.c)
 *     BgpConsoleInitialize @ 0x140C50420 (BgpConsoleInitialize.c)
 *     BgpFwLibraryDestroy @ 0x140C509EC (BgpFwLibraryDestroy.c)
 *     BgpFwLibraryDisable @ 0x140C50AAC (BgpFwLibraryDisable.c)
 *     ResFwpDestroyBackground @ 0x140C50EEC (ResFwpDestroyBackground.c)
 *     ResFwpPageInBackground @ 0x140C50F60 (ResFwpPageInBackground.c)
 *     ResFwpPageOutBackground @ 0x140C50FE4 (ResFwpPageOutBackground.c)
 *     BgpFoDestroy @ 0x140C51B24 (BgpFoDestroy.c)
 *     FopFreeFontData @ 0x140C51BE8 (FopFreeFontData.c)
 *     FopFreeMappingTable @ 0x140C51C94 (FopFreeMappingTable.c)
 *     BgpTxtCreateRegion @ 0x140C51CF0 (BgpTxtCreateRegion.c)
 *     BgpTxtDestroyRegion @ 0x140C51F4C (BgpTxtDestroyRegion.c)
 *     TxtpDestroyCacheEntry @ 0x140C52B30 (TxtpDestroyCacheEntry.c)
 *     AnFwDisplayFade @ 0x140C52BA0 (AnFwDisplayFade.c)
 *     BgpGxRectangleDestroy @ 0x140C53414 (BgpGxRectangleDestroy.c)
 *     BgpFwLibraryInitialize @ 0x140C545B8 (BgpFwLibraryInitialize.c)
 *     BgpFoInitialize @ 0x140D13A98 (BgpFoInitialize.c)
 *     FopReadCmapTable @ 0x140D13E48 (FopReadCmapTable.c)
 *     FopReadMappingTable @ 0x140D13FB4 (FopReadMappingTable.c)
 *     FopReadNamingTable @ 0x140D141B8 (FopReadNamingTable.c)
 *     FopValidateFontNameTable @ 0x140D14364 (FopValidateFontNameTable.c)
 *     BgpBcInitializeCriticalMode @ 0x140D148A4 (BgpBcInitializeCriticalMode.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x140281690 (MmUnmapLockedPages.c)
 *     MiFreePagesFromMdl @ 0x1403454C0 (MiFreePagesFromMdl.c)
 *     RtlClearBits @ 0x1403591A0 (RtlClearBits.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall BgpFwFreeMemory(__int64 a1)
{
  ULONG v2; // edx
  ULONG v3; // ebx
  __int64 v4; // rax
  __int64 v5; // r10
  _QWORD *v6; // r9
  __int64 v7; // rax
  struct _MDL *v8; // rcx
  struct _MDL *v9; // rbx

  v2 = *(_DWORD *)(a1 - 24);
  if ( v2 == 1262700354 )
  {
    v3 = a1 - 24 - qword_140E62238 - 8;
    RtlClearBits(&stru_140E64DC8, v3, *(_DWORD *)(a1 - 16));
    if ( v3 < HIDWORD(stru_140E3E928.QueuedScb) )
      HIDWORD(stru_140E3E928.QueuedScb) = v3;
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
