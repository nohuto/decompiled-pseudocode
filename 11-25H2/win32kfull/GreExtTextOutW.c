/*
 * XREFs of GreExtTextOutW @ 0x140057230
 * Callers:
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x14002A200 (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     ?FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z @ 0x140056184 (-FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z.c)
 *     ?DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z @ 0x1400568B8 (-DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z.c)
 *     ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x140056E58 (-DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     xxxDrawCaptionTemp @ 0x1400C08C8 (xxxDrawCaptionTemp.c)
 *     ?DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1401E5A0C (-DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1402B7660 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     xxxPSMTextOut @ 0x1402EE394 (xxxPSMTextOut.c)
 *     ?UserTextOutWInternal@@YAHPEAUHDC__@@HHPEBGIK@Z @ 0x1402F3A50 (-UserTextOutWInternal@@YAHPEAUHDC__@@HHPEBGIK@Z.c)
 * Callees:
 *     ?GrepExtTextOutWLocked@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXKAEBUTag@RFONTOBJ@@@Z @ 0x140014230 (-GrepExtTextOutWLocked@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXKA.c)
 *     ??0?$ReturnValueTracer@K@@QEAA@K@Z @ 0x14001680C (--0-$ReturnValueTracer@K@@QEAA@K@Z.c)
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1400822A0 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400824A4 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x140087B54 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008A870 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEBAHXZ @ 0x14009B348 (-bFullScreen@XDCOBJ@@QEBAHXZ.c)
 */

__int64 __fastcall GreExtTextOutW(
        HDC a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        unsigned int *a5,
        unsigned __int16 *a6,
        int a7,
        unsigned int a8)
{
  unsigned int v11; // ebx
  __int64 SessionState; // rax
  _DWORD v14[4]; // [rsp+78h] [rbp-90h] BYREF
  DC *v15[14]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v16[48]; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v17[144]; // [rsp+128h] [rbp+20h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v15, a1);
  v11 = 0;
  if ( v15[0] )
  {
    SessionState = W32GetSessionState();
    EUDCCountRegion::EUDCCountRegion(
      (EUDCCountRegion *)v16,
      (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4872LL));
    if ( (*((_DWORD *)v15[0] + 9) & 0x10000) == 0 )
    {
      v14[1] = *((unsigned __int16 *)v15[0] + 6);
      v14[0] = 1025;
      DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v17);
      if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v17, (struct XDCOBJ *)v15, 0) )
        v11 = *(_DWORD *)GrepExtTextOutWLocked(
                           (__int64)&a8,
                           v15,
                           a2,
                           a3,
                           a4,
                           a5,
                           a6,
                           a7,
                           0LL,
                           *(unsigned __int8 *)(*((_QWORD *)v15[0] + 122) + 213LL),
                           0LL,
                           0,
                           (struct RFONTOBJ::Tag *)v14);
      else
        v11 = XDCOBJ::bFullScreen((XDCOBJ *)v15);
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v17);
    }
    ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&a8, v11);
    EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v16);
    v11 = a8;
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v15);
  return v11;
}
