/*
 * XREFs of ?bXform@EXFORMOBJ@@QEBA_NPEAU_POINTL@@_K@Z @ 0x1400781A0
 * Callers:
 *     ?GrepGetAppClipBox@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1400AC974 (-GrepGetAppClipBox@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     XFORMOBJ_bApplyXform @ 0x1400D9680 (XFORMOBJ_bApplyXform.c)
 *     ?GrepSetBoundsRect@@YAKAEAVXDCOBJ@@PEAUtagRECT@@K@Z @ 0x1401A8A60 (-GrepSetBoundsRect@@YAKAEAVXDCOBJ@@PEAUtagRECT@@K@Z.c)
 *     ?Msk@BLTRECORD@@QEAAHHHHH@Z @ 0x140320AB8 (-Msk@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ??$NtGdiExtFloodFillImpl@$0A@@@YAHPEAUHDC__@@HHKI@Z @ 0x140331F58 (--$NtGdiExtFloodFillImpl@$0A@@@YAHPEAUHDC__@@HHKI@Z.c)
 * Callees:
 *     bCvtPts1 @ 0x14007822C (bCvtPts1.c)
 */

char __fastcall EXFORMOBJ::bXform(EXFORMOBJ *this, struct _POINTL *a2)
{
  __int64 v2; // rcx
  char v3; // cl
  int v5; // eax

  v2 = *(_QWORD *)this;
  if ( (*(_BYTE *)(v2 + 32) & 0x43) == 0x43 )
    return 1;
  v5 = bCvtPts1(v2, a2);
  v3 = 0;
  if ( v5 )
    return 1;
  return v3;
}
