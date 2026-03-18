/*
 * XREFs of ?GrepAddFontMemResource@@YAPEAXPEAXKPEAUtagDESIGNVECTOR@@KPEAK@Z @ 0x14010D2A4
 * Callers:
 *     NtGdiAddFontMemResourceEx @ 0x14010D100 (NtGdiAddFontMemResourceEx.c)
 * Callees:
 *     ?vUnmapRemoteFonts@@YAXPEAUFONTFILEVIEW@@@Z @ 0x14010C630 (-vUnmapRemoteFonts@@YAXPEAUFONTFILEVIEW@@@Z.c)
 *     cMapRemoteFonts @ 0x14010D3C8 (cMapRemoteFonts.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAUFONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x14010DAC8 (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAUFONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 *     ?bCreateFontFileView@@YAHPEBUFONTFILEVIEW@@PEBUtagDOWNLOADFONTHEADER@@KPEAPEAPEAU1@K@Z @ 0x14010E5AC (-bCreateFontFileView@@YAHPEBUFONTFILEVIEW@@PEBUtagDOWNLOADFONTHEADER@@KPEAPEAPEAU1@K@Z.c)
 *     ?bInitPrivatePFT@@YAHXZ @ 0x1402672E0 (-bInitPrivatePFT@@YAHXZ.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
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
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rbx
  __int64 v16; // rax
  struct FONTFILEVIEW **v18; // [rsp+30h] [rbp-71h] BYREF
  _QWORD v19[3]; // [rsp+38h] [rbp-69h] BYREF
  _BYTE v20[160]; // [rsp+50h] [rbp-51h] BYREF
  struct tagDOWNLOADFONTHEADER *v21; // [rsp+100h] [rbp+5Fh] BYREF
  unsigned int v22; // [rsp+108h] [rbp+67h] BYREF

  memset_0(v20, 0, 0x78uLL);
  v9 = 0LL;
  v21 = a1;
  v18 = 0LL;
  v10 = cMapRemoteFonts(&v21, (unsigned int)(a2 + 16), v20, 2LL);
  v11 = v21;
  if ( v21 && v10 )
  {
    LODWORD(v21) = 1;
    if ( !(unsigned int)bCreateFontFileView((const struct FONTFILEVIEW *)v20, v11, a2 + 16, &v18, 1u)
      || (v15 = *(_QWORD *)(W32GetSessionState(v13, v12, v14) + 96), !*(_QWORD *)(v15 + 20408))
      && !(unsigned int)bInitPrivatePFT() )
    {
LABEL_9:
      vUnmapRemoteFonts((struct FONTFILEVIEW *)v20);
      return v9;
    }
    v16 = *(_QWORD *)(v15 + 20408);
    v22 = 0;
    v19[0] = v16;
    v9 = PUBLIC_PFTOBJ::hLoadMemFonts((PUBLIC_PFTOBJ *)v19, v18, a3, a4, &v22, (int *)&v21);
    if ( !v9 )
    {
      if ( !(_DWORD)v21 )
        return v9;
      goto LABEL_9;
    }
    *a5 = v22;
  }
  return v9;
}
