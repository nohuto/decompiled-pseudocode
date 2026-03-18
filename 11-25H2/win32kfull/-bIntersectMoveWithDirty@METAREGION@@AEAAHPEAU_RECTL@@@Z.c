/*
 * XREFs of ?bIntersectMoveWithDirty@METAREGION@@AEAAHPEAU_RECTL@@@Z @ 0x1403401F4
 * Callers:
 *     ?vApplyMoveData@METAREGION@@AEAAHPEAU_RECTL@@PEAU_POINTL@@PEAVREGION@@@Z @ 0x1401E3AC0 (-vApplyMoveData@METAREGION@@AEAAHPEAU_RECTL@@PEAU_POINTL@@PEAVREGION@@@Z.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14006D204 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x14007A070 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x14009ACF4 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vClearMoveData@METAREGION@@QEAAXH@Z @ 0x1401C8798 (-vClearMoveData@METAREGION@@QEAAXH@Z.c)
 *     ?bTrimMoveWithRegion@METAREGION@@AEAAHPEAVREGION@@H@Z @ 0x14034044C (-bTrimMoveWithRegion@METAREGION@@AEAAHPEAVREGION@@H@Z.c)
 */

__int64 __fastcall METAREGION::bIntersectMoveWithDirty(METAREGION *this, struct _RECTL *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  struct REGION *v6; // rsi
  int v7; // eax
  __int64 v8; // rcx
  __int64 v10; // [rsp+30h] [rbp-30h] BYREF
  __int64 v11; // [rsp+38h] [rbp-28h] BYREF
  struct REGION *v12; // [rsp+40h] [rbp-20h] BYREF
  _DWORD v13[6]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v14; // [rsp+90h] [rbp+30h] BYREF
  _DWORD *v15; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v16; // [rsp+A8h] [rbp+48h] BYREF

  v4 = 1;
  if ( *((_DWORD *)this + 10) == 1 && (*((_QWORD *)this + 1) || *(_QWORD *)this) )
  {
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v10);
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v14);
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v16);
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v15);
    v5 = *((_QWORD *)this + 4);
    v11 = v5;
    if ( !v10 || !v14 || !v16 || !v15 || !v5 )
      goto LABEL_20;
    v6 = (struct REGION *)*((_QWORD *)this + 1);
    if ( !v6 )
      v6 = *(struct REGION **)this;
    v12 = v6;
    RGNOBJ::vSet((RGNOBJ *)&v16);
    if ( RGNOBJ::iCombine((RGNOBJ *)&v14, (struct RGNOBJ *)&v11, (struct RGNOBJ *)&v16, 2)
      && RGNOBJ::bOffset((RGNOBJ *)&v14, (const struct _POINTL *)this + 3)
      && RGNOBJ::iCombine((RGNOBJ *)&v10, (struct RGNOBJ *)&v11, (struct RGNOBJ *)&v14, 2)
      && (v7 = RGNOBJ::iCombine((RGNOBJ *)&v15, (struct RGNOBJ *)&v10, (struct RGNOBJ *)&v12, 1)) != 0 )
    {
      if ( v7 != 1 )
      {
        v13[0] = v15[13];
        v13[1] = v15[14];
        v13[2] = v15[15];
        v13[3] = v15[16];
        if ( !ERECTL::bEmpty((ERECTL *)v13) )
        {
          v4 = METAREGION::bTrimMoveWithRegion(this, v6, 0);
          if ( !v4 )
          {
            EtwLogicalSurfRemovedTranslationFromMoveEvent(
              *((_QWORD *)this + 6),
              (unsigned int)a2->left,
              (unsigned int)a2->top,
              (unsigned int)a2->right,
              a2->bottom);
            EtwTraceMoveRegion(*(_QWORD *)this, 0LL, 0LL, *((_QWORD *)this + 4));
            EtwTraceMoveRegion(*(_QWORD *)this, 1LL, 0LL, *(_QWORD *)this);
            v8 = *((_QWORD *)this + 1);
            if ( v8 )
              EtwTraceMoveRegion(v8, 1LL, 0LL, *((_QWORD *)this + 1));
          }
        }
      }
    }
    else
    {
LABEL_20:
      METAREGION::vClearMoveData(this, 1);
      v4 = 0;
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v15);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v16);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v14);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v10);
  }
  return v4;
}
