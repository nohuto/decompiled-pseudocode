/*
 * XREFs of ?SpFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x14032A640
 * Callers:
 *     <none>
 * Callees:
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x14000934C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x14000E940 (-CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z.c)
 *     ?PATHOBJ_vOffset@@YAXPEAU_PATHOBJ@@JJ@Z @ 0x14000F3BC (-PATHOBJ_vOffset@@YAXPEAU_PATHOBJ@@JJ@Z.c)
 *     ??1PRECOMPUTE@@QEAA@XZ @ 0x14000F5CC (--1PRECOMPUTE@@QEAA@XZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@XZ @ 0x140010330 (--0PATHSTACKOBJ@@QEAA@XZ.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x140011E3C (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1400125A4 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1PATHSTACKOBJ@@QEAA@XZ @ 0x140079098 (--1PATHSTACKOBJ@@QEAA@XZ.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAUHDEV__@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEBU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1400DDA04 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAUHDEV__@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEBU.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1400DE2BC (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1401A6AD8 (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?bPreComputedFill@EPATHOBJ@@QEBAHXZ @ 0x1401DA74C (-bPreComputedFill@EPATHOBJ@@QEBAHXZ.c)
 *     OffFillPath @ 0x1403400C4 (OffFillPath.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall SpFillPath(
        struct _SURFOBJ *a1,
        struct _PATHOBJ *this,
        struct _CLIPOBJ *a3,
        struct _BRUSHOBJ *a4,
        struct _POINTL *a5,
        unsigned int a6,
        unsigned int a7)
{
  PVOID *v7; // r13
  unsigned int v9; // r12d
  struct _PATHOBJ *v10; // rdi
  struct _SURFOBJ *v11; // rsi
  PVOID *p_pvScan0; // r15
  LONG x; // ebx
  LONG y; // edi
  LONG v15; // edi
  LONG v16; // ebx
  PVOID *v17; // rbx
  PVOID *v18; // r12
  int hsurf; // eax
  PVOID v20; // rcx
  struct _CLIPOBJ *v21; // r15
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  BOOL (__stdcall *v32)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG); // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  int v41; // r12d
  int v42; // eax
  unsigned int v44; // [rsp+50h] [rbp-B0h]
  int v45; // [rsp+54h] [rbp-ACh]
  struct _CLIPOBJ *v46; // [rsp+58h] [rbp-A8h] BYREF
  struct _POINTL v47; // [rsp+60h] [rbp-A0h] BYREF
  struct _SURFOBJ *v48; // [rsp+68h] [rbp-98h] BYREF
  PVOID *v49; // [rsp+70h] [rbp-90h] BYREF
  struct _POINTL *v50; // [rsp+78h] [rbp-88h]
  struct _BRUSHOBJ *v51; // [rsp+80h] [rbp-80h]
  _OWORD v52[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v53; // [rsp+A8h] [rbp-58h]
  struct _PATHOBJ v54; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v55; // [rsp+B8h] [rbp-48h]
  _BYTE v56[72]; // [rsp+370h] [rbp+270h] BYREF
  int v57; // [rsp+3B8h] [rbp+2B8h]

  v7 = 0LL;
  v51 = a4;
  v48 = a1;
  v46 = a3;
  v50 = a5;
  v45 = 1;
  v9 = 1;
  v44 = 0;
  v47 = 0LL;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v56, a1, a3, &a3->rclBounds);
  while ( (unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v56, &v48, &v47, &v46) )
  {
    v10 = 0LL;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v54);
    v11 = v48;
    v53 = 0LL;
    memset(v52, 0, sizeof(v52));
    p_pvScan0 = &v48[-1].pvScan0;
    if ( v57 == 1
      && (unsigned int)EPATHOBJ::bPreComputedFill((EPATHOBJ *)this)
      && !(unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)p_pvScan0) )
    {
      if ( !v55 )
        goto LABEL_46;
      if ( !EPATHOBJ::bClone((EPATHOBJ *)&v54, (const struct EPATHOBJ *)this) )
        goto LABEL_46;
      x = v47.x;
      y = v47.y;
      CLIPOBJ_vOffset(v46, v47.x, v47.y);
      PATHOBJ_vOffset(&v54, x, y);
      PRECOMPUTE::vInit(
        (__int64 *)v52,
        (SURFACE *)p_pvScan0,
        (__int64)v11->hdev,
        (const struct EPATHOBJ *)&v54,
        (__int64)v46,
        0LL,
        0LL,
        a6,
        a7,
        1);
      v15 = -y;
      v16 = -x;
      CLIPOBJ_vOffset(v46, v16, v15);
      PATHOBJ_vOffset(&v54, v16, v15);
      if ( !v53 )
        goto LABEL_46;
      v10 = this;
      this = &v54;
    }
    PATHOBJ_vEnumStart(this);
    v17 = 0LL;
    v18 = 0LL;
    v49 = 0LL;
    if ( v11 )
    {
      hsurf = (int)v11[1].hsurf;
      v18 = 0LL;
      v7 = 0LL;
      if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
      {
        v20 = p_pvScan0[6];
        v17 = p_pvScan0;
        v49 = p_pvScan0;
        GreLockDisplayDevice(v20);
        v18 = p_pvScan0;
        v7 = p_pvScan0;
      }
    }
    if ( !NEEDDDILOCK::bRender((NEEDDDILOCK *)&v49, &v46) )
    {
      if ( !v10 )
        v10 = this;
      this = v10;
      if ( v18 )
        GreUnlockDisplayDevice(v7[6]);
      v9 = v45;
      v7 = 0LL;
      goto LABEL_46;
    }
    v21 = v46;
    if ( v11->iType == 1 )
    {
      v7 = 0LL;
      if ( bAllowShareAccess(v11)
        && GreGetCurrentThread(v23, v22)
        && *((_QWORD *)GreGetCurrentThread(v25, v24) + 34)
        && (*((_DWORD *)GreGetCurrentThread(v27, v26) + 87) || *((_DWORD *)GreGetCurrentThread(v29, v28) + 88)) )
      {
        v31 = *((_QWORD *)GreGetCurrentThread(v29, v28) + 34);
        if ( (*(_DWORD *)(v31 + 20) & 0x40) != 0 )
        {
          v32 = *(BOOL (__stdcall **)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG))(*((_QWORD *)GreGetCurrentThread(v31, v30) + 34) + 56LL);
LABEL_37:
          v41 = v44;
          goto LABEL_38;
        }
      }
    }
    else
    {
      v7 = 0LL;
    }
    if ( v11->iType == 1
      && bAllowShareAccess(v11)
      && GreGetCurrentThread(v34, v33)
      && *((_QWORD *)GreGetCurrentThread(v36, v35) + 34)
      && (*((_DWORD *)GreGetCurrentThread(v38, v37) + 87) || *((_DWORD *)GreGetCurrentThread(v40, v39) + 88))
      || ((__int64)v11[1].hsurf & 0x40) == 0 )
    {
      v32 = EngFillPath;
      goto LABEL_37;
    }
    v41 = v44 | 1;
    v44 |= 1u;
    v32 = (BOOL (__stdcall *)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG))*((_QWORD *)v11->hdev
                                                                                                 + 162);
LABEL_38:
    v42 = OffFillPath(v32, &v47, v11, this, v21, v51, v50, a6, a7);
    if ( (v41 & 1) != 0 )
      v44 = v41 & 0xFFFFFFFE;
    v9 = v45;
    if ( !v42 )
      v9 = -1;
    v45 = v9;
    if ( !v10 )
      v10 = this;
    this = v10;
    if ( v17 )
      GreUnlockDisplayDevice(v17[6]);
LABEL_46:
    PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v52);
    PATHSTACKOBJ::~PATHSTACKOBJ((PATHSTACKOBJ *)&v54);
  }
  return v9;
}
