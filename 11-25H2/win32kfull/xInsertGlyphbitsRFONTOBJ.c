/*
 * XREFs of xInsertGlyphbitsRFONTOBJ @ 0x1400A9F50
 * Callers:
 *     ?bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1400A9EF8 (-bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 * Callees:
 *     ?QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU_GLYPHBITS@@@Z @ 0x1400AA550 (-QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU.c)
 *     ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1400AE594 (-QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z @ 0x1400FD940 (-pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z.c)
 *     ?bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x140101AB0 (-bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 *     ?vFlushCache@RFONTOBJ@@QEAAXXZ @ 0x14031E81C (-vFlushCache@RFONTOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall xInsertGlyphbitsRFONTOBJ(struct _FONTOBJ **this, struct _GLYPHDATA *a2, __int64 a3)
{
  struct _FONTOBJ *v3; // rdi
  int v4; // ebp
  int iFile; // eax
  __int64 v8; // rbx
  unsigned int iUniq; // eax
  unsigned int pvProducer; // r15d
  void *v12; // rbx
  unsigned int v13; // eax
  struct _GLYPHBITS *v14; // [rsp+40h] [rbp-98h] BYREF
  _QWORD v15[3]; // [rsp+48h] [rbp-90h] BYREF
  _GLYPHDATA v16; // [rsp+60h] [rbp-78h] BYREF

  v3 = *this;
  v4 = a3;
  if ( ((*this)[1].iTTUniq & 0x100000000LL) != 0 )
    return 0LL;
  iFile = v3[1].iFile;
  if ( !iFile )
    return 0LL;
  if ( iFile != 2 )
  {
    v15[0] = *(_QWORD *)&v3[2].iUniq;
    v8 = *(_QWORD *)(v15[0] + 96LL);
    if ( v8 == *(_QWORD *)(*(_QWORD *)(W32GetSessionState(this, a2, a3) + 96) + 24152LL) )
    {
      iUniq = v3[10].iUniq;
      v14 = 0LL;
      v3[10].flFontType = v4 & 1 | 4;
      if ( (unsigned int)PFFOBJ::QueryGlyphMetricsPlusBits(
                           (PFFOBJ *)v15,
                           (struct DHPDEV__ *)(*this)[1].pvConsumer,
                           *this,
                           a2->hg,
                           iUniq,
                           0LL,
                           &v14) != -1 )
      {
        a2->gdf.pgb = v14;
        return 1LL;
      }
    }
    else
    {
      memset_0(&v16, 0, sizeof(v16));
      if ( v3[9].pvProducer <= (PVOID)(v3[9].iTTUniq - *(_QWORD *)&v3[9].cxMax) )
      {
        pvProducer = (unsigned int)v3[9].pvProducer;
        goto LABEL_13;
      }
      pvProducer = PFFOBJ::QueryFontData(
                     (PFFOBJ *)v15,
                     (struct DHPDEV__ *)(*this)[1].pvConsumer,
                     *this,
                     1u,
                     a2->hg,
                     &v16,
                     0LL,
                     0);
      if ( pvProducer != -1 )
      {
LABEL_13:
        while ( 1 )
        {
          v12 = RFONTOBJ::pgbCheckGlyphCache((RFONTOBJ *)this, pvProducer);
          if ( v12 )
            break;
          if ( !v4 )
            return 0LL;
          RFONTOBJ::vFlushCache((RFONTOBJ *)this);
          v4 = 0;
        }
        v13 = PFFOBJ::QueryFontData(
                (PFFOBJ *)v15,
                (struct DHPDEV__ *)(*this)[1].pvConsumer,
                *this,
                1u,
                a2->hg,
                &v16,
                v12,
                pvProducer);
        if ( v13 != -1 )
        {
          a2->gdf.pgb = (GLYPHBITS *)v12;
          *(_QWORD *)&v3[9].cxMax += v13;
          return 1LL;
        }
      }
    }
    return 0LL;
  }
  return RFONTOBJ::bInsertGlyphbitsPath((RFONTOBJ *)this, a2, a3);
}
