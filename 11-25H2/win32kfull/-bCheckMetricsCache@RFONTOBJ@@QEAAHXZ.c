/*
 * XREFs of ?bCheckMetricsCache@RFONTOBJ@@QEAAHXZ @ 0x1400AE508
 * Callers:
 *     xInsertMetricsPlusRFONTOBJ @ 0x1400AAEFC (xInsertMetricsPlusRFONTOBJ.c)
 *     xInsertMetricsRFONTOBJ @ 0x1400AE350 (xInsertMetricsRFONTOBJ.c)
 *     ?bEnsureGlyphCacheBuffer@RFONTOBJ@@QEAAHKPEAPEAU_GLYPHDATA@@PEA_KPEAPEAU_GLYPHBITS@@@Z @ 0x1400FD834 (-bEnsureGlyphCacheBuffer@RFONTOBJ@@QEAAHKPEAPEAU_GLYPHDATA@@PEA_KPEAPEAU_GLYPHBITS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RFONTOBJ::bCheckMetricsCache(RFONTOBJ *this)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_QWORD **)this;
  if ( *(_QWORD *)(*(_QWORD *)this + 512LL)
     + (-(__int64)(*(_DWORD *)(*(_QWORD *)this + 648LL) != 0) & 0xFFFFFFFFFFFFFFD8uLL)
     + 64 <= *(_QWORD *)(*(_QWORD *)this + 520LL) )
    return 1LL;
  result = Win32AllocPool(1824LL, 1667326791LL);
  if ( result )
  {
    *(_QWORD *)result = v1[67];
    v1[65] = result + 1824;
    v1[64] = result + 16;
    v1[67] = result;
    return 1LL;
  }
  return result;
}
