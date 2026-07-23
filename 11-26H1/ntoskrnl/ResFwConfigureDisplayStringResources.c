/*
 * XREFs of ResFwConfigureDisplayStringResources @ 0x140C56C5C
 * Callers:
 *     BgpFwLibraryInitialize @ 0x140C5A5B8 (BgpFwLibraryInitialize.c)
 * Callees:
 *     BgpTxtRegionSize @ 0x14071B230 (BgpTxtRegionSize.c)
 *     BgpTxtCreateRegion @ 0x140C57CF0 (BgpTxtCreateRegion.c)
 *     BgpFoGetFontHandle @ 0x140C5A508 (BgpFoGetFontHandle.c)
 */

__int64 __fastcall ResFwConfigureDisplayStringResources(__int64 a1)
{
  int Blink_high; // [rsp+40h] [rbp-20h] BYREF
  int v4; // [rsp+44h] [rbp-1Ch]
  __int64 v5; // [rsp+48h] [rbp-18h]
  int v6; // [rsp+50h] [rbp-10h]
  int v7; // [rsp+54h] [rbp-Ch]
  __int64 v8; // [rsp+70h] [rbp+10h] BYREF

  v8 = 0LL;
  v5 = 0LL;
  if ( !a1 || (*(_DWORD *)(a1 + 24) & 1) == 0 || (int)BgpFoGetFontHandle(0LL) < 0 )
    return 0LL;
  if ( LOBYTE(gLoadedDiffHivesLock.MutantListHead.Blink) )
  {
    Blink_high = HIDWORD(gLoadedDiffHivesLock.MutantListHead.Blink);
    v4 = *(_DWORD *)&gLoadedDiffHivesLock.AbWaitEntryCount;
  }
  else
  {
    Blink_high = 0;
    v4 = -1;
  }
  v6 = *(_DWORD *)(a1 + 20);
  v7 = 0;
  if ( (int)BgpTxtCreateRegion(a1, (int)a1 + 8, (unsigned int)&Blink_high, (int)a1 + 28, (__int64)&v8, 0) < 0 )
    return 0LL;
  *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[124] = BgpTxtRegionSize(v8);
  return v8;
}
