/*
 * XREFs of ?vApplyMoveData@METAREGION@@AEAAHPEAU_RECTL@@PEAU_POINTL@@PEAVREGION@@@Z @ 0x1401E3AC0
 * Callers:
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x140099AFC (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14006D204 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x14007A070 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??0CFixPred@Prediction@@QEAA@XZ @ 0x14009AD34 (--0CFixPred@Prediction@@QEAA@XZ.c)
 *     ?vClearMoveData@METAREGION@@QEAAXH@Z @ 0x1401C8798 (-vClearMoveData@METAREGION@@QEAAXH@Z.c)
 *     ?bIntersectMoveWithDirty@METAREGION@@AEAAHPEAU_RECTL@@@Z @ 0x1403401F4 (-bIntersectMoveWithDirty@METAREGION@@AEAAHPEAU_RECTL@@@Z.c)
 *     ?vAddRectToMoveRegionHelper@METAREGION@@AEAAHPEAU_RECTL@@@Z @ 0x14034060C (-vAddRectToMoveRegionHelper@METAREGION@@AEAAHPEAU_RECTL@@@Z.c)
 *     ?vDeleteMoveRegionHelper@METAREGION@@AEAAXXZ @ 0x140340718 (-vDeleteMoveRegionHelper@METAREGION@@AEAAXXZ.c)
 */

__int64 __fastcall METAREGION::vApplyMoveData(
        METAREGION *this,
        struct _RECTL *a2,
        struct _POINTL *a3,
        struct REGION *a4)
{
  struct REGION *v4; // rsi
  unsigned int v8; // edi
  struct _POINTL *v9; // r14
  RGNOBJ *v10; // rcx
  __int64 v12; // [rsp+20h] [rbp-30h] BYREF
  __int64 v13; // [rsp+28h] [rbp-28h] BYREF
  __int64 v14; // [rsp+30h] [rbp-20h] BYREF
  struct _POINTL v15; // [rsp+38h] [rbp-18h] BYREF
  int v16; // [rsp+40h] [rbp-10h]
  int v17; // [rsp+44h] [rbp-Ch]
  struct REGION *v18; // [rsp+98h] [rbp+48h] BYREF
  __int64 v19; // [rsp+A8h] [rbp+58h] BYREF

  v4 = a4;
  v8 = 1;
  if ( a2 && a3 && *((_DWORD *)this + 10) )
  {
    Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v13);
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v13, 0x70u);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v13);
    Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v19);
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v19, 0x70u);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v19);
    Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v18);
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v18, 0x70u);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v18);
    Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v12);
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v12, 0x70u);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v12);
    if ( !v13 || !v19 || !v18 || !v12 )
      goto LABEL_28;
    v15 = (struct _POINTL)*((_QWORD *)this + 4);
    if ( RGNOBJ::bCopy((RGNOBJ *)&v19, (struct RGNOBJ *)&v15) )
    {
      v9 = (struct _POINTL *)((char *)this + 24);
      if ( !RGNOBJ::bOffset((RGNOBJ *)&v19, (const struct _POINTL *)this + 3) )
      {
        if ( *((_QWORD *)this + 2) )
        {
          v14 = *((_QWORD *)this + 2);
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v14);
        }
        if ( *((_QWORD *)this + 1) )
        {
          v14 = *((_QWORD *)this + 1);
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v14);
          *((_QWORD *)this + 1) = 0LL;
        }
        if ( *((_QWORD *)this + 4) )
        {
          v14 = *((_QWORD *)this + 4);
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v14);
        }
        v9->x = 0;
        *((_DWORD *)this + 7) = 0;
        *((_QWORD *)this + 4) = 0LL;
        *((_QWORD *)this + 2) = 0LL;
        *((_DWORD *)this + 10) = 0;
        RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v12);
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v12);
        RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v18);
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v18);
        RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v19);
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v19);
        RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v13);
        v10 = (RGNOBJ *)&v13;
        goto LABEL_17;
      }
      RGNOBJ::vSet((RGNOBJ *)&v13, a2);
      if ( !RGNOBJ::iCombine((RGNOBJ *)&v18, (struct RGNOBJ *)&v13, (struct RGNOBJ *)&v19, 1) )
      {
        METAREGION::vClearMoveData(this, 1);
        v8 = 0;
        goto LABEL_28;
      }
      v15 = *(struct _POINTL *)((char *)v18 + 52);
      v16 = *((_DWORD *)v18 + 15);
      v17 = *((_DWORD *)v18 + 16);
      if ( ERECTL::bEmpty((ERECTL *)&v15) )
      {
        METAREGION::vDeleteMoveRegionHelper(this);
        METAREGION::vAddRectToMoveRegionHelper(this, a2);
        *v9 = *a3;
        if ( *((_QWORD *)this + 2) )
        {
          v15 = (struct _POINTL)*((_QWORD *)this + 2);
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v15);
        }
        *((_QWORD *)this + 2) = v4;
        v4 = 0LL;
        goto LABEL_28;
      }
      v14 = *((_QWORD *)this + 4);
      v15.x = -v9->x;
      v15.y = -*((_DWORD *)this + 7);
      RGNOBJ::bOffset((RGNOBJ *)&v18, &v15);
      if ( RGNOBJ::iCombine((RGNOBJ *)&v12, (struct RGNOBJ *)&v18, (struct RGNOBJ *)&v14, 1) )
      {
        RGNOBJ::vSwap((RGNOBJ *)&v14, (struct RGNOBJ *)&v12);
        *((_QWORD *)this + 4) = v14;
        v9->x += a3->x;
        *((_DWORD *)this + 7) += a3->y;
LABEL_28:
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v12);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v18);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v19);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v13);
        goto LABEL_30;
      }
    }
    METAREGION::vClearMoveData(this, 1);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v12);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v18);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v19);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v13);
    return v8;
  }
  *((_QWORD *)this + 2) = a4;
  v4 = 0LL;
  METAREGION::vAddRectToMoveRegionHelper(this, a2);
  *((struct _POINTL *)this + 3) = *a3;
  *((_DWORD *)this + 10) = 1;
LABEL_30:
  if ( *((_DWORD *)this + 10) )
    v8 = METAREGION::bIntersectMoveWithDirty(this, a2);
  if ( v4 )
  {
    v18 = v4;
    v10 = (RGNOBJ *)&v18;
LABEL_17:
    RGNOBJ::vDeleteRGNOBJ(v10);
  }
  return v8;
}
