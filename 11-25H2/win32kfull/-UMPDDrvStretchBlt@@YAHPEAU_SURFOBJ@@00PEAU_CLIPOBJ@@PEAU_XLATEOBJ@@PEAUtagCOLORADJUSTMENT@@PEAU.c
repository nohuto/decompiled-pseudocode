/*
 * XREFs of ?UMPDDrvStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1400CF060
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

_BOOL8 __fastcall UMPDDrvStretchBlt(
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
        unsigned int a11)
{
  struct _SURFOBJ *v11; // rdi
  int v12; // r15d
  int v13; // esi
  int v14; // r14d
  UMPDOBJ *v15; // rcx
  UMPDOBJ *v16; // rbx
  struct _SURFOBJ *v17; // r12
  BOOL v18; // edi
  unsigned int v20; // eax
  unsigned int v21; // eax
  size_t Size; // [rsp+20h] [rbp-F0h]
  unsigned int v23; // [rsp+90h] [rbp-80h] BYREF
  int v24; // [rsp+94h] [rbp-7Ch] BYREF
  int v25; // [rsp+98h] [rbp-78h] BYREF
  int v26; // [rsp+9Ch] [rbp-74h] BYREF
  int v27; // [rsp+A0h] [rbp-70h] BYREF
  int v28; // [rsp+A4h] [rbp-6Ch] BYREF
  int v29; // [rsp+A8h] [rbp-68h] BYREF
  struct _SURFOBJ *v30; // [rsp+B0h] [rbp-60h]
  struct _SURFOBJ *v31; // [rsp+B8h] [rbp-58h] BYREF
  void *v32; // [rsp+C0h] [rbp-50h] BYREF
  void *v33; // [rsp+C8h] [rbp-48h] BYREF
  void *v34; // [rsp+D0h] [rbp-40h] BYREF
  void *v35; // [rsp+D8h] [rbp-38h] BYREF
  void *v36; // [rsp+E0h] [rbp-30h] BYREF
  void *v37; // [rsp+E8h] [rbp-28h] BYREF
  struct _SURFOBJ *v38; // [rsp+F0h] [rbp-20h]
  UMPDOBJ *v39; // [rsp+F8h] [rbp-18h] BYREF
  struct _SURFOBJ *v40; // [rsp+100h] [rbp-10h] BYREF
  struct _CLIPOBJ *v41; // [rsp+108h] [rbp-8h]
  struct tagCOLORADJUSTMENT *v42; // [rsp+110h] [rbp+0h]
  struct _POINTL *v43; // [rsp+118h] [rbp+8h]
  struct _RECTL *v44; // [rsp+120h] [rbp+10h]
  struct _RECTL *v45; // [rsp+128h] [rbp+18h]
  struct _POINTL *v46; // [rsp+130h] [rbp+20h]
  _BYTE Src[4]; // [rsp+140h] [rbp+30h] BYREF
  int v48; // [rsp+144h] [rbp+34h]
  __int64 v49; // [rsp+150h] [rbp+40h]
  struct _SURFOBJ *v50; // [rsp+158h] [rbp+48h] BYREF
  struct _SURFOBJ *v51; // [rsp+160h] [rbp+50h] BYREF
  struct _SURFOBJ *v52; // [rsp+168h] [rbp+58h] BYREF
  void *v53; // [rsp+170h] [rbp+60h] BYREF
  struct _XLATEOBJ *v54; // [rsp+178h] [rbp+68h] BYREF
  void *v55; // [rsp+180h] [rbp+70h] BYREF
  void *v56; // [rsp+188h] [rbp+78h] BYREF
  void *v57; // [rsp+190h] [rbp+80h] BYREF
  void *v58; // [rsp+198h] [rbp+88h] BYREF
  void *v59; // [rsp+1A0h] [rbp+90h] BYREF
  unsigned int v60; // [rsp+1A8h] [rbp+98h]

  v11 = a3;
  v42 = a6;
  v12 = 0;
  v13 = 0;
  v43 = a7;
  v14 = 0;
  v44 = a8;
  v45 = a9;
  v30 = a1;
  v46 = a10;
  v41 = a4;
  v38 = a3;
  v31 = a2;
  v40 = a3;
  v23 = 1;
  v29 = 0;
  v28 = 0;
  v27 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v39);
  v37 = 0LL;
  v35 = 0LL;
  v33 = 0LL;
  v36 = 0LL;
  v34 = 0LL;
  v32 = 0LL;
  memset_0(Src, 0, 0x80uLL);
  v16 = v39;
  if ( !v39 || !(unsigned int)UMPDOBJ::bPrepareBitmapsForClient(v15, &v31, &v40) )
  {
    v18 = 0;
    goto LABEL_11;
  }
  v17 = v31;
  if ( *((_BYTE *)v16 + 456) )
  {
    if ( a5 )
      v21 = ((4 * a5->cEntries + 7) & 0xFFFFFFF8) + 256;
    else
      v21 = 232;
    v23 = v21;
    v20 = UMPDOBJ::bThunkLargeBitmaps(
            v16,
            v30,
            v31,
            v11,
            &v37,
            &v36,
            &v35,
            &v34,
            &v33,
            &v32,
            &v29,
            &v24,
            &v28,
            &v25,
            &v27,
            &v26,
            &v23);
    v12 = v24;
    v18 = v20;
    v13 = v25;
    v14 = v26;
    v23 = v20;
    if ( !v20 )
      goto LABEL_9;
    v11 = v38;
  }
  v48 = 20;
  Src[0] = 0;
  v49 = *(_QWORD *)v16;
  v50 = v30;
  v53 = v41;
  v55 = v42;
  v56 = v43;
  v57 = v44;
  v58 = v45;
  v59 = v46;
  v60 = a11;
  v51 = v17;
  v52 = v11;
  v54 = a5;
  v18 = 0;
  if ( (unsigned int)UMPDOBJ::pso(v16, (UMPDOBJ *)((char *)v16 + 80), &v50, v12) )
  {
    if ( (unsigned int)UMPDOBJ::pso(v16, (UMPDOBJ *)((char *)v16 + 96), &v51, v13) )
    {
      if ( (unsigned int)UMPDOBJ::pso(v16, (UMPDOBJ *)((char *)v16 + 112), &v52, v14) )
      {
        if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(v16, (UMPDOBJ *)((char *)v16 + 128), &v53, 0x18u, 0LL) )
        {
          if ( (unsigned int)UMPDOBJ::pxlo(v16, &v54) )
          {
            if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v16, &v55, 0x18u) )
            {
              if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v16, &v56, 8u) )
              {
                if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v16, &v57, 0x10u) )
                {
                  if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v16, &v58, 0x10u) )
                  {
                    if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v16, &v59, 8u) )
                    {
                      LODWORD(Size) = 4;
                      if ( UMPDOBJ::Thunk(v16, Src, 0x80u, &v23, Size) != -1 )
                      {
                        if ( v23 )
                          v18 = 1;
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
LABEL_9:
  if ( *((_BYTE *)v16 + 456) )
    UMPDOBJ::RestoreBitmaps(v16, v30, v17, v38, v37, v36, v35, v34, v33, v32, v29, v12, v28, v13, v27, v14);
LABEL_11:
  XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v39);
  return v18;
}
