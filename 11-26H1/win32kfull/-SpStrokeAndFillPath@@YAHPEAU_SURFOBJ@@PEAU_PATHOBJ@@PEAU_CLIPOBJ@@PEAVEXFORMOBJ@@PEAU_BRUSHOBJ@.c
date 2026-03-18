/*
 * XREFs of ?SpStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x140062A50
 * Callers:
 *     <none>
 * Callees:
 *     OffStrokeAndFillPath @ 0x140062EC4 (OffStrokeAndFillPath.c)
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
 *     ?bPreComputedFill@EPATHOBJ@@QEBAHXZ @ 0x140205640 (-bPreComputedFill@EPATHOBJ@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall SpStrokeAndFillPath(
        struct _SURFOBJ *a1,
        struct _PATHOBJ *this,
        struct _CLIPOBJ *a3,
        struct EXFORMOBJ *a4,
        struct _BRUSHOBJ *a5,
        struct _LINEATTRS *a6,
        struct _BRUSHOBJ *a7,
        struct _POINTL *a8,
        unsigned int a9,
        unsigned int a10)
{
  int v10; // r12d
  unsigned int v12; // r13d
  CLIPOBJ *v13; // r15
  BOOL (__stdcall *v14)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, POINTL *, MIX, FLONG); // rcx
  int v15; // eax
  struct _PATHOBJ *v16; // rdi
  struct _SURFOBJ *v17; // rsi
  PVOID *p_pvScan0; // rbx
  int hsurf; // eax
  LONG x; // ebx
  LONG y; // edi
  int v23; // edi
  int v24; // ebx
  CLIPOBJ *ppco; // [rsp+60h] [rbp-A0h] BYREF
  struct _POINTL v26; // [rsp+68h] [rbp-98h] BYREF
  struct _SURFOBJ *v27; // [rsp+70h] [rbp-90h] BYREF
  struct _LINEATTRS *v28; // [rsp+78h] [rbp-88h]
  struct EXFORMOBJ *v29; // [rsp+80h] [rbp-80h]
  struct _POINTL *v30; // [rsp+88h] [rbp-78h]
  struct _BRUSHOBJ *v31; // [rsp+90h] [rbp-70h]
  struct _BRUSHOBJ *v32; // [rsp+98h] [rbp-68h]
  _OWORD v33[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v34; // [rsp+C0h] [rbp-40h]
  struct _PATHOBJ v35; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v36; // [rsp+D8h] [rbp-28h]
  _BYTE v37[72]; // [rsp+390h] [rbp+290h] BYREF
  int v38; // [rsp+3D8h] [rbp+2D8h]

  v10 = 0;
  v32 = a5;
  v28 = a6;
  v31 = a7;
  v12 = 1;
  v29 = a4;
  v27 = a1;
  v30 = a8;
  ppco = a3;
  v26 = 0LL;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v37, a1, a3, &a3->rclBounds);
  while ( (unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v37, &v27, &v26, &ppco) )
  {
    v16 = 0LL;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v35);
    v17 = v27;
    v34 = 0LL;
    memset(v33, 0, sizeof(v33));
    if ( v38 == 1
      && (*(_QWORD *)&this[5] || (unsigned int)EPATHOBJ::bPreComputedFill((EPATHOBJ *)this))
      && !(unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)&v17[-1].pvScan0) )
    {
      if ( !v36 )
        goto LABEL_15;
      if ( !EPATHOBJ::bClone((EPATHOBJ *)&v35, (const struct EPATHOBJ *)this) )
        goto LABEL_15;
      x = v26.x;
      y = v26.y;
      CLIPOBJ_vOffset(ppco, v26.x, v26.y);
      PATHOBJ_vOffset(&v35, x, y);
      PRECOMPUTE::vInit(v33, &v17[-1].pvScan0, v17->hdev, &v35, ppco, v29, v28, a9, a10, 2);
      v23 = -y;
      v24 = -x;
      CLIPOBJ_vOffset(ppco, v24, v23);
      PATHOBJ_vOffset(&v35, v24, v23);
      if ( !v34 )
        goto LABEL_15;
      v16 = this;
      this = &v35;
    }
    PATHOBJ_vEnumStart(this);
    p_pvScan0 = 0LL;
    if ( !v17
      || (hsurf = (int)v17[1].hsurf, (hsurf & 0x4000) == 0) && hsurf >= 0
      || (hsurf & 0x200) != 0
      || (p_pvScan0 = &v17[-1].pvScan0, GreAcquireSemaphore<8,PDEVOBJ>(v17->hdev), v17 == (struct _SURFOBJ *)24)
      || *((_WORD *)p_pvScan0 + 50) != 1
      || EngUpdateDeviceSurface(v17, &ppco) )
    {
      v13 = ppco;
      if ( v17->iType != 1 )
        goto LABEL_5;
      if ( (unsigned int)bAllowShareAccess(v17)
        && GreGetCurrentThread()
        && *((_QWORD *)GreGetCurrentThread() + 34)
        && (*((_DWORD *)GreGetCurrentThread() + 85) || *((_DWORD *)GreGetCurrentThread() + 86))
        && (*(_DWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 20LL) & 0x80u) != 0 )
      {
        v14 = *(BOOL (__stdcall **)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, POINTL *, MIX, FLONG))(*((_QWORD *)GreGetCurrentThread() + 34) + 40LL);
        goto LABEL_7;
      }
      if ( v17->iType != 1
        || !(unsigned int)bAllowShareAccess(v17)
        || !GreGetCurrentThread()
        || !*((_QWORD *)GreGetCurrentThread() + 34)
        || !*((_DWORD *)GreGetCurrentThread() + 85) && !*((_DWORD *)GreGetCurrentThread() + 86) )
      {
LABEL_5:
        if ( (LODWORD(v17[1].hsurf) & 0x80u) != 0 )
        {
          v10 |= 1u;
          v14 = (BOOL (__stdcall *)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, POINTL *, MIX, FLONG))*((_QWORD *)v17->hdev + 160);
LABEL_7:
          v15 = OffStrokeAndFillPath(v14, &v26, v17, this, v13, v29, v32, v28, v31, v30, a9, a10);
          if ( (v10 & 1) != 0 )
            v10 &= ~1u;
          if ( !v15 )
            v12 = -1;
          if ( !v16 )
            v16 = this;
          this = v16;
          if ( p_pvScan0 )
            GreReleaseSemaphoreExclusive<8,PDEVOBJ>(p_pvScan0[6]);
          goto LABEL_15;
        }
      }
      v14 = EngStrokeAndFillPath;
      goto LABEL_7;
    }
    GreReleaseSemaphoreExclusive<8,PDEVOBJ>(p_pvScan0[6]);
    if ( !v16 )
      v16 = this;
    this = v16;
LABEL_15:
    PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v33);
    PATHSTACKOBJ::~PATHSTACKOBJ((PATHSTACKOBJ *)&v35);
  }
  return v12;
}
