/*
 * XREFs of ?UMPDDrvAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x14034A6A0
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

__int64 __fastcall UMPDDrvAlphaBlend(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        struct _BLENDOBJ *a7)
{
  unsigned int v7; // edi
  int v9; // esi
  int v11; // r12d
  int v12; // r15d
  UMPDOBJ *v13; // rbx
  unsigned int v14; // eax
  unsigned int v15; // eax
  size_t Size; // [rsp+20h] [rbp-F0h]
  unsigned int v18; // [rsp+90h] [rbp-80h] BYREF
  int v19; // [rsp+94h] [rbp-7Ch] BYREF
  int v20; // [rsp+98h] [rbp-78h] BYREF
  int v21; // [rsp+9Ch] [rbp-74h] BYREF
  int v22; // [rsp+A0h] [rbp-70h] BYREF
  struct _SURFOBJ *v23; // [rsp+A8h] [rbp-68h]
  void *v24; // [rsp+B0h] [rbp-60h] BYREF
  void *v25; // [rsp+B8h] [rbp-58h] BYREF
  void *v26; // [rsp+C0h] [rbp-50h] BYREF
  void *v27; // [rsp+C8h] [rbp-48h] BYREF
  UMPDOBJ *v28; // [rsp+D0h] [rbp-40h] BYREF
  struct _CLIPOBJ *v29; // [rsp+D8h] [rbp-38h]
  struct _RECTL *v30; // [rsp+E0h] [rbp-30h]
  struct _RECTL *v31; // [rsp+E8h] [rbp-28h]
  struct _BLENDOBJ *v32; // [rsp+F0h] [rbp-20h]
  _DWORD v33[4]; // [rsp+100h] [rbp-10h] BYREF
  __int64 v34; // [rsp+110h] [rbp+0h]
  struct _SURFOBJ *v35; // [rsp+118h] [rbp+8h] BYREF
  struct _SURFOBJ *v36; // [rsp+120h] [rbp+10h] BYREF
  void *v37; // [rsp+128h] [rbp+18h] BYREF
  struct _XLATEOBJ *v38; // [rsp+130h] [rbp+20h] BYREF
  void *v39; // [rsp+138h] [rbp+28h] BYREF
  void *v40; // [rsp+140h] [rbp+30h] BYREF
  void *v41; // [rsp+148h] [rbp+38h] BYREF

  v7 = 0;
  v30 = a5;
  v31 = a6;
  v9 = 1;
  v32 = a7;
  v11 = 0;
  v29 = a3;
  v12 = 0;
  v23 = a2;
  v18 = 1;
  v22 = 0;
  v21 = 0;
  v19 = 0;
  v20 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v28);
  v27 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v24 = 0LL;
  memset_0(v33, 0, 0x50uLL);
  v13 = v28;
  if ( v28 )
  {
    if ( *((_BYTE *)v28 + 440) )
    {
      if ( a4 )
        v14 = ((4 * a4->cEntries + 7) & 0xFFFFFFF8) + 176;
      else
        v14 = 152;
      v18 = v14;
      v15 = UMPDOBJ::bThunkLargeBitmaps(
              v28,
              a1,
              v23,
              0LL,
              &v27,
              &v26,
              &v25,
              &v24,
              0LL,
              0LL,
              &v22,
              &v19,
              &v21,
              &v20,
              0LL,
              0LL,
              &v18);
      v11 = v19;
      v9 = v15;
      v12 = v20;
      v18 = v15;
    }
    if ( v9 )
    {
      v33[1] = 71;
      LOBYTE(v33[0]) = 0;
      v34 = *(_QWORD *)v13;
      v36 = v23;
      v37 = v29;
      v39 = v30;
      v40 = v31;
      v41 = v32;
      v35 = a1;
      v38 = a4;
      if ( !(unsigned int)UMPDOBJ::pso(v13, (UMPDOBJ *)((char *)v13 + 64), &v35, v11)
        || !(unsigned int)UMPDOBJ::pso(v13, (UMPDOBJ *)((char *)v13 + 80), &v36, v12)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v13, (UMPDOBJ *)((char *)v13 + 112), &v37, 0x18u, 0LL)
        || !(unsigned int)UMPDOBJ::pxlo(v13, &v38)
        || !(unsigned int)UMPDOBJ::ThunkMemBlock(v13, &v39, 0x10u)
        || !(unsigned int)UMPDOBJ::ThunkMemBlock(v13, &v40, 0x10u)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v13, (UMPDOBJ *)((char *)v13 + 304), &v41, 4u, 0LL)
        || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v13, v33, 0x50u, &v18, Size) == -1)
        || (v9 = 1, !v18) )
      {
        v9 = 0;
      }
    }
    if ( *((_BYTE *)v13 + 440) )
      UMPDOBJ::RestoreBitmaps(
        v13,
        (unsigned __int64)a1,
        (unsigned __int64)v23,
        0LL,
        v27,
        v26,
        v25,
        v24,
        0LL,
        0LL,
        v22,
        v11,
        v21,
        v12,
        0,
        0);
    v7 = v9;
  }
  XUMPDOBJ::~XUMPDOBJ(&v28);
  return v7;
}
