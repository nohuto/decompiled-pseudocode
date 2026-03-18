/*
 * XREFs of ?UMPDDrvStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x14023CAD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D600C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1400D70E4 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1400D7414 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D7A00 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D7B24 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1400D7C20 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z @ 0x1400D9364 (-RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x14021CFC0 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     ?ThunkLINEATTRS@UMPDOBJ@@QEAAHPEAPEAU_LINEATTRS@@@Z @ 0x14023CDD4 (-ThunkLINEATTRS@UMPDOBJ@@QEAAHPEAPEAU_LINEATTRS@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall UMPDDrvStrokeAndFillPath(
        struct _SURFOBJ *a1,
        struct _PATHOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XFORMOBJ *a4,
        struct _BRUSHOBJ *a5,
        struct _LINEATTRS *a6,
        struct _BRUSHOBJ *a7,
        struct _POINTL *a8,
        unsigned int a9,
        unsigned int a10)
{
  unsigned int v10; // edi
  int v12; // esi
  int v13; // r12d
  int v14; // r15d
  UMPDOBJ *v15; // rbx
  unsigned int v16; // eax
  unsigned int v17; // eax
  size_t Size; // [rsp+20h] [rbp-E0h]
  unsigned int v20; // [rsp+40h] [rbp-C0h] BYREF
  int v21; // [rsp+44h] [rbp-BCh] BYREF
  int v22; // [rsp+48h] [rbp-B8h] BYREF
  void *v23; // [rsp+50h] [rbp-B0h] BYREF
  void *v24; // [rsp+58h] [rbp-A8h] BYREF
  UMPDOBJ *v25; // [rsp+60h] [rbp-A0h] BYREF
  struct _PATHOBJ *v26; // [rsp+68h] [rbp-98h]
  struct _CLIPOBJ *v27; // [rsp+70h] [rbp-90h]
  struct _XFORMOBJ *v28; // [rsp+78h] [rbp-88h]
  struct _BRUSHOBJ *v29; // [rsp+80h] [rbp-80h]
  struct _BRUSHOBJ *v30; // [rsp+88h] [rbp-78h]
  struct _POINTL *v31; // [rsp+90h] [rbp-70h]
  _DWORD v32[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v33; // [rsp+B0h] [rbp-50h]
  struct _SURFOBJ *v34; // [rsp+B8h] [rbp-48h] BYREF
  void *v35; // [rsp+C0h] [rbp-40h] BYREF
  void *v36; // [rsp+C8h] [rbp-38h] BYREF
  void *v37; // [rsp+D0h] [rbp-30h] BYREF
  void *v38; // [rsp+D8h] [rbp-28h] BYREF
  void *v39; // [rsp+E0h] [rbp-20h] BYREF
  struct _LINEATTRS *v40; // [rsp+E8h] [rbp-18h] BYREF
  void *v41; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int v42; // [rsp+F8h] [rbp-8h]
  unsigned int v43; // [rsp+FCh] [rbp-4h]

  v10 = 0;
  v29 = a5;
  v12 = 1;
  v30 = a7;
  v13 = 0;
  v14 = 0;
  v31 = a8;
  v28 = a4;
  v27 = a3;
  v26 = a2;
  v20 = 1;
  v22 = 0;
  v21 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v25);
  v24 = 0LL;
  v23 = 0LL;
  memset_0(v32, 0, 0x60uLL);
  v15 = v25;
  if ( v25 )
  {
    if ( *((_BYTE *)v25 + 440) )
    {
      if ( a6 )
        v16 = ((4 * a6->cstyle + 7) & 0xFFFFFFF8) + 240;
      else
        v16 = 200;
      v20 = v16;
      v17 = UMPDOBJ::bThunkLargeBitmap(v25, a1, &v24, &v23, &v22, &v21, &v20);
      v13 = v22;
      v12 = v17;
      v14 = v21;
      v20 = v17;
    }
    if ( v12 )
    {
      v32[1] = 16;
      LOBYTE(v32[0]) = 0;
      v33 = *(_QWORD *)v15;
      v35 = v26;
      v36 = v27;
      v37 = v28;
      v38 = v29;
      v41 = v30;
      v39 = v31;
      v42 = a9;
      v43 = a10;
      v34 = a1;
      v40 = a6;
      if ( !(unsigned int)UMPDOBJ::pso(v15, (UMPDOBJ *)((char *)v15 + 64), &v34, v14) )
        goto LABEL_19;
      if ( !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v15, (UMPDOBJ *)((char *)v15 + 224), &v35, 8u, 0LL) )
        goto LABEL_19;
      if ( !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v15, (UMPDOBJ *)((char *)v15 + 112), &v36, 0x18u, 0LL) )
        goto LABEL_19;
      if ( v37 )
      {
        v21 = 0;
        if ( !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v15, (UMPDOBJ *)((char *)v15 + 272), &v37, 4u, &v21) )
          goto LABEL_19;
      }
      if ( !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v15, (UMPDOBJ *)((char *)v15 + 144), &v38, 0x18u, 0LL)
        || !(unsigned int)UMPDOBJ::ThunkLINEATTRS(v15, &v40)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v15, (UMPDOBJ *)((char *)v15 + 160), &v41, 0x18u, 0LL)
        || !(unsigned int)UMPDOBJ::ThunkMemBlock(v15, &v39, 8u)
        || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v15, v32, 0x60u, &v20, Size) == -1)
        || (v12 = 1, !v20) )
      {
LABEL_19:
        v12 = 0;
      }
    }
    if ( v13 )
      UMPDOBJ::RestoreBitmap(v15, a1, v24, v23, Size, v14);
    v10 = v12;
  }
  XUMPDOBJ::~XUMPDOBJ(&v25);
  return v10;
}
