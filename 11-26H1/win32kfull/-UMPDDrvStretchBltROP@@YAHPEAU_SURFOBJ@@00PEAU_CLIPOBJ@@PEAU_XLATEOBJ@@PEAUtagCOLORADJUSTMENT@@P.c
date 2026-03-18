/*
 * XREFs of ?UMPDDrvStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAU_BRUSHOBJ@@K@Z @ 0x14034C7F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D600C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1400D70E4 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1400D7414 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D7A00 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D7B24 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1400D7C20 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?bThunkLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00PEAPEAX11111PEAH22222PEAK@Z @ 0x14021CE40 (-bThunkLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00PEAPEAX11111PEAH22222PEAK@Z.c)
 *     ?pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z @ 0x1402286BC (-pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z.c)
 *     ?RestoreBitmaps@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@00PEAX11111HHHHHH@Z @ 0x140249C40 (-RestoreBitmaps@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@00PEAX11111HHHHHH@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall UMPDDrvStretchBltROP(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5,
        struct tagCOLORADJUSTMENT *a6,
        struct _POINTL *a7,
        struct _RECTL *a8,
        struct _RECTL *a9,
        struct _POINTL *a10,
        unsigned int a11,
        struct _BRUSHOBJ *a12,
        unsigned int a13)
{
  unsigned int v13; // edi
  int v14; // esi
  int v15; // r13d
  int v16; // r15d
  int v17; // r12d
  UMPDOBJ *v18; // rbx
  unsigned int v19; // eax
  unsigned int v20; // eax
  size_t Size; // [rsp+20h] [rbp-F0h]
  unsigned int v23; // [rsp+90h] [rbp-80h] BYREF
  int v24; // [rsp+94h] [rbp-7Ch] BYREF
  int v25; // [rsp+98h] [rbp-78h] BYREF
  int v26; // [rsp+9Ch] [rbp-74h] BYREF
  int v27; // [rsp+A0h] [rbp-70h] BYREF
  int v28; // [rsp+A4h] [rbp-6Ch] BYREF
  int v29; // [rsp+A8h] [rbp-68h] BYREF
  struct _SURFOBJ *v30; // [rsp+B0h] [rbp-60h]
  struct _SURFOBJ *v31; // [rsp+B8h] [rbp-58h]
  struct _SURFOBJ *v32; // [rsp+C0h] [rbp-50h]
  void *v33; // [rsp+C8h] [rbp-48h] BYREF
  void *v34; // [rsp+D0h] [rbp-40h] BYREF
  void *v35; // [rsp+D8h] [rbp-38h] BYREF
  void *v36; // [rsp+E0h] [rbp-30h] BYREF
  void *v37; // [rsp+E8h] [rbp-28h] BYREF
  void *v38; // [rsp+F0h] [rbp-20h] BYREF
  UMPDOBJ *v39; // [rsp+F8h] [rbp-18h] BYREF
  struct _CLIPOBJ *v40; // [rsp+100h] [rbp-10h]
  struct tagCOLORADJUSTMENT *v41; // [rsp+108h] [rbp-8h]
  struct _POINTL *v42; // [rsp+110h] [rbp+0h]
  struct _RECTL *v43; // [rsp+118h] [rbp+8h]
  struct _RECTL *v44; // [rsp+120h] [rbp+10h]
  struct _POINTL *v45; // [rsp+128h] [rbp+18h]
  struct _BRUSHOBJ *v46; // [rsp+130h] [rbp+20h]
  _DWORD v47[4]; // [rsp+140h] [rbp+30h] BYREF
  __int64 v48; // [rsp+150h] [rbp+40h]
  struct _SURFOBJ *v49; // [rsp+158h] [rbp+48h] BYREF
  struct _SURFOBJ *v50; // [rsp+160h] [rbp+50h] BYREF
  struct _SURFOBJ *v51; // [rsp+168h] [rbp+58h] BYREF
  void *v52; // [rsp+170h] [rbp+60h] BYREF
  struct _XLATEOBJ *v53; // [rsp+178h] [rbp+68h] BYREF
  void *v54; // [rsp+180h] [rbp+70h] BYREF
  void *v55; // [rsp+188h] [rbp+78h] BYREF
  void *v56; // [rsp+190h] [rbp+80h] BYREF
  void *v57; // [rsp+198h] [rbp+88h] BYREF
  void *v58; // [rsp+1A0h] [rbp+90h] BYREF
  unsigned int v59; // [rsp+1A8h] [rbp+98h]
  void *v60; // [rsp+1B0h] [rbp+A0h] BYREF
  unsigned int v61; // [rsp+1B8h] [rbp+A8h]

  v13 = 0;
  v14 = 1;
  v41 = a6;
  v15 = 0;
  v16 = 0;
  v42 = a7;
  v17 = 0;
  v43 = a8;
  v44 = a9;
  v45 = a10;
  v32 = a1;
  v46 = a12;
  v40 = a4;
  v30 = a3;
  v31 = a2;
  v23 = 1;
  v29 = 0;
  v28 = 0;
  v27 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v39);
  v38 = 0LL;
  v36 = 0LL;
  v34 = 0LL;
  v37 = 0LL;
  v35 = 0LL;
  v33 = 0LL;
  memset_0(v47, 0, 0x80uLL);
  v18 = v39;
  if ( v39 )
  {
    if ( *((_BYTE *)v39 + 440) )
    {
      if ( a5 )
        v19 = ((4 * a5->cEntries + 7) & 0xFFFFFFF8) + 280;
      else
        v19 = 256;
      v23 = v19;
      v20 = UMPDOBJ::bThunkLargeBitmaps(
              v39,
              v32,
              v31,
              v30,
              &v38,
              &v37,
              &v36,
              &v35,
              &v34,
              &v33,
              &v29,
              &v24,
              &v28,
              &v25,
              &v27,
              &v26,
              &v23);
      v15 = v24;
      v14 = v20;
      v16 = v25;
      v17 = v26;
      v23 = v20;
    }
    if ( v14 )
    {
      v47[1] = 69;
      LOBYTE(v47[0]) = 0;
      v48 = *(_QWORD *)v18;
      v49 = v32;
      v50 = v31;
      v51 = v30;
      v52 = v40;
      v54 = v41;
      v55 = v42;
      v56 = v43;
      v57 = v44;
      v58 = v45;
      v59 = a11;
      v60 = v46;
      v61 = a13;
      v53 = a5;
      if ( !(unsigned int)UMPDOBJ::pso(v18, (UMPDOBJ *)((char *)v18 + 64), &v49, v15)
        || !(unsigned int)UMPDOBJ::pso(v18, (UMPDOBJ *)((char *)v18 + 80), &v50, v16)
        || !(unsigned int)UMPDOBJ::pso(v18, (UMPDOBJ *)((char *)v18 + 96), &v51, v17)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v18, (UMPDOBJ *)((char *)v18 + 112), &v52, 0x18u, 0LL)
        || !(unsigned int)UMPDOBJ::pxlo(v18, &v53)
        || !(unsigned int)UMPDOBJ::ThunkMemBlock(v18, &v54, 0x18u)
        || !(unsigned int)UMPDOBJ::ThunkMemBlock(v18, &v55, 8u)
        || !(unsigned int)UMPDOBJ::ThunkMemBlock(v18, &v56, 0x10u)
        || !(unsigned int)UMPDOBJ::ThunkMemBlock(v18, &v57, 0x10u)
        || !(unsigned int)UMPDOBJ::ThunkMemBlock(v18, &v58, 8u)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v18, (UMPDOBJ *)((char *)v18 + 144), &v60, 0x18u, 0LL)
        || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v18, v47, 0x80u, &v23, Size) == -1)
        || (v14 = 1, !v23) )
      {
        v14 = 0;
      }
    }
    if ( *((_BYTE *)v18 + 440) )
      UMPDOBJ::RestoreBitmaps(
        v18,
        (unsigned __int64)v32,
        (unsigned __int64)v31,
        (unsigned __int64)v30,
        v38,
        v37,
        v36,
        v35,
        v34,
        v33,
        v29,
        v15,
        v28,
        v16,
        v27,
        v17);
    v13 = v14;
  }
  XUMPDOBJ::~XUMPDOBJ(&v39);
  return v13;
}
