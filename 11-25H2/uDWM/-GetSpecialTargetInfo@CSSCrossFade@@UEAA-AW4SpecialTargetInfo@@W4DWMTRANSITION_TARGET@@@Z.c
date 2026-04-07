/*
 * XREFs of ?GetSpecialTargetInfo@CSSCrossFade@@UEAA?AW4SpecialTargetInfo@@W4DWMTRANSITION_TARGET@@@Z @ 0x1800C7670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSSCrossFade::GetSpecialTargetInfo(__int64 a1, int a2)
{
  unsigned int v2; // ecx
  int v3; // r8d
  _DWORD *v4; // r9

  v2 = 0;
  v3 = 0;
  v4 = `CSSCrossFade::GetSpecialTargetInfo'::`2'::s_rgSpecialTargetLookupTable;
  while ( (unsigned __int64)v3 < 7 )
  {
    if ( ((*v4 ^ a2) & 0xFFF) == 0 )
      return (unsigned int)`CSSCrossFade::GetSpecialTargetInfo'::`2'::s_rgSpecialTargetLookupTable[2 * v3 + 1];
    ++v3;
    v4 += 2;
  }
  return v2;
}
