/*
 * XREFs of ?GetPVLTarget@CSlideIn@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x1800C0FE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSlideIn::GetPVLTarget(__int64 a1, int a2)
{
  unsigned int v2; // r9d
  int v3; // ecx
  _DWORD *v4; // r8

  v2 = -1;
  v3 = 0;
  v4 = &`CSlideIn::GetPVLTarget'::`2'::s_rgPVLTargetLookupTable;
  while ( !v3 )
  {
    if ( ((*v4 ^ a2) & 0xFFF) == 0 )
      return *((unsigned int *)&`CSlideIn::GetPVLTarget'::`2'::s_rgPVLTargetLookupTable + 1);
    v3 = 1;
    v4 += 2;
  }
  return v2;
}
