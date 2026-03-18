/*
 * XREFs of ?vIntersectDirtyRectWithMoveData@METAREGION@@AEAAXPEAUtagRECT@@@Z @ 0x14009A918
 * Callers:
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x140099AFC (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14006D204 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x14007A070 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x14009ACF4 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vClearMoveData@METAREGION@@QEAAXH@Z @ 0x1401C8798 (-vClearMoveData@METAREGION@@QEAAXH@Z.c)
 *     ?bTrimMoveWithRegion@METAREGION@@AEAAHPEAVREGION@@H@Z @ 0x14034044C (-bTrimMoveWithRegion@METAREGION@@AEAAHPEAVREGION@@H@Z.c)
 */

void __fastcall METAREGION::vIntersectDirtyRectWithMoveData(METAREGION *this, const struct _RECTL *a2)
{
  __int64 v4; // rax
  __int64 v5; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v6[6]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v7; // [rsp+70h] [rbp+20h] BYREF
  struct REGION *v8; // [rsp+80h] [rbp+30h] BYREF
  _DWORD *v9; // [rsp+88h] [rbp+38h] BYREF

  if ( *((_DWORD *)this + 10) && a2 )
  {
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v8);
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v7);
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v9);
    v4 = *((_QWORD *)this + 4);
    v5 = v4;
    if ( v8
      && v7
      && v9
      && v4
      && RGNOBJ::bCopy((RGNOBJ *)&v7, (struct RGNOBJ *)&v5)
      && RGNOBJ::bOffset((RGNOBJ *)&v7, (const struct _POINTL *)this + 3) )
    {
      RGNOBJ::vSet((RGNOBJ *)&v8, a2);
      if ( !v8 )
        goto LABEL_18;
      if ( !v7 )
        goto LABEL_18;
      if ( !v9 )
        goto LABEL_18;
      if ( !RGNOBJ::iCombine((RGNOBJ *)&v9, (struct RGNOBJ *)&v8, (struct RGNOBJ *)&v7, 1) )
        goto LABEL_18;
      v6[0] = v9[13];
      v6[1] = v9[14];
      v6[2] = v9[15];
      v6[3] = v9[16];
      if ( ERECTL::bEmpty((ERECTL *)v6) || (unsigned int)METAREGION::bTrimMoveWithRegion(this, v8, 1) )
        goto LABEL_18;
      EtwLogicalSurfRemovedTranslationFromDirtyEvent(
        *((_QWORD *)this + 6),
        (unsigned int)a2->left,
        (unsigned int)a2->top,
        (unsigned int)a2->right,
        a2->bottom);
      EtwTraceMoveRegion(*((_QWORD *)this + 4), 0LL, 0LL, *((_QWORD *)this + 4));
    }
    METAREGION::vClearMoveData(this, 1);
LABEL_18:
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v9);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v7);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v8);
  }
}
