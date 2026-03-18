/*
 * XREFs of ?UMPDDrvLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x14024EA60
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

__int64 __fastcall UMPDDrvLineTo(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        struct _BRUSHOBJ *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        struct _RECTL *a8,
        unsigned int a9)
{
  unsigned int v9; // edi
  int v11; // esi
  int v12; // r12d
  int v13; // r14d
  void *v14; // r13
  UMPDOBJ *v15; // rbx
  unsigned int v16; // eax
  size_t Size; // [rsp+20h] [rbp-C1h]
  unsigned int v19; // [rsp+40h] [rbp-A1h] BYREF
  int v20; // [rsp+44h] [rbp-9Dh] BYREF
  int v21; // [rsp+48h] [rbp-99h] BYREF
  int v22; // [rsp+4Ch] [rbp-95h]
  void *v23; // [rsp+50h] [rbp-91h] BYREF
  void *v24; // [rsp+58h] [rbp-89h] BYREF
  UMPDOBJ *v25; // [rsp+60h] [rbp-81h] BYREF
  struct _CLIPOBJ *v26; // [rsp+68h] [rbp-79h]
  struct _BRUSHOBJ *v27; // [rsp+70h] [rbp-71h]
  struct _RECTL *v28; // [rsp+78h] [rbp-69h]
  _DWORD v29[4]; // [rsp+80h] [rbp-61h] BYREF
  __int64 v30; // [rsp+90h] [rbp-51h]
  struct _SURFOBJ *v31; // [rsp+98h] [rbp-49h] BYREF
  void *v32; // [rsp+A0h] [rbp-41h] BYREF
  void *v33; // [rsp+A8h] [rbp-39h] BYREF
  int v34; // [rsp+B0h] [rbp-31h]
  int v35; // [rsp+B4h] [rbp-2Dh]
  int v36; // [rsp+B8h] [rbp-29h]
  int v37; // [rsp+BCh] [rbp-25h]
  void *v38; // [rsp+C0h] [rbp-21h] BYREF
  unsigned int v39; // [rsp+C8h] [rbp-19h]

  v9 = 0;
  v28 = a8;
  v11 = 1;
  v20 = 0;
  v19 = 1;
  v12 = 0;
  v21 = 0;
  v13 = 0;
  v22 = a4;
  v27 = a3;
  v26 = a2;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v25);
  v23 = 0LL;
  v24 = 0LL;
  v14 = 0LL;
  memset_0(v29, 0, 0x50uLL);
  v15 = v25;
  if ( v25 )
  {
    if ( *((_BYTE *)v25 + 440) )
    {
      v19 = 152;
      v16 = UMPDOBJ::bThunkLargeBitmap(v25, a1, &v23, &v24, &v20, &v21, &v19);
      v12 = v20;
      v11 = v16;
      v13 = v21;
      v14 = v23;
      v19 = v16;
    }
    if ( v11 )
    {
      v29[1] = 31;
      LOBYTE(v29[0]) = 0;
      v30 = *(_QWORD *)v15;
      v32 = v26;
      v33 = v27;
      v34 = v22;
      v35 = a5;
      v36 = a6;
      v37 = a7;
      v38 = v28;
      v39 = a9;
      v31 = a1;
      if ( !(unsigned int)UMPDOBJ::pso(v15, (UMPDOBJ *)((char *)v15 + 64), &v31, v13)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v15, (UMPDOBJ *)((char *)v15 + 112), &v32, 0x18u, 0LL)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v15, (UMPDOBJ *)((char *)v15 + 144), &v33, 0x18u, 0LL)
        || !(unsigned int)UMPDOBJ::ThunkMemBlock(v15, &v38, 0x10u)
        || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v15, v29, 0x50u, &v19, Size) == -1)
        || (v11 = 1, !v19) )
      {
        v11 = 0;
      }
    }
    if ( v12 )
      UMPDOBJ::RestoreBitmap(v15, a1, v14, v24, Size, v13);
    v9 = v11;
  }
  XUMPDOBJ::~XUMPDOBJ(&v25);
  return v9;
}
