/*
 * XREFs of ?TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1400D55E8
 * Callers:
 *     ?GrepExtTextOutWLocked@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXK@Z @ 0x1400BC904 (-GrepExtTextOutWLocked@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXK@.c)
 *     ?bProxyDrvTextOut@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAUHDEV__@@K4@Z @ 0x1400D4898 (-bProxyDrvTextOut@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOB.c)
 *     ?EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x14026BA50 (-EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PE.c)
 * Callees:
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1400AED70 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1400D52F0 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1400D58A0 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void __fastcall TextOutBitBlt(
        struct SURFACE *this,
        struct RFONTOBJ *a2,
        struct _SURFOBJ *a3,
        struct _SURFOBJ *a4,
        struct _CLIPOBJ *a5,
        struct _XLATEOBJ *a6,
        struct _RECTL *a7,
        struct _POINTL *a8,
        struct _POINTL *a9,
        struct _BRUSHOBJ *a10,
        struct _POINTL *a11)
{
  unsigned __int64 v11; // r13
  int *v12; // rbx
  unsigned int v14; // esi
  unsigned int v15; // r14d
  int v16; // r12d
  __int64 v18; // rax
  int (*v19)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  int v20; // eax
  unsigned int v21; // [rsp+60h] [rbp-59h] BYREF
  unsigned int v22; // [rsp+64h] [rbp-55h] BYREF
  int *v23; // [rsp+68h] [rbp-51h] BYREF
  struct _POINTL *v24; // [rsp+70h] [rbp-49h]
  struct _BRUSHOBJ *v25; // [rsp+78h] [rbp-41h]
  struct _RECTL *v26; // [rsp+80h] [rbp-39h]
  struct _CLIPOBJ *v27; // [rsp+88h] [rbp-31h]
  int v28[10]; // [rsp+90h] [rbp-29h] BYREF

  v11 = (unsigned __int64)this + 24;
  v27 = a5;
  v12 = v28;
  v26 = a7;
  v14 = 0;
  v15 = 0;
  v25 = a10;
  v16 = 0;
  v24 = a11;
  v18 = *((_QWORD *)this + 6);
  v21 = 0;
  v22 = 0;
  v23 = v28;
  if ( (*(_DWORD *)(v18 + 40) & 0x8080) == 0x8080 && *(_QWORD *)a2 )
  {
    v20 = UMPDReleaseRFONTSem(a2, 0LL, &v21, &v22, (void **)&v23);
    v14 = v21;
    v16 = v20;
    v15 = v22;
    v12 = v23;
  }
  v19 = SURFACE::pfnBitBlt(this);
  ((void (__fastcall *)(unsigned __int64, _QWORD, _QWORD, struct _CLIPOBJ *, _QWORD, struct _RECTL *, _QWORD, _QWORD, struct _BRUSHOBJ *, struct _POINTL *, int))v19)(
    v11 & -(__int64)(this != 0LL),
    0LL,
    0LL,
    v27,
    0LL,
    v26,
    0LL,
    0LL,
    v25,
    v24,
    61680);
  if ( v16 )
  {
    UMPDAcquireRFONTSem(a2, 0LL, v14, v15, v12);
    if ( v12 )
    {
      if ( v12 != v28 )
        Win32FreePool(v12);
    }
  }
}
