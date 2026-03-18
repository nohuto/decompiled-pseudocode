/*
 * XREFs of ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x14009344C
 * Callers:
 *     ?iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z @ 0x14009B018 (-iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     NtGdiDdDDICreateDCFromMemory @ 0x1401B0310 (NtGdiDdDDICreateDCFromMemory.c)
 *     ?GrepCreateDIBitmapComp@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAX@Z @ 0x1401C4344 (-GrepCreateDIBitmapComp@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO.c)
 *     NtGdiDdDDIDestroyDCFromMemory @ 0x1401C8C00 (NtGdiDdDDIDestroyDCFromMemory.c)
 *     NtGdiGetMonitorID @ 0x1401DBB10 (NtGdiGetMonitorID.c)
 *     ?bSaveRegion@@YAHAEAVXDCOBJ@@J@Z @ 0x140262F80 (-bSaveRegion@@YAHAEAVXDCOBJ@@J@Z.c)
 *     GreRealizePalette @ 0x140268A30 (GreRealizePalette.c)
 *     ?GrepSetSystemPaletteUse@@YAIAEAVXDCOBJ@@I@Z @ 0x140310480 (-GrepSetSystemPaletteUse@@YAIAEAVXDCOBJ@@I@Z.c)
 *     GreCreateHalftonePalette @ 0x1403107CC (GreCreateHalftonePalette.c)
 *     GreGetSystemPaletteEntries @ 0x140310B00 (GreGetSystemPaletteEntries.c)
 *     NtGdiUpdateColors @ 0x140310CB0 (NtGdiUpdateColors.c)
 *     ?ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z @ 0x140312354 (-ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z.c)
 *     ?SpDdCreateFullscreenSprite@@YAJAEAVXDCOBJ@@KPEAPEAXPEAPEAUHDC__@@@Z @ 0x140321FE8 (-SpDdCreateFullscreenSprite@@YAJAEAVXDCOBJ@@KPEAPEAXPEAPEAUHDC__@@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJAEAVXDCOBJ@@PEAX@Z @ 0x14032258C (-SpDdDestroyFullscreenSprite@@YAJAEAVXDCOBJ@@PEAX@Z.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJAEAVXDCOBJ@@PEAX@Z @ 0x140322640 (-SpDdNotifyFullscreenSpriteUpdate@@YAJAEAVXDCOBJ@@PEAX@Z.c)
 *     GreHLsurfSetPresentFlags @ 0x140323030 (GreHLsurfSetPresentFlags.c)
 *     GreHLsurfSetUpdateId @ 0x140323134 (GreHLsurfSetUpdateId.c)
 *     ?DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z @ 0x140325818 (-DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z.c)
 *     ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x140325BAC (-DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z.c)
 *     GreDxDwmShutdown @ 0x140326770 (GreDxDwmShutdown.c)
 * Callees:
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009347C (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

Gre::Base *__fastcall SEMOBJSHARED<1>::SEMOBJSHARED<1>(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rax

  v2 = Gre::Base::Globals(a1);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>(a1, v2);
  return a1;
}
