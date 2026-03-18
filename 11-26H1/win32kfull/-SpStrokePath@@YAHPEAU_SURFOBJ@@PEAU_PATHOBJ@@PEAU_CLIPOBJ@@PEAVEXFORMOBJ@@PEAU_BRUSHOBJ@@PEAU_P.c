/*
 * XREFs of ?SpStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x140068280
 * Callers:
 *     <none>
 * Callees:
 *     OffStrokePath @ 0x140064BA4 (OffStrokePath.c)
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

__int64 __fastcall SpStrokePath(
        struct _SURFOBJ *a1,
        struct _PATHOBJ *this,
        struct _CLIPOBJ *a3,
        XFORMOBJ *a4,
        struct _BRUSHOBJ *a5,
        struct _POINTL *a6,
        struct _LINEATTRS *a7,
        MIX a8)
{
  int v8; // r12d
  unsigned int v10; // r14d
  FLOAT_LONG v11; // edi
  struct _PATHOBJ *v13; // rsi
  struct _SURFOBJ *v14; // r14
  PVOID *p_pvScan0; // r13
  PVOID *v16; // rbx
  int hsurf; // eax
  CLIPOBJ *v18; // r13
  BOOL (__stdcall *v19)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX); // rcx
  int v20; // eax
  LONG x; // ebx
  LONG y; // esi
  LONG v23; // esi
  LONG v24; // ebx
  int v25; // [rsp+50h] [rbp-B0h]
  CLIPOBJ *ppco; // [rsp+58h] [rbp-A8h] BYREF
  struct _POINTL v27; // [rsp+60h] [rbp-A0h] BYREF
  LINEATTRS *v28; // [rsp+68h] [rbp-98h]
  struct _SURFOBJ *v29; // [rsp+70h] [rbp-90h] BYREF
  XFORMOBJ *v30; // [rsp+78h] [rbp-88h]
  POINTL *v31; // [rsp+80h] [rbp-80h]
  BRUSHOBJ *v32; // [rsp+88h] [rbp-78h]
  _OWORD v33[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v34; // [rsp+B0h] [rbp-50h]
  struct _PATHOBJ v35; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v36; // [rsp+C8h] [rbp-38h]
  _BYTE v37[72]; // [rsp+380h] [rbp+280h] BYREF
  int v38; // [rsp+3C8h] [rbp+2C8h]

  v8 = 0;
  v32 = a5;
  v31 = a6;
  v30 = a4;
  v10 = 1;
  v29 = a1;
  LODWORD(v11.e) = a7->elStyleState;
  ppco = a3;
  v28 = a7;
  v25 = 1;
  v27 = 0LL;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v37, a1, a3, &a3->rclBounds);
  while ( (unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v37, &v29, &v27, &ppco) )
  {
    v13 = 0LL;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v35);
    v14 = v29;
    v34 = 0LL;
    memset(v33, 0, sizeof(v33));
    p_pvScan0 = &v29[-1].pvScan0;
    if ( v38 == 1
      && (unsigned int)EPATHOBJ::bPreComputedFill((EPATHOBJ *)this)
      && !(unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)p_pvScan0) )
    {
      if ( !v36 || !EPATHOBJ::bClone((EPATHOBJ *)&v35, (const struct EPATHOBJ *)this) )
      {
        v10 = v25;
        goto LABEL_23;
      }
      x = v27.x;
      y = v27.y;
      CLIPOBJ_vOffset(ppco, v27.x, v27.y);
      PATHOBJ_vOffset(&v35, x, y);
      PRECOMPUTE::vInit(v33, p_pvScan0, v14->hdev, &v35, ppco, v30, v28, a8, 0, 0);
      v23 = -y;
      v24 = -x;
      CLIPOBJ_vOffset(ppco, v24, v23);
      PATHOBJ_vOffset(&v35, v24, v23);
      if ( !v34 )
        goto LABEL_27;
      v13 = this;
      this = &v35;
    }
    v28->elStyleState = v11;
    PATHOBJ_vEnumStart(this);
    v16 = 0LL;
    if ( v14 )
    {
      hsurf = (int)v14[1].hsurf;
      if ( ((hsurf & 0x4000) != 0 || hsurf < 0) && (hsurf & 0x200) == 0 )
      {
        v16 = p_pvScan0;
        GreAcquireSemaphore<8,PDEVOBJ>(v14->hdev);
        if ( p_pvScan0 )
        {
          if ( *((_WORD *)p_pvScan0 + 50) == 1 && !EngUpdateDeviceSurface((SURFOBJ *)(p_pvScan0 + 3), &ppco) )
          {
            GreReleaseSemaphoreExclusive<8,PDEVOBJ>(p_pvScan0[6]);
            if ( !v13 )
              v13 = this;
            this = v13;
LABEL_27:
            v10 = v25;
            goto LABEL_23;
          }
        }
      }
    }
    v18 = ppco;
    if ( v14->iType == 1 )
    {
      if ( (unsigned int)bAllowShareAccess(v14)
        && GreGetCurrentThread()
        && *((_QWORD *)GreGetCurrentThread() + 34)
        && (*((_DWORD *)GreGetCurrentThread() + 85) || *((_DWORD *)GreGetCurrentThread() + 86))
        && (*(_DWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 20LL) & 0x20) != 0 )
      {
        v19 = *(BOOL (__stdcall **)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))(*((_QWORD *)GreGetCurrentThread() + 34) + 48LL);
        goto LABEL_15;
      }
      if ( v14->iType == 1
        && (unsigned int)bAllowShareAccess(v14)
        && GreGetCurrentThread()
        && *((_QWORD *)GreGetCurrentThread() + 34)
        && (*((_DWORD *)GreGetCurrentThread() + 85) || *((_DWORD *)GreGetCurrentThread() + 86)) )
      {
LABEL_47:
        v19 = EngStrokePath;
        goto LABEL_15;
      }
    }
    if ( ((__int64)v14[1].hsurf & 0x20) == 0 )
      goto LABEL_47;
    v8 |= 1u;
    v19 = (BOOL (__stdcall *)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))*((_QWORD *)v14->hdev + 161);
LABEL_15:
    v20 = OffStrokePath(
            (__int64 (__fastcall *)(SURFOBJ *, struct _PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))v19,
            (int *)&v27,
            v14,
            this,
            v18,
            v30,
            v32,
            v31,
            v28,
            a8);
    if ( (v8 & 1) != 0 )
      v8 &= ~1u;
    v10 = v25;
    if ( !v20 )
      v10 = -1;
    v25 = v10;
    if ( !v13 )
      v13 = this;
    this = v13;
    if ( v16 )
      GreReleaseSemaphoreExclusive<8,PDEVOBJ>(v16[6]);
LABEL_23:
    PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v33);
    PATHSTACKOBJ::~PATHSTACKOBJ((PATHSTACKOBJ *)&v35);
  }
  return v10;
}
