/*
 * XREFs of AnFwConfigureProgressResources @ 0x140C570AC
 * Callers:
 *     BgpFwLibraryInitialize @ 0x140C5A5B8 (BgpFwLibraryInitialize.c)
 * Callees:
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     BgpGetBitsPerPixel @ 0x1404B98EC (BgpGetBitsPerPixel.c)
 *     BgpGxRectangleSize @ 0x1404F377C (BgpGxRectangleSize.c)
 *     BgpTxtRegionSize @ 0x14071B230 (BgpTxtRegionSize.c)
 *     BgpTxtCreateRegion @ 0x140C57CF0 (BgpTxtCreateRegion.c)
 *     BgpFoGetFontHandle @ 0x140C5A508 (BgpFoGetFontHandle.c)
 */

__int64 __fastcall AnFwConfigureProgressResources(int *a1)
{
  int BitsPerPixel; // eax
  _DWORD v4[2]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v5; // [rsp+48h] [rbp-20h]
  int v6; // [rsp+50h] [rbp-18h]
  int v7; // [rsp+54h] [rbp-14h]
  __int64 v8; // [rsp+70h] [rbp+8h] BYREF

  v8 = 0LL;
  v5 = 0LL;
  KeInitializeEvent(&stru_140E65170, NotificationEvent, 1u);
  if ( !a1 || (a1[6] & 1) == 0 )
    return 0LL;
  if ( gLoadedDiffHivesLock.SecureThreadCookie == 1 )
  {
    word_140E0EFEC = 0;
    word_140E0EFF8 = -7936;
    word_140E0EFF4 = -7818;
    word_140E0EFF0 = -7937;
  }
  if ( (int)BgpFoGetFontHandle(0LL) < 0 )
    return 0LL;
  v4[0] = HIDWORD(gLoadedDiffHivesLock.MutantListHead.Blink);
  v4[1] = *(_DWORD *)&gLoadedDiffHivesLock.AbWaitEntryCount;
  v6 = a1[5];
  v7 = 1;
  if ( (int)BgpTxtCreateRegion((_DWORD)a1, (int)a1 + 8, (unsigned int)v4, (int)a1 + 28, (__int64)&v8, 10) < 0 )
    return 0LL;
  BitsPerPixel = BgpGetBitsPerPixel();
  gLoadedDiffHivesLock.WaitBlock[2].SpareLong = ((BgpGxRectangleSize(a1[3], a1[2], BitsPerPixel) + 15) & 0xFFFFFFF0)
                                              + 128;
  *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[112] = gLoadedDiffHivesLock.WaitBlock[2].SpareLong
                                                        * ((unsigned __int16)word_140E0EFF4
                                                         - (unsigned __int16)word_140E0EFF8
                                                         + 1);
  *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[120] = BgpTxtRegionSize(v8);
  return v8;
}
