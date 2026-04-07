/*
 * XREFs of ?GetPVLTarget@CGrowPanel@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x1800C0D60
 * Callers:
 *     ?_WindowEnumCallback@CGrowPanel@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800C6D40 (-_WindowEnumCallback@CGrowPanel@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CGrowPanel::GetPVLTarget(__int64 a1, int a2)
{
  unsigned int v2; // r9d
  unsigned int v3; // ecx
  unsigned int *v4; // r8

  v2 = -1;
  v3 = 0;
  v4 = `CGrowPanel::GetPVLTarget'::`2'::s_rgPVLTargetLookupTable;
  while ( v3 < 2 )
  {
    if ( ((*v4 ^ a2) & 0xFFF) == 0 )
      return `CGrowPanel::GetPVLTarget'::`2'::s_rgPVLTargetLookupTable[2 * v3 + 1];
    ++v3;
    v4 += 2;
  }
  return v2;
}
