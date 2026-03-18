/*
 * XREFs of GrePolyPatBlt @ 0x140055878
 * Callers:
 *     ?MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z @ 0x140040284 (-MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z.c)
 *     xxxDrawMenuItem @ 0x14004086C (xxxDrawMenuItem.c)
 *     xxxDrawCaptionBar @ 0x140044E0C (xxxDrawCaptionBar.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x140053DC8 (-UT_InvertCaret@@YAXXZ.c)
 *     DrawFrameControl @ 0x140054934 (DrawFrameControl.c)
 *     DrawEdge @ 0x1400552A8 (DrawEdge.c)
 *     FillRect @ 0x1400557E0 (FillRect.c)
 *     _DrawIconEx @ 0x140056464 (_DrawIconEx.c)
 *     ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x140056E58 (-DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     xxxDrawState @ 0x140190760 (xxxDrawState.c)
 *     ?DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1401E5A0C (-DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     DrawFrame @ 0x1401F0710 (DrawFrame.c)
 *     xxxMenuBarDraw @ 0x14020258C (xxxMenuBarDraw.c)
 *     ?DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z @ 0x140212374 (-DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z.c)
 *     ?DrawDiagonalLine@@YAKPEAUHDC__@@PEAUtagRECT@@HHI@Z @ 0x14022C3CC (-DrawDiagonalLine@@YAKPEAUHDC__@@PEAUtagRECT@@HHI@Z.c)
 *     DrawSize @ 0x1402E4C0C (DrawSize.c)
 *     ClientFrame @ 0x1402F2E1C (ClientFrame.c)
 * Callees:
 *     ?GrepPolyPatBlt@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1400807B8 (-GrepPolyPatBlt@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall GrePolyPatBlt(HDC a1, unsigned int a2, struct _POLYPATBLT *a3, unsigned int a4)
{
  unsigned int v7; // ebx
  _QWORD v9[14]; // [rsp+50h] [rbp-78h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v9, a1);
  v7 = 0;
  if ( v9[0] )
    v7 = GrepPolyPatBlt(
           (struct XDCOBJ *)v9,
           a2,
           a3,
           a4,
           0,
           *(_DWORD *)(*(_QWORD *)(v9[0] + 976LL) + 184LL),
           *(_DWORD *)(*(_QWORD *)(v9[0] + 976LL) + 176LL),
           *(_DWORD *)(*(_QWORD *)(v9[0] + 976LL) + 188LL),
           *(_DWORD *)(*(_QWORD *)(v9[0] + 976LL) + 180LL));
  else
    EngSetLastError(6u);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v9);
  return v7;
}
