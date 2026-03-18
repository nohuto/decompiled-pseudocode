/*
 * XREFs of ?pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z @ 0x140183EE0
 * Callers:
 *     xInsertMetricsPlusRFONTOBJ @ 0x1400C0964 (xInsertMetricsPlusRFONTOBJ.c)
 *     ?bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x140183B5C (-bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?bEnsureGlyphCacheBuffer@RFONTOBJ@@QEAAHKPEAPEAU_GLYPHDATA@@PEA_KPEAPEAU_GLYPHBITS@@@Z @ 0x140183DD0 (-bEnsureGlyphCacheBuffer@RFONTOBJ@@QEAAHKPEAPEAU_GLYPHDATA@@PEA_KPEAPEAU_GLYPHBITS@@@Z.c)
 *     xInsertGlyphbitsRFONTOBJ @ 0x1402063E4 (xInsertGlyphbitsRFONTOBJ.c)
 *     ?bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1402601C0 (-bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 * Callees:
 *     PALLOCNOZ @ 0x140184030 (PALLOCNOZ.c)
 */

unsigned __int64 __fastcall RFONTOBJ::pgbCheckGlyphCache(RFONTOBJ *this, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 v4; // r8
  __int64 *v6; // rdx
  unsigned __int64 v7; // rdi
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // rcx

  v2 = *(_QWORD *)this;
  v4 = *(_QWORD *)(*(_QWORD *)this + 584LL);
  if ( v4 + a2 >= v4 )
  {
    if ( v4 + a2 <= *(_QWORD *)(v2 + 592) )
      return v4;
    v6 = *(__int64 **)(v2 + 576);
    if ( v6 && (v11 = *v6) != 0 )
    {
      v12 = *(unsigned int *)(v2 + 552) - 8LL;
      *(_QWORD *)(v2 + 576) = v11;
      v13 = v11 + v12;
      v4 = v11 + 8;
      *(_QWORD *)(v2 + 584) = v11 + 8;
      *(_QWORD *)(v2 + 592) = v13;
      if ( v11 + a2 + 8 <= v13 )
        return v4;
    }
    else if ( (*(_DWORD *)(v2 + 84) & 1) == 0 && *(_DWORD *)(v2 + 560) < *(_DWORD *)(v2 + 556) )
    {
      v7 = *(unsigned int *)((*(_DWORD *)(v2 + 560) != 0 ? 4 : 0) + v2 + 548);
      if ( a2 + 8 <= v7 )
      {
        v8 = (_QWORD *)PALLOCNOZ((unsigned int)v7, 543319879LL);
        if ( v8 )
        {
          ++*(_DWORD *)(v2 + 560);
          v9 = *(_QWORD **)(v2 + 576);
          if ( v9 )
            *v9 = v8;
          else
            *(_QWORD *)(v2 + 568) = v8;
          *(_QWORD *)(v2 + 576) = v8;
          *v8 = 0LL;
          v10 = *(_QWORD *)(v2 + 576);
          v4 = v10 + 8;
          *(_QWORD *)(v2 + 584) = v10 + 8;
          *(_QWORD *)(v2 + 592) = v7 + v10 - 8;
          return v4;
        }
        EngSetLastError(8u);
      }
    }
  }
  return 0LL;
}
