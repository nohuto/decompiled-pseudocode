/*
 * XREFs of ?UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1403352A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x140017244 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1400CF7F8 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     ?RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z @ 0x1400D0D20 (-RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1400D2000 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D2E48 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D2F30 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1400D330C (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1400D35A0 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1400D3D28 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1400D3D78 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D425C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z @ 0x1400D4D34 (-pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1400DA83C (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memmove @ 0x140342600 (memmove.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
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
  unsigned int v10; // r14d
  int v11; // r12d
  UMPDOBJ *v12; // rbx
  unsigned int v13; // ecx
  unsigned int v14; // eax
  int v15; // eax
  void *v16; // rsi
  struct _FONTOBJ *v17; // r14
  __int64 v18; // r8
  int v19; // eax
  char *KernelPtr; // rax
  int v22; // [rsp+20h] [rbp-D1h]
  size_t v23; // [rsp+20h] [rbp-D1h]
  int v24; // [rsp+40h] [rbp-B1h] BYREF
  struct _FONTOBJ *v25; // [rsp+48h] [rbp-A9h] BYREF
  int v26; // [rsp+50h] [rbp-A1h] BYREF
  int v27; // [rsp+54h] [rbp-9Dh] BYREF
  unsigned int v28; // [rsp+58h] [rbp-99h] BYREF
  void *v29; // [rsp+60h] [rbp-91h] BYREF
  void *v30; // [rsp+68h] [rbp-89h] BYREF
  UMPDOBJ *v31; // [rsp+70h] [rbp-81h] BYREF
  unsigned __int64 v32; // [rsp+78h] [rbp-79h]
  unsigned __int64 v33; // [rsp+80h] [rbp-71h]
  struct _FONTOBJ *v34; // [rsp+88h] [rbp-69h]
  _DWORD Src[4]; // [rsp+90h] [rbp-61h] BYREF
  __int64 v36; // [rsp+A0h] [rbp-51h]
  struct _SURFOBJ *v37[2]; // [rsp+A8h] [rbp-49h] BYREF
  struct _FONTOBJ *v38; // [rsp+B8h] [rbp-39h] BYREF
  int v39; // [rsp+C0h] [rbp-31h]
  unsigned int v40; // [rsp+C4h] [rbp-2Dh]
  void *v41; // [rsp+C8h] [rbp-29h] BYREF
  unsigned int v42; // [rsp+D0h] [rbp-21h]
  void *v43; // [rsp+D8h] [rbp-19h]

  v33 = (unsigned __int64)a7;
  v32 = (unsigned __int64)a5;
  v10 = -1;
  v26 = -1;
  LODWORD(v25) = a3;
  v34 = a2;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v31);
  v30 = 0LL;
  v29 = 0LL;
  v11 = 0;
  v27 = 0;
  v24 = 0;
  memset_0(Src, 0, 0x50uLL);
  v12 = v31;
  if ( !v31 )
    goto LABEL_28;
  if ( !*((_BYTE *)v31 + 456) || a3 == 8 || !a1 || !a1->pvBits )
    goto LABEL_11;
  if ( a4 + 7 < a4
    || Size + 7 < Size
    || (v13 = (Size + 7) & 0xFFFFFFF8, v14 = ((a4 + 7) & 0xFFFFFFF8) + 152, v14 < 0x98)
    || v14 + v13 < v14 )
  {
LABEL_28:
    v10 = -1;
    goto LABEL_29;
  }
  v28 = v14 + v13;
  v15 = UMPDOBJ::bThunkLargeBitmap(v31, a1, &v30, &v29, &v27, &v24, &v28);
  v11 = v24;
  if ( v15 )
  {
LABEL_11:
    Src[1] = 47;
    LOBYTE(Src[0]) = 0;
    v36 = *(_QWORD *)v12;
    v16 = (void *)(v33 & -(__int64)(Size != 0));
    if ( (_DWORD)v25 == 8 )
    {
      v37[0] = 0LL;
      v37[1] = a1;
    }
    else
    {
      v37[0] = a1;
    }
    v17 = v34;
    v38 = v34;
    v39 = (int)v25;
    v40 = a4;
    v41 = (void *)(v32 & -(__int64)(a4 != 0));
    v42 = Size;
    v43 = (void *)(v33 & -(__int64)(Size != 0));
    if ( (!v16 || (v43 = UMPDOBJ::_AllocUserMem(v12, Size, 1)) != 0LL)
      && (unsigned int)UMPDOBJ::pso(v12, (UMPDOBJ *)((char *)v12 + 80), v37)
      && (unsigned int)UMPDOBJ::pfo(v12, &v38, v18)
      && (unsigned int)UMPDOBJ::ThunkMemBlock(v12, (const void **)&v41, a4) )
    {
      v25 = v17;
      UMPDReleaseRFONTSem((struct RFONTOBJ *)&v25, v12, 0LL, 0LL, 0LL);
      LODWORD(v23) = 4;
      v19 = UMPDOBJ::Thunk(v12, Src, 0x50u, &v26, v23);
      v10 = v26;
      if ( v19 == -1 )
        v10 = -1;
      UMPDAcquireRFONTSem((struct RFONTOBJ *)&v25, v12, 0, 0, 0LL);
      if ( v10 != -1 && v16 )
      {
        KernelPtr = UMPDOBJ::GetKernelPtr((char **)v12, (char *)v43);
        memmove(v16, KernelPtr, Size);
      }
      v25 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v25);
    }
    else
    {
      v10 = -1;
    }
  }
  if ( v27 )
    UMPDOBJ::RestoreBitmap(v12, a1, v30, v29, v22, v11);
LABEL_29:
  XUMPDOBJ::~XUMPDOBJ(&v31);
  return v10;
}
