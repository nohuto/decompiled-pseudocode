/*
 * XREFs of ?UMPDDrvTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KI@Z @ 0x140337610
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

__int64 __fastcall UMPDDrvTransparentBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        unsigned int a7,
        unsigned int a8)
{
  unsigned int v8; // edi
  int v11; // r14d
  int v12; // esi
  UMPDOBJ *v13; // rcx
  UMPDOBJ *v14; // rbx
  struct _SURFOBJ *v15; // r12
  unsigned int v16; // eax
  unsigned int v17; // eax
  size_t Size; // [rsp+20h] [rbp-F0h]
  unsigned int v20; // [rsp+90h] [rbp-80h] BYREF
  int v21; // [rsp+94h] [rbp-7Ch] BYREF
  int v22; // [rsp+98h] [rbp-78h] BYREF
  int v23; // [rsp+9Ch] [rbp-74h] BYREF
  int v24; // [rsp+A0h] [rbp-70h] BYREF
  struct _SURFOBJ *v25; // [rsp+A8h] [rbp-68h] BYREF
  void *v26; // [rsp+B0h] [rbp-60h] BYREF
  void *v27; // [rsp+B8h] [rbp-58h] BYREF
  void *v28; // [rsp+C0h] [rbp-50h] BYREF
  void *v29; // [rsp+C8h] [rbp-48h] BYREF
  UMPDOBJ *v30; // [rsp+D0h] [rbp-40h] BYREF
  struct _CLIPOBJ *v31; // [rsp+D8h] [rbp-38h]
  struct _RECTL *v32; // [rsp+E0h] [rbp-30h]
  struct _RECTL *v33; // [rsp+E8h] [rbp-28h]
  _DWORD Src[4]; // [rsp+F0h] [rbp-20h] BYREF
  __int64 v35; // [rsp+100h] [rbp-10h]
  struct _SURFOBJ *v36; // [rsp+108h] [rbp-8h] BYREF
  struct _SURFOBJ *v37; // [rsp+110h] [rbp+0h] BYREF
  void *v38; // [rsp+118h] [rbp+8h] BYREF
  struct _XLATEOBJ *v39; // [rsp+120h] [rbp+10h] BYREF
  void *v40; // [rsp+128h] [rbp+18h] BYREF
  void *v41; // [rsp+130h] [rbp+20h] BYREF
  unsigned int v42; // [rsp+138h] [rbp+28h]
  unsigned int v43; // [rsp+13Ch] [rbp+2Ch]

  v8 = 0;
  v32 = a5;
  v33 = a6;
  v31 = a3;
  v11 = 0;
  v25 = a2;
  v12 = 0;
  v20 = 1;
  v24 = 0;
  v23 = 0;
  v21 = 0;
  v22 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v30);
  v29 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v26 = 0LL;
  memset_0(Src, 0, 0x50uLL);
  v14 = v30;
  if ( !v30 || !(unsigned int)UMPDOBJ::bPrepareBitmapsForClient(v13, &v25, 0LL) )
    goto LABEL_20;
  v15 = v25;
  if ( !*((_BYTE *)v14 + 456) )
    goto LABEL_9;
  if ( a4 )
    v16 = ((4 * a4->cEntries + 7) & 0xFFFFFFF8) + 168;
  else
    v16 = 144;
  v20 = v16;
  v17 = UMPDOBJ::bThunkLargeBitmaps(
          v14,
          a1,
          v25,
          0LL,
          &v29,
          &v28,
          &v27,
          &v26,
          0LL,
          0LL,
          &v24,
          &v21,
          &v23,
          &v22,
          0LL,
          0LL,
          &v20);
  v11 = v21;
  v12 = v22;
  v8 = v17;
  v20 = v17;
  if ( v17 )
  {
    v8 = 0;
LABEL_9:
    Src[1] = 74;
    LOBYTE(Src[0]) = 0;
    v35 = *(_QWORD *)v14;
    v38 = v31;
    v40 = v32;
    v41 = v33;
    v42 = a7;
    v43 = a8;
    v36 = a1;
    v37 = v15;
    v39 = a4;
    if ( (unsigned int)UMPDOBJ::pso(v14, (UMPDOBJ *)((char *)v14 + 80), &v36) )
    {
      if ( (unsigned int)UMPDOBJ::pso(v14, (UMPDOBJ *)((char *)v14 + 96), &v37) )
      {
        if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(v14, (UMPDOBJ *)((char *)v14 + 128), (const void **)&v38, 0x18u, 0LL) )
        {
          if ( (unsigned int)UMPDOBJ::pxlo(v14, &v39) )
          {
            if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v14, (const void **)&v40, 0x10u) )
            {
              if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v14, (const void **)&v41, 0x10u) )
              {
                LODWORD(Size) = 4;
                if ( (unsigned int)UMPDOBJ::Thunk(v14, Src, 0x50u, &v20, Size) != -1 )
                {
                  if ( v20 )
                    v8 = 1;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( *((_BYTE *)v14 + 456) )
    UMPDOBJ::RestoreBitmaps(
      v14,
      (unsigned __int64)a1,
      (unsigned __int64)v15,
      0LL,
      v29,
      v28,
      v27,
      v26,
      0LL,
      0LL,
      v24,
      v11,
      v23,
      v12,
      0,
      0);
LABEL_20:
  XUMPDOBJ::~XUMPDOBJ(&v30);
  return v8;
}
