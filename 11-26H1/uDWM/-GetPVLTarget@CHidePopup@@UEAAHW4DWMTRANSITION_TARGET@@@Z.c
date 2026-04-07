/*
 * XREFs of ?GetPVLTarget@CHidePopup@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x1800C0DA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHidePopup::GetPVLTarget(__int64 a1, int a2)
{
  unsigned int v2; // r9d
  unsigned int v3; // ecx
  unsigned int *v4; // r8

  v2 = -1;
  v3 = 0;
  v4 = `CHidePopup::GetPVLTarget'::`2'::s_rgPVLTargetLookupTable;
  while ( v3 < 5 )
  {
    if ( ((*v4 ^ a2) & 0xFFF) == 0 )
      return `CHidePopup::GetPVLTarget'::`2'::s_rgPVLTargetLookupTable[2 * v3 + 1];
    ++v3;
    v4 += 2;
  }
  return v2;
}
