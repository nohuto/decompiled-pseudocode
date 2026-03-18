/*
 * XREFs of ?bXform@EXFORMOBJ@@QEBA_NPEAU_POINTL@@_K@Z @ 0x1400A02A8
 * Callers:
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1400872EC (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?GrepGetAppClipBox@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x140099794 (-GrepGetAppClipBox@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     XFORMOBJ_bApplyXform @ 0x1400D6B10 (XFORMOBJ_bApplyXform.c)
 *     ?GrepGetBoundsRect@@YAKAEAVXDCOBJ@@PEAUtagRECT@@K@Z @ 0x14016CDE0 (-GrepGetBoundsRect@@YAKAEAVXDCOBJ@@PEAUtagRECT@@K@Z.c)
 *     ?GrepSetBoundsRect@@YAKAEAVXDCOBJ@@PEAUtagRECT@@K@Z @ 0x14016D260 (-GrepSetBoundsRect@@YAKAEAVXDCOBJ@@PEAUtagRECT@@K@Z.c)
 *     ?Msk@BLTRECORD@@QEAAHHHHH@Z @ 0x14030A1A0 (-Msk@BLTRECORD@@QEAAHHHHH@Z.c)
 * Callees:
 *     bCvtPts1 @ 0x1400A0334 (bCvtPts1.c)
 */

char __fastcall EXFORMOBJ::bXform(EXFORMOBJ *this, struct _POINTL *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  char v5; // cl
  int v7; // eax

  v4 = *(_QWORD *)this;
  if ( (*(_BYTE *)(v4 + 32) & 0x43) == 0x43 )
    return 1;
  v7 = bCvtPts1(v4, a2, a3, a4);
  v5 = 0;
  if ( v7 )
    return 1;
  return v5;
}
