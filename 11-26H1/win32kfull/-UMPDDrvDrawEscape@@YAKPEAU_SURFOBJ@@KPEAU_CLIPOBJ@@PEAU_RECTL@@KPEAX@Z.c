/*
 * XREFs of ?UMPDDrvDrawEscape@@YAKPEAU_SURFOBJ@@KPEAU_CLIPOBJ@@PEAU_RECTL@@KPEAX@Z @ 0x14034AE00
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
 *     ?bNeedThunk@UMPDOBJ@@QEBAHPEAX@Z @ 0x14023C4A4 (-bNeedThunk@UMPDOBJ@@QEBAHPEAX@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall UMPDDrvDrawEscape(
        struct _SURFOBJ *a1,
        int a2,
        struct _CLIPOBJ *a3,
        struct _RECTL *a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  unsigned int v7; // edi
  int v9; // r14d
  UMPDOBJ *v10; // rbx
  int v11; // eax
  size_t Size; // [rsp+20h] [rbp-B9h]
  int v14; // [rsp+40h] [rbp-99h] BYREF
  int v15; // [rsp+44h] [rbp-95h] BYREF
  int v16; // [rsp+48h] [rbp-91h] BYREF
  unsigned int v17; // [rsp+4Ch] [rbp-8Dh] BYREF
  void *v18; // [rsp+50h] [rbp-89h] BYREF
  void *v19; // [rsp+58h] [rbp-81h] BYREF
  UMPDOBJ *v20; // [rsp+60h] [rbp-79h] BYREF
  struct _CLIPOBJ *v21; // [rsp+68h] [rbp-71h]
  struct _RECTL *v22; // [rsp+70h] [rbp-69h]
  _DWORD v23[4]; // [rsp+80h] [rbp-59h] BYREF
  __int64 v24; // [rsp+90h] [rbp-49h]
  struct _SURFOBJ *v25; // [rsp+98h] [rbp-41h] BYREF
  int v26; // [rsp+A0h] [rbp-39h]
  void *v27; // [rsp+A8h] [rbp-31h] BYREF
  void *v28; // [rsp+B0h] [rbp-29h] BYREF
  unsigned int v29; // [rsp+B8h] [rbp-21h]
  void *v30; // [rsp+C0h] [rbp-19h] BYREF

  v7 = -1;
  v22 = a4;
  v15 = -1;
  v21 = a3;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v20);
  v19 = 0LL;
  v18 = 0LL;
  v9 = 0;
  v16 = 0;
  v14 = 0;
  memset_0(v23, 0, 0x48uLL);
  v10 = v20;
  if ( v20 )
  {
    if ( !*((_BYTE *)v20 + 440) )
      goto LABEL_6;
    if ( a5 + 7 < a5 || ((a5 + 7) & 0xFFFFFFF8) + 120 < 0x78 )
      goto LABEL_16;
    v17 = ((a5 + 7) & 0xFFFFFFF8) + 120;
    v11 = UMPDOBJ::bThunkLargeBitmap(v20, a1, &v19, &v18, &v16, &v14, &v17);
    v9 = v14;
    if ( v11 )
    {
LABEL_6:
      v23[1] = 25;
      LOBYTE(v23[0]) = 0;
      v24 = *(_QWORD *)v10;
      v25 = a1;
      v27 = v21;
      v26 = a2;
      v28 = v22;
      v29 = a5;
      v30 = (void *)(a6 & -(__int64)(a5 != 0));
      if ( !a5
        || !(unsigned int)UMPDOBJ::bNeedThunk(v10, (void *)(a6 & -(__int64)(a5 != 0)))
        || (unsigned int)UMPDOBJ::ThunkMemBlock(v10, &v30, a5) )
      {
        if ( (unsigned int)UMPDOBJ::pso(v10, (UMPDOBJ *)((char *)v10 + 64), &v25, v9) )
        {
          if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(v10, (UMPDOBJ *)((char *)v10 + 112), &v27, 0x18u, 0LL) )
          {
            if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v10, &v28, 0x10u) )
            {
              LODWORD(Size) = 4;
              if ( (unsigned int)UMPDOBJ::Thunk(v10, v23, 0x48u, &v15, Size) != -1 )
                v7 = v15;
            }
          }
        }
      }
    }
    if ( v16 )
      UMPDOBJ::RestoreBitmap(v10, a1, v19, v18, Size, v9);
  }
LABEL_16:
  XUMPDOBJ::~XUMPDOBJ(&v20);
  return v7;
}
