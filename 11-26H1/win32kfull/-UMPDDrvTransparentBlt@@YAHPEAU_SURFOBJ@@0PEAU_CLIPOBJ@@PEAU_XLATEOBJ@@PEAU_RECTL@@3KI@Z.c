/*
 * XREFs of ?UMPDDrvTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KI@Z @ 0x14034CC40
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
  int v10; // esi
  int v12; // r12d
  int v13; // r15d
  UMPDOBJ *v14; // rbx
  unsigned int v15; // eax
  unsigned int v16; // eax
  size_t Size; // [rsp+20h] [rbp-F0h]
  unsigned int v19; // [rsp+90h] [rbp-80h] BYREF
  int v20; // [rsp+94h] [rbp-7Ch] BYREF
  int v21; // [rsp+98h] [rbp-78h] BYREF
  int v22; // [rsp+9Ch] [rbp-74h] BYREF
  int v23; // [rsp+A0h] [rbp-70h] BYREF
  struct _SURFOBJ *v24; // [rsp+A8h] [rbp-68h]
  void *v25; // [rsp+B0h] [rbp-60h] BYREF
  void *v26; // [rsp+B8h] [rbp-58h] BYREF
  void *v27; // [rsp+C0h] [rbp-50h] BYREF
  void *v28; // [rsp+C8h] [rbp-48h] BYREF
  UMPDOBJ *v29; // [rsp+D0h] [rbp-40h] BYREF
  struct _CLIPOBJ *v30; // [rsp+D8h] [rbp-38h]
  struct _RECTL *v31; // [rsp+E0h] [rbp-30h]
  struct _RECTL *v32; // [rsp+E8h] [rbp-28h]
  _DWORD v33[4]; // [rsp+F0h] [rbp-20h] BYREF
  __int64 v34; // [rsp+100h] [rbp-10h]
  struct _SURFOBJ *v35; // [rsp+108h] [rbp-8h] BYREF
  struct _SURFOBJ *v36; // [rsp+110h] [rbp+0h] BYREF
  void *v37; // [rsp+118h] [rbp+8h] BYREF
  struct _XLATEOBJ *v38; // [rsp+120h] [rbp+10h] BYREF
  void *v39; // [rsp+128h] [rbp+18h] BYREF
  void *v40; // [rsp+130h] [rbp+20h] BYREF
  unsigned int v41; // [rsp+138h] [rbp+28h]
  unsigned int v42; // [rsp+13Ch] [rbp+2Ch]

  v8 = 0;
  v31 = a5;
  v10 = 1;
  v32 = a6;
  v30 = a3;
  v24 = a2;
  v12 = 0;
  v19 = 1;
  v13 = 0;
  v23 = 0;
  v22 = 0;
  v20 = 0;
  v21 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v29);
  v28 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v25 = 0LL;
  memset_0(v33, 0, 0x50uLL);
  v14 = v29;
  if ( v29 )
  {
    if ( *((_BYTE *)v29 + 440) )
    {
      if ( a4 )
        v15 = ((4 * a4->cEntries + 7) & 0xFFFFFFF8) + 168;
      else
        v15 = 144;
      v19 = v15;
      v16 = UMPDOBJ::bThunkLargeBitmaps(
              v29,
              a1,
              v24,
              0LL,
              &v28,
              &v27,
              &v26,
              &v25,
              0LL,
              0LL,
              &v23,
              &v20,
              &v22,
              &v21,
              0LL,
              0LL,
              &v19);
      v12 = v20;
      v10 = v16;
      v13 = v21;
      v19 = v16;
    }
    if ( v10 )
    {
      v33[1] = 74;
      LOBYTE(v33[0]) = 0;
      v34 = *(_QWORD *)v14;
      v36 = v24;
      v37 = v30;
      v39 = v31;
      v40 = v32;
      v41 = a7;
      v42 = a8;
      v35 = a1;
      v38 = a4;
      if ( !(unsigned int)UMPDOBJ::pso(v14, (UMPDOBJ *)((char *)v14 + 64), &v35, v12)
        || !(unsigned int)UMPDOBJ::pso(v14, (UMPDOBJ *)((char *)v14 + 80), &v36, v13)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v14, (UMPDOBJ *)((char *)v14 + 112), &v37, 0x18u, 0LL)
        || !(unsigned int)UMPDOBJ::pxlo(v14, &v38)
        || !(unsigned int)UMPDOBJ::ThunkMemBlock(v14, &v39, 0x10u)
        || !(unsigned int)UMPDOBJ::ThunkMemBlock(v14, &v40, 0x10u)
        || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v14, v33, 0x50u, &v19, Size) == -1)
        || (v10 = 1, !v19) )
      {
        v10 = 0;
      }
    }
    if ( *((_BYTE *)v14 + 440) )
      UMPDOBJ::RestoreBitmaps(
        v14,
        (unsigned __int64)a1,
        (unsigned __int64)v24,
        0LL,
        v28,
        v27,
        v26,
        v25,
        0LL,
        0LL,
        v23,
        v12,
        v22,
        v13,
        0,
        0);
    v8 = v10;
  }
  XUMPDOBJ::~XUMPDOBJ(&v29);
  return v8;
}
