/*
 * XREFs of ?UMPDDrvPaint@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x14034BC90
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
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall UMPDDrvPaint(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        struct _BRUSHOBJ *a3,
        struct _POINTL *a4,
        unsigned int a5)
{
  unsigned int v5; // edi
  int v7; // esi
  int v8; // r12d
  int v9; // r14d
  void *v10; // r13
  UMPDOBJ *v11; // rbx
  unsigned int v12; // eax
  size_t Size; // [rsp+20h] [rbp-C1h]
  unsigned int v15; // [rsp+40h] [rbp-A1h] BYREF
  int v16; // [rsp+44h] [rbp-9Dh] BYREF
  int v17; // [rsp+48h] [rbp-99h] BYREF
  void *v18; // [rsp+50h] [rbp-91h] BYREF
  void *v19; // [rsp+58h] [rbp-89h] BYREF
  UMPDOBJ *v20; // [rsp+60h] [rbp-81h] BYREF
  struct _CLIPOBJ *v21; // [rsp+68h] [rbp-79h]
  struct _BRUSHOBJ *v22; // [rsp+70h] [rbp-71h]
  struct _POINTL *v23; // [rsp+78h] [rbp-69h]
  _DWORD v24[4]; // [rsp+80h] [rbp-61h] BYREF
  __int64 v25; // [rsp+90h] [rbp-51h]
  struct _SURFOBJ *v26; // [rsp+98h] [rbp-49h] BYREF
  void *v27; // [rsp+A8h] [rbp-39h] BYREF
  void *v28; // [rsp+B8h] [rbp-29h] BYREF
  void *v29; // [rsp+C0h] [rbp-21h] BYREF
  unsigned int v30; // [rsp+D8h] [rbp-9h]

  v5 = 0;
  v23 = a4;
  v16 = 0;
  v7 = 1;
  v17 = 0;
  v15 = 1;
  v8 = 0;
  v22 = a3;
  v9 = 0;
  v21 = a2;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v20);
  v18 = 0LL;
  v19 = 0LL;
  v10 = 0LL;
  memset_0(v24, 0, 0x60uLL);
  v11 = v20;
  if ( v20 )
  {
    if ( *((_BYTE *)v20 + 440) )
    {
      v15 = 160;
      v12 = UMPDOBJ::bThunkLargeBitmap(v20, a1, &v18, &v19, &v16, &v17, &v15);
      v8 = v16;
      v7 = v12;
      v9 = v17;
      v10 = v18;
      v15 = v12;
    }
    if ( v7 )
    {
      v24[1] = 17;
      LOBYTE(v24[0]) = 0;
      v25 = *(_QWORD *)v11;
      v27 = v21;
      v28 = v22;
      v29 = v23;
      v30 = a5;
      v26 = a1;
      if ( !(unsigned int)UMPDOBJ::pso(v11, (UMPDOBJ *)((char *)v11 + 64), &v26, v9)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v11, (UMPDOBJ *)((char *)v11 + 112), &v27, 0x18u, 0LL)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v11, (UMPDOBJ *)((char *)v11 + 144), &v28, 0x18u, 0LL)
        || !(unsigned int)UMPDOBJ::ThunkMemBlock(v11, &v29, 8u)
        || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v11, v24, 0x60u, &v15, Size) == -1)
        || (v7 = 1, !v15) )
      {
        v7 = 0;
      }
    }
    if ( v8 )
      UMPDOBJ::RestoreBitmap(v11, a1, v10, v19, Size, v9);
    v5 = v7;
  }
  XUMPDOBJ::~XUMPDOBJ(&v20);
  return v5;
}
