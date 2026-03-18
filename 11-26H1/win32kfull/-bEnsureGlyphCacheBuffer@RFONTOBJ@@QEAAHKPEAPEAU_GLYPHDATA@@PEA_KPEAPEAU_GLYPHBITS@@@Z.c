/*
 * XREFs of ?bEnsureGlyphCacheBuffer@RFONTOBJ@@QEAAHKPEAPEAU_GLYPHDATA@@PEA_KPEAPEAU_GLYPHBITS@@@Z @ 0x140183DD0
 * Callers:
 *     FONTOBJ_bEnsureGlyphCacheBuffer @ 0x140183D8C (FONTOBJ_bEnsureGlyphCacheBuffer.c)
 * Callees:
 *     ?bCheckMetricsCache@RFONTOBJ@@QEAAHXZ @ 0x1400C2500 (-bCheckMetricsCache@RFONTOBJ@@QEAAHXZ.c)
 *     ?pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z @ 0x140183EE0 (-pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z.c)
 *     ?bEnsureAuxCacheBuffer@RFONTOBJ@@QEAAHK@Z @ 0x140184054 (-bEnsureAuxCacheBuffer@RFONTOBJ@@QEAAHK@Z.c)
 *     ?vFlushCache@RFONTOBJ@@QEAAXXZ @ 0x1402925C8 (-vFlushCache@RFONTOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall RFONTOBJ::bEnsureGlyphCacheBuffer(
        RFONTOBJ *this,
        __int64 a2,
        struct _GLYPHDATA **a3,
        unsigned __int64 *a4,
        struct _GLYPHBITS **a5)
{
  __int64 v5; // rbx
  unsigned __int64 v8; // rbp
  struct _GLYPHBITS *v10; // rax
  struct _GLYPHDATA *v12; // rdx
  int v13; // ecx

  v5 = *(_QWORD *)this;
  v8 = (unsigned int)a2;
  if ( (*(_DWORD *)(*(_QWORD *)this + 652LL) & 4) != 0 )
  {
    if ( !a3 )
      goto LABEL_5;
    if ( (unsigned int)RFONTOBJ::bCheckMetricsCache(this, a2, (__int64)a3) )
    {
      *a3 = *(struct _GLYPHDATA **)(v5 + 512);
LABEL_5:
      *a4 = (-(__int64)(*(_DWORD *)(*(_QWORD *)this + 648LL) != 0) & 0xFFFFFFFFFFFFFFD8uLL) + 64;
      while ( 1 )
      {
        v10 = (struct _GLYPHBITS *)RFONTOBJ::pgbCheckGlyphCache(this, v8);
        if ( v10 )
          goto LABEL_7;
        v13 = *(_DWORD *)(v5 + 652);
        if ( (v13 & 1) == 0 )
        {
          if ( (v13 & 2) == 0 )
            return 0LL;
          goto LABEL_7;
        }
        RFONTOBJ::vFlushCache(this);
        *(_DWORD *)(v5 + 652) &= ~1u;
      }
    }
  }
  else if ( a3
         && *(_QWORD *)(v5 + 632) >= 0x10uLL
         && *(_DWORD *)(v5 + 632) < 0xFFFFFFC0
         && (unsigned int)RFONTOBJ::bEnsureAuxCacheBuffer(this, *(_DWORD *)(v5 + 632) + 64) )
  {
    v12 = *(struct _GLYPHDATA **)(*(_QWORD *)this + 616LL);
    *a3 = v12;
    *a4 = 64LL;
    v10 = (struct _GLYPHBITS *)&v12[1];
LABEL_7:
    *a5 = v10;
    return 1LL;
  }
  return 0LL;
}
