/*
 * XREFs of ?vClearMoveData@METAREGION@@QEAAXH@Z @ 0x1401F4210
 * Callers:
 *     ?GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z @ 0x14001DB54 (-GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x140074A40 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     ?vCalculateNoMoveDirty@METAREGION@@AEAAXXZ @ 0x140075444 (-vCalculateNoMoveDirty@METAREGION@@AEAAXXZ.c)
 *     ?vApplyMoveData@METAREGION@@AEAAHPEAU_RECTL@@PEAU_POINTL@@PEAVREGION@@@Z @ 0x1401F3E40 (-vApplyMoveData@METAREGION@@AEAAHPEAU_RECTL@@PEAU_POINTL@@PEAVREGION@@@Z.c)
 *     ?bIntersectMoveWithDirty@METAREGION@@AEAAHPEAU_RECTL@@@Z @ 0x14034F5D4 (-bIntersectMoveWithDirty@METAREGION@@AEAAHPEAU_RECTL@@@Z.c)
 *     ?bTrimMoveWithRegion@METAREGION@@AEAAHPEAVREGION@@H@Z @ 0x14034F82C (-bTrimMoveWithRegion@METAREGION@@AEAAHPEAVREGION@@H@Z.c)
 *     ?vAddRectToMoveRegionHelper@METAREGION@@AEAAHPEAU_RECTL@@@Z @ 0x14034F9F0 (-vAddRectToMoveRegionHelper@METAREGION@@AEAAHPEAU_RECTL@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall METAREGION::vClearMoveData(METAREGION *this, int a2)
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 2) && a2 )
  {
    v4 = *((_QWORD *)this + 2);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v4);
  }
  if ( *((_QWORD *)this + 1) )
  {
    v4 = *((_QWORD *)this + 1);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v4);
    *((_QWORD *)this + 1) = 0LL;
  }
  if ( *((_QWORD *)this + 4) && a2 )
  {
    v4 = *((_QWORD *)this + 4);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v4);
  }
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 10) = 0;
}
