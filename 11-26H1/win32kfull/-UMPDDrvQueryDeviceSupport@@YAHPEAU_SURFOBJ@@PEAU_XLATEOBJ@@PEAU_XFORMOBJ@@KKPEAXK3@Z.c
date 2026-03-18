/*
 * XREFs of ?UMPDDrvQueryDeviceSupport@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_XFORMOBJ@@KKPEAXK3@Z @ 0x14034C450
 * Callers:
 *     <none>
 * Callees:
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D600C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1400D70E4 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1400D780C (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1400D785C (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D7A00 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D7B24 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1400D7C20 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z @ 0x1400D9364 (-RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z.c)
 *     ?pxo@UMPDOBJ@@QEAAHPEAPEAU_XFORMOBJ@@@Z @ 0x1400D93B0 (-pxo@UMPDOBJ@@QEAAHPEAPEAU_XFORMOBJ@@@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x14021CFC0 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     ?pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z @ 0x1402286BC (-pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall UMPDDrvQueryDeviceSupport(
        struct _SURFOBJ *a1,
        struct _XLATEOBJ *a2,
        struct _XFORMOBJ *a3,
        int a4,
        unsigned int a5,
        void *a6,
        unsigned int Length,
        void *a8)
{
  struct _SURFOBJ *v9; // r13
  unsigned int v10; // edi
  int v11; // r12d
  UMPDOBJ *v12; // rbx
  unsigned int v13; // eax
  ULONG v14; // ecx
  unsigned int v15; // esi
  unsigned int v16; // edx
  unsigned int v17; // r8d
  ULONG v18; // eax
  unsigned int v19; // edx
  unsigned int v20; // ecx
  unsigned int v21; // eax
  volatile void *v22; // r13
  char *v23; // rdi
  char *KernelPtr; // rax
  size_t Size; // [rsp+20h] [rbp-118h]
  unsigned int v27; // [rsp+40h] [rbp-F8h] BYREF
  int v28; // [rsp+44h] [rbp-F4h] BYREF
  int v29; // [rsp+48h] [rbp-F0h] BYREF
  UMPDOBJ *v30; // [rsp+50h] [rbp-E8h] BYREF
  int v31; // [rsp+58h] [rbp-E0h]
  struct _SURFOBJ *v32; // [rsp+60h] [rbp-D8h]
  void *v33; // [rsp+68h] [rbp-D0h] BYREF
  void *v34; // [rsp+70h] [rbp-C8h] BYREF
  struct _XLATEOBJ *v35; // [rsp+78h] [rbp-C0h]
  struct _XFORMOBJ *v36; // [rsp+80h] [rbp-B8h]
  unsigned __int64 v37; // [rsp+88h] [rbp-B0h]
  unsigned __int64 v38; // [rsp+90h] [rbp-A8h]
  struct _SURFOBJ *v39; // [rsp+98h] [rbp-A0h]
  _DWORD v40[4]; // [rsp+A0h] [rbp-98h] BYREF
  char *v41; // [rsp+B0h] [rbp-88h]
  struct _SURFOBJ *v42; // [rsp+B8h] [rbp-80h] BYREF
  struct _XLATEOBJ *v43; // [rsp+C0h] [rbp-78h] BYREF
  struct _XFORMOBJ *v44; // [rsp+C8h] [rbp-70h] BYREF
  int v45; // [rsp+D0h] [rbp-68h]
  unsigned int v46; // [rsp+D4h] [rbp-64h]
  void *v47; // [rsp+D8h] [rbp-60h] BYREF
  unsigned int v48; // [rsp+E0h] [rbp-58h]
  volatile void *Address; // [rsp+E8h] [rbp-50h]

  v31 = a4;
  v36 = a3;
  v35 = a2;
  v9 = a1;
  v32 = a1;
  v37 = (unsigned __int64)a8;
  v38 = (unsigned __int64)a6;
  v39 = a1;
  v10 = 1;
  v27 = 1;
  v29 = 0;
  v11 = 0;
  v28 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v30);
  v34 = 0LL;
  v33 = 0LL;
  memset_0(v40, 0, 0x50uLL);
  v12 = v30;
  if ( !v30 )
    goto LABEL_30;
  v13 = 1;
  if ( !*((_BYTE *)v30 + 440) )
  {
    v15 = a5;
    goto LABEL_14;
  }
  v14 = a2 ? ((4 * a2->cEntries + 7) & 0xFFFFFFF8) + 120 : 96;
  v15 = a5;
  if ( a5 + 7 < a5 )
    goto LABEL_30;
  v16 = (a5 + 7) & 0xFFFFFFF8;
  if ( Length + 7 < Length )
    goto LABEL_30;
  v17 = (Length + 7) & 0xFFFFFFF8;
  v18 = v14 + v16;
  if ( v14 + v16 < v14 )
    goto LABEL_30;
  v19 = v14 + v16;
  v20 = v18 + v17;
  v21 = -1;
  if ( v19 + v17 >= v19 )
    v21 = v20;
  v27 = v21;
  if ( v20 < v19 )
  {
LABEL_30:
    XUMPDOBJ::~XUMPDOBJ(&v30);
    return 0LL;
  }
  v13 = UMPDOBJ::bThunkLargeBitmap(v30, v9, &v34, &v33, &v29, &v28, &v27);
  v10 = v13;
  v27 = v13;
  v11 = v28;
LABEL_14:
  if ( v13 )
  {
    v40[1] = 76;
    LOBYTE(v40[0]) = 0;
    v41 = *(char **)v12;
    v42 = v9;
    v43 = v35;
    v44 = v36;
    v22 = (volatile void *)(v37 & -(__int64)(Length != 0));
    v45 = v31;
    v46 = v15;
    v47 = (void *)(v38 & -(__int64)(v15 != 0));
    v48 = Length;
    Address = v22;
    if ( (!v15 || (unsigned int)UMPDOBJ::ThunkMemBlock(v12, &v47, v15))
      && (!Length || (Address = UMPDOBJ::_AllocUserMem(v12, Length, 1)) != 0LL)
      && (unsigned int)UMPDOBJ::pso(v12, (UMPDOBJ *)((char *)v12 + 64), &v42, v11)
      && (unsigned int)UMPDOBJ::pxlo(v12, &v43)
      && (unsigned int)UMPDOBJ::pxo(v12, &v44)
      && (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v12, v40, 0x50u, &v27, Size) != -1) )
    {
      if ( Length )
      {
        v23 = (char *)Address;
        ProbeForRead(Address, Length, 1u);
        KernelPtr = UMPDOBJ::GetKernelPtr((char **)v12, v23);
        memmove((void *)v22, KernelPtr, Length);
      }
      v10 = v27;
      v9 = v32;
    }
    else
    {
      v10 = 0;
      v9 = v32;
    }
  }
  if ( v29 )
    UMPDOBJ::RestoreBitmap(v12, v9, v34, v33, Size, v11);
  XUMPDOBJ::~XUMPDOBJ(&v30);
  return v10;
}
