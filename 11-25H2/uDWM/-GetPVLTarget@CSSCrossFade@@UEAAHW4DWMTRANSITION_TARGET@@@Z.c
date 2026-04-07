/*
 * XREFs of ?GetPVLTarget@CSSCrossFade@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x1800C70E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSSCrossFade::GetPVLTarget(__int64 a1, int a2)
{
  unsigned int v2; // r9d
  int v3; // ecx
  unsigned int *v4; // r8

  v2 = -1;
  v3 = 0;
  v4 = `CSSCrossFade::GetPVLTarget'::`2'::s_rgPVLTargetLookupTable;
  while ( (unsigned __int64)v3 < 7 )
  {
    if ( ((*v4 ^ a2) & 0xFFF) == 0 )
      return `CSSCrossFade::GetPVLTarget'::`2'::s_rgPVLTargetLookupTable[2 * v3 + 1];
    ++v3;
    v4 += 2;
  }
  return v2;
}
