/*
 * XREFs of ?UMPDDrvEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1400D8A50
 * Callers:
 *     <none>
 * Callees:
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D600C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1400D70E4 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1400D785C (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D7A00 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D7B24 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1400D7C20 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?ulGetMaxSize@UMPDOBJ@@QEBAKXZ @ 0x1400D91CC (-ulGetMaxSize@UMPDOBJ@@QEBAKXZ.c)
 *     ?RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z @ 0x1400D9364 (-RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z.c)
 *     ?pxo@UMPDOBJ@@QEAAHPEAPEAU_XFORMOBJ@@@Z @ 0x1400D93B0 (-pxo@UMPDOBJ@@QEAAHPEAPEAU_XFORMOBJ@@@Z.c)
 *     ?bNeedThunk@UMPDOBJ@@QEBAHPEAX@Z @ 0x14023C4A4 (-bNeedThunk@UMPDOBJ@@QEBAHPEAX@Z.c)
 *     ?CopyToClientFromUmpd@UMPDOBJ@@QEAAXPEAXQEAX_K@Z @ 0x14034A334 (-CopyToClientFromUmpd@UMPDOBJ@@QEAAXPEAXQEAX_K@Z.c)
 *     ?bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z @ 0x14034CFE0 (-bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall UMPDDrvEscape(
        struct _SURFOBJ *a1,
        int a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned int Size,
        void *a6)
{
  int v8; // r15d
  int v9; // esi
  UMPDOBJ *v10; // rbx
  struct _XFORMOBJ **v11; // r15
  void *v12; // r12
  unsigned int v13; // ecx
  int v14; // r15d
  unsigned int v16; // eax
  BOOL v17; // edx
  int v18; // edx
  unsigned int MaxSize; // r9d
  int v20; // r10d
  int v21; // r8d
  unsigned int v22; // r8d
  ULONG cjBits; // eax
  unsigned int v24; // ecx
  size_t v25; // [rsp+20h] [rbp-E8h]
  int v26; // [rsp+30h] [rbp-D8h] BYREF
  int v27; // [rsp+34h] [rbp-D4h]
  unsigned int v28; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v29; // [rsp+3Ch] [rbp-CCh]
  struct _XFORMOBJ *v30; // [rsp+40h] [rbp-C8h] BYREF
  UMPDOBJ *v31; // [rsp+48h] [rbp-C0h] BYREF
  void *pvScan0; // [rsp+50h] [rbp-B8h]
  void *pvBits; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v34; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v35; // [rsp+68h] [rbp-A0h]
  struct _SURFOBJ *v36; // [rsp+70h] [rbp-98h]
  _DWORD v37[4]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v38; // [rsp+90h] [rbp-78h]
  struct _SURFOBJ *v39; // [rsp+98h] [rbp-70h] BYREF
  int v40; // [rsp+A0h] [rbp-68h]
  unsigned int v41; // [rsp+A4h] [rbp-64h]
  void *v42; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v43; // [rsp+B0h] [rbp-58h]
  void *v44; // [rsp+B8h] [rbp-50h]

  v34 = a4;
  v29 = a3;
  LODWORD(v30) = a2;
  v35 = (unsigned __int64)a6;
  v36 = a1;
  v28 = -1;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v31);
  v8 = 1;
  v9 = 0;
  v27 = 0;
  v26 = 0;
  pvBits = 0LL;
  pvScan0 = 0LL;
  memset_0(v37, 0, 0x40uLL);
  v10 = v31;
  if ( !v31 )
    goto LABEL_14;
  if ( !*((_BYTE *)v31 + 440) )
    goto LABEL_3;
  if ( a3 + 7 < a3
    || Size + 7 < Size
    || (v16 = ((a3 + 7) & 0xFFFFFFF8) + 80, v16 < 0x50)
    || ((Size + 7) & 0xFFFFFFF8) + v16 < v16 )
  {
LABEL_14:
    XUMPDOBJ::~XUMPDOBJ(&v31);
    return 0xFFFFFFFFLL;
  }
  if ( a1 && a1->pvBits )
  {
    v17 = 0;
    if ( !a1->iType )
      v17 = SLOBYTE(a1->fjBitmap) < 0;
    v9 = !v17;
    pvBits = a1->pvBits;
    pvScan0 = a1->pvScan0;
    MaxSize = UMPDOBJ::ulGetMaxSize(v31);
    v22 = v21 + 80;
    if ( v22 < 0x50 || (cjBits = a1->cjBits, cjBits + 7 < cjBits) || (v24 = v20 & (cjBits + 7), v24 + v22 < v24) )
    {
      v8 = 0;
    }
    else if ( v24 + v22 > MaxSize && !v18 )
    {
      v8 = UMPDOBJ::bSendLargeBitmap(v10, a1, &v26);
    }
    v27 = v9;
  }
LABEL_3:
  if ( !v8 )
    goto LABEL_37;
  v37[1] = 24;
  LOBYTE(v37[0]) = 0;
  v38 = *(_QWORD *)v10;
  v39 = a1;
  v11 = (struct _XFORMOBJ **)(v34 & -(__int64)(a3 != 0));
  v12 = (void *)(v35 & -(__int64)(Size != 0));
  v40 = (int)v30;
  v13 = v29;
  v41 = v29;
  v42 = v11;
  v43 = Size;
  v44 = v12;
  if ( (_DWORD)v30 == 25 && *((int *)a1->hdev + 452) < 0 )
  {
    if ( v11 )
    {
      v30 = v11[3];
      if ( UMPDOBJ::pxo(v10, &v30) )
      {
        *((_QWORD *)v42 + 3) = v30;
        v13 = v29;
        goto LABEL_5;
      }
    }
LABEL_37:
    v14 = v26;
    goto LABEL_11;
  }
LABEL_5:
  if ( v13 && (unsigned int)UMPDOBJ::bNeedThunk(v10, v11) && !(unsigned int)UMPDOBJ::ThunkMemBlock(v10, &v42, v29)
    || Size && (v44 = UMPDOBJ::_AllocUserMem(v10, Size, 1)) == 0LL )
  {
    v14 = v26;
  }
  else
  {
    v14 = v26;
    if ( (unsigned int)UMPDOBJ::pso(v10, (UMPDOBJ *)((char *)v10 + 64), &v39, v26) )
    {
      LODWORD(v25) = 4;
      if ( (unsigned int)UMPDOBJ::Thunk(v10, v37, 0x40u, &v28, v25) != -1 )
      {
        if ( Size )
          UMPDOBJ::CopyToClientFromUmpd(v10, v12, v44, Size);
        goto LABEL_11;
      }
    }
  }
  v28 = -1;
LABEL_11:
  if ( v9 )
    UMPDOBJ::RestoreBitmap(v10, a1, pvBits, pvScan0, v25, v14);
  XUMPDOBJ::~XUMPDOBJ(&v31);
  return v28;
}
