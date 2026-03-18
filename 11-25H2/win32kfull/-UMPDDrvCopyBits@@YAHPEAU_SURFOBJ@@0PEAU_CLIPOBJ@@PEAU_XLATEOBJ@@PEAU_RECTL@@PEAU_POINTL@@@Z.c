/*
 * XREFs of ?UMPDDrvCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1402635C0
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
 *     ?BackPropagateLargeBitmapBits@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAXH@Z @ 0x1403345D0 (-BackPropagateLargeBitmapBits@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAXH@Z.c)
 *     ?BackPropagateSmallBitmapBits@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAXH@Z @ 0x1403347B0 (-BackPropagateSmallBitmapBits@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAXH@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

_BOOL8 __fastcall UMPDDrvCopyBits(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _POINTL *a6)
{
  struct _SURFOBJ *v6; // rdi
  int v8; // esi
  int v9; // r15d
  int v10; // r12d
  void *v11; // r14
  UMPDOBJ *v12; // rcx
  UMPDOBJ *v13; // rbx
  unsigned int v14; // eax
  unsigned int v15; // eax
  BOOL v16; // edi
  struct _SURFOBJ *v17; // r13
  size_t Size; // [rsp+20h] [rbp-F0h]
  unsigned int v20; // [rsp+90h] [rbp-80h] BYREF
  int v21; // [rsp+94h] [rbp-7Ch] BYREF
  int v22; // [rsp+98h] [rbp-78h] BYREF
  int v23; // [rsp+9Ch] [rbp-74h] BYREF
  int v24; // [rsp+A0h] [rbp-70h] BYREF
  struct _SURFOBJ *v25; // [rsp+A8h] [rbp-68h] BYREF
  void *v26; // [rsp+B0h] [rbp-60h] BYREF
  struct _SURFOBJ *v27; // [rsp+B8h] [rbp-58h]
  void *v28; // [rsp+C0h] [rbp-50h] BYREF
  void *v29; // [rsp+C8h] [rbp-48h] BYREF
  void *v30; // [rsp+D0h] [rbp-40h] BYREF
  UMPDOBJ *v31; // [rsp+D8h] [rbp-38h] BYREF
  struct _CLIPOBJ *v32; // [rsp+E0h] [rbp-30h]
  struct _RECTL *v33; // [rsp+E8h] [rbp-28h]
  struct _POINTL *v34; // [rsp+F0h] [rbp-20h]
  _DWORD Src[4]; // [rsp+100h] [rbp-10h] BYREF
  __int64 v36; // [rsp+110h] [rbp+0h]
  struct _SURFOBJ *v37; // [rsp+118h] [rbp+8h] BYREF
  struct _SURFOBJ *v38; // [rsp+120h] [rbp+10h] BYREF
  void *v39; // [rsp+128h] [rbp+18h] BYREF
  struct _XLATEOBJ *v40; // [rsp+130h] [rbp+20h] BYREF
  void *v41; // [rsp+138h] [rbp+28h] BYREF
  void *v42; // [rsp+140h] [rbp+30h] BYREF

  v33 = a5;
  v6 = a1;
  v27 = a1;
  v8 = 0;
  v34 = a6;
  v32 = a3;
  v9 = 0;
  v25 = a2;
  v10 = 0;
  v20 = 1;
  v21 = 0;
  v24 = 0;
  v22 = 0;
  v23 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v31);
  v26 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v11 = 0LL;
  v28 = 0LL;
  memset_0(Src, 0, 0x48uLL);
  v13 = v31;
  if ( !v31 || !(unsigned int)UMPDOBJ::bPrepareBitmapsForClient(v12, &v25, 0LL) )
  {
    v16 = 0;
    goto LABEL_25;
  }
  if ( !*((_BYTE *)v13 + 456) )
    goto LABEL_9;
  if ( a4 )
    v14 = ((4 * a4->cEntries + 7) & 0xFFFFFFF8) + 152;
  else
    v14 = 128;
  v20 = v14;
  v15 = UMPDOBJ::bThunkLargeBitmaps(
          v13,
          v6,
          v25,
          0LL,
          &v26,
          &v30,
          &v29,
          &v28,
          0LL,
          0LL,
          &v21,
          &v22,
          &v24,
          &v23,
          0LL,
          0LL,
          &v20);
  v8 = v21;
  v16 = v15;
  v9 = v22;
  v10 = v23;
  v11 = v26;
  v20 = v15;
  if ( v15 )
  {
    v6 = v27;
LABEL_9:
    Src[1] = 19;
    LOBYTE(Src[0]) = 0;
    v36 = *(_QWORD *)v13;
    v38 = v25;
    v39 = v32;
    v41 = v33;
    v42 = v34;
    v37 = v6;
    v40 = a4;
    v16 = 0;
    if ( (unsigned int)UMPDOBJ::pso(v13, (UMPDOBJ *)((char *)v13 + 80), &v37) )
    {
      if ( (unsigned int)UMPDOBJ::pso(v13, (UMPDOBJ *)((char *)v13 + 96), &v38) )
      {
        if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(v13, (UMPDOBJ *)((char *)v13 + 128), (const void **)&v39, 0x18u, 0LL) )
        {
          if ( (unsigned int)UMPDOBJ::pxlo(v13, &v40) )
          {
            if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v13, (const void **)&v41, 0x10u) )
            {
              if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v13, (const void **)&v42, 8u) )
              {
                LODWORD(Size) = 4;
                if ( (unsigned int)UMPDOBJ::Thunk(v13, Src, 0x48u, &v20, Size) != -1 )
                {
                  if ( v20 )
                    v16 = 1;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( *((_BYTE *)v13 + 456) )
  {
    v17 = v27;
    if ( v9 )
      UMPDOBJ::BackPropagateLargeBitmapBits(v13, v27, v11, v8);
    else
      UMPDOBJ::BackPropagateSmallBitmapBits(v13, v27, v11, v8);
    UMPDOBJ::RestoreBitmaps(
      v13,
      (unsigned __int64)v17,
      (unsigned __int64)v25,
      0LL,
      v11,
      v30,
      v29,
      v28,
      0LL,
      0LL,
      v8,
      v9,
      v24,
      v10,
      0,
      0);
  }
LABEL_25:
  XUMPDOBJ::~XUMPDOBJ(&v31);
  return v16;
}
