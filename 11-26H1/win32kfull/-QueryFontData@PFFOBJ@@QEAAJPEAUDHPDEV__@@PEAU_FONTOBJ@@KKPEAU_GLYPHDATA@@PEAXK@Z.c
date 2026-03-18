/*
 * XREFs of ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1400FC304
 * Callers:
 *     xInsertMetricsPlusRFONTOBJ @ 0x1400C0964 (xInsertMetricsPlusRFONTOBJ.c)
 *     ?bGetDEVICEMETRICS@RFONTOBJ@@QEAAHPEAU_FD_DEVICEMETRICS@@@Z @ 0x1400FB6A0 (-bGetDEVICEMETRICS@RFONTOBJ@@QEAAHPEAU_FD_DEVICEMETRICS@@@Z.c)
 *     ?GrepGetGlyphOutline@@YAKAEAVDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@H@Z @ 0x14010CB48 (-GrepGetGlyphOutline@@YAKAEAVDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@H@Z.c)
 *     ?bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x140183B5C (-bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     xInsertGlyphbitsRFONTOBJ @ 0x1402063E4 (xInsertGlyphbitsRFONTOBJ.c)
 *     ?bInsertPathLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@@Z @ 0x1402440B4 (-bInsertPathLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@@Z.c)
 *     ?bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1402601C0 (-bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 *     ?bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z @ 0x1402912AC (-bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z.c)
 * Callees:
 *     EngUnmapFontFileFD @ 0x1400C2BE0 (EngUnmapFontFileFD.c)
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1400FC44C (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PFFOBJ::QueryFontData(
        PFFOBJ *this,
        struct DHPDEV__ *a2,
        struct _FONTOBJ *a3,
        unsigned int a4,
        unsigned int a5,
        struct _GLYPHDATA *a6,
        _DWORD *a7,
        unsigned int a8)
{
  __int64 (__fastcall *v11)(struct DHPDEV__ *, struct _FONTOBJ *, _QWORD, _QWORD, struct _GLYPHDATA *, _DWORD *, unsigned int); // rdi
  int v12; // edi
  ULONG_PTR *v13; // rbx
  __int64 v14; // rdi
  ULONG_PTR *v16; // rbx
  __int64 v17; // rsi
  int v18; // ecx
  ULONG_PTR *v19; // [rsp+40h] [rbp-68h] BYREF
  unsigned int v20; // [rsp+48h] [rbp-60h]
  _DWORD v21[4]; // [rsp+50h] [rbp-58h] BYREF

  v11 = *(__int64 (__fastcall **)(struct DHPDEV__ *, struct _FONTOBJ *, _QWORD, _QWORD, struct _GLYPHDATA *, _DWORD *, unsigned int))(*(_QWORD *)(*(_QWORD *)this + 96LL) + 2904LL);
  ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)&v19, this);
  v12 = v11(a2, a3, a4, a5, a6, a7, a8);
  if ( v12 < 0 )
    goto LABEL_2;
  if ( a7 && a4 == 1 )
  {
    if ( (unsigned int)v12 < 0x10 )
    {
LABEL_2:
      if ( v20 )
      {
        v13 = v19;
        v14 = v20;
        do
        {
          EngUnmapFontFileFD(*v13++);
          --v14;
        }
        while ( v14 );
      }
      return 0xFFFFFFFFLL;
    }
    v18 = a7[2];
    if ( v18 < 0 || (int)a7[3] < 0 )
    {
      v21[2] = 0;
      v21[0] = 49925596;
      v21[1] = (v18 >= 0) + 7;
      RtlLogUnexpectedCodepath(v21);
      goto LABEL_2;
    }
  }
  if ( v20 )
  {
    v16 = v19;
    v17 = v20;
    do
    {
      EngUnmapFontFileFD(*v16++);
      --v17;
    }
    while ( v17 );
  }
  return (unsigned int)v12;
}
