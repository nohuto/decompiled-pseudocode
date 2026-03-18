/*
 * XREFs of ?InRegion@ThreadRestrictNewHandlesRegion@@QEAA_NI@Z @ 0x140023420
 * Callers:
 *     ?GrepSelectBitmap@@YA?AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z @ 0x140013360 (-GrepSelectBitmap@@YA-AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z.c)
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x14001B740 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x140021890 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     HmgReplaceObject @ 0x140023150 (HmgReplaceObject.c)
 *     ?HmgpThreadUnrestrictHandle@@YAXI@Z @ 0x14002355C (-HmgpThreadUnrestrictHandle@@YAXI@Z.c)
 *     ?vLock@SURFREF@@QEAAXPEAUHSURF__@@@Z @ 0x140026D44 (-vLock@SURFREF@@QEAAXPEAUHSURF__@@@Z.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x140033CE0 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     GrepDeleteDC @ 0x14003ECB0 (GrepDeleteDC.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140040038 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1400C2CFC (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?GrepSelectPalette@@YAPEAUHPALETTE__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x1400C2EEC (-GrepSelectPalette@@YAPEAUHPALETTE__@@AEAVXDCOBJ@@PEAU1@H@Z.c)
 *     HmgMarkLazyDelete @ 0x1400C3440 (HmgMarkLazyDelete.c)
 *     ??0HANDLELOCK@@QEAA@IW4HandleLockOptions@@@Z @ 0x14010F730 (--0HANDLELOCK@@QEAA@IW4HandleLockOptions@@@Z.c)
 *     ?Protect@ThreadRestrictNewHandlesRegion@@SA_NPEAU_GRETHREAD@@PEAX@Z @ 0x1401EDBF0 (-Protect@ThreadRestrictNewHandlesRegion@@SA_NPEAU_GRETHREAD@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ThreadRestrictNewHandlesRegion::InRegion(ThreadRestrictNewHandlesRegion *this, int a2)
{
  unsigned __int64 i; // r8

  for ( i = 0LL; i < *((_QWORD *)this + 4); ++i )
  {
    if ( *(_DWORD *)(*((_QWORD *)this + 5) + 4 * i) == a2 )
      return 1;
  }
  return 0;
}
