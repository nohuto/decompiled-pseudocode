/*
 * XREFs of GetStaticImmersiveColorPrivForHighContrastState @ 0x18004EE68
 * Callers:
 *     ?GetPillarBoxColor@CImmersiveState@@SAXPEAU_D3DCOLORVALUE@@@Z @ 0x1800B7998 (-GetPillarBoxColor@CImmersiveState@@SAXPEAU_D3DCOLORVALUE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetStaticImmersiveColorPrivForHighContrastState(int a1, char a2)
{
  unsigned int v2; // r8d
  int v4; // ecx

  v2 = -65281;
  if ( (unsigned int)(a1 - 210) <= 0x3F8 )
  {
    v2 = 0;
    if ( a2 )
    {
      v4 = g_ImmersiveHighContrastMappings[a1];
      if ( v4 != 31 )
        return GetSysColor(v4) | 0xFF000000;
    }
    else
    {
      return (unsigned int)dword_1800FB4E8[a1];
    }
  }
  return v2;
}
