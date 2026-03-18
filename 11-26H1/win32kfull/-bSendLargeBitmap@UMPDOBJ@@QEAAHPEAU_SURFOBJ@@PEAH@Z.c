/*
 * XREFs of ?bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z @ 0x14034CFE0
 * Callers:
 *     ?UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1400D5BD0 (-UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRU.c)
 *     ?UMPDDrvStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1400D6B00 (-UMPDDrvStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@P.c)
 *     ?UMPDDrvFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1400D7180 (-UMPDDrvFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?UMPDDrvEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1400D8A50 (-UMPDDrvEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x14021CFC0 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 * Callees:
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D600C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1400D780C (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1400D785C (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?ulGetMaxSize@UMPDOBJ@@QEBAKXZ @ 0x1400D91CC (-ulGetMaxSize@UMPDOBJ@@QEBAKXZ.c)
 *     ?ResetHeap@UMPDOBJ@@QEAAXXZ @ 0x140239918 (-ResetHeap@UMPDOBJ@@QEAAXXZ.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x14028D324 (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
 *     ?UMPDAllocUserMem@UMPDOBJ@@QEAAPEAXK@Z @ 0x14034A5DC (-UMPDAllocUserMem@UMPDOBJ@@QEAAPEAXK@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall UMPDOBJ::bSendLargeBitmap(UMPDOBJ *this, struct _SURFOBJ *a2, int *a3)
{
  unsigned int v6; // r14d
  char *v7; // r12
  unsigned int MaxSize; // eax
  ULONG v9; // eax
  ULONG cjBits; // edi
  PVOID *p_pvBits; // r15
  unsigned int v12; // edx
  char *v13; // rax
  char *KernelPtr; // rax
  __int64 v15; // rax
  UMPDOBJ *v16; // rcx
  size_t v18; // [rsp+20h] [rbp-C8h]
  unsigned int v19; // [rsp+30h] [rbp-B8h]
  ULONG v20; // [rsp+38h] [rbp-B0h]
  __int64 v21; // [rsp+40h] [rbp-A8h] BYREF
  void *Src; // [rsp+48h] [rbp-A0h]
  char *v23; // [rsp+50h] [rbp-98h]
  UMPDOBJ *v24; // [rsp+58h] [rbp-90h]
  PVOID *v25; // [rsp+60h] [rbp-88h]
  struct _SURFOBJ *v26; // [rsp+68h] [rbp-80h]
  int *v27; // [rsp+70h] [rbp-78h]
  __int128 v28; // [rsp+78h] [rbp-70h] BYREF
  __int128 v29; // [rsp+88h] [rbp-60h]
  __int128 v30; // [rsp+98h] [rbp-50h]

  v24 = this;
  v26 = a2;
  v27 = a3;
  v21 = 0LL;
  v19 = 0;
  v6 = 0;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v7 = (char *)UMPDOBJ::UMPDAllocUserMem(this, a2->cjBits);
  v23 = v7;
  if ( !v7 )
    return 0LL;
  DWORD1(v28) = 118;
  LOBYTE(v28) = 0;
  *(_QWORD *)&v29 = *(_QWORD *)this;
  *(_QWORD *)&v30 = v7;
  MaxSize = UMPDOBJ::ulGetMaxSize(this);
  if ( MaxSize < 0x38 )
    return 0LL;
  v9 = MaxSize - 56;
  v20 = v9;
  cjBits = a2->cjBits;
  p_pvBits = &a2->pvBits;
  v25 = &a2->pvBits;
  Src = a2->pvBits;
  while ( cjBits )
  {
    v12 = cjBits;
    if ( cjBits > v9 )
      v12 = v9;
    DWORD2(v30) = v12;
    v13 = (char *)UMPDOBJ::_AllocUserMem(this, v12, 0);
    *((_QWORD *)&v29 + 1) = v13;
    if ( !v13 )
      break;
    KernelPtr = UMPDOBJ::GetKernelPtr((char **)this, v13);
    memmove(KernelPtr, Src, DWORD2(v30));
    LODWORD(v18) = 8;
    if ( (unsigned int)UMPDOBJ::Thunk(this, &v28, 0x30u, &v21, v18) == -1 || !v21 )
      break;
    v19 += DWORD2(v30);
    cjBits -= DWORD2(v30);
    *(_QWORD *)&v30 = &v7[v19];
    Src = (char *)*p_pvBits + v19;
    UMPDOBJ::ResetHeap(this);
    v9 = v20;
  }
  v15 = (unsigned int)(LODWORD(a2->pvScan0) - *(_DWORD *)p_pvBits);
  *p_pvBits = v7;
  a2->pvScan0 = &v7[v15];
  if ( cjBits )
  {
    UMPDOBJ::ResetHeap(this);
    UMPDOBJ::bDeleteLargeBitmaps(v16, a2, 0LL, 0LL);
  }
  else
  {
    v6 = 1;
    *a3 = 1;
  }
  return v6;
}
