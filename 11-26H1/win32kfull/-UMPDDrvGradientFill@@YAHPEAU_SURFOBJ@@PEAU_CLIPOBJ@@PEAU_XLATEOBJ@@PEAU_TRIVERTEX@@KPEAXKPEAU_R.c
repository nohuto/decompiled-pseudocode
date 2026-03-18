/*
 * XREFs of ?UMPDDrvGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x14034B560
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
 *     ?pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z @ 0x1402286BC (-pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

_BOOL8 __fastcall UMPDDrvGradientFill(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        struct _XLATEOBJ *a3,
        struct _TRIVERTEX *a4,
        unsigned int a5,
        void *a6,
        unsigned int a7,
        struct _RECTL *a8,
        struct _POINTL *a9,
        unsigned int a10)
{
  int v14; // r14d
  UMPDOBJ *v15; // rbx
  int v16; // esi
  unsigned int v17; // esi
  ULONG v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // edx
  unsigned int v21; // ecx
  unsigned int v22; // r8d
  struct _SURFOBJ *v23; // r13
  unsigned int v24; // eax
  BOOL v25; // edi
  unsigned int v26; // r15d
  size_t Size; // [rsp+20h] [rbp-E0h]
  unsigned int v29; // [rsp+40h] [rbp-C0h] BYREF
  int v30; // [rsp+44h] [rbp-BCh] BYREF
  int v31; // [rsp+48h] [rbp-B8h] BYREF
  struct _SURFOBJ *v32; // [rsp+50h] [rbp-B0h]
  void *v33; // [rsp+58h] [rbp-A8h] BYREF
  void *v34; // [rsp+60h] [rbp-A0h] BYREF
  UMPDOBJ *v35; // [rsp+68h] [rbp-98h] BYREF
  struct _RECTL *v36; // [rsp+70h] [rbp-90h]
  struct _POINTL *v37; // [rsp+78h] [rbp-88h]
  _DWORD v38[4]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v39; // [rsp+90h] [rbp-70h]
  struct _SURFOBJ *v40; // [rsp+98h] [rbp-68h] BYREF
  void *v41; // [rsp+A0h] [rbp-60h] BYREF
  struct _XLATEOBJ *v42; // [rsp+A8h] [rbp-58h] BYREF
  void *v43; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v44; // [rsp+B8h] [rbp-48h]
  void *v45; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v46; // [rsp+C8h] [rbp-38h]
  void *v47; // [rsp+D0h] [rbp-30h] BYREF
  void *v48; // [rsp+D8h] [rbp-28h] BYREF
  unsigned int v49; // [rsp+E0h] [rbp-20h]

  v36 = a8;
  v32 = a1;
  v37 = a9;
  v29 = 1;
  v14 = 0;
  v31 = 0;
  v30 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v35);
  v34 = 0LL;
  v33 = 0LL;
  memset_0(v38, 0, 0x68uLL);
  v15 = v35;
  if ( !v35 )
    goto LABEL_32;
  v38[1] = 68;
  LOBYTE(v38[0]) = 0;
  v39 = *(_QWORD *)v35;
  v47 = v36;
  v48 = v37;
  v40 = a1;
  v41 = a2;
  v42 = a3;
  v43 = a4;
  v44 = a5;
  v45 = a6;
  v46 = a7;
  v49 = a10;
  if ( a10 < 2 )
  {
    v16 = 8;
  }
  else
  {
    if ( a10 != 2 )
      goto LABEL_32;
    v16 = 12;
  }
  v17 = a7 * v16;
  if ( !*((_BYTE *)v35 + 440) )
  {
    v23 = v32;
    goto LABEL_18;
  }
  if ( a3 )
    v18 = ((4 * a3->cEntries + 7) & 0xFFFFFFF8) + 184;
  else
    v18 = 160;
  v19 = 16 * a5;
  if ( 16 * (unsigned __int64)a5 > 0xFFFFFFFF
    || v19 + 7 < v19
    || (v20 = (v19 + 7) & 0xFFFFFFF8, v17 + 7 < v17)
    || (v21 = (v17 + 7) & 0xFFFFFFF8, v22 = v18 + v20, v18 + v20 < v18)
    || v21 + v22 < v22 )
  {
LABEL_32:
    v25 = 0;
    goto LABEL_33;
  }
  v23 = v32;
  v29 = v21 + v22;
  v24 = UMPDOBJ::bThunkLargeBitmap(v35, v32, &v34, &v33, &v31, &v30, &v29);
  v14 = v30;
  v25 = v24;
  v29 = v24;
  v26 = v24;
  if ( v24 )
  {
LABEL_18:
    v25 = 0;
    if ( (unsigned int)UMPDOBJ::pso(v15, (UMPDOBJ *)((char *)v15 + 64), &v40, v14) )
    {
      if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(v15, (UMPDOBJ *)((char *)v15 + 112), &v41, 0x18u, 0LL) )
      {
        if ( (unsigned int)UMPDOBJ::pxlo(v15, &v42) )
        {
          if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v15, &v43, 16 * a5) )
          {
            if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v15, &v45, v17) )
            {
              if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v15, &v47, 0x10u) )
              {
                if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v15, &v48, 8u) )
                {
                  LODWORD(Size) = 4;
                  if ( (unsigned int)UMPDOBJ::Thunk(v15, v38, 0x68u, &v29, Size) != -1 )
                  {
                    if ( v29 )
                      v25 = 1;
                  }
                }
              }
            }
          }
        }
      }
    }
    v26 = v25;
  }
  if ( v31 )
  {
    UMPDOBJ::RestoreBitmap(v15, v23, v34, v33, Size, v14);
    v25 = v26;
  }
LABEL_33:
  XUMPDOBJ::~XUMPDOBJ(&v35);
  return v25;
}
