/*
 * XREFs of ?UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z @ 0x14034C290
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
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall UMPDDrvQueryAdvanceWidths(
        struct DHPDEV__ *a1,
        struct _FONTOBJ *a2,
        int a3,
        unsigned int *a4,
        void *a5,
        unsigned int a6)
{
  struct UMPDOBJ *v10; // rbx
  int v11; // eax
  unsigned int v12; // esi
  char *KernelPtr; // rax
  size_t Size; // [rsp+20h] [rbp-89h]
  unsigned int v16; // [rsp+30h] [rbp-79h] BYREF
  struct _FONTOBJ *v17; // [rsp+38h] [rbp-71h] BYREF
  UMPDOBJ *v18[2]; // [rsp+40h] [rbp-69h] BYREF
  _DWORD v19[4]; // [rsp+50h] [rbp-59h] BYREF
  __int64 v20; // [rsp+60h] [rbp-49h]
  struct DHPDEV__ *v21; // [rsp+68h] [rbp-41h]
  struct _FONTOBJ *v22; // [rsp+70h] [rbp-39h] BYREF
  int v23; // [rsp+78h] [rbp-31h]
  void *v24; // [rsp+80h] [rbp-29h] BYREF
  void *v25; // [rsp+88h] [rbp-21h]
  unsigned int v26; // [rsp+90h] [rbp-19h]

  v16 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)v18);
  memset_0(v19, 0, 0x48uLL);
  v10 = v18[0];
  if ( !v18[0] )
    goto LABEL_11;
  if ( !a4 )
    goto LABEL_11;
  if ( !a5 )
    goto LABEL_11;
  v19[1] = 53;
  LOBYTE(v19[0]) = 0;
  v20 = *(_QWORD *)v18[0];
  v21 = a1;
  v22 = a2;
  v23 = a3;
  v24 = a4;
  v26 = a6;
  if ( a6 > 0x3FFFFFFF )
    goto LABEL_11;
  v25 = UMPDOBJ::_AllocUserMem(v18[0], 2 * a6, 1);
  if ( v25
    && (unsigned int)UMPDOBJ::pfo(v10, (__m128i **)&v22)
    && (unsigned int)UMPDOBJ::ThunkMemBlock(v10, &v24, 4 * a6) )
  {
    v17 = a2;
    UMPDReleaseRFONTSem((struct RFONTOBJ *)&v17, v10, 0LL, 0LL, 0LL);
    LODWORD(Size) = 4;
    v11 = UMPDOBJ::Thunk(v10, v19, 0x48u, &v16, Size);
    v12 = v16;
    if ( v11 == -1 )
      v12 = 0;
    UMPDAcquireRFONTSem((struct RFONTOBJ *)&v17, v10, 0, 0, 0LL);
    v17 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v17);
    KernelPtr = UMPDOBJ::GetKernelPtr((char **)v10, (char *)v25);
    memmove(a5, KernelPtr, 2LL * a6);
  }
  else
  {
LABEL_11:
    v12 = 0;
  }
  XUMPDOBJ::~XUMPDOBJ(v18);
  return v12;
}
