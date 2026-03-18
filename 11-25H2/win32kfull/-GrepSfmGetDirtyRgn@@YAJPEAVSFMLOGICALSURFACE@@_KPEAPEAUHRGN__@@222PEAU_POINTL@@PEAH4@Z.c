/*
 * XREFs of ?GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z @ 0x14008F404
 * Callers:
 *     GreSfmGetDirtyRgn @ 0x14008D37C (GreSfmGetDirtyRgn.c)
 * Callees:
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x14008F7C0 (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     ?uiCookie@SFMLOGICALSURFACE@@QEBA_KXZ @ 0x140097B38 (-uiCookie@SFMLOGICALSURFACE@@QEBA_KXZ.c)
 *     ??0CFixPred@Prediction@@QEAA@XZ @ 0x14009AD34 (--0CFixPred@Prediction@@QEAA@XZ.c)
 *     ?vClearMoveData@METAREGION@@QEAAXH@Z @ 0x1401C8798 (-vClearMoveData@METAREGION@@QEAAXH@Z.c)
 */

__int64 __fastcall GrepSfmGetDirtyRgn(
        struct _POINTL *this,
        int *a2,
        HRGN *a3,
        HRGN *a4,
        HRGN *a5,
        HRGN *a6,
        struct _POINTL *a7,
        int *a8,
        int *a9)
{
  struct W32_PUSH_LOCK *v9; // rbx
  int *v10; // r15
  unsigned int v15; // esi
  int *v16; // rcx
  struct _POINTL v17; // rax
  int *v18; // rax
  struct _POINTL v19; // r8
  int *v20; // rdx
  int v21; // ecx
  int v22; // eax
  bool v23; // zf
  struct RGNOBJ *v24; // rdx
  HRGN v25; // rax
  HRGN v27; // rax
  HRGN *v28; // rsi
  HRGN v29; // rax
  struct _POINTL *v30; // rcx
  int *v31; // [rsp+20h] [rbp-10h] BYREF
  struct _POINTL v32; // [rsp+28h] [rbp-8h] BYREF
  int *v33; // [rsp+60h] [rbp+30h] BYREF

  v9 = (struct W32_PUSH_LOCK *)&this[32];
  v10 = 0LL;
  v15 = -1073741811;
  if ( this != (struct _POINTL *)-256LL )
    GreAcquirePushLockExclusive((struct W32_PUSH_LOCK *)&this[32]);
  v16 = a9;
  *a9 = 0;
  if ( this[23] )
  {
    *v16 = this[21].x;
    if ( this[21].x == 1 && (int *)SFMLOGICALSURFACE::uiCookie((SFMLOGICALSURFACE *)this) == a2 )
    {
      v10 = (int *)a6;
      if ( a6 )
      {
        v28 = a5;
        v33 = (int *)this[20];
        if ( a5 && *(_QWORD *)&this[18] )
        {
          a9 = (int *)this[18];
          *v28 = RGNOBJ::hrgnAssociate((RGNOBJ *)&a9);
        }
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))EtwTranslationUpdateOffsetDWM)(
          *this,
          (unsigned int)this[19].x,
          HIDWORD(*(_QWORD *)&this[19]));
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))EtwTraceMoveRegion)(*this, 0LL, 6LL, *(_QWORD *)&this[20]);
        v29 = RGNOBJ::hrgnAssociate((RGNOBJ *)&v33);
        v30 = a7;
        *(_QWORD *)v10 = v29;
        v10 = 0LL;
        if ( v30 )
          *v30 = this[19];
        METAREGION::vClearMoveData((METAREGION *)&this[16], 0);
      }
    }
    else if ( a6 )
    {
      *a6 = 0LL;
    }
    if ( a8 )
      *a8 = ((unsigned int)this[31].y >> 4) & 1;
    if ( a3 )
    {
      v17 = this[23];
      v18 = v17 ? *(int **)(*(_QWORD *)&v17 + 8LL) : v10;
      if ( v18 == a2 )
      {
        a9 = (int *)this[16];
        if ( a9 )
        {
          ((void (__fastcall *)(_QWORD, _QWORD))EtwTraceDWMGetDirtyRegion)(*this, 0LL);
          v27 = RGNOBJ::hrgnAssociate((RGNOBJ *)&a9);
          *a3 = v27;
          if ( v27 )
          {
            this[16] = (struct _POINTL)v10;
            this[31].y &= ~2u;
          }
        }
      }
    }
    if ( !a4 || (this[31].y & 4) == 0 && a2 )
      goto LABEL_26;
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&a9);
    v19 = this[11];
    v20 = (int *)this[10];
    v32 = v19;
    v31 = v20;
    if ( a9 == v10 )
      goto LABEL_26;
    v21 = (int)v10;
    v22 = (int)v10;
    LOBYTE(v21) = v20 != 0LL;
    LOBYTE(v22) = v19 != 0LL;
    if ( v22 == v21 )
    {
      if ( v19 )
      {
        if ( v31 == v10 )
        {
LABEL_23:
          if ( a9 != v10 )
          {
            v25 = RGNOBJ::hrgnAssociate((RGNOBJ *)&a9);
            *a4 = v25;
            if ( !v25 )
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&a9);
          }
LABEL_26:
          v15 = (unsigned int)v10;
          goto LABEL_27;
        }
        Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v33);
        RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v33, 0x70u);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v33);
        if ( (this[31].y & 4) != 0 )
        {
          if ( v33 != v10 && RGNOBJ::bMerge((RGNOBJ *)&v33, (struct RGNOBJ *)&v32, (struct RGNOBJ *)&v31, 8u) )
            RGNOBJ::vSwap((RGNOBJ *)&v33, (struct RGNOBJ *)&a9);
        }
        else
        {
          RGNOBJ::bCopy((RGNOBJ *)&a9, (struct RGNOBJ *)&v32);
        }
        RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v33);
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v33);
      }
    }
    else
    {
      v23 = v20 == 0LL;
      v24 = (struct RGNOBJ *)&v31;
      if ( v23 )
        v24 = (struct RGNOBJ *)&v32;
      RGNOBJ::bCopy((RGNOBJ *)&a9, v24);
    }
    if ( v31 != v10 && (this[31].y & 0x10) != 0 )
      RGNOBJ::vSet((RGNOBJ *)&v31);
    goto LABEL_23;
  }
LABEL_27:
  if ( v9 )
    GreReleasePushLockExclusive(v9);
  return v15;
}
