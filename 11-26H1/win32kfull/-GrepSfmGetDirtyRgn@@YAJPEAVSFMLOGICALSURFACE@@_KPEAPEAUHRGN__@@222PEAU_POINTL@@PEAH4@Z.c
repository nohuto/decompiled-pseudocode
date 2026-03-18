/*
 * XREFs of ?GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z @ 0x14001DB54
 * Callers:
 *     GreSfmGetDirtyRgn @ 0x14001D1F8 (GreSfmGetDirtyRgn.c)
 * Callees:
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x14001DF14 (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     ?uiCookie@SFMLOGICALSURFACE@@QEBA_KXZ @ 0x1400A19CC (-uiCookie@SFMLOGICALSURFACE@@QEBA_KXZ.c)
 *     ?vClearMoveData@METAREGION@@QEAAXH@Z @ 0x1401F4210 (-vClearMoveData@METAREGION@@QEAAXH@Z.c)
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
  int *v10; // r12
  HRGN *v11; // r15
  unsigned int v15; // esi
  int *v16; // rcx
  int **v17; // rsi
  struct _POINTL v18; // rax
  int *v19; // rax
  struct _POINTL v20; // r8
  int *v21; // rdx
  int v22; // ecx
  int v23; // eax
  bool v24; // zf
  struct RGNOBJ *v25; // rdx
  HRGN v26; // rax
  HRGN v28; // rax
  HRGN *v29; // r15
  HRGN v30; // rax
  struct _POINTL *v31; // rcx
  int *v32; // [rsp+20h] [rbp-10h] BYREF
  struct _POINTL v33; // [rsp+28h] [rbp-8h] BYREF
  int *v34; // [rsp+70h] [rbp+40h] BYREF
  HRGN *v35; // [rsp+88h] [rbp+58h]

  v35 = a4;
  v9 = (struct W32_PUSH_LOCK *)&this[32];
  v10 = 0LL;
  v11 = a4;
  v15 = -1073741811;
  if ( this != (struct _POINTL *)-256LL )
    GreAcquirePushLockExclusive((struct W32_PUSH_LOCK *)&this[32]);
  v16 = a9;
  *a9 = 0;
  if ( this[23] )
  {
    v17 = (int **)&this[16];
    *v16 = this[21].x;
    if ( this[21].x == 1 && (int *)SFMLOGICALSURFACE::uiCookie((SFMLOGICALSURFACE *)this) == a2 )
    {
      v10 = (int *)a6;
      if ( a6 )
      {
        v29 = a5;
        v34 = (int *)this[20];
        if ( a5 && *(_QWORD *)&this[18] )
        {
          a9 = (int *)this[18];
          *v29 = RGNOBJ::hrgnAssociate((RGNOBJ *)&a9);
        }
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))EtwTranslationUpdateOffsetDWM)(
          *this,
          *(_QWORD *)&this[19],
          HIDWORD(*(_QWORD *)&this[19]));
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))EtwTraceMoveRegion)(*this, 0LL, 6LL, *(_QWORD *)&this[20]);
        v30 = RGNOBJ::hrgnAssociate((RGNOBJ *)&v34);
        v31 = a7;
        *(_QWORD *)v10 = v30;
        v10 = 0LL;
        if ( v31 )
          *v31 = this[19];
        METAREGION::vClearMoveData((METAREGION *)&this[16], 0);
        v11 = v35;
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
      v18 = this[23];
      v19 = v18 ? *(int **)(*(_QWORD *)&v18 + 8LL) : v10;
      if ( v19 == a2 )
      {
        a9 = *v17;
        if ( a9 )
        {
          ((void (__fastcall *)(_QWORD, _QWORD))EtwTraceDWMGetDirtyRegion)(*this, 0LL);
          v28 = RGNOBJ::hrgnAssociate((RGNOBJ *)&a9);
          *a3 = v28;
          if ( v28 )
          {
            *v17 = v10;
            this[31].y &= ~2u;
          }
        }
      }
    }
    if ( !v11 || (this[31].y & 4) == 0 && a2 )
      goto LABEL_26;
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&a9);
    v20 = this[11];
    v21 = (int *)this[10];
    v33 = v20;
    v32 = v21;
    if ( a9 == v10 )
      goto LABEL_26;
    v22 = (int)v10;
    v23 = (int)v10;
    LOBYTE(v22) = v20 != 0LL;
    LOBYTE(v23) = v21 != 0LL;
    if ( v22 == v23 )
    {
      if ( v20 )
      {
        if ( !v21 )
        {
LABEL_23:
          if ( a9 != v10 )
          {
            v26 = RGNOBJ::hrgnAssociate((RGNOBJ *)&a9);
            *v11 = v26;
            if ( !v26 )
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&a9);
          }
LABEL_26:
          v15 = (unsigned int)v10;
          goto LABEL_27;
        }
        v34 = v10;
        RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v34, 0x70u);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v34);
        if ( (this[31].y & 4) != 0 )
        {
          if ( v34 != v10 && RGNOBJ::bMerge((RGNOBJ *)&v34, (struct RGNOBJ *)&v33, (struct RGNOBJ *)&v32, 8u) )
            RGNOBJ::vSwap((RGNOBJ *)&v34, (struct RGNOBJ *)&a9);
        }
        else
        {
          RGNOBJ::bCopy((RGNOBJ *)&a9, (struct RGNOBJ *)&v33);
        }
        RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v34);
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v34);
      }
    }
    else
    {
      v24 = v21 == 0LL;
      v25 = (struct RGNOBJ *)&v32;
      if ( v24 )
        v25 = (struct RGNOBJ *)&v33;
      RGNOBJ::bCopy((RGNOBJ *)&a9, v25);
    }
    if ( v32 != v10 && (this[31].y & 0x10) != 0 )
      RGNOBJ::vSet((RGNOBJ *)&v32);
    goto LABEL_23;
  }
LABEL_27:
  if ( v9 )
    GreReleasePushLockExclusive(v9);
  return v15;
}
