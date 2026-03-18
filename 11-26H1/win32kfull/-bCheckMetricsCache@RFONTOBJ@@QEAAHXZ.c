/*
 * XREFs of ?bCheckMetricsCache@RFONTOBJ@@QEAAHXZ @ 0x1400C2500
 * Callers:
 *     xInsertMetricsPlusRFONTOBJ @ 0x1400C0964 (xInsertMetricsPlusRFONTOBJ.c)
 *     xInsertMetricsRFONTOBJ @ 0x1400C21D8 (xInsertMetricsRFONTOBJ.c)
 *     ?bEnsureGlyphCacheBuffer@RFONTOBJ@@QEAAHKPEAPEAU_GLYPHDATA@@PEA_KPEAPEAU_GLYPHBITS@@@Z @ 0x140183DD0 (-bEnsureGlyphCacheBuffer@RFONTOBJ@@QEAAHKPEAPEAU_GLYPHDATA@@PEA_KPEAPEAU_GLYPHBITS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RFONTOBJ::bCheckMetricsCache(RFONTOBJ *this, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  __int64 result; // rax

  v3 = *(_QWORD **)this;
  if ( *(_QWORD *)(*(_QWORD *)this + 512LL)
     + (-(__int64)(*(_DWORD *)(*(_QWORD *)this + 648LL) != 0) & 0xFFFFFFFFFFFFFFD8uLL)
     + 64 <= *(_QWORD *)(*(_QWORD *)this + 520LL) )
    return 1LL;
  result = Win32AllocPool(1824LL, 1667326791LL, a3);
  if ( result )
  {
    *(_QWORD *)result = v3[67];
    v3[65] = result + 1824;
    v3[64] = result + 16;
    v3[67] = result;
    return 1LL;
  }
  return result;
}
