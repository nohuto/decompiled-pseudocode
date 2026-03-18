/*
 * XREFs of ?UMPDDrvBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1400D2500
 * Callers:
 *     <none>
 * Callees:
 *     ?ulGetMaxSize@UMPDOBJ@@QEBAKXZ @ 0x1400D0CF8 (-ulGetMaxSize@UMPDOBJ@@QEBAKXZ.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D2E48 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D2F30 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1400D330C (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1400D35A0 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1400D38E8 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ?bPrepareBitmapsForClient@UMPDOBJ@@QEAAHPEAPEAU_SURFOBJ@@0@Z @ 0x1400D4138 (-bPrepareBitmapsForClient@UMPDOBJ@@QEAAHPEAPEAU_SURFOBJ@@0@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D425C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z @ 0x1400D4644 (-pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z.c)
 *     ?RestoreBitmaps@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@00PEAX11111HHHHHH@Z @ 0x140224C78 (-RestoreBitmaps@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@00PEAX11111HHHHHH@Z.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x140337988 (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
 *     ?bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z @ 0x140337A64 (-bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
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
  struct _XLATEOBJ *v11; // r14
  struct _SURFOBJ *v12; // rsi
  int v14; // r12d
  int v15; // edi
  UMPDOBJ *v16; // rcx
  UMPDOBJ *v17; // rbx
  int v18; // eax
  unsigned int v19; // r11d
  struct _SURFOBJ *v20; // r15
  ULONG v21; // r14d
  unsigned int v22; // edi
  int v23; // r14d
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  unsigned int v34; // eax
  BOOL v36; // edx
  PVOID pvScan0; // rax
  ULONG v38; // esi
  int v39; // edx
  unsigned int MaxSize; // r9d
  int v41; // r11d
  ULONG cjBits; // ecx
  unsigned int v43; // r8d
  unsigned int v44; // eax
  BOOL v45; // edx
  PVOID v46; // rax
  ULONG v47; // esi
  int v48; // edx
  unsigned int v49; // r9d
  int v50; // r10d
  int v51; // edx
  PVOID v52; // rax
  unsigned int v53; // eax
  int v54; // edx
  ULONG v55; // r9d
  unsigned int v56; // ecx
  unsigned int v57; // r8d
  unsigned int v58; // eax
  ULONG v59; // ecx
  unsigned int v60; // r8d
  size_t Size; // [rsp+20h] [rbp-E0h]
  int v62; // [rsp+80h] [rbp-80h] BYREF
  int v63; // [rsp+84h] [rbp-7Ch]
  int v64; // [rsp+88h] [rbp-78h]
  struct _SURFOBJ *v65; // [rsp+90h] [rbp-70h]
  int v66; // [rsp+98h] [rbp-68h] BYREF
  int v67; // [rsp+9Ch] [rbp-64h] BYREF
  int v68; // [rsp+A0h] [rbp-60h] BYREF
  struct _SURFOBJ *v69; // [rsp+A8h] [rbp-58h] BYREF
  void *v70; // [rsp+B0h] [rbp-50h]
  void *v71; // [rsp+B8h] [rbp-48h]
  void *v72; // [rsp+C0h] [rbp-40h]
  void *v73; // [rsp+C8h] [rbp-38h]
  void *v74; // [rsp+D0h] [rbp-30h]
  void *pvBits; // [rsp+D8h] [rbp-28h]
  UMPDOBJ *v76; // [rsp+E0h] [rbp-20h] BYREF
  struct _SURFOBJ *v77; // [rsp+E8h] [rbp-18h] BYREF
  struct _XLATEOBJ *v78; // [rsp+F0h] [rbp-10h]
  struct _CLIPOBJ *v79; // [rsp+F8h] [rbp-8h]
  struct _RECTL *v80; // [rsp+100h] [rbp+0h]
  struct _POINTL *v81; // [rsp+108h] [rbp+8h]
  struct _POINTL *v82; // [rsp+110h] [rbp+10h]
  struct _BRUSHOBJ *v83; // [rsp+118h] [rbp+18h]
  struct _POINTL *v84; // [rsp+120h] [rbp+20h]
  _BYTE Src[4]; // [rsp+130h] [rbp+30h] BYREF
  int v86; // [rsp+134h] [rbp+34h]
  __int64 v87; // [rsp+140h] [rbp+40h]
  struct _SURFOBJ *v88; // [rsp+148h] [rbp+48h] BYREF
  struct _SURFOBJ *v89; // [rsp+150h] [rbp+50h] BYREF
  struct _SURFOBJ *v90; // [rsp+158h] [rbp+58h] BYREF
  void *v91; // [rsp+160h] [rbp+60h] BYREF
  struct _XLATEOBJ *v92; // [rsp+168h] [rbp+68h] BYREF
  void *v93; // [rsp+170h] [rbp+70h] BYREF
  void *v94; // [rsp+178h] [rbp+78h] BYREF
  void *v95; // [rsp+180h] [rbp+80h] BYREF
  void *v96; // [rsp+188h] [rbp+88h] BYREF
  void *v97; // [rsp+190h] [rbp+90h] BYREF
  unsigned int v98; // [rsp+198h] [rbp+98h]

  v11 = a5;
  v12 = a1;
  v80 = a6;
  v14 = 0;
  v81 = a7;
  v15 = 0;
  v82 = a8;
  v83 = a9;
  v84 = a10;
  v65 = a1;
  v68 = 1;
  v79 = a4;
  v69 = a2;
  v77 = a3;
  v78 = a5;
  v64 = 0;
  v63 = 0;
  v67 = 0;
  v62 = 0;
  v66 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v76);
  pvBits = 0LL;
  v73 = 0LL;
  v71 = 0LL;
  v74 = 0LL;
  v72 = 0LL;
  v70 = 0LL;
  memset_0(Src, 0, 0x70uLL);
  v17 = v76;
  if ( !v76 || (v18 = UMPDOBJ::bPrepareBitmapsForClient(v16, &v69, &v77), v19 = 0, !v18) )
  {
    v22 = 0;
    goto LABEL_29;
  }
  v20 = v69;
  if ( !*((_BYTE *)v17 + 456) )
    goto LABEL_13;
  if ( a5 )
    v21 = ((4 * a5->cEntries + 7) & 0xFFFFFFF8) + 232;
  else
    v21 = 208;
  if ( !v12 && !v69 && !a3 )
  {
    v22 = (_DWORD)v69 + 1;
    goto LABEL_51;
  }
  v22 = 1;
  if ( v12 && v12->pvBits )
  {
    v36 = 0;
    if ( !v12->iType )
      v36 = SLOBYTE(v12->fjBitmap) < 0;
    pvScan0 = v12->pvScan0;
    pvBits = v12->pvBits;
    v64 = !v36;
    v74 = pvScan0;
    v38 = v21 + 80;
    MaxSize = UMPDOBJ::ulGetMaxSize(v17);
    if ( v21 >= 0xFFFFFFB0 )
    {
      v22 = 0;
      v64 = v41;
      goto LABEL_35;
    }
    cjBits = v65->cjBits;
    if ( cjBits + 7 < cjBits || (v43 = (cjBits + 7) & 0xFFFFFFF8, v43 + v38 < v43) )
    {
      v22 = 0;
      v64 = v41;
      v12 = v65;
      goto LABEL_10;
    }
    if ( v43 + v38 <= MaxSize || v39 )
    {
      v38 += v43;
    }
    else
    {
      v44 = UMPDOBJ::bSendLargeBitmap(v17, v65, &v67);
      v19 = 0;
      v22 = v44;
      if ( !v44 )
      {
        v12 = v65;
        goto LABEL_9;
      }
      v41 = v64;
    }
    v64 = v41;
    v21 = v38;
    v19 = 0;
    goto LABEL_44;
  }
LABEL_9:
  if ( !v22 )
  {
LABEL_10:
    v23 = v62;
    UMPDOBJ::bDeleteLargeBitmaps(
      v17,
      (struct _SURFOBJ *)((unsigned __int64)v12 & -(__int64)(v67 != 0)),
      (struct _SURFOBJ *)((unsigned __int64)v20 & -(__int64)(v62 != 0)),
      (struct _SURFOBJ *)((unsigned __int64)a3 & -(__int64)(v66 != 0)));
    LOBYTE(v19) = 0;
    goto LABEL_11;
  }
LABEL_44:
  v22 = 1;
  if ( v20 && v20->pvBits )
  {
    v45 = 0;
    if ( !v20->iType )
      v45 = SLOBYTE(v20->fjBitmap) < 0;
    v46 = v20->pvScan0;
    v73 = v20->pvBits;
    v63 = !v45;
    v72 = v46;
    v47 = v21 + 80;
    v49 = UMPDOBJ::ulGetMaxSize(v17);
    if ( v21 >= 0xFFFFFFB0 || (v56 = v20->cjBits, v56 + 7 < v56) || (v57 = (v56 + 7) & 0xFFFFFFF8, v57 + v47 < v57) )
    {
      v22 = v19;
      v63 = v50;
      goto LABEL_35;
    }
    if ( v57 + v47 <= v49 || v48 )
    {
      v47 += v57;
    }
    else
    {
      v58 = UMPDOBJ::bSendLargeBitmap(v17, v20, &v62);
      v19 = 0;
      v22 = v58;
      if ( !v58 )
        goto LABEL_46;
      v50 = v63;
    }
    v21 = v47;
    v63 = v50;
    goto LABEL_47;
  }
LABEL_46:
  if ( !v22 )
    goto LABEL_35;
LABEL_47:
  v22 = 1;
  if ( a3 && a3->pvBits )
  {
    v51 = v19;
    if ( a3->iType == (_WORD)v19 && SLOBYTE(a3->fjBitmap) < 0 )
      v51 = 1;
    v52 = a3->pvScan0;
    v71 = a3->pvBits;
    v14 = v51 ^ 1;
    v70 = v52;
    v53 = UMPDOBJ::ulGetMaxSize(v17);
    v55 = v21 + 80;
    if ( v21 >= 0xFFFFFFB0 || (v59 = a3->cjBits, v59 + 7 < v59) || (v60 = (v59 + 7) & 0xFFFFFFF8, v60 + v55 < v60) )
    {
      v22 = v19;
      goto LABEL_35;
    }
    if ( v60 + v55 <= v53 || v54 )
      goto LABEL_50;
    v22 = UMPDOBJ::bSendLargeBitmap(v17, a3, &v66);
    LOBYTE(v19) = 0;
  }
  if ( !v22 )
  {
LABEL_35:
    v12 = v65;
    goto LABEL_10;
  }
LABEL_50:
  v12 = v65;
LABEL_51:
  v23 = v62;
LABEL_11:
  v68 = v22;
  if ( v22 )
  {
    v15 = v62;
    v11 = v78;
LABEL_13:
    v86 = 18;
    Src[0] = v19;
    v87 = *(_QWORD *)v17;
    v91 = v79;
    v93 = v80;
    v94 = v81;
    v95 = v82;
    v96 = v83;
    v97 = v84;
    v98 = a11;
    v88 = v12;
    v89 = v20;
    v90 = a3;
    v92 = v11;
    v24 = UMPDOBJ::pso(v17, (UMPDOBJ *)((char *)v17 + 80), &v88, v67);
    LOBYTE(v19) = 0;
    if ( !v24 )
      goto LABEL_30;
    v25 = UMPDOBJ::pso(v17, (UMPDOBJ *)((char *)v17 + 96), &v89, v15);
    LOBYTE(v19) = 0;
    if ( !v25 )
      goto LABEL_30;
    v26 = UMPDOBJ::pso(v17, (UMPDOBJ *)((char *)v17 + 112), &v90, v66);
    LOBYTE(v19) = 0;
    if ( !v26 )
      goto LABEL_30;
    v27 = UMPDOBJ::ThunkDDIOBJ(v17, (UMPDOBJ *)((char *)v17 + 128), &v91, 0x18u, 0LL);
    LOBYTE(v19) = 0;
    if ( !v27 )
      goto LABEL_30;
    v28 = UMPDOBJ::pxlo(v17, &v92);
    LOBYTE(v19) = 0;
    if ( !v28 )
      goto LABEL_30;
    v29 = UMPDOBJ::ThunkMemBlock(v17, &v93, 0x10u);
    LOBYTE(v19) = 0;
    if ( !v29 )
      goto LABEL_30;
    v30 = UMPDOBJ::ThunkMemBlock(v17, &v94, 8u);
    LOBYTE(v19) = 0;
    if ( !v30 )
      goto LABEL_30;
    v31 = UMPDOBJ::ThunkMemBlock(v17, &v95, 8u);
    LOBYTE(v19) = 0;
    if ( !v31 )
      goto LABEL_30;
    v32 = UMPDOBJ::ThunkDDIOBJ(v17, (UMPDOBJ *)((char *)v17 + 160), &v96, 0x18u, 0LL);
    LOBYTE(v19) = 0;
    if ( !v32
      || (v33 = UMPDOBJ::ThunkMemBlock(v17, &v97, 8u), LOBYTE(v19) = 0, !v33)
      || (LODWORD(Size) = 4, v34 = UMPDOBJ::Thunk(v17, Src, 0x70u, &v68, Size), LOBYTE(v19) = 0, v34 == -1)
      || (v22 = 1, !v68) )
    {
LABEL_30:
      v22 = 0;
    }
    v23 = v62;
  }
  if ( *((_BYTE *)v17 + 456) != (_BYTE)v19 )
    UMPDOBJ::RestoreBitmaps(v17, v12, v20, a3, pvBits, v74, v73, v72, v71, v70, v64, v67, v63, v23, v14, v66);
LABEL_29:
  XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v76);
  return v22;
}
