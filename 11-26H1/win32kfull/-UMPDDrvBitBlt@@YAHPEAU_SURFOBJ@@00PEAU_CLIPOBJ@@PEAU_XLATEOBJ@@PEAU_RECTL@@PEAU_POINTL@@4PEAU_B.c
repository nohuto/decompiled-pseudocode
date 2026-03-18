/*
 * XREFs of ?UMPDDrvBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1400D99B0
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

__int64 __fastcall UMPDDrvBitBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5,
        struct _RECTL *a6,
        struct _POINTL *a7,
        struct _POINTL *a8,
        struct _BRUSHOBJ *a9,
        struct _POINTL *a10,
        unsigned int a11)
{
  unsigned int v11; // edi
  int v12; // esi
  int v13; // r13d
  int v14; // r15d
  int v15; // r12d
  UMPDOBJ *v16; // rbx
  unsigned int v18; // eax
  unsigned int v19; // eax
  size_t Size; // [rsp+20h] [rbp-F0h]
  unsigned int v21; // [rsp+90h] [rbp-80h] BYREF
  int v22; // [rsp+94h] [rbp-7Ch] BYREF
  int v23; // [rsp+98h] [rbp-78h] BYREF
  int v24; // [rsp+9Ch] [rbp-74h] BYREF
  int v25; // [rsp+A0h] [rbp-70h] BYREF
  int v26; // [rsp+A4h] [rbp-6Ch] BYREF
  int v27; // [rsp+A8h] [rbp-68h] BYREF
  struct _SURFOBJ *v28; // [rsp+B0h] [rbp-60h]
  struct _SURFOBJ *v29; // [rsp+B8h] [rbp-58h]
  struct _SURFOBJ *v30; // [rsp+C0h] [rbp-50h]
  void *v31; // [rsp+C8h] [rbp-48h] BYREF
  void *v32; // [rsp+D0h] [rbp-40h] BYREF
  void *v33; // [rsp+D8h] [rbp-38h] BYREF
  void *v34; // [rsp+E0h] [rbp-30h] BYREF
  void *v35; // [rsp+E8h] [rbp-28h] BYREF
  void *v36; // [rsp+F0h] [rbp-20h] BYREF
  UMPDOBJ *v37; // [rsp+F8h] [rbp-18h] BYREF
  struct _CLIPOBJ *v38; // [rsp+100h] [rbp-10h]
  struct _RECTL *v39; // [rsp+108h] [rbp-8h]
  struct _POINTL *v40; // [rsp+110h] [rbp+0h]
  struct _POINTL *v41; // [rsp+118h] [rbp+8h]
  struct _BRUSHOBJ *v42; // [rsp+120h] [rbp+10h]
  struct _POINTL *v43; // [rsp+128h] [rbp+18h]
  _DWORD v44[4]; // [rsp+130h] [rbp+20h] BYREF
  __int64 v45; // [rsp+140h] [rbp+30h]
  struct _SURFOBJ *v46; // [rsp+148h] [rbp+38h] BYREF
  struct _SURFOBJ *v47; // [rsp+150h] [rbp+40h] BYREF
  struct _SURFOBJ *v48; // [rsp+158h] [rbp+48h] BYREF
  void *v49; // [rsp+160h] [rbp+50h] BYREF
  struct _XLATEOBJ *v50; // [rsp+168h] [rbp+58h] BYREF
  void *v51; // [rsp+170h] [rbp+60h] BYREF
  void *v52; // [rsp+178h] [rbp+68h] BYREF
  void *v53; // [rsp+180h] [rbp+70h] BYREF
  void *v54; // [rsp+188h] [rbp+78h] BYREF
  void *v55; // [rsp+190h] [rbp+80h] BYREF
  unsigned int v56; // [rsp+198h] [rbp+88h]

  v11 = 0;
  v12 = 1;
  v39 = a6;
  v13 = 0;
  v14 = 0;
  v40 = a7;
  v15 = 0;
  v41 = a8;
  v42 = a9;
  v30 = a1;
  v43 = a10;
  v38 = a4;
  v28 = a3;
  v29 = a2;
  v21 = 1;
  v27 = 0;
  v26 = 0;
  v25 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v37);
  v36 = 0LL;
  v34 = 0LL;
  v32 = 0LL;
  v35 = 0LL;
  v33 = 0LL;
  v31 = 0LL;
  memset_0(v44, 0, 0x70uLL);
  v16 = v37;
  if ( v37 )
  {
    if ( *((_BYTE *)v37 + 440) )
    {
      if ( a5 )
        v18 = ((4 * a5->cEntries + 7) & 0xFFFFFFF8) + 232;
      else
        v18 = 208;
      v21 = v18;
      v19 = UMPDOBJ::bThunkLargeBitmaps(
              v37,
              v30,
              v29,
              v28,
              &v36,
              &v35,
              &v34,
              &v33,
              &v32,
              &v31,
              &v27,
              &v22,
              &v26,
              &v23,
              &v25,
              &v24,
              &v21);
      v13 = v22;
      v12 = v19;
      v14 = v23;
      v15 = v24;
      v21 = v19;
    }
    if ( v12 )
    {
      v44[1] = 18;
      LOBYTE(v44[0]) = 0;
      v45 = *(_QWORD *)v16;
      v46 = v30;
      v47 = v29;
      v48 = v28;
      v49 = v38;
      v51 = v39;
      v52 = v40;
      v53 = v41;
      v54 = v42;
      v55 = v43;
      v56 = a11;
      v50 = a5;
      if ( !(unsigned int)UMPDOBJ::pso(v16, (UMPDOBJ *)((char *)v16 + 64), &v46, v13)
        || !(unsigned int)UMPDOBJ::pso(v16, (UMPDOBJ *)((char *)v16 + 80), &v47, v14)
        || !(unsigned int)UMPDOBJ::pso(v16, (UMPDOBJ *)((char *)v16 + 96), &v48, v15)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v16, (UMPDOBJ *)((char *)v16 + 112), &v49, 0x18u, 0LL)
        || !(unsigned int)UMPDOBJ::pxlo(v16, &v50)
        || !(unsigned int)UMPDOBJ::ThunkMemBlock(v16, &v51, 0x10u)
        || !(unsigned int)UMPDOBJ::ThunkMemBlock(v16, &v52, 8u)
        || !(unsigned int)UMPDOBJ::ThunkMemBlock(v16, &v53, 8u)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v16, (UMPDOBJ *)((char *)v16 + 144), &v54, 0x18u, 0LL)
        || !(unsigned int)UMPDOBJ::ThunkMemBlock(v16, &v55, 8u)
        || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v16, v44, 0x70u, &v21, Size) == -1)
        || (v12 = 1, !v21) )
      {
        v12 = 0;
      }
    }
    if ( *((_BYTE *)v16 + 440) )
      UMPDOBJ::RestoreBitmaps(v16, v30, v29, v28, v36, v35, v34, v33, v32, v31, v27, v13, v26, v14, v25, v15);
    v11 = v12;
  }
  XUMPDOBJ::~XUMPDOBJ(&v37);
  return v11;
}
