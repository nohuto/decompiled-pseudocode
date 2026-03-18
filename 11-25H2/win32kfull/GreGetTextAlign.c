/*
 * XREFs of GreGetTextAlign @ 0x14003F490
 * Callers:
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x14003DB8C (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     xxxMNInvertItem @ 0x14003E628 (xxxMNInvertItem.c)
 *     xxxMenuDraw @ 0x140043508 (xxxMenuDraw.c)
 *     DrawFrameControl @ 0x140054934 (DrawFrameControl.c)
 *     ?FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z @ 0x140056184 (-FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z.c)
 *     xxxDrawCaptionTemp @ 0x1400C08C8 (xxxDrawCaptionTemp.c)
 *     DrawTextExWorker @ 0x1400C188C (DrawTextExWorker.c)
 *     _ServerFixupMenuDC @ 0x14015522C (_ServerFixupMenuDC.c)
 *     CreateCompatiblePublicDC @ 0x140174D54 (CreateCompatiblePublicDC.c)
 *     xxxDrawState @ 0x140190760 (xxxDrawState.c)
 * Callees:
 *     ??0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140082A70 (--0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x140082B20 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetTextAlign(HDC a1)
{
  unsigned int v1; // ebx
  _QWORD v3[11]; // [rsp+20h] [rbp-58h] BYREF

  UAPIDCOBJ::UAPIDCOBJ((UAPIDCOBJ *)v3, a1);
  if ( v3[0] )
    v1 = *(_DWORD *)(*(_QWORD *)(v3[0] + 976LL) + 276LL);
  else
    v1 = 0;
  DCOBJ::~DCOBJ((DCOBJ *)v3);
  return v1;
}
