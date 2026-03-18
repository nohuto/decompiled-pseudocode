/*
 * XREFs of ?SpFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x140313750
 * Callers:
 *     <none>
 * Callees:
 *     ?PATHOBJ_vOffset@@YAXPEAU_PATHOBJ@@JJ@Z @ 0x140064D08 (-PATHOBJ_vOffset@@YAXPEAU_PATHOBJ@@JJ@Z.c)
 *     ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x140066BC4 (-CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@XZ @ 0x140067D5C (--0PATHSTACKOBJ@@QEAA@XZ.c)
 *     ??1PRECOMPUTE@@QEAA@XZ @ 0x140067E34 (--1PRECOMPUTE@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400686B0 (--$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x140069BE4 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x14006A21C (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14006AA00 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAUHDEV__@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEBU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1400A2640 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAUHDEV__@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEBU.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1400A4644 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1PATHSTACKOBJ@@QEAA@XZ @ 0x140114F08 (--1PATHSTACKOBJ@@QEAA@XZ.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x14016874C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1401D5038 (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?bPreComputedFill@EPATHOBJ@@QEBAHXZ @ 0x140205640 (-bPreComputedFill@EPATHOBJ@@QEBAHXZ.c)
 *     OffFillPath @ 0x14033A8DC (OffFillPath.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
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
  int v7; // r12d
  unsigned int v9; // r13d
  struct _PATHOBJ *v10; // rdi
  struct _SURFOBJ *v11; // r14
  PVOID *p_pvScan0; // r15
  LONG x; // ebx
  LONG y; // edi
  LONG v15; // edi
  LONG v16; // ebx
  PVOID *v17; // rbx
  int hsurf; // eax
  __int64 v19; // rcx
  struct _CLIPOBJ *v20; // r15
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  BOOL (__stdcall *v26)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG); // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  int v31; // eax
  struct _CLIPOBJ *v33; // [rsp+50h] [rbp-B0h] BYREF
  struct _POINTL v34; // [rsp+58h] [rbp-A8h] BYREF
  struct _SURFOBJ *v35; // [rsp+60h] [rbp-A0h] BYREF
  PVOID *v36; // [rsp+68h] [rbp-98h] BYREF
  struct _PATHOBJ *v37; // [rsp+70h] [rbp-90h]
  struct _POINTL *v38; // [rsp+78h] [rbp-88h]
  struct _BRUSHOBJ *v39; // [rsp+80h] [rbp-80h]
  struct _PATHOBJ *v40; // [rsp+88h] [rbp-78h]
  _OWORD v41[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v42; // [rsp+B0h] [rbp-50h]
  struct _PATHOBJ v43; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v44; // [rsp+C8h] [rbp-38h]
  _BYTE v45[72]; // [rsp+380h] [rbp+280h] BYREF
  int v46; // [rsp+3C8h] [rbp+2C8h]

  v7 = 0;
  v39 = a4;
  v35 = a1;
  v33 = a3;
  v38 = a5;
  v9 = 1;
  v34 = 0LL;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v45, a1, a3, &a3->rclBounds);
  while ( (unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v45, &v35, &v34, &v33) )
  {
    v10 = 0LL;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v43);
    v11 = v35;
    v42 = 0LL;
    memset(v41, 0, sizeof(v41));
    p_pvScan0 = &v35[-1].pvScan0;
    if ( v46 == 1
      && (unsigned int)EPATHOBJ::bPreComputedFill((EPATHOBJ *)this)
      && !(unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)p_pvScan0) )
    {
      if ( !v44 )
        goto LABEL_43;
      if ( !EPATHOBJ::bClone((EPATHOBJ *)&v43, (const struct EPATHOBJ *)this) )
        goto LABEL_43;
      x = v34.x;
      y = v34.y;
      CLIPOBJ_vOffset(v33, v34.x, v34.y);
      PATHOBJ_vOffset(&v43, x, y);
      PRECOMPUTE::vInit(
        (const struct _LINEATTRS **)v41,
        (SURFACE *)p_pvScan0,
        (__int64)v11->hdev,
        (const struct EPATHOBJ *)&v43,
        (__int64)v33,
        0LL,
        0LL,
        a6,
        a7,
        1);
      v15 = -y;
      v16 = -x;
      CLIPOBJ_vOffset(v33, v16, v15);
      PATHOBJ_vOffset(&v43, v16, v15);
      if ( !v42 )
        goto LABEL_43;
      v10 = this;
      this = &v43;
    }
    v40 = this;
    v37 = this;
    PATHOBJ_vEnumStart(this);
    v17 = 0LL;
    v36 = 0LL;
    if ( v11 )
    {
      hsurf = (int)v11[1].hsurf;
      if ( ((hsurf & 0x4000) != 0 || hsurf < 0) && (hsurf & 0x200) == 0 )
      {
        v19 = (__int64)p_pvScan0[6];
        v17 = p_pvScan0;
        v36 = p_pvScan0;
        GreAcquireSemaphore<8,PDEVOBJ>(v19);
      }
    }
    if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v36, &v33) )
    {
      v20 = v33;
      if ( v11->iType != 1 )
        goto LABEL_32;
      if ( bAllowShareAccess(v11)
        && GreGetCurrentThread(v21)
        && *((_QWORD *)GreGetCurrentThread(v22) + 34)
        && (*((_DWORD *)GreGetCurrentThread(v23) + 85) || *((_DWORD *)GreGetCurrentThread(v24) + 86)) )
      {
        v25 = *((_QWORD *)GreGetCurrentThread(v24) + 34);
        if ( (*(_DWORD *)(v25 + 20) & 0x40) != 0 )
        {
          v26 = *(BOOL (__stdcall **)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG))(*((_QWORD *)GreGetCurrentThread(v25) + 34) + 56LL);
LABEL_35:
          v31 = OffFillPath(v26, &v34, v11, this, v20, v39, v38, a6, a7);
          if ( (v7 & 1) != 0 )
            v7 &= ~1u;
          this = v10;
          if ( !v31 )
            v9 = -1;
          if ( !v10 )
            this = v40;
          goto LABEL_41;
        }
      }
      if ( v11->iType != 1
        || !bAllowShareAccess(v11)
        || !GreGetCurrentThread(v27)
        || !*((_QWORD *)GreGetCurrentThread(v28) + 34)
        || !*((_DWORD *)GreGetCurrentThread(v29) + 85) && !*((_DWORD *)GreGetCurrentThread(v30) + 86) )
      {
LABEL_32:
        if ( ((__int64)v11[1].hsurf & 0x40) != 0 )
        {
          v7 |= 1u;
          v26 = (BOOL (__stdcall *)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG))*((_QWORD *)v11->hdev + 162);
          goto LABEL_35;
        }
      }
      v26 = EngFillPath;
      goto LABEL_35;
    }
    this = v10;
    if ( !v10 )
      this = v37;
LABEL_41:
    if ( v17 )
      GreReleaseSemaphoreExclusive<8,PDEVOBJ>((__int64)v17[6]);
LABEL_43:
    PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v41);
    PATHSTACKOBJ::~PATHSTACKOBJ((PATHSTACKOBJ *)&v43);
  }
  return v9;
}
