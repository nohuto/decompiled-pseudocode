/*
 * XREFs of ?UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x140283980
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1400701C0 (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ?pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z @ 0x1400D4484 (-pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1400D52F0 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1400D58A0 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D600C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1400D70E4 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D7A00 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D7B24 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1400D80A8 (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     ?CopyFromUser@UMPDOBJ@@QEAAXPEAXQEAX_K@Z @ 0x14034A2C0 (-CopyFromUser@UMPDOBJ@@QEAAXPEAXQEAX_K@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall UMPDDrvQueryFontData(
        struct DHPDEV__ *a1,
        struct _FONTOBJ *a2,
        int a3,
        int a4,
        struct _GLYPHDATA *a5,
        unsigned __int64 a6,
        unsigned int Size)
{
  struct UMPDOBJ *v8; // rbx
  void *v9; // r15
  int v10; // eax
  unsigned int v11; // esi
  size_t v13; // [rsp+20h] [rbp-D8h]
  unsigned int v14; // [rsp+30h] [rbp-C8h] BYREF
  int v15; // [rsp+38h] [rbp-C0h] BYREF
  UMPDOBJ *v16; // [rsp+40h] [rbp-B8h] BYREF
  int v17; // [rsp+48h] [rbp-B0h]
  struct DHPDEV__ *v18; // [rsp+50h] [rbp-A8h]
  struct _GLYPHDATA *v19; // [rsp+58h] [rbp-A0h]
  _DWORD v20[2]; // [rsp+60h] [rbp-98h] BYREF
  __int64 v21; // [rsp+68h] [rbp-90h]
  __int64 v22; // [rsp+70h] [rbp-88h]
  struct DHPDEV__ *v23; // [rsp+78h] [rbp-80h]
  struct _FONTOBJ *v24; // [rsp+80h] [rbp-78h] BYREF
  int v25; // [rsp+88h] [rbp-70h]
  int v26; // [rsp+8Ch] [rbp-6Ch]
  void *v27; // [rsp+90h] [rbp-68h] BYREF
  void *v28; // [rsp+98h] [rbp-60h] BYREF
  unsigned int v29; // [rsp+A0h] [rbp-58h]
  int v30; // [rsp+A4h] [rbp-54h]

  v15 = a4;
  v17 = a3;
  v18 = a1;
  v19 = a5;
  *(_WORD *)((char *)v20 + 1) = 0;
  HIBYTE(v20[0]) = 0;
  v21 = 0LL;
  v30 = 0;
  v14 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v16);
  *(_WORD *)((char *)v20 + 1) = 0;
  HIBYTE(v20[0]) = 0;
  v21 = 0LL;
  v30 = 0;
  v8 = v16;
  if ( !v16 )
    goto LABEL_13;
  v20[1] = 28;
  LOBYTE(v20[0]) = 0;
  v22 = *(_QWORD *)v16;
  v9 = (void *)(a6 & -(__int64)(Size != 0));
  v23 = v18;
  v24 = a2;
  v25 = v17;
  v26 = v15;
  v27 = a5;
  v28 = v9;
  v29 = Size;
  if ( !(unsigned int)UMPDOBJ::ThunkMemBlock(v16, &v27, 0x40u) )
    goto LABEL_13;
  if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v8, &v28, Size) && (unsigned int)UMPDOBJ::pfo(v8, (__m128i **)&v24) )
  {
    PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)&v15, (struct PFT *)a2);
    UMPDReleaseRFONTSem((struct RFONTOBJ *)&v15, v8, 0LL, 0LL, 0LL);
    LODWORD(v13) = 4;
    v10 = UMPDOBJ::Thunk(v8, v20, 0x48u, &v14, v13);
    v11 = v14;
    if ( v10 == -1 )
      v11 = -1;
    UMPDAcquireRFONTSem((struct RFONTOBJ *)&v15, v8, 0, 0, 0LL);
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v15);
    if ( v11 != -1 )
    {
      if ( v9 )
        UMPDOBJ::CopyFromUser(v8, v9, v28, Size);
      if ( a5 )
        UMPDOBJ::CopyFromUser(v8, a5, v27, 0x40uLL);
    }
    XUMPDOBJ::~XUMPDOBJ(&v16);
    return v11;
  }
  else
  {
LABEL_13:
    XUMPDOBJ::~XUMPDOBJ(&v16);
    return 0xFFFFFFFFLL;
  }
}
