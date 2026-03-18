/*
 * XREFs of ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1400FC44C
 * Callers:
 *     ?bInitCache@RFONTOBJ@@QEAAHK@Z @ 0x1400FB968 (-bInitCache@RFONTOBJ@@QEAAHK@Z.c)
 *     ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1400FC304 (-QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU_GLYPHBITS@@@Z @ 0x1400FC8C8 (-QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU.c)
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x140101DB4 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     ?GrepGetGlyphOutline@@YAKAEAVDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@H@Z @ 0x14010CB48 (-GrepGetGlyphOutline@@YAKAEAVDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@H@Z.c)
 *     ?QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z @ 0x1401DD3CC (-QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z.c)
 *     ?GetTrueTypeFile@PFFOBJ@@QEAAPEAX_KPEAK@Z @ 0x1402200D4 (-GetTrueTypeFile@PFFOBJ@@QEAAPEAX_KPEAK@Z.c)
 *     FONTOBJ_pQueryGlyphAttrs @ 0x1403206C0 (FONTOBJ_pQueryGlyphAttrs.c)
 *     ?FontManagement@PFFOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x14033A800 (-FontManagement@PFFOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 * Callees:
 *     EngMapFontFileFDInternal @ 0x1400D09E8 (EngMapFontFileFDInternal.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400FD974 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?ResetFontFileView@@YAXPEAPEAUFONTFILEVIEW@@KPEAPEAXPEAK@Z @ 0x140326D64 (-ResetFontFileView@@YAXPEAPEAUFONTFILEVIEW@@KPEAPEAXPEAK@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

ATTACHOBJ *__fastcall ATTACHOBJ::ATTACHOBJ(ATTACHOBJ *this, struct PFFOBJ *a2)
{
  __int64 v4; // r8
  unsigned int v5; // esi
  __int64 i; // rcx
  struct FONTFILEVIEW **v7; // r15
  struct FONTFILEVIEW *v8; // rdx
  __int64 v9; // rbx
  unsigned int v11[2]; // [rsp+20h] [rbp-48h] BYREF
  int v12; // [rsp+28h] [rbp-40h]
  void *v13[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v14; // [rsp+40h] [rbp-28h]

  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  v4 = *(_QWORD *)a2;
  if ( _bittest((const signed __int32 *)(*(_QWORD *)(*(_QWORD *)a2 + 96LL) + 40LL), 0xDu) )
  {
    v5 = *(_DWORD *)(v4 + 36);
    if ( v5 <= 3 )
    {
      if ( (*(_DWORD *)(v4 + 52) & 0x1000) != 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
      if ( _bittest((const signed __int32 *)(*(_QWORD *)a2 + 52LL), 0xDu) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
      for ( i = 0LL; (unsigned int)i < v5; i = (unsigned int)(i + 1) )
      {
        v7 = *(struct FONTFILEVIEW ***)(*(_QWORD *)a2 + 208LL);
        v8 = v7[i];
        if ( !*((_BYTE *)v8 + 45) && *((_BYTE *)v8 + 44) && !*((_QWORD *)v8 + 6) )
        {
          *(_OWORD *)v13 = 0LL;
          v14 = 0LL;
          v9 = 0LL;
          *(_QWORD *)v11 = 0LL;
          v12 = 0;
          while ( 1 )
          {
            if ( (unsigned int)v9 >= v5 )
            {
              *(_QWORD *)this = *(_QWORD *)(*(_QWORD *)a2 + 208LL);
              *((_DWORD *)this + 2) = v5;
              return this;
            }
            if ( !(unsigned int)EngMapFontFileFDInternal(v7[v9], &v13[v9], &v11[v9], 0) )
              break;
            v9 = (unsigned int)(v9 + 1);
          }
          ResetFontFileView(v7, v9, v13, v11);
          return this;
        }
      }
    }
  }
  return this;
}
