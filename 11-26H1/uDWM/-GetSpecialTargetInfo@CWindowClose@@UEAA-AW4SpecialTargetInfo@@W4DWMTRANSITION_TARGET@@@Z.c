/*
 * XREFs of ?GetSpecialTargetInfo@CWindowClose@@UEAA?AW4SpecialTargetInfo@@W4DWMTRANSITION_TARGET@@@Z @ 0x180073ED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowClose::GetSpecialTargetInfo(__int64 a1, int a2)
{
  unsigned int v2; // r8d
  int v3; // ecx
  const char *v4; // r9

  v2 = 0;
  v3 = 0;
  v4 = "U";
  while ( !v3 )
  {
    if ( ((*(_DWORD *)v4 ^ a2) & 0xFFF) == 0 )
      return *(unsigned int *)&`CWindowClose::GetSpecialTargetInfo'::`2'::s_rgSpecialTargetLookupTable[4];
    v3 = 1;
    v4 += 8;
  }
  return v2;
}
