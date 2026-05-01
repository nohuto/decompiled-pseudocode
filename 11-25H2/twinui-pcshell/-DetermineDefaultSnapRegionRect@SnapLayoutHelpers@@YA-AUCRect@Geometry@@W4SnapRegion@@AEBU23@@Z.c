/*
 * XREFs of ?DetermineDefaultSnapRegionRect@SnapLayoutHelpers@@YA?AUCRect@Geometry@@W4SnapRegion@@AEBU23@@Z @ 0x18021AB9C
 * Callers:
 *     ?GetSnapRectForDesktopMode@SnapServiceProvider@@AEAAJPEAUIApplicationView@@W4SNAP_LOCATION@@PEAUCRect@Geometry@@@Z @ 0x180585CBC (-GetSnapRectForDesktopMode@SnapServiceProvider@@AEAAJPEAUIApplicationView@@W4SNAP_LOCATION@@PEAU.c)
 *     ?DetermineRectForSnapAction@HotkeyHandler@@AEBA?AUCRect@Geometry@@PEAUISnappedWindow@@PEAUIImmersiveMonitor@@W4SnapAction@1@AEBU23@I@Z @ 0x18058A9C4 (-DetermineRectForSnapAction@HotkeyHandler@@AEBA-AUCRect@Geometry@@PEAUISnappedWindow@@PEAUIImmer.c)
 *     ?CalculateSnapRegion@DefaultSnapLayout@@UEAA?AUCalculatedSnapRegion@@PEAUISnappedWindow@@AEBUSnapRegionCalculationMonitorData@@AEBUSnapRegionCalculationArgs@@@Z @ 0x180591C70 (-CalculateSnapRegion@DefaultSnapLayout@@UEAA-AUCalculatedSnapRegion@@PEAUISnappedWindow@@AEBUSna.c)
 *     ?CalculateSnapRegion@TopBottomSnapLayout@@UEAA?AUCalculatedSnapRegion@@PEAUISnappedWindow@@AEBUSnapRegionCalculationMonitorData@@AEBUSnapRegionCalculationArgs@@@Z @ 0x180591F30 (-CalculateSnapRegion@TopBottomSnapLayout@@UEAA-AUCalculatedSnapRegion@@PEAUISnappedWindow@@AEBUS.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SnapLayoutHelpers::DetermineDefaultSnapRegionRect(__int64 a1, int a2, int *a3)
{
  float v3; // xmm2_4
  const float *v4; // rax
  float v5; // xmm3_4
  int v6; // eax
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  float v11; // xmm0_4
  int v12; // edx
  float v13; // xmm0_4
  int v14; // eax

  v3 = FLOAT_N1_0;
  v4 = (const float *)&unk_1807623C0;
  v5 = FLOAT_N1_0;
  while ( v4 != &FLOAT_N1_0 )
  {
    if ( *(_DWORD *)v4 == a2 )
    {
      v3 = v4[1];
      v5 = v4[2];
      break;
    }
    v4 += 3;
  }
  *(_OWORD *)a1 = *(_OWORD *)a3;
  if ( a2 > 6 )
  {
    v7 = a2 - 7;
    if ( !v7 )
    {
      *(_DWORD *)(a1 + 8) = (int)(float)((float)((float)(a3[2] - *a3) * v3) + (float)*a3);
      goto LABEL_30;
    }
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( v9 != 1 )
          return a1;
        v10 = a3[1];
        v11 = (float)(a3[3] - v10) * v5;
        *(_DWORD *)(a1 + 4) = v10 + (int)v11;
        v6 = (int)v11 + v10 + (int)v11;
        goto LABEL_20;
      }
      v12 = *a3;
      v13 = (float)(a3[2] - *a3) * v3;
      *(_DWORD *)a1 = *a3 + (int)v13;
      v14 = (int)v13 + v12 + (int)v13;
    }
    else
    {
      v14 = (int)(float)((float)((float)(a3[2] - *a3) * v3) + (float)*a3);
    }
    *(_DWORD *)(a1 + 8) = v14;
    return a1;
  }
  switch ( a2 )
  {
    case 6:
LABEL_30:
      *(_DWORD *)(a1 + 4) = (int)(float)((float)a3[3] - (float)((float)(a3[3] - a3[1]) * v5));
      return a1;
    case 1:
    case 2:
    case 3:
      if ( a2 == 1 )
      {
        *(_DWORD *)(a1 + 8) = (int)(float)((float)((float)(a3[2] - *a3) * v3) + (float)*a3);
      }
      else if ( a2 == 3 )
      {
        *(_DWORD *)a1 = (int)(float)((float)a3[2] - (float)((float)(a3[2] - *a3) * v3));
      }
      v6 = (int)(float)((float)((float)(a3[3] - a3[1]) * v5) + (float)a3[1]);
LABEL_20:
      *(_DWORD *)(a1 + 12) = v6;
      return a1;
    case 4:
      *(_DWORD *)a1 = (int)(float)((float)a3[2] - (float)((float)(a3[2] - *a3) * v3));
      break;
    case 5:
      *(_DWORD *)a1 = (int)(float)((float)a3[2] - (float)((float)(a3[2] - *a3) * v3));
      goto LABEL_30;
  }
  return a1;
}
