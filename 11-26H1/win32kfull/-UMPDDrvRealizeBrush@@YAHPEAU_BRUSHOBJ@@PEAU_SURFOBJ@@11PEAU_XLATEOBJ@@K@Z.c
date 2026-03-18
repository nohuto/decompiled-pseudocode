/*
 * XREFs of ?UMPDDrvRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x14026D0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D600C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
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

__int64 __fastcall UMPDDrvRealizeBrush(
        struct _BRUSHOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _SURFOBJ *a4,
        struct _XLATEOBJ *a5,
        unsigned int a6)
{
  unsigned int v6; // edi
  int v7; // esi
  int v8; // r15d
  int v9; // r12d
  int v10; // r13d
  UMPDOBJ *v11; // rbx
  unsigned int v12; // eax
  unsigned int v13; // eax
  size_t Size; // [rsp+20h] [rbp-F0h]
  unsigned int v16; // [rsp+90h] [rbp-80h] BYREF
  int v17; // [rsp+94h] [rbp-7Ch] BYREF
  int v18; // [rsp+98h] [rbp-78h] BYREF
  int v19; // [rsp+9Ch] [rbp-74h] BYREF
  int v20; // [rsp+A0h] [rbp-70h] BYREF
  int v21; // [rsp+A4h] [rbp-6Ch] BYREF
  int v22; // [rsp+A8h] [rbp-68h] BYREF
  struct _SURFOBJ *v23; // [rsp+B0h] [rbp-60h]
  struct _SURFOBJ *v24; // [rsp+B8h] [rbp-58h]
  struct _SURFOBJ *v25; // [rsp+C0h] [rbp-50h]
  void *v26; // [rsp+C8h] [rbp-48h] BYREF
  void *v27; // [rsp+D0h] [rbp-40h] BYREF
  void *v28; // [rsp+D8h] [rbp-38h] BYREF
  void *v29; // [rsp+E0h] [rbp-30h] BYREF
  void *v30; // [rsp+E8h] [rbp-28h] BYREF
  void *v31; // [rsp+F0h] [rbp-20h] BYREF
  UMPDOBJ *v32; // [rsp+F8h] [rbp-18h] BYREF
  struct _BRUSHOBJ *v33; // [rsp+100h] [rbp-10h]
  _DWORD v34[4]; // [rsp+110h] [rbp+0h] BYREF
  __int64 v35; // [rsp+120h] [rbp+10h]
  struct _SURFOBJ *v36; // [rsp+128h] [rbp+18h] BYREF
  struct _SURFOBJ *v37; // [rsp+130h] [rbp+20h] BYREF
  struct _SURFOBJ *v38; // [rsp+138h] [rbp+28h] BYREF
  void *v39; // [rsp+140h] [rbp+30h] BYREF
  struct _XLATEOBJ *v40; // [rsp+148h] [rbp+38h] BYREF
  unsigned int v41; // [rsp+150h] [rbp+40h]

  v6 = 0;
  v33 = a1;
  v7 = 1;
  v16 = 1;
  v22 = 0;
  v8 = 0;
  v21 = 0;
  v9 = 0;
  v20 = 0;
  v10 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v23 = a4;
  v24 = a3;
  v25 = a2;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v32);
  v31 = 0LL;
  v29 = 0LL;
  v27 = 0LL;
  v30 = 0LL;
  v28 = 0LL;
  v26 = 0LL;
  memset_0(v34, 0, 0x48uLL);
  v11 = v32;
  if ( v32 )
  {
    if ( *((_BYTE *)v32 + 440) )
    {
      if ( a5 )
        v12 = ((4 * a5->cEntries + 7) & 0xFFFFFFF8) + 128;
      else
        v12 = 104;
      v16 = v12;
      v13 = UMPDOBJ::bThunkLargeBitmaps(
              v32,
              v25,
              v24,
              v23,
              &v31,
              &v30,
              &v29,
              &v28,
              &v27,
              &v26,
              &v22,
              &v17,
              &v21,
              &v18,
              &v20,
              &v19,
              &v16);
      v8 = v17;
      v7 = v13;
      v9 = v18;
      v10 = v19;
      v16 = v13;
    }
    if ( v7 )
    {
      v34[1] = 12;
      LOBYTE(v34[0]) = 0;
      v35 = *(_QWORD *)v11;
      v39 = v33;
      v36 = v25;
      v37 = v24;
      v38 = v23;
      v41 = a6;
      v40 = a5;
      if ( !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v11, (UMPDOBJ *)((char *)v11 + 144), &v39, 0x18u, 0LL)
        || !(unsigned int)UMPDOBJ::pso(v11, (UMPDOBJ *)((char *)v11 + 64), &v36, v8)
        || !(unsigned int)UMPDOBJ::pso(v11, (UMPDOBJ *)((char *)v11 + 80), &v37, v9)
        || !(unsigned int)UMPDOBJ::pso(v11, (UMPDOBJ *)((char *)v11 + 96), &v38, v10)
        || !(unsigned int)UMPDOBJ::pxlo(v11, &v40)
        || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v11, v34, 0x48u, &v16, Size) == -1)
        || (v7 = 1, !v16) )
      {
        v7 = 0;
      }
    }
    if ( *((_BYTE *)v11 + 440) )
      UMPDOBJ::RestoreBitmaps(
        v11,
        (unsigned __int64)v25,
        (unsigned __int64)v24,
        (unsigned __int64)v23,
        v31,
        v30,
        v29,
        v28,
        v27,
        v26,
        v22,
        v8,
        v21,
        v9,
        v20,
        v10);
    v6 = v7;
  }
  XUMPDOBJ::~XUMPDOBJ(&v32);
  return v6;
}
