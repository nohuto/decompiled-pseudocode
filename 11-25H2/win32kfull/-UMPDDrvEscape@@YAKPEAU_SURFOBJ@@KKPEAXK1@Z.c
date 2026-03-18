/*
 * XREFs of ?UMPDDrvEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1400D0D70
 * Callers:
 *     <none>
 * Callees:
 *     ?ulGetMaxSize@UMPDOBJ@@QEBAKXZ @ 0x1400D0CF8 (-ulGetMaxSize@UMPDOBJ@@QEBAKXZ.c)
 *     ?RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z @ 0x1400D0D20 (-RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D2E48 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D2F30 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1400D330C (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1400D35A0 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1400D3D28 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1400D3D78 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D425C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?pxo@UMPDOBJ@@QEAAHPEAPEAU_XFORMOBJ@@@Z @ 0x14020D0BC (-pxo@UMPDOBJ@@QEAAHPEAPEAU_XFORMOBJ@@@Z.c)
 *     ?bNeedThunk@UMPDOBJ@@QEBAHPEAX@Z @ 0x140212434 (-bNeedThunk@UMPDOBJ@@QEBAHPEAX@Z.c)
 *     ?bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z @ 0x140337A64 (-bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memmove @ 0x140342600 (memmove.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall UMPDDrvEscape(
        struct _SURFOBJ *a1,
        int a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned int Size,
        void *a6)
{
  int v8; // edi
  int v9; // r14d
  UMPDOBJ *v10; // rbx
  struct _XFORMOBJ **v11; // rdi
  void *v12; // r12
  unsigned int v13; // r9d
  UMPDOBJ *v15; // rcx
  unsigned int v16; // r9d
  unsigned int v17; // eax
  BOOL v18; // edx
  int v19; // edx
  unsigned int MaxSize; // r9d
  int v21; // r10d
  int v22; // r8d
  unsigned int v23; // r8d
  ULONG cjBits; // eax
  unsigned int v25; // ecx
  const void *KernelPtr; // rax
  size_t v27; // [rsp+20h] [rbp-E8h]
  unsigned int v28; // [rsp+30h] [rbp-D8h] BYREF
  int v29; // [rsp+34h] [rbp-D4h] BYREF
  unsigned int v30; // [rsp+38h] [rbp-D0h]
  struct _XFORMOBJ *v31; // [rsp+40h] [rbp-C8h] BYREF
  UMPDOBJ *v32; // [rsp+48h] [rbp-C0h] BYREF
  int v33; // [rsp+50h] [rbp-B8h]
  void *pvScan0; // [rsp+58h] [rbp-B0h]
  void *pvBits; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v36; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v37; // [rsp+70h] [rbp-98h]
  struct _SURFOBJ *v38; // [rsp+78h] [rbp-90h]
  _BYTE Src[4]; // [rsp+80h] [rbp-88h] BYREF
  int v40; // [rsp+84h] [rbp-84h]
  __int64 v41; // [rsp+90h] [rbp-78h]
  struct _SURFOBJ *v42; // [rsp+98h] [rbp-70h] BYREF
  int v43; // [rsp+A0h] [rbp-68h]
  unsigned int v44; // [rsp+A4h] [rbp-64h]
  void *v45; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v46; // [rsp+B0h] [rbp-58h]
  void *v47; // [rsp+B8h] [rbp-50h]

  v36 = a4;
  v30 = a3;
  LODWORD(v31) = a2;
  v37 = (unsigned __int64)a6;
  v38 = a1;
  v28 = -1;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v32);
  v8 = 1;
  v9 = 0;
  v29 = 0;
  pvBits = 0LL;
  pvScan0 = 0LL;
  memset_0(Src, 0, 0x40uLL);
  v10 = v32;
  if ( !v32 )
    goto LABEL_15;
  if ( !*((_BYTE *)v32 + 456) )
    goto LABEL_3;
  if ( a3 + 7 < a3
    || Size + 7 < Size
    || (v17 = ((a3 + 7) & 0xFFFFFFF8) + 80, v17 < 0x50)
    || ((Size + 7) & 0xFFFFFFF8) + v17 < v17 )
  {
LABEL_15:
    XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v32);
    return 0xFFFFFFFFLL;
  }
  if ( a1 && a1->pvBits )
  {
    v18 = 0;
    if ( !a1->iType )
      v18 = SLOBYTE(a1->fjBitmap) < 0;
    v9 = !v18;
    pvBits = a1->pvBits;
    pvScan0 = a1->pvScan0;
    MaxSize = UMPDOBJ::ulGetMaxSize(v32);
    v23 = v22 + 80;
    if ( v23 < 0x50 || (cjBits = a1->cjBits, cjBits + 7 < cjBits) || (v25 = v21 & (cjBits + 7), v25 + v23 < v25) )
    {
      v8 = 0;
    }
    else if ( v25 + v23 > MaxSize && !v19 )
    {
      v8 = UMPDOBJ::bSendLargeBitmap(v10, a1, &v29);
    }
  }
LABEL_3:
  v33 = v9;
  if ( v8 )
  {
    v40 = 24;
    Src[0] = 0;
    v41 = *(_QWORD *)v10;
    v42 = a1;
    v11 = (struct _XFORMOBJ **)(v36 & -(__int64)(a3 != 0));
    v12 = (void *)(v37 & -(__int64)(Size != 0));
    v43 = (int)v31;
    v13 = v30;
    v44 = v30;
    v45 = v11;
    v46 = Size;
    v47 = v12;
    if ( (_DWORD)v31 != 25 || *((int *)a1->hdev + 452) >= 0 )
      goto LABEL_5;
    if ( v11 )
    {
      v31 = v11[3];
      if ( UMPDOBJ::pxo(v10, &v31) )
      {
        *((_QWORD *)v45 + 3) = v31;
        v13 = v30;
LABEL_5:
        if ( v13 && (unsigned int)UMPDOBJ::bNeedThunk(v10, v11) && !(unsigned int)UMPDOBJ::ThunkMemBlock(v15, &v45, v16)
          || Size && (v47 = UMPDOBJ::_AllocUserMem(v10, Size, 1)) == 0LL
          || !(unsigned int)UMPDOBJ::pso(v10, (UMPDOBJ *)((char *)v10 + 80), &v42, v29)
          || (LODWORD(v27) = 4, UMPDOBJ::Thunk(v10, Src, 0x40u, &v28, v27) == -1) )
        {
          v28 = -1;
        }
        else if ( Size )
        {
          KernelPtr = UMPDOBJ::GetKernelPtr(v10, v47);
          memmove(v12, KernelPtr, Size);
        }
      }
    }
  }
  if ( v9 )
    UMPDOBJ::RestoreBitmap(v10, a1, pvBits, pvScan0, v27, v29);
  XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v32);
  return v28;
}
