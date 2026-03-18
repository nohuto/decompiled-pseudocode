/*
 * XREFs of ?bEnsureAuxCacheBuffer@RFONTOBJ@@QEAAHK@Z @ 0x140184054
 * Callers:
 *     ?bEnsureGlyphCacheBuffer@RFONTOBJ@@QEAAHKPEAPEAU_GLYPHDATA@@PEA_KPEAPEAU_GLYPHBITS@@@Z @ 0x140183DD0 (-bEnsureGlyphCacheBuffer@RFONTOBJ@@QEAAHKPEAPEAU_GLYPHDATA@@PEA_KPEAPEAU_GLYPHBITS@@@Z.c)
 *     ?bInsertPathLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@@Z @ 0x1402440B4 (-bInsertPathLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@@Z.c)
 * Callees:
 *     PALLOCMEM @ 0x140183124 (PALLOCMEM.c)
 */

__int64 __fastcall RFONTOBJ::bEnsureAuxCacheBuffer(RFONTOBJ *this, unsigned int a2)
{
  __int64 v3; // rsi
  __int64 v4; // rcx
  void *v6; // rcx
  __int64 v7; // rax

  v3 = a2;
  v4 = *(_QWORD *)this;
  if ( *(_QWORD *)(v4 + 624) >= (unsigned __int64)a2 )
    return 1LL;
  v6 = *(void **)(v4 + 616);
  if ( v6 )
    Win32FreePool(v6);
  *(_QWORD *)(*(_QWORD *)this + 616LL) = PALLOCMEM(v3, 1667326791LL);
  v7 = *(_QWORD *)this;
  if ( *(_QWORD *)(*(_QWORD *)this + 616LL) )
  {
    *(_QWORD *)(v7 + 624) = v3;
    return 1LL;
  }
  *(_QWORD *)(v7 + 624) = 0LL;
  return 0LL;
}
