/*
 * XREFs of NtGdiGetWidthTable @ 0x1400BE340
 * Callers:
 *     <none>
 * Callees:
 *     ??$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x140016F64 (--$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x140017244 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x1400180D0 (-bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1400822A0 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400824A4 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140082A70 (--0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1UAPIDCOBJ@@QEAA@XZ @ 0x140082B04 (--1UAPIDCOBJ@@QEAA@XZ.c)
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVUDCOBJ@@KPEAGK1@Z @ 0x1400BE658 (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVUDCOBJ@@KPEAGK1@Z.c)
 *     ?bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVUDCOBJ@@@Z @ 0x1400BEDC0 (-bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVUDCOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiGetWidthTable(
        HDC a1,
        unsigned int a2,
        const void *a3,
        unsigned int a4,
        void *a5,
        void *a6,
        void *a7)
{
  __int64 v7; // rsi
  unsigned int WidthTable; // edi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int16 *v14; // rbx
  unsigned __int16 *v15; // r14
  __int64 SessionState; // rax
  int v17; // ecx
  int v18; // edx
  unsigned __int16 v20; // dx
  __int64 v21; // rcx
  unsigned __int16 *v22; // rdi
  _DWORD *v23; // [rsp+30h] [rbp-118h] BYREF
  int v24; // [rsp+38h] [rbp-110h] BYREF
  _DWORD v25[2]; // [rsp+40h] [rbp-108h] BYREF
  unsigned __int16 *v26; // [rsp+48h] [rbp-100h]
  void *v27; // [rsp+50h] [rbp-F8h]
  void *v28; // [rsp+58h] [rbp-F0h]
  unsigned __int16 *v29; // [rsp+60h] [rbp-E8h]
  void *v30; // [rsp+68h] [rbp-E0h]
  _QWORD v31[10]; // [rsp+70h] [rbp-D8h] BYREF
  _BYTE v32[48]; // [rsp+C0h] [rbp-88h] BYREF
  __int128 v33; // [rsp+F0h] [rbp-58h] BYREF

  v7 = a4;
  LODWORD(v23) = a2;
  v27 = a5;
  v30 = a6;
  v28 = a7;
  WidthTable = -1;
  v25[0] = -1;
  UAPIDCOBJ::UAPIDCOBJ((UAPIDCOBJ *)v31, a1);
  if ( !(_DWORD)v7 || !v31[0] )
    goto LABEL_23;
  v33 = 0LL;
  v24 = 0;
  v14 = 0LL;
  v26 = 0LL;
  v15 = 0LL;
  if ( (unsigned int)v7 <= 0x9C4000 )
  {
    v14 = (unsigned __int16 *)AllocFreeTmpBuffer((unsigned int)(4 * v7));
    v26 = v14;
  }
  if ( v14 )
  {
    v15 = &v14[v7];
    v29 = v15;
    GreProbeAndReadFromUntrustedVa(v15, 2 * v7, a3, 2 * v7, 2uLL);
  }
  else
  {
    LODWORD(v7) = 0;
  }
  if ( (_DWORD)v7 )
  {
    SessionState = W32GetSessionState(v12, v11, v13);
    EUDCCountRegion::EUDCCountRegion(
      (EUDCCountRegion *)v32,
      (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4872LL));
    v17 = *(unsigned __int16 *)(v31[0] + 12LL);
    v25[0] = 2;
    v25[1] = v17;
    v23 = 0LL;
    if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v23, (struct UDCOBJ *)v31, 0, 2u, (const struct RFONTOBJ::Tag *)v25) )
      GreAcquireSemaphore<5,RFONT *>((__int64)v23);
    if ( !v23 )
      goto LABEL_16;
    v24 = v23[181];
    if ( v23[84] >= 0xFFFu )
      goto LABEL_16;
    v18 = v23[76];
    if ( v18 )
    {
      v20 = 16 * v18;
      v21 = (unsigned int)v7;
      v22 = v14;
      while ( v21 )
      {
        *v22++ = v20;
        --v21;
      }
      WidthTable = 1;
    }
    else
    {
      WidthTable = RFONTOBJ::bGetWidthTable((RFONTOBJ *)&v23, (struct UDCOBJ *)v31, a2, v15, v7, v14);
      if ( WidthTable == -1 )
      {
LABEL_16:
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v23);
        EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v32);
        goto LABEL_17;
      }
    }
    if ( !(unsigned int)RFONTOBJ::bGetWidthData((RFONTOBJ *)&v23, (struct _WIDTHDATA *)&v33, (struct UDCOBJ *)v31) )
      WidthTable = -1;
    goto LABEL_16;
  }
LABEL_17:
  if ( WidthTable != -1 )
  {
    GreProbeAndWriteToUntrustedVa(v27, 2LL * (unsigned int)v7, v14, 2LL * (unsigned int)v7, 2uLL);
    if ( a6 )
      GreProbeAndWriteToUntrustedVa(a6, 0x10uLL, &v33, 0x10uLL, 0x10uLL);
    GreProbeAndWriteToUntrustedVa(v28, 4uLL, &v24, 4uLL, 1uLL);
  }
  if ( v14 )
    FreeTmpBuffer(v14);
LABEL_23:
  UAPIDCOBJ::~UAPIDCOBJ((UAPIDCOBJ *)v31);
  return WidthTable;
}
