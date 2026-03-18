/*
 * XREFs of ?EPATHOBJ_bTextOutSimpleStroke1@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@AEAVRFONTOBJ@@PEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1403016B8
 * Callers:
 *     ?GrepExtTextOutWLocked@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXKAEBUTag@RFONTOBJ@@@Z @ 0x140014230 (-GrepExtTextOutWLocked@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXKA.c)
 * Callees:
 *     ?EPATHOBJ_bSimpleStroke@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1400A3624 (-EPATHOBJ_bSimpleStroke@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1400D2000 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1400DA83C (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall EPATHOBJ_bTextOutSimpleStroke1(
        struct EPATHOBJ *a1,
        struct XDCOBJ *a2,
        struct RFONTOBJ *a3,
        HDEV a4,
        struct SURFACE *a5,
        struct _CLIPOBJ *a6,
        struct _BRUSHOBJ *a7,
        struct _POINTL *a8)
{
  int *v8; // rbx
  unsigned int v10; // esi
  unsigned int v11; // r14d
  int v12; // r12d
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rax
  unsigned int v19; // r15d
  unsigned int v21; // [rsp+50h] [rbp-89h] BYREF
  unsigned int v22; // [rsp+54h] [rbp-85h] BYREF
  int *v23; // [rsp+58h] [rbp-81h] BYREF
  struct _POINTL *v24; // [rsp+60h] [rbp-79h]
  BRUSHOBJ *v25; // [rsp+68h] [rbp-71h]
  CLIPOBJ *pco; // [rsp+70h] [rbp-69h]
  struct SURFACE *v27; // [rsp+78h] [rbp-61h]
  HDEV v28; // [rsp+80h] [rbp-59h]
  struct _LINEATTRS v29; // [rsp+88h] [rbp-51h] BYREF
  int v30[10]; // [rsp+B0h] [rbp-29h] BYREF

  v8 = v30;
  v27 = a5;
  v10 = 0;
  pco = a6;
  v11 = 0;
  v12 = 0;
  v25 = a7;
  v24 = a8;
  v15 = *(_QWORD *)a2;
  v28 = a4;
  v21 = 0;
  v22 = 0;
  v16 = *(_QWORD *)(v15 + 48);
  v23 = v30;
  if ( (*(_DWORD *)(v16 + 40) & 0x8080) == 0x8080 && *(_QWORD *)a3 )
  {
    v17 = UMPDReleaseRFONTSem(a3, 0LL, &v21, &v22, (void **)&v23);
    v10 = v21;
    v12 = v17;
    v11 = v22;
    v8 = v23;
  }
  v18 = *(_QWORD *)a2;
  *(_OWORD *)&v29.fl = glaSimpleStroke;
  memset(&v29.eMiterLimit, 0, 24);
  v19 = EPATHOBJ_bSimpleStroke(a1, *(_DWORD *)(v18 + 72), v28, v27, pco, 0LL, v25, v24, &v29, 0xD0Du);
  if ( v12 )
  {
    UMPDAcquireRFONTSem(a3, 0LL, v10, v11, v8);
    if ( v8 )
    {
      if ( v8 != v30 )
        Win32FreePool(v8);
    }
  }
  return v19;
}
