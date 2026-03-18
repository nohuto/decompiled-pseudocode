/*
 * XREFs of ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1400B0A5C
 * Callers:
 *     ?QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU_GLYPHBITS@@@Z @ 0x1400AA550 (-QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU.c)
 *     ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1400AE594 (-QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?GrepGetGlyphOutline@@YAKAEAVUDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@HW4EntryPoint@RFONTOBJ@@@Z @ 0x1400AEFB4 (-GrepGetGlyphOutline@@YAKAEAVUDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@HW4EntryPoint@RFONTOBJ.c)
 *     ?QueryAdvanceWidths@PFFOBJ@@QEAAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z @ 0x1400B09BC (-QueryAdvanceWidths@PFFOBJ@@QEAAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z.c)
 *     ?pvFileUMPD@RFONTOBJ@@QEAAPEAXPEAKPEAPEAX@Z @ 0x1400D6D6C (-pvFileUMPD@RFONTOBJ@@QEAAPEAXPEAKPEAPEAX@Z.c)
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x140108DD8 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     ?QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z @ 0x1401790F8 (-QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z.c)
 *     ?GetTrueTypeFile@PFFOBJ@@QEAAPEAX_KPEAK@Z @ 0x1401EC3DC (-GetTrueTypeFile@PFFOBJ@@QEAAPEAX_KPEAK@Z.c)
 *     FONTOBJ_pQueryGlyphAttrs @ 0x140309D90 (FONTOBJ_pQueryGlyphAttrs.c)
 *     ?FontManagement@PFFOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x140320580 (-FontManagement@PFFOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 * Callees:
 *     EngMapFontFileFDInternal @ 0x1400B2070 (EngMapFontFileFDInternal.c)
 *     EngUnmapFontFileFD @ 0x1400B2490 (EngUnmapFontFileFD.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400D8AF0 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

ATTACHOBJ *__fastcall ATTACHOBJ::ATTACHOBJ(ATTACHOBJ *this, struct PFFOBJ *a2)
{
  __int64 v4; // r8
  unsigned int v5; // esi
  __int64 i; // rcx
  ULONG_PTR *v7; // rdi
  ULONG_PTR v8; // rdx
  __int64 v9; // rbp
  __int64 j; // rbx

  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  v4 = *(_QWORD *)a2;
  if ( _bittest((const signed __int32 *)(*(_QWORD *)(*(_QWORD *)a2 + 96LL) + 40LL), 0xDu) )
  {
    v5 = *(_DWORD *)(v4 + 36);
    if ( v5 <= 3 )
    {
      if ( (*(_DWORD *)(v4 + 52) & 0x1000) != 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, v4);
      if ( _bittest((const signed __int32 *)(*(_QWORD *)a2 + 52LL), 0xDu) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, v4);
      for ( i = 0LL; (unsigned int)i < v5; i = (unsigned int)(i + 1) )
      {
        v7 = *(ULONG_PTR **)(*(_QWORD *)a2 + 208LL);
        v8 = v7[i];
        if ( !*(_BYTE *)(v8 + 45) && *(_BYTE *)(v8 + 44) && !*(_QWORD *)(v8 + 48) )
        {
          for ( j = 0LL; ; j = (unsigned int)(j + 1) )
          {
            if ( (unsigned int)j >= v5 )
            {
              *(_QWORD *)this = *(_QWORD *)(*(_QWORD *)a2 + 208LL);
              *((_DWORD *)this + 2) = v5;
              return this;
            }
            v9 = (unsigned int)j;
            if ( !(unsigned int)EngMapFontFileFDInternal((struct FILEVIEW *)v7[j]) )
              break;
          }
          if ( (_DWORD)j )
          {
            do
            {
              EngUnmapFontFileFD(*v7++);
              --v9;
            }
            while ( v9 );
          }
          return this;
        }
      }
    }
  }
  return this;
}
