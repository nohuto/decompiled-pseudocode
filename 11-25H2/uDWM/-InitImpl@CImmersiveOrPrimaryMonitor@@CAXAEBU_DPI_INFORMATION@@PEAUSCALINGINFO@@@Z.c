/*
 * XREFs of ?InitImpl@CImmersiveOrPrimaryMonitor@@CAXAEBU_DPI_INFORMATION@@PEAUSCALINGINFO@@@Z @ 0x18005316C
 * Callers:
 *     ?Init@CImmersiveOrPrimaryMonitor@@AEAAJPEAUHMONITOR__@@@Z @ 0x1800530C8 (-Init@CImmersiveOrPrimaryMonitor@@AEAAJPEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ?LoadScalingOverrides@@YAXXZ @ 0x180053274 (-LoadScalingOverrides@@YAXXZ.c)
 *     ?_GetLegacyModernScaleFactor@@YA?AW4DEVICE_SCALE_FACTOR@@K@Z @ 0x180053340 (-_GetLegacyModernScaleFactor@@YA-AW4DEVICE_SCALE_FACTOR@@K@Z.c)
 *     ?GetLegacyPhoneScaleFactor@@YA?AW4DEVICE_SCALE_FACTOR@@UtagSIZE@@0@Z @ 0x1800EA4E4 (-GetLegacyPhoneScaleFactor@@YA-AW4DEVICE_SCALE_FACTOR@@UtagSIZE@@0@Z.c)
 */

void __fastcall CImmersiveOrPrimaryMonitor::InitImpl(struct tagSIZE *a1, struct SCALINGINFO *a2)
{
  enum DEVICE_SCALE_FACTOR cy; // eax
  enum DEVICE_SCALE_FACTOR LegacyModernScaleFactor; // eax
  int v6; // ecx

  LoadScalingOverrides();
  cy = g_legacyCompatScalingOverride;
  if ( g_legacyCompatScalingOverride )
  {
    *(_DWORD *)a2 = g_legacyCompatScalingOverride;
  }
  else
  {
    *(_DWORD *)a2 = a1[1].cx;
    cy = a1[1].cy;
  }
  *((_DWORD *)a2 + 2) = cy;
  if ( (unsigned int)QuirkIsEnabled(589832LL) )
  {
    *(_DWORD *)a2 = _GetLegacyModernScaleFactor(a1[1].cx);
    LegacyModernScaleFactor = _GetLegacyModernScaleFactor(a1[1].cy);
LABEL_5:
    *((_DWORD *)a2 + 2) = LegacyModernScaleFactor;
    goto LABEL_6;
  }
  if ( (unsigned int)QuirkIsEnabled(589831LL) )
  {
    LegacyModernScaleFactor = GetLegacyPhoneScaleFactor(a1[4], a1[5]);
    *(_DWORD *)a2 = LegacyModernScaleFactor;
    goto LABEL_5;
  }
  if ( (unsigned int)QuirkIsEnabled(589834LL) )
  {
    v6 = *(_DWORD *)a2;
    switch ( *(_DWORD *)a2 )
    {
      case 0xAF:
        v6 = 150;
        break;
      case 0xE1:
        v6 = 200;
        break;
      case 0x15E:
        v6 = 300;
        break;
    }
    *(_DWORD *)a2 = v6;
  }
LABEL_6:
  *((_DWORD *)a2 + 3) = (a1[5].cx + a1[5].cy) / 2;
  *((_DWORD *)a2 + 7) = a1[4].cx;
  *((_DWORD *)a2 + 6) = a1[4].cy;
  *((_DWORD *)a2 + 4) = a1[3].cx;
  *((_DWORD *)a2 + 5) = a1[3].cy;
}
