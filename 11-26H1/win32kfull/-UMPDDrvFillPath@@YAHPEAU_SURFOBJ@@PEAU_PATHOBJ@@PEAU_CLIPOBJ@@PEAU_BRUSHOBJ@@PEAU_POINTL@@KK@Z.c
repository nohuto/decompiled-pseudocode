/*
 * XREFs of ?UMPDDrvFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1400D7180
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
 *     ?bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z @ 0x14034CFE0 (-bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall UMPDDrvFillPath(
        struct _SURFOBJ *a1,
        struct _PATHOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _BRUSHOBJ *a4,
        struct _POINTL *a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned int v7; // edi
  int v9; // esi
  int v10; // r15d
  int v11; // r12d
  PVOID pvBits; // r13
  UMPDOBJ *v13; // rbx
  BOOL v15; // edx
  int v16; // edx
  unsigned int MaxSize; // r8d
  ULONG cjBits; // eax
  unsigned int v19; // ecx
  int v20; // eax
  size_t Size; // [rsp+20h] [rbp-C1h]
  int v22; // [rsp+30h] [rbp-B1h] BYREF
  int v23; // [rsp+34h] [rbp-ADh] BYREF
  void *pvScan0; // [rsp+38h] [rbp-A9h]
  UMPDOBJ *v25; // [rsp+40h] [rbp-A1h] BYREF
  struct _PATHOBJ *v26; // [rsp+48h] [rbp-99h]
  struct _CLIPOBJ *v27; // [rsp+50h] [rbp-91h]
  struct _BRUSHOBJ *v28; // [rsp+58h] [rbp-89h]
  struct _POINTL *v29; // [rsp+60h] [rbp-81h]
  _DWORD v30[4]; // [rsp+70h] [rbp-71h] BYREF
  __int64 v31; // [rsp+80h] [rbp-61h]
  struct _SURFOBJ *v32; // [rsp+88h] [rbp-59h] BYREF
  void *v33; // [rsp+90h] [rbp-51h] BYREF
  void *v34; // [rsp+98h] [rbp-49h] BYREF
  void *v35; // [rsp+A8h] [rbp-39h] BYREF
  void *v36; // [rsp+B0h] [rbp-31h] BYREF
  unsigned int v37; // [rsp+C8h] [rbp-19h]
  unsigned int v38; // [rsp+CCh] [rbp-15h]

  v7 = 0;
  v29 = a5;
  v9 = 1;
  v23 = 0;
  v22 = 1;
  v10 = 0;
  v28 = a4;
  v11 = 0;
  v27 = a3;
  v26 = a2;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v25);
  pvScan0 = 0LL;
  pvBits = 0LL;
  memset_0(v30, 0, 0x60uLL);
  v13 = v25;
  if ( v25 )
  {
    if ( *((_BYTE *)v25 + 440) )
    {
      if ( a1 && a1->pvBits )
      {
        v15 = 0;
        if ( !a1->iType )
          v15 = SLOBYTE(a1->fjBitmap) < 0;
        pvBits = a1->pvBits;
        pvScan0 = a1->pvScan0;
        v10 = !v15;
        MaxSize = UMPDOBJ::ulGetMaxSize(v25);
        cjBits = a1->cjBits;
        if ( cjBits + 7 < cjBits || (v19 = (cjBits + 7) & 0xFFFFFFF8, v19 + 248 < v19) )
        {
          v9 = 0;
        }
        else if ( v19 + 248 > MaxSize && !v16 )
        {
          v20 = UMPDOBJ::bSendLargeBitmap(v13, a1, &v23);
          v11 = v23;
          v9 = v20;
        }
      }
      v22 = v9;
    }
    if ( v9 )
    {
      v30[1] = 15;
      LOBYTE(v30[0]) = 0;
      v31 = *(_QWORD *)v13;
      v33 = v26;
      v34 = v27;
      v35 = v28;
      v36 = v29;
      v37 = a6;
      v38 = a7;
      v32 = a1;
      if ( !(unsigned int)UMPDOBJ::pso(v13, (UMPDOBJ *)((char *)v13 + 64), &v32, v11)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v13, (UMPDOBJ *)((char *)v13 + 224), &v33, 8u, 0LL)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v13, (UMPDOBJ *)((char *)v13 + 112), &v34, 0x18u, 0LL)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v13, (UMPDOBJ *)((char *)v13 + 144), &v35, 0x18u, 0LL)
        || !(unsigned int)UMPDOBJ::ThunkMemBlock(v13, &v36, 8u)
        || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v13, v30, 0x60u, &v22, Size) == -1)
        || (v9 = 1, !v22) )
      {
        v9 = 0;
      }
    }
    if ( v10 )
      UMPDOBJ::RestoreBitmap(v13, a1, pvBits, pvScan0, Size, v11);
    v7 = v9;
  }
  XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v25);
  return v7;
}
