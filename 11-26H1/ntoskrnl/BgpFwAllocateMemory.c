/*
 * XREFs of BgpFwAllocateMemory @ 0x140355EBC
 * Callers:
 *     RaspAllocateMemory @ 0x140355970 (RaspAllocateMemory.c)
 *     BgpRasPrintGlyph @ 0x1404AD338 (BgpRasPrintGlyph.c)
 *     BgpFwQueryBootGraphicsInformation @ 0x140501CD4 (BgpFwQueryBootGraphicsInformation.c)
 *     BcpGetProgressMessages @ 0x140717C10 (BcpGetProgressMessages.c)
 *     BgpDisplayCharacterGetContext @ 0x140C4FBB4 (BgpDisplayCharacterGetContext.c)
 *     BgpConsoleInitialize @ 0x140C50420 (BgpConsoleInitialize.c)
 *     ResFwpPageInBackground @ 0x140C50F60 (ResFwpPageInBackground.c)
 *     BgpTxtCreateRegion @ 0x140C51CF0 (BgpTxtCreateRegion.c)
 *     TxtpAddCacheEntry @ 0x140C527F0 (TxtpAddCacheEntry.c)
 *     AnFwDisplayFade @ 0x140C52BA0 (AnFwDisplayFade.c)
 *     BgpTxtGetRegionContext @ 0x140C53234 (BgpTxtGetRegionContext.c)
 *     BgpGxRectangleCreate @ 0x140C53640 (BgpGxRectangleCreate.c)
 *     BgpFwLibraryInitialize @ 0x140C545B8 (BgpFwLibraryInitialize.c)
 *     BgpFoInitialize @ 0x140D13A98 (BgpFoInitialize.c)
 *     FopInitializeFonts @ 0x140D13CF0 (FopInitializeFonts.c)
 *     FopReadCmapTable @ 0x140D13E48 (FopReadCmapTable.c)
 *     FopReadMappingTable @ 0x140D13FB4 (FopReadMappingTable.c)
 *     FopReadNamingTable @ 0x140D141B8 (FopReadNamingTable.c)
 *     FopValidateFontNameTable @ 0x140D14364 (FopValidateFontNameTable.c)
 *     BgpBcInitializeCriticalMode @ 0x140D148A4 (BgpBcInitializeCriticalMode.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x1403454C0 (MiFreePagesFromMdl.c)
 *     MmAllocatePagesForMdlEx @ 0x140348200 (MmAllocatePagesForMdlEx.c)
 *     BgpFwReserveAllocate @ 0x1403568DC (BgpFwReserveAllocate.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14035D330 (MmMapLockedPagesSpecifyCache.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BgpFwAllocateMemory(unsigned __int64 a1)
{
  int v2; // ebp
  char *v3; // rdi
  PMDL v4; // rbx
  __int64 v5; // r15
  SIZE_T v6; // rsi
  char *Pool2; // rax
  PMDL PagesForMdl; // rax
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v10; // rax

  if ( !a1 )
    return 0LL;
  if ( (*(_WORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] & 0x800) != 0 )
    return BgpFwReserveAllocate();
  v2 = *(_WORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] & 0x8000;
  v3 = 0LL;
  v4 = 0LL;
  v5 = v2 != 0 ? 48LL : 32LL;
  v6 = v5 + a1;
  if ( v5 + a1 >= a1 && v6 < 0xFFFFEFFF )
  {
    if ( v6 < 0x1000 )
    {
      Pool2 = (char *)ExAllocatePool2(0x40uLL);
LABEL_13:
      if ( !Pool2 )
        goto LABEL_19;
      v3 = &Pool2[v5];
      if ( v2 )
      {
        Blink = gLoadedDiffHivesLock.SavedApcState.ApcListHead[0].Blink;
        v10 = (struct _LIST_ENTRY *)(v3 - 40);
        if ( (unsigned __int8 *)gLoadedDiffHivesLock.SavedApcState.ApcListHead[0].Blink->Blink != &gLoadedDiffHivesLock.SavedApcStateFill[8] )
          __fastfail(3u);
        v10->Flink = gLoadedDiffHivesLock.SavedApcState.ApcListHead[0].Blink;
        v10->Blink = (struct _LIST_ENTRY *)&gLoadedDiffHivesLock.SavedApcState.ApcListHead[0].Blink;
        Blink->Blink = v10;
        gLoadedDiffHivesLock.SavedApcState.ApcListHead[0].Blink = (struct _LIST_ENTRY *)(v3 - 40);
      }
      *((_DWORD *)v3 - 6) = v2 != 0 ? 1262634818 : 1263093570;
      *((_QWORD *)v3 - 2) = v6;
      *((_QWORD *)v3 - 1) = v4;
      if ( !v3 )
      {
LABEL_19:
        if ( v4 )
        {
          MiFreePagesFromMdl((ULONG_PTR)v4, 0, 0, 0);
          ExFreePoolWithTag(v4, 0);
        }
      }
      return (__int64)v3;
    }
    v6 = (v6 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    PagesForMdl = MmAllocatePagesForMdlEx(0LL, (PHYSICAL_ADDRESS)-1LL, 0LL, v6, MmCached, 5u);
    v4 = PagesForMdl;
    if ( PagesForMdl )
    {
      if ( (PagesForMdl->MdlFlags & 5) != 0 )
        Pool2 = (char *)PagesForMdl->MappedSystemVa;
      else
        Pool2 = (char *)MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmCached, 0LL, 0, 0x40000010u);
      goto LABEL_13;
    }
  }
  return (__int64)v3;
}
