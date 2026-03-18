/*
 * XREFs of ?UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x14034B250
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14006FDD0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z @ 0x1400D4484 (-pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1400D52F0 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1400D58A0 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D600C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1400D70E4 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1400D780C (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1400D785C (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D7A00 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D7B24 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1400D7C20 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z @ 0x1400D9364 (-RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x14021CFC0 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall UMPDDrvFontManagement(
        struct _SURFOBJ *a1,
        struct _FONTOBJ *a2,
        int a3,
        unsigned int a4,
        void *a5,
        unsigned int Size,
        void *a7)
{
  unsigned int v10; // r12d
  int v11; // r15d
  UMPDOBJ *v12; // rbx
  unsigned int v13; // ecx
  unsigned int v14; // eax
  int v15; // eax
  void *v16; // rsi
  int v17; // eax
  char *KernelPtr; // rax
  int v20; // [rsp+20h] [rbp-D1h]
  size_t v21; // [rsp+20h] [rbp-D1h]
  int v22; // [rsp+40h] [rbp-B1h] BYREF
  struct _FONTOBJ *v23; // [rsp+48h] [rbp-A9h] BYREF
  int v24; // [rsp+50h] [rbp-A1h] BYREF
  int v25; // [rsp+54h] [rbp-9Dh] BYREF
  unsigned int v26; // [rsp+58h] [rbp-99h] BYREF
  struct _FONTOBJ *v27; // [rsp+60h] [rbp-91h]
  void *v28; // [rsp+68h] [rbp-89h] BYREF
  void *v29; // [rsp+70h] [rbp-81h] BYREF
  UMPDOBJ *v30; // [rsp+78h] [rbp-79h] BYREF
  unsigned __int64 v31; // [rsp+80h] [rbp-71h]
  unsigned __int64 v32; // [rsp+88h] [rbp-69h]
  _DWORD v33[4]; // [rsp+90h] [rbp-61h] BYREF
  __int64 v34; // [rsp+A0h] [rbp-51h]
  struct _SURFOBJ *v35[2]; // [rsp+A8h] [rbp-49h] BYREF
  struct _FONTOBJ *v36; // [rsp+B8h] [rbp-39h] BYREF
  int v37; // [rsp+C0h] [rbp-31h]
  unsigned int v38; // [rsp+C4h] [rbp-2Dh]
  void *v39; // [rsp+C8h] [rbp-29h] BYREF
  unsigned int v40; // [rsp+D0h] [rbp-21h]
  void *v41; // [rsp+D8h] [rbp-19h]

  v32 = (unsigned __int64)a7;
  v31 = (unsigned __int64)a5;
  v10 = -1;
  v24 = -1;
  LODWORD(v23) = a3;
  v27 = a2;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v30);
  v29 = 0LL;
  v28 = 0LL;
  v11 = 0;
  v25 = 0;
  v22 = 0;
  memset_0(v33, 0, 0x50uLL);
  v12 = v30;
  if ( !v30 )
    goto LABEL_27;
  if ( !*((_BYTE *)v30 + 440) || a3 == 8 || !a1 || !a1->pvBits )
    goto LABEL_11;
  if ( a4 + 7 < a4
    || Size + 7 < Size
    || (v13 = (Size + 7) & 0xFFFFFFF8, v14 = ((a4 + 7) & 0xFFFFFFF8) + 152, v14 < 0x98)
    || v14 + v13 < v14 )
  {
LABEL_27:
    v10 = -1;
    goto LABEL_28;
  }
  v26 = v14 + v13;
  v15 = UMPDOBJ::bThunkLargeBitmap(v30, a1, &v29, &v28, &v25, &v22, &v26);
  v11 = v22;
  if ( v15 )
  {
LABEL_11:
    v33[1] = 47;
    LOBYTE(v33[0]) = 0;
    v34 = *(_QWORD *)v12;
    v16 = (void *)(v32 & -(__int64)(Size != 0));
    if ( (_DWORD)v23 == 8 )
    {
      v35[0] = 0LL;
      v35[1] = a1;
    }
    else
    {
      v35[0] = a1;
    }
    v36 = v27;
    v37 = (int)v23;
    v38 = a4;
    v39 = (void *)(v31 & -(__int64)(a4 != 0));
    v40 = Size;
    v41 = (void *)(v32 & -(__int64)(Size != 0));
    if ( (!v16 || (v41 = UMPDOBJ::_AllocUserMem(v12, Size, 1)) != 0LL)
      && (unsigned int)UMPDOBJ::pso(v12, (UMPDOBJ *)((char *)v12 + 64), v35, v11)
      && (unsigned int)UMPDOBJ::pfo(v12, (__m128i **)&v36)
      && (unsigned int)UMPDOBJ::ThunkMemBlock(v12, &v39, a4) )
    {
      v23 = v27;
      UMPDReleaseRFONTSem((struct RFONTOBJ *)&v23, v12, 0LL, 0LL, 0LL);
      LODWORD(v21) = 4;
      v17 = UMPDOBJ::Thunk(v12, v33, 0x50u, &v24, v21);
      v10 = v24;
      if ( v17 == -1 )
        v10 = -1;
      UMPDAcquireRFONTSem((struct RFONTOBJ *)&v23, v12, 0, 0, 0LL);
      if ( v10 != -1 && v16 )
      {
        KernelPtr = UMPDOBJ::GetKernelPtr((char **)v12, (char *)v41);
        memmove(v16, KernelPtr, Size);
      }
      v23 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v23);
    }
  }
  if ( v25 )
    UMPDOBJ::RestoreBitmap(v12, a1, v29, v28, v20, v11);
LABEL_28:
  XUMPDOBJ::~XUMPDOBJ(&v30);
  return v10;
}
