/*
 * XREFs of ?UMPDDrvStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1400D6B00
 * Callers:
 *     <none>
 * Callees:
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D600C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1400D70E4 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1400D7414 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D7A00 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D7B24 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1400D7C20 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?ulGetMaxSize@UMPDOBJ@@QEBAKXZ @ 0x1400D91CC (-ulGetMaxSize@UMPDOBJ@@QEBAKXZ.c)
 *     ?RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z @ 0x1400D9364 (-RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z.c)
 *     ?ThunkLINEATTRS@UMPDOBJ@@QEAAHPEAPEAU_LINEATTRS@@@Z @ 0x14023CDD4 (-ThunkLINEATTRS@UMPDOBJ@@QEAAHPEAPEAU_LINEATTRS@@@Z.c)
 *     ?bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z @ 0x14034CFE0 (-bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall UMPDDrvStrokePath(
        struct _SURFOBJ *a1,
        struct _PATHOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XFORMOBJ *a4,
        struct _BRUSHOBJ *a5,
        struct _POINTL *a6,
        struct _LINEATTRS *a7,
        unsigned int a8)
{
  unsigned int v8; // edi
  int v10; // esi
  int v11; // r14d
  int v12; // r12d
  UMPDOBJ *v13; // rbx
  BOOL v15; // r8d
  PVOID pvScan0; // rax
  unsigned int v17; // edx
  int v18; // r8d
  unsigned int MaxSize; // r9d
  int v20; // r10d
  ULONG cjBits; // eax
  unsigned int v22; // ecx
  int v23; // eax
  size_t Size; // [rsp+20h] [rbp-D1h]
  int v25; // [rsp+30h] [rbp-C1h] BYREF
  int v26; // [rsp+34h] [rbp-BDh] BYREF
  void *v27; // [rsp+38h] [rbp-B9h]
  void *pvBits; // [rsp+40h] [rbp-B1h]
  UMPDOBJ *v29; // [rsp+48h] [rbp-A9h] BYREF
  struct _PATHOBJ *v30; // [rsp+50h] [rbp-A1h]
  struct _CLIPOBJ *v31; // [rsp+58h] [rbp-99h]
  struct _XFORMOBJ *v32; // [rsp+60h] [rbp-91h]
  struct _BRUSHOBJ *v33; // [rsp+68h] [rbp-89h]
  struct _POINTL *v34; // [rsp+70h] [rbp-81h]
  _DWORD v35[4]; // [rsp+80h] [rbp-71h] BYREF
  __int64 v36; // [rsp+90h] [rbp-61h]
  struct _SURFOBJ *v37; // [rsp+98h] [rbp-59h] BYREF
  void *v38; // [rsp+A0h] [rbp-51h] BYREF
  void *v39; // [rsp+A8h] [rbp-49h] BYREF
  void *v40; // [rsp+B0h] [rbp-41h] BYREF
  void *v41; // [rsp+B8h] [rbp-39h] BYREF
  void *v42; // [rsp+C0h] [rbp-31h] BYREF
  struct _LINEATTRS *v43; // [rsp+C8h] [rbp-29h] BYREF
  unsigned int v44; // [rsp+D8h] [rbp-19h]

  v8 = 0;
  v33 = a5;
  v10 = 1;
  v34 = a6;
  v11 = 0;
  v32 = a4;
  v12 = 0;
  v31 = a3;
  v30 = a2;
  v26 = 1;
  v25 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v29);
  pvBits = 0LL;
  v27 = 0LL;
  memset_0(v35, 0, 0x60uLL);
  v13 = v29;
  if ( v29 )
  {
    if ( *((_BYTE *)v29 + 440) )
    {
      if ( a1 && a1->pvBits )
      {
        v15 = 0;
        if ( !a1->iType )
          v15 = SLOBYTE(a1->fjBitmap) < 0;
        pvScan0 = a1->pvScan0;
        pvBits = a1->pvBits;
        v11 = !v15;
        v27 = pvScan0;
        MaxSize = UMPDOBJ::ulGetMaxSize(v29);
        if ( v17 < 0x50 || (cjBits = a1->cjBits, cjBits + 7 < cjBits) || (v22 = v20 & (cjBits + 7), v22 + v17 < v22) )
        {
          v10 = 0;
        }
        else if ( v22 + v17 > MaxSize && !v18 )
        {
          v23 = UMPDOBJ::bSendLargeBitmap(v13, a1, &v25);
          v12 = v25;
          v10 = v23;
        }
      }
      v26 = v10;
    }
    if ( v10 )
    {
      v35[1] = 14;
      LOBYTE(v35[0]) = 0;
      v36 = *(_QWORD *)v13;
      v38 = v30;
      v39 = v31;
      v40 = v32;
      v41 = v33;
      v42 = v34;
      v44 = a8;
      v37 = a1;
      v43 = a7;
      if ( !(unsigned int)UMPDOBJ::pso(v13, (UMPDOBJ *)((char *)v13 + 64), &v37, v12) )
        goto LABEL_14;
      if ( !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v13, (UMPDOBJ *)((char *)v13 + 224), &v38, 8u, 0LL) )
        goto LABEL_14;
      if ( !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v13, (UMPDOBJ *)((char *)v13 + 112), &v39, 0x18u, 0LL) )
        goto LABEL_14;
      if ( v40 )
      {
        v25 = 0;
        if ( !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v13, (UMPDOBJ *)((char *)v13 + 272), &v40, 4u, &v25) )
          goto LABEL_14;
      }
      if ( !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v13, (UMPDOBJ *)((char *)v13 + 144), &v41, 0x18u, 0LL)
        || !(unsigned int)UMPDOBJ::ThunkMemBlock(v13, &v42, 8u)
        || !(unsigned int)UMPDOBJ::ThunkLINEATTRS(v13, &v43)
        || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v13, v35, 0x60u, &v26, Size) == -1)
        || (v10 = 1, !v26) )
      {
LABEL_14:
        v10 = 0;
      }
    }
    if ( v11 )
      UMPDOBJ::RestoreBitmap(v13, a1, pvBits, v27, Size, v12);
    v8 = v10;
  }
  XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v29);
  return v8;
}
