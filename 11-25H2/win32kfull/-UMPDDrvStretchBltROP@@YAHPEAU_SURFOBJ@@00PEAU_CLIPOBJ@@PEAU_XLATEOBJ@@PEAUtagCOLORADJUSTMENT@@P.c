/*
 * XREFs of ?UMPDDrvStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAU_BRUSHOBJ@@K@Z @ 0x1403371A0
 * Callers:
 *     <none>
 * Callees:
 *     ?bThunkLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00PEAPEAX11111PEAH22222PEAK@Z @ 0x1400CF678 (-bThunkLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00PEAPEAX11111PEAH22222PEAK@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D2E48 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D2F30 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1400D330C (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1400D35A0 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1400D38E8 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ?bPrepareBitmapsForClient@UMPDOBJ@@QEAAHPEAPEAU_SURFOBJ@@0@Z @ 0x1400D4138 (-bPrepareBitmapsForClient@UMPDOBJ@@QEAAHPEAPEAU_SURFOBJ@@0@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D425C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z @ 0x1400D4644 (-pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z.c)
 *     ?RestoreBitmaps@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@00PEAX11111HHHHHH@Z @ 0x140224C78 (-RestoreBitmaps@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@00PEAX11111HHHHHH@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

_BOOL8 __fastcall UMPDDrvStretchBltROP(
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
  struct _SURFOBJ *v13; // rdi
  int v14; // r15d
  int v15; // esi
  int v16; // r14d
  UMPDOBJ *v17; // rcx
  UMPDOBJ *v18; // rbx
  struct _SURFOBJ *v19; // r12
  unsigned int v20; // eax
  unsigned int v21; // eax
  BOOL v22; // edi
  size_t Size; // [rsp+20h] [rbp-F0h]
  unsigned int v25; // [rsp+90h] [rbp-80h] BYREF
  int v26; // [rsp+94h] [rbp-7Ch] BYREF
  int v27; // [rsp+98h] [rbp-78h] BYREF
  int v28; // [rsp+9Ch] [rbp-74h] BYREF
  int v29; // [rsp+A0h] [rbp-70h] BYREF
  int v30; // [rsp+A4h] [rbp-6Ch] BYREF
  int v31; // [rsp+A8h] [rbp-68h] BYREF
  struct _SURFOBJ *v32; // [rsp+B0h] [rbp-60h]
  struct _SURFOBJ *v33; // [rsp+B8h] [rbp-58h] BYREF
  void *v34; // [rsp+C0h] [rbp-50h] BYREF
  void *v35; // [rsp+C8h] [rbp-48h] BYREF
  void *v36; // [rsp+D0h] [rbp-40h] BYREF
  void *v37; // [rsp+D8h] [rbp-38h] BYREF
  void *v38; // [rsp+E0h] [rbp-30h] BYREF
  void *v39; // [rsp+E8h] [rbp-28h] BYREF
  struct _SURFOBJ *v40; // [rsp+F0h] [rbp-20h]
  UMPDOBJ *v41; // [rsp+F8h] [rbp-18h] BYREF
  struct _SURFOBJ *v42; // [rsp+100h] [rbp-10h] BYREF
  struct _CLIPOBJ *v43; // [rsp+108h] [rbp-8h]
  struct tagCOLORADJUSTMENT *v44; // [rsp+110h] [rbp+0h]
  struct _POINTL *v45; // [rsp+118h] [rbp+8h]
  struct _RECTL *v46; // [rsp+120h] [rbp+10h]
  struct _RECTL *v47; // [rsp+128h] [rbp+18h]
  struct _POINTL *v48; // [rsp+130h] [rbp+20h]
  struct _BRUSHOBJ *v49; // [rsp+138h] [rbp+28h]
  _DWORD Src[4]; // [rsp+140h] [rbp+30h] BYREF
  __int64 v51; // [rsp+150h] [rbp+40h]
  struct _SURFOBJ *v52; // [rsp+158h] [rbp+48h] BYREF
  struct _SURFOBJ *v53; // [rsp+160h] [rbp+50h] BYREF
  struct _SURFOBJ *v54; // [rsp+168h] [rbp+58h] BYREF
  void *v55; // [rsp+170h] [rbp+60h] BYREF
  struct _XLATEOBJ *v56; // [rsp+178h] [rbp+68h] BYREF
  void *v57; // [rsp+180h] [rbp+70h] BYREF
  void *v58; // [rsp+188h] [rbp+78h] BYREF
  void *v59; // [rsp+190h] [rbp+80h] BYREF
  void *v60; // [rsp+198h] [rbp+88h] BYREF
  void *v61; // [rsp+1A0h] [rbp+90h] BYREF
  unsigned int v62; // [rsp+1A8h] [rbp+98h]
  void *v63; // [rsp+1B0h] [rbp+A0h] BYREF
  unsigned int v64; // [rsp+1B8h] [rbp+A8h]

  v13 = a3;
  v44 = a6;
  v14 = 0;
  v15 = 0;
  v45 = a7;
  v16 = 0;
  v46 = a8;
  v47 = a9;
  v48 = a10;
  v32 = a1;
  v49 = a12;
  v43 = a4;
  v40 = a3;
  v33 = a2;
  v42 = a3;
  v25 = 1;
  v31 = 0;
  v30 = 0;
  v29 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v41);
  v39 = 0LL;
  v37 = 0LL;
  v35 = 0LL;
  v38 = 0LL;
  v36 = 0LL;
  v34 = 0LL;
  memset_0(Src, 0, 0x80uLL);
  v18 = v41;
  if ( !v41 || !(unsigned int)UMPDOBJ::bPrepareBitmapsForClient(v17, &v33, &v42) )
  {
    v22 = 0;
    goto LABEL_25;
  }
  v19 = v33;
  if ( !*((_BYTE *)v18 + 456) )
    goto LABEL_9;
  if ( a5 )
    v20 = ((4 * a5->cEntries + 7) & 0xFFFFFFF8) + 280;
  else
    v20 = 256;
  v25 = v20;
  v21 = UMPDOBJ::bThunkLargeBitmaps(
          v18,
          v32,
          v33,
          v13,
          &v39,
          &v38,
          &v37,
          &v36,
          &v35,
          &v34,
          &v31,
          &v26,
          &v30,
          &v27,
          &v29,
          &v28,
          &v25);
  v14 = v26;
  v22 = v21;
  v15 = v27;
  v16 = v28;
  v25 = v21;
  if ( v21 )
  {
    v13 = v40;
LABEL_9:
    Src[1] = 69;
    LOBYTE(Src[0]) = 0;
    v51 = *(_QWORD *)v18;
    v52 = v32;
    v55 = v43;
    v57 = v44;
    v58 = v45;
    v59 = v46;
    v60 = v47;
    v61 = v48;
    v62 = a11;
    v63 = v49;
    v64 = a13;
    v53 = v19;
    v54 = v13;
    v56 = a5;
    v22 = 0;
    if ( (unsigned int)UMPDOBJ::pso(v18, (UMPDOBJ *)((char *)v18 + 80), &v52) )
    {
      if ( (unsigned int)UMPDOBJ::pso(v18, (UMPDOBJ *)((char *)v18 + 96), &v53) )
      {
        if ( (unsigned int)UMPDOBJ::pso(v18, (UMPDOBJ *)((char *)v18 + 112), &v54) )
        {
          if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(v18, (UMPDOBJ *)((char *)v18 + 128), (const void **)&v55, 0x18u, 0LL) )
          {
            if ( (unsigned int)UMPDOBJ::pxlo(v18, &v56) )
            {
              if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v18, (const void **)&v57, 0x18u) )
              {
                if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v18, (const void **)&v58, 8u) )
                {
                  if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v18, (const void **)&v59, 0x10u) )
                  {
                    if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v18, (const void **)&v60, 0x10u) )
                    {
                      if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v18, (const void **)&v61, 8u) )
                      {
                        if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(
                                             v18,
                                             (UMPDOBJ *)((char *)v18 + 160),
                                             (const void **)&v63,
                                             0x18u,
                                             0LL) )
                        {
                          LODWORD(Size) = 4;
                          if ( (unsigned int)UMPDOBJ::Thunk(v18, Src, 0x80u, &v25, Size) != -1 )
                            v22 = v25 != 0;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( *((_BYTE *)v18 + 456) )
    UMPDOBJ::RestoreBitmaps(
      v18,
      (unsigned __int64)v32,
      (unsigned __int64)v19,
      (unsigned __int64)v40,
      v39,
      v38,
      v37,
      v36,
      v35,
      v34,
      v31,
      v14,
      v30,
      v15,
      v29,
      v16);
LABEL_25:
  XUMPDOBJ::~XUMPDOBJ(&v41);
  return v22;
}
