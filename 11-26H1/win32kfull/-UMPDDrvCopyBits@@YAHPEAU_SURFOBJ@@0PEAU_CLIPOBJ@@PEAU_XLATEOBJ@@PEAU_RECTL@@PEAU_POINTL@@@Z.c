/*
 * XREFs of ?UMPDDrvCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x14034A9D0
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
 *     ?BackPropagateLargeBitmapBits@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAXH@Z @ 0x14034A094 (-BackPropagateLargeBitmapBits@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAXH@Z.c)
 *     ?BackPropagateSmallBitmapBits@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAXH@Z @ 0x14034A26C (-BackPropagateSmallBitmapBits@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAXH@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall UMPDDrvCopyBits(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _POINTL *a6)
{
  unsigned int v6; // edi
  struct _XLATEOBJ *v7; // rsi
  int v8; // r14d
  int v9; // r12d
  int v10; // r13d
  void *v11; // r15
  UMPDOBJ *v12; // rbx
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // esi
  size_t Size; // [rsp+20h] [rbp-F0h]
  unsigned int v18; // [rsp+90h] [rbp-80h] BYREF
  int v19; // [rsp+94h] [rbp-7Ch] BYREF
  int v20; // [rsp+98h] [rbp-78h] BYREF
  int v21; // [rsp+9Ch] [rbp-74h] BYREF
  int v22; // [rsp+A0h] [rbp-70h] BYREF
  unsigned int v23; // [rsp+A4h] [rbp-6Ch]
  int v24; // [rsp+A8h] [rbp-68h] BYREF
  struct _SURFOBJ *v25; // [rsp+B0h] [rbp-60h]
  void *v26; // [rsp+B8h] [rbp-58h] BYREF
  struct _SURFOBJ *v27; // [rsp+C0h] [rbp-50h]
  void *v28; // [rsp+C8h] [rbp-48h] BYREF
  void *v29; // [rsp+D0h] [rbp-40h] BYREF
  void *v30; // [rsp+D8h] [rbp-38h] BYREF
  UMPDOBJ *v31; // [rsp+E0h] [rbp-30h] BYREF
  struct _XLATEOBJ *v32; // [rsp+E8h] [rbp-28h]
  struct _CLIPOBJ *v33; // [rsp+F0h] [rbp-20h]
  struct _RECTL *v34; // [rsp+F8h] [rbp-18h]
  struct _POINTL *v35; // [rsp+100h] [rbp-10h]
  _DWORD v36[4]; // [rsp+110h] [rbp+0h] BYREF
  __int64 v37; // [rsp+120h] [rbp+10h]
  struct _SURFOBJ *v38; // [rsp+128h] [rbp+18h] BYREF
  struct _SURFOBJ *v39; // [rsp+130h] [rbp+20h] BYREF
  void *v40; // [rsp+138h] [rbp+28h] BYREF
  struct _XLATEOBJ *v41; // [rsp+140h] [rbp+30h] BYREF
  void *v42; // [rsp+148h] [rbp+38h] BYREF
  void *v43; // [rsp+150h] [rbp+40h] BYREF

  v6 = 0;
  v34 = a5;
  v7 = a4;
  v8 = 0;
  v25 = a1;
  v9 = 0;
  v35 = a6;
  v32 = a4;
  v10 = 0;
  v33 = a3;
  v27 = a2;
  v22 = 1;
  v19 = 0;
  v24 = 0;
  v20 = 0;
  v21 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v31);
  v26 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v11 = 0LL;
  v28 = 0LL;
  memset_0(v36, 0, 0x48uLL);
  v12 = v31;
  if ( !v31 )
    goto LABEL_24;
  if ( !*((_BYTE *)v31 + 440) )
    goto LABEL_8;
  if ( v7 )
    v13 = ((4 * v7->cEntries + 7) & 0xFFFFFFF8) + 152;
  else
    v13 = 128;
  v18 = v13;
  v14 = UMPDOBJ::bThunkLargeBitmaps(
          v31,
          v25,
          v27,
          0LL,
          &v26,
          &v30,
          &v29,
          &v28,
          0LL,
          0LL,
          &v19,
          &v20,
          &v24,
          &v21,
          0LL,
          0LL,
          &v18);
  v8 = v19;
  v15 = v14;
  v9 = v20;
  v10 = v21;
  v11 = v26;
  v22 = v14;
  v23 = v14;
  v18 = v14;
  if ( v14 )
  {
    v7 = v32;
LABEL_8:
    v36[1] = 19;
    LOBYTE(v36[0]) = 0;
    v37 = *(_QWORD *)v12;
    v38 = v25;
    v39 = v27;
    v40 = v33;
    v42 = v34;
    v43 = v35;
    v41 = v7;
    if ( !(unsigned int)UMPDOBJ::pso(v12, (UMPDOBJ *)((char *)v12 + 64), &v38, v9)
      || !(unsigned int)UMPDOBJ::pso(v12, (UMPDOBJ *)((char *)v12 + 80), &v39, v10)
      || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v12, (UMPDOBJ *)((char *)v12 + 112), &v40, 0x18u, 0LL)
      || !(unsigned int)UMPDOBJ::pxlo(v12, &v41)
      || !(unsigned int)UMPDOBJ::ThunkMemBlock(v12, &v42, 0x10u)
      || !(unsigned int)UMPDOBJ::ThunkMemBlock(v12, &v43, 8u)
      || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v12, v36, 0x48u, &v22, Size) == -1)
      || (v15 = 1, !v22) )
    {
      v15 = 0;
    }
    v23 = v15;
    v18 = v15;
  }
  if ( *((_BYTE *)v12 + 440) )
  {
    if ( v9 )
    {
      UMPDOBJ::BackPropagateLargeBitmapBits(v12, v25, v11, v8);
      v15 = v18;
    }
    else
    {
      UMPDOBJ::BackPropagateSmallBitmapBits((char **)v12, v25, v11, v8);
      v15 = v23;
    }
    UMPDOBJ::RestoreBitmaps(
      v12,
      (unsigned __int64)v25,
      (unsigned __int64)v27,
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
  v6 = v15;
LABEL_24:
  XUMPDOBJ::~XUMPDOBJ(&v31);
  return v6;
}
