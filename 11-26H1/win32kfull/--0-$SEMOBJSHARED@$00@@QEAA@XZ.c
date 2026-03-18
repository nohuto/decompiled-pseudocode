/*
 * XREFs of ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x1401D6F9C
 * Callers:
 *     ?GrepCreateDIBitmap@@YA?AVSURFREF@@AEAVOPTAPIDCOBJ@@KAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK3K_KPEAPEAX@Z @ 0x1400167D4 (-GrepCreateDIBitmap@@YA-AVSURFREF@@AEAVOPTAPIDCOBJ@@KAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK.c)
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x14006D6CC (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z @ 0x1400AD828 (-iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?GrepCreateCompatibleBitmapWithDIBits@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAX@Z @ 0x14016959C (-GrepCreateCompatibleBitmapWithDIBits@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKAEAV-$umptr_r@E@@PEA.c)
 *     NtGdiGetMonitorID @ 0x1401D6DA0 (NtGdiGetMonitorID.c)
 *     ?GrepSetSystemPaletteUse@@YAIAEAVXDCOBJ@@I@Z @ 0x140331348 (-GrepSetSystemPaletteUse@@YAIAEAVXDCOBJ@@I@Z.c)
 *     GreCreateHalftonePalette @ 0x1403317EC (GreCreateHalftonePalette.c)
 *     GreGetSystemPaletteEntries @ 0x140331B20 (GreGetSystemPaletteEntries.c)
 *     NtGdiUpdateColors @ 0x140331CD0 (NtGdiUpdateColors.c)
 *     ?ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z @ 0x140334D0C (-ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z.c)
 *     ?SpDdCreateFullscreenSprite@@YAJAEAVXDCOBJ@@KPEAPEAXPEAPEAUHDC__@@@Z @ 0x1403442D4 (-SpDdCreateFullscreenSprite@@YAJAEAVXDCOBJ@@KPEAPEAXPEAPEAUHDC__@@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJAEAVXDCOBJ@@PEAX@Z @ 0x140344860 (-SpDdDestroyFullscreenSprite@@YAJAEAVXDCOBJ@@PEAX@Z.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJAEAVXDCOBJ@@PEAX@Z @ 0x140344914 (-SpDdNotifyFullscreenSpriteUpdate@@YAJAEAVXDCOBJ@@PEAX@Z.c)
 *     GreHLsurfSetPresentFlags @ 0x140345248 (GreHLsurfSetPresentFlags.c)
 *     GreHLsurfSetUpdateId @ 0x14034534C (GreHLsurfSetUpdateId.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$00@@YAXXZ @ 0x14006B7F4 (--$GrepAcquireLockValidate@$00@@YAXXZ.c)
 */

Gre::Base *__fastcall SEMOBJSHARED<1>::SEMOBJSHARED<1>(Gre::Base *a1)
{
  HSEMAPHORE v2; // rcx

  v2 = (HSEMAPHORE)(*(_QWORD *)Gre::Base::Globals(a1) + 624LL);
  *(_QWORD *)a1 = v2;
  GreAcquireSemaphoreSharedInternal(v2);
  GrepAcquireLockValidate<1>();
  return a1;
}
