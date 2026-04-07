/*
 * XREFs of ?GetPVLTarget@CTDBN@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x1800C72B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CTDBN::GetPVLTarget(__int64 a1, int a2)
{
  unsigned int v2; // r8d
  int v3; // ecx
  _DWORD *v4; // r9

  v2 = -1;
  v3 = 0;
  v4 = &`CTDBN::GetSpecialTargetInfo'::`2'::s_rgSpecialTargetLookupTable;
  while ( !v3 )
  {
    if ( ((*v4 ^ a2) & 0xFFF) == 0 )
      return *((unsigned int *)&`CTDBN::GetSpecialTargetInfo'::`2'::s_rgSpecialTargetLookupTable + 1);
    v3 = 1;
    v4 += 2;
  }
  return v2;
}
