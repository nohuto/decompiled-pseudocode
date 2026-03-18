/*
 * XREFs of ?GrepAddFontMemResource@@YAPEAXPEAXKPEAUtagDESIGNVECTOR@@KPEAK@Z @ 0x14021BB1C
 * Callers:
 *     NtGdiAddFontMemResourceEx @ 0x14021B960 (NtGdiAddFontMemResourceEx.c)
 * Callees:
 *     ?vUnmapRemoteFonts@@YAXPEAUFONTFILEVIEW@@@Z @ 0x1400D3E7C (-vUnmapRemoteFonts@@YAXPEAUFONTFILEVIEW@@@Z.c)
 *     cMapRemoteFonts @ 0x14021BC40 (cMapRemoteFonts.c)
 *     ?bCreateFontFileView@@YAHPEBUFONTFILEVIEW@@PEBUtagDOWNLOADFONTHEADER@@KPEAPEAPEAU1@K@Z @ 0x14021C210 (-bCreateFontFileView@@YAHPEBUFONTFILEVIEW@@PEBUtagDOWNLOADFONTHEADER@@KPEAPEAPEAU1@K@Z.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAUFONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x14021C4D0 (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAUFONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 *     ?bInitPrivatePFT@@YAHXZ @ 0x140289030 (-bInitPrivatePFT@@YAHXZ.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void *__fastcall GrepAddFontMemResource(
        struct tagDOWNLOADFONTHEADER *a1,
        int a2,
        struct tagDESIGNVECTOR *a3,
        unsigned int a4,
        unsigned int *a5)
{
  void *v9; // rdi
  int v10; // eax
  struct tagDOWNLOADFONTHEADER *v11; // rdx
  __int64 v13; // rdx
  int v14; // ecx
  __int64 v15; // rbx
  struct FONTFILEVIEW **v16; // [rsp+30h] [rbp-71h] BYREF
  _QWORD v17[3]; // [rsp+38h] [rbp-69h] BYREF
  _BYTE v18[160]; // [rsp+50h] [rbp-51h] BYREF
  struct tagDOWNLOADFONTHEADER *v19; // [rsp+100h] [rbp+5Fh] BYREF
  unsigned int v20; // [rsp+108h] [rbp+67h] BYREF

  memset_0(v18, 0, 0x78uLL);
  v9 = 0LL;
  v19 = a1;
  v16 = 0LL;
  v10 = cMapRemoteFonts(&v19, (unsigned int)(a2 + 16), v18, 2LL);
  v11 = v19;
  if ( v19 && v10 )
  {
    LODWORD(v19) = 1;
    if ( !(unsigned int)bCreateFontFileView((const struct FONTFILEVIEW *)v18, v11, a2 + 16, &v16, 1u)
      || (v15 = *(_QWORD *)(W32GetSessionState(v14, v13) + 96), !*(_QWORD *)(v15 + 20384))
      && !(unsigned int)bInitPrivatePFT() )
    {
LABEL_9:
      vUnmapRemoteFonts((struct FONTFILEVIEW *)v18);
      return v9;
    }
    v17[0] = *(_QWORD *)(v15 + 20384);
    v20 = 0;
    v9 = PUBLIC_PFTOBJ::hLoadMemFonts((PUBLIC_PFTOBJ *)v17, v16, a3, a4, &v20, (int *)&v19);
    if ( !v9 )
    {
      if ( !(_DWORD)v19 )
        return v9;
      goto LABEL_9;
    }
    *a5 = v20;
  }
  return v9;
}
