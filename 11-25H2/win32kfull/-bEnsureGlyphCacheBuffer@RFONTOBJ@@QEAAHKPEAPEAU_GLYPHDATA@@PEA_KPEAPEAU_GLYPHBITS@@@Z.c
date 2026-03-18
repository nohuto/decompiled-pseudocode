/*
 * XREFs of ?bEnsureGlyphCacheBuffer@RFONTOBJ@@QEAAHKPEAPEAU_GLYPHDATA@@PEA_KPEAPEAU_GLYPHBITS@@@Z @ 0x1400FD834
 * Callers:
 *     FONTOBJ_bEnsureGlyphCacheBuffer @ 0x1400FD524 (FONTOBJ_bEnsureGlyphCacheBuffer.c)
 * Callees:
 *     ?bCheckMetricsCache@RFONTOBJ@@QEAAHXZ @ 0x1400AE508 (-bCheckMetricsCache@RFONTOBJ@@QEAAHXZ.c)
 *     ?pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z @ 0x1400FD940 (-pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z.c)
 *     ?bEnsureAuxCacheBuffer@RFONTOBJ@@QEAAHK@Z @ 0x1400FDA98 (-bEnsureAuxCacheBuffer@RFONTOBJ@@QEAAHK@Z.c)
 *     ?vFlushCache@RFONTOBJ@@QEAAXXZ @ 0x14031E81C (-vFlushCache@RFONTOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall RFONTOBJ::bEnsureGlyphCacheBuffer(
        RFONTOBJ *this,
        unsigned int a2,
        struct _GLYPHDATA **a3,
        unsigned __int64 *a4,
        struct _GLYPHBITS **a5)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // rbp
  struct _GLYPHBITS *v10; // rax
  struct _GLYPHDATA *v12; // rdx
  int v13; // ecx

  v6 = *(_QWORD *)this + 512LL;
  v7 = a2;
  if ( (*(_DWORD *)(*(_QWORD *)this + 652LL) & 4) != 0 )
  {
    if ( !a3 )
      goto LABEL_5;
    if ( (unsigned int)RFONTOBJ::bCheckMetricsCache(this) )
    {
      *a3 = *(struct _GLYPHDATA **)v6;
LABEL_5:
      *a4 = (-(__int64)(*(_DWORD *)(*(_QWORD *)this + 648LL) != 0) & 0xFFFFFFFFFFFFFFD8uLL) + 64;
      while ( 1 )
      {
        v10 = (struct _GLYPHBITS *)RFONTOBJ::pgbCheckGlyphCache(this, v7);
        if ( v10 )
          goto LABEL_7;
        v13 = *(_DWORD *)(v6 + 140);
        if ( (v13 & 1) == 0 )
        {
          if ( (v13 & 2) == 0 )
            return 0LL;
          goto LABEL_7;
        }
        RFONTOBJ::vFlushCache(this);
        *(_DWORD *)(v6 + 140) &= ~1u;
      }
    }
  }
  else if ( a3
         && *(_QWORD *)(*(_QWORD *)this + 632LL) >= 0x10uLL
         && *(_DWORD *)(*(_QWORD *)this + 632LL) < 0xFFFFFFC0
         && (unsigned int)RFONTOBJ::bEnsureAuxCacheBuffer(this, *(_DWORD *)(*(_QWORD *)this + 632LL) + 64) )
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
