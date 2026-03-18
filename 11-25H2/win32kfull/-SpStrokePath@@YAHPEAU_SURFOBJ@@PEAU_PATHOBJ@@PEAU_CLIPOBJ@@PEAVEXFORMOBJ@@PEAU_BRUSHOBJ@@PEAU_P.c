/*
 * XREFs of ?SpStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x140010410
 * Callers:
 *     <none>
 * Callees:
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x14000934C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x14000E940 (-CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z.c)
 *     OffStrokePath @ 0x14000F258 (OffStrokePath.c)
 *     ?PATHOBJ_vOffset@@YAXPEAU_PATHOBJ@@JJ@Z @ 0x14000F3BC (-PATHOBJ_vOffset@@YAXPEAU_PATHOBJ@@JJ@Z.c)
 *     ??1PRECOMPUTE@@QEAA@XZ @ 0x14000F5CC (--1PRECOMPUTE@@QEAA@XZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@XZ @ 0x140010330 (--0PATHSTACKOBJ@@QEAA@XZ.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x140011E3C (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1400125A4 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1PATHSTACKOBJ@@QEAA@XZ @ 0x140079098 (--1PATHSTACKOBJ@@QEAA@XZ.c)
 *     ?vUnguard@CAutoTGO@@QEAAXXZ @ 0x140079978 (-vUnguard@CAutoTGO@@QEAAXXZ.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAUHDEV__@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEBU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1400DDA04 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAUHDEV__@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEBU.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1400DE2BC (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?bPreComputedFill@EPATHOBJ@@QEBAHXZ @ 0x1401DA74C (-bPreComputedFill@EPATHOBJ@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
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
  int v8; // r13d
  unsigned int v10; // r14d
  FLOAT_LONG v11; // edi
  struct _PATHOBJ *v13; // rsi
  struct _SURFOBJ *v14; // r14
  PVOID *p_pvScan0; // r12
  PVOID *v16; // rbx
  int hsurf; // eax
  CLIPOBJ *v18; // r12
  BOOL (__stdcall *v19)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX); // rcx
  int v20; // eax
  LONG x; // ebx
  LONG y; // esi
  LONG v23; // esi
  LONG v24; // ebx
  int v25; // [rsp+50h] [rbp-B0h]
  int v26; // [rsp+54h] [rbp-ACh]
  CLIPOBJ *ppco; // [rsp+58h] [rbp-A8h] BYREF
  struct _POINTL v28; // [rsp+60h] [rbp-A0h] BYREF
  LINEATTRS *v29; // [rsp+68h] [rbp-98h]
  struct _SURFOBJ *v30; // [rsp+70h] [rbp-90h] BYREF
  XFORMOBJ *v31; // [rsp+78h] [rbp-88h]
  POINTL *v32; // [rsp+80h] [rbp-80h]
  BRUSHOBJ *v33; // [rsp+88h] [rbp-78h]
  _OWORD v34[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v35; // [rsp+B0h] [rbp-50h]
  struct _PATHOBJ v36; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v37; // [rsp+C8h] [rbp-38h]
  _BYTE v38[64]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v39[560]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v40[72]; // [rsp+380h] [rbp+280h] BYREF
  int v41; // [rsp+3C8h] [rbp+2C8h]

  v8 = 0;
  v28 = 0LL;
  v33 = a5;
  v32 = a6;
  v10 = 1;
  v31 = a4;
  v30 = a1;
  ppco = a3;
  LODWORD(v11.e) = a7->elStyleState;
  v29 = a7;
  v25 = 0;
  v26 = 1;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v40, a1, a3, &a3->rclBounds);
  while ( (unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v40, &v30, &v28, &ppco) )
  {
    v13 = 0LL;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v36);
    v14 = v30;
    v35 = 0LL;
    memset(v34, 0, sizeof(v34));
    p_pvScan0 = &v30[-1].pvScan0;
    if ( v41 == 1
      && (unsigned int)EPATHOBJ::bPreComputedFill((EPATHOBJ *)this)
      && !(unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)p_pvScan0) )
    {
      if ( v37 )
      {
        if ( EPATHOBJ::bClone((EPATHOBJ *)&v36, (const struct EPATHOBJ *)this) )
        {
          x = v28.x;
          y = v28.y;
          CLIPOBJ_vOffset(ppco, v28.x, v28.y);
          PATHOBJ_vOffset(&v36, x, y);
          PRECOMPUTE::vInit(v34, p_pvScan0, v14->hdev, &v36, ppco, v31, v29, a8, 0, 0);
          v23 = -y;
          v24 = -x;
          CLIPOBJ_vOffset(ppco, v24, v23);
          PATHOBJ_vOffset(&v36, v24, v23);
          if ( v35 )
          {
            v13 = this;
            this = &v36;
            goto LABEL_5;
          }
        }
      }
      PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v34);
      PATHSTACKOBJ::~PATHSTACKOBJ((PATHSTACKOBJ *)&v36);
      v10 = v26;
    }
    else
    {
LABEL_5:
      v29->elStyleState = v11;
      PATHOBJ_vEnumStart(this);
      v16 = 0LL;
      if ( !v14 )
        goto LABEL_11;
      hsurf = (int)v14[1].hsurf;
      if ( (hsurf & 0x80004000) == 0 || (hsurf & 0x200) != 0 )
        goto LABEL_11;
      v16 = p_pvScan0;
      GreLockDisplayDevice(p_pvScan0[6]);
      if ( *((_WORD *)p_pvScan0 + 50) == 1
        && (v16 = p_pvScan0,
            !EngUpdateDeviceSurface(
               (SURFOBJ *)((unsigned __int64)(p_pvScan0 + 3) & -(__int64)(p_pvScan0 != 0LL)),
               &ppco)) )
      {
        if ( !v13 )
          v13 = this;
        this = v13;
        if ( p_pvScan0 )
          GreUnlockDisplayDevice(p_pvScan0[6]);
        PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v34);
        EPATHOBJ::vUnlock((EPATHOBJ *)&v36);
        PATH_CORE::~PATH_CORE((PATH_CORE *)v39);
        CAutoTGO::vUnguard((CAutoTGO *)v38);
        v8 = v25;
        v10 = v26;
      }
      else
      {
        v8 = v25;
LABEL_11:
        v18 = ppco;
        if ( v14->iType != 1 )
          goto LABEL_12;
        if ( bAllowShareAccess(v14)
          && GreGetCurrentThread()
          && *((_QWORD *)GreGetCurrentThread() + 34)
          && (*((_DWORD *)GreGetCurrentThread() + 87) || *((_DWORD *)GreGetCurrentThread() + 88))
          && (*(_DWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 20LL) & 0x20) != 0 )
        {
          v19 = *(BOOL (__stdcall **)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))(*((_QWORD *)GreGetCurrentThread() + 34) + 48LL);
          goto LABEL_14;
        }
        if ( v14->iType != 1
          || !bAllowShareAccess(v14)
          || !GreGetCurrentThread()
          || !*((_QWORD *)GreGetCurrentThread() + 34)
          || !*((_DWORD *)GreGetCurrentThread() + 87) && !*((_DWORD *)GreGetCurrentThread() + 88) )
        {
LABEL_12:
          if ( ((__int64)v14[1].hsurf & 0x20) != 0 )
          {
            v8 |= 1u;
            v25 = v8;
            v19 = (BOOL (__stdcall *)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))*((_QWORD *)v14->hdev + 161);
            goto LABEL_14;
          }
        }
        v19 = EngStrokePath;
LABEL_14:
        v20 = OffStrokePath(
                (__int64 (__fastcall *)(SURFOBJ *, struct _PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))v19,
                (int *)&v28,
                v14,
                this,
                v18,
                v31,
                v33,
                v32,
                v29,
                a8);
        if ( (v8 & 1) != 0 )
        {
          v8 &= ~1u;
          v25 = v8;
        }
        v10 = v26;
        if ( !v20 )
          v10 = -1;
        v26 = v10;
        if ( !v13 )
          v13 = this;
        this = v13;
        if ( v16 )
          GreUnlockDisplayDevice(v16[6]);
        PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v34);
        EPATHOBJ::vUnlock((EPATHOBJ *)&v36);
        PATH_CORE::~PATH_CORE((PATH_CORE *)v39);
        CAutoTGO::vUnguard((CAutoTGO *)v38);
      }
    }
  }
  return v10;
}
