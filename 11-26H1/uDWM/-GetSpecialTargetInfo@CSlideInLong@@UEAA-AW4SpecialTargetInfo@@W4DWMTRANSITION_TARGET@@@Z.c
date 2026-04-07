/*
 * XREFs of ?GetSpecialTargetInfo@CSlideInLong@@UEAA?AW4SpecialTargetInfo@@W4DWMTRANSITION_TARGET@@@Z @ 0x1800768B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSlideInLong::GetSpecialTargetInfo(__int64 a1, int a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // ecx
  _DWORD *v4; // r9

  v2 = 0;
  v3 = 0;
  v4 = `CSlideInLong::GetSpecialTargetInfo'::`2'::s_rgSpecialTargetLookupTable;
  while ( v3 < 5 )
  {
    if ( ((*v4 ^ a2) & 0xFFF) == 0 )
      return (unsigned int)`CSlideInLong::GetSpecialTargetInfo'::`2'::s_rgSpecialTargetLookupTable[2 * v3 + 1];
    ++v3;
    v4 += 2;
  }
  return v2;
}
