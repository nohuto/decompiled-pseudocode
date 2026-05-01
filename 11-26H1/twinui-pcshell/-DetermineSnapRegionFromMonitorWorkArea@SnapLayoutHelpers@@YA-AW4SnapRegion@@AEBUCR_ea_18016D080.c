/*
 * XREFs of ?DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA?AW4SnapRegion@@AEBUCRect@Geometry@@0H@Z @ 0x18016D080
 * Callers:
 *     ?RuntimeClassInitialize@CSnappedWindow@@QEAAJPEAUIImmersiveMonitor@@PEAUIApplicationView@@@Z @ 0x18016CC9C (-RuntimeClassInitialize@CSnappedWindow@@QEAAJPEAUIImmersiveMonitor@@PEAUIApplicationView@@@Z.c)
 *     ?DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA?AW4SnapRegion@@AEBUCRect@Geometry@@PEAUIImmersiveMonitor@@@Z @ 0x18016CF88 (-DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA-AW4SnapRegion@@AEBUCRect@Geometry@.c)
 *     ?ComputeMigrationInfo@SnapLayoutHelpers@@YA?AU?$pair@UCRect@Geometry@@W4_SHELLSETWINDOWPOS_STATE@@@std@@AEBUCRect@Geometry@@00H@Z @ 0x1805AB194 (-ComputeMigrationInfo@SnapLayoutHelpers@@YA-AU-$pair@UCRect@Geometry@@W4_SHELLSETWINDOWPOS_STATE.c)
 * Callees:
 *     ?AreQuadrantsEnabled@SnapLayoutHelpers@@YA_NXZ @ 0x18005A4D0 (-AreQuadrantsEnabled@SnapLayoutHelpers@@YA_NXZ.c)
 */

__int64 __fastcall SnapLayoutHelpers::DetermineSnapRegionFromMonitorWorkArea(int *a1, _DWORD *a2, int a3)
{
  int v3; // edi
  unsigned int v4; // r9d
  int v5; // esi
  int v7; // r11d
  int v8; // ebx
  SnapLayoutHelpers *v9; // rcx
  unsigned int v10; // r10d
  unsigned int v11; // eax
  enum _TABLETMODESTATE *v12; // rdx
  unsigned int v13; // r8d
  int v15; // ebx

  v3 = a1[2];
  v4 = 0;
  v5 = *a1;
  if ( *a1 < v3 )
  {
    v7 = a1[1];
    v8 = a1[3];
    if ( v7 < v8 )
    {
      v9 = (SnapLayoutHelpers *)(unsigned int)(2 * a3);
      v10 = a3 + v5 - *a2;
      v11 = a3 + v7 - a2[1];
      v12 = (enum _TABLETMODESTATE *)(unsigned int)(a3 + v3 - a2[2]);
      v13 = a3 + v8 - a2[3];
      if ( v11 > (unsigned int)v9 )
      {
        if ( v13 <= (unsigned int)v9 )
        {
          if ( v10 > (unsigned int)v9 || (unsigned int)v12 > (unsigned int)v9 || v7 <= a2[1] )
          {
            if ( v5 >= *a2 && (unsigned int)v12 <= (unsigned int)v9 && v7 > a2[1] )
            {
              v15 = 5;
              return v15 & (unsigned int)-SnapLayoutHelpers::AreQuadrantsEnabled(v9, v12);
            }
            if ( v10 <= (unsigned int)v9 && v3 < a2[2] && v7 > a2[1] )
            {
              v15 = 7;
              return v15 & (unsigned int)-SnapLayoutHelpers::AreQuadrantsEnabled(v9, v12);
            }
          }
          else
          {
            return 6;
          }
        }
        else if ( v10 <= (unsigned int)v9 && (unsigned int)v12 <= (unsigned int)v9 )
        {
          return 10;
        }
      }
      else
      {
        if ( v10 <= (unsigned int)v9 )
        {
          if ( (unsigned int)v12 <= (unsigned int)v9 && v8 < a2[3] )
            return 2;
          if ( v3 < a2[2] && v8 < a2[3] && v13 > (unsigned int)v9 )
          {
            v15 = 1;
            return v15 & (unsigned int)-SnapLayoutHelpers::AreQuadrantsEnabled(v9, v12);
          }
        }
        if ( v5 > *a2 && (unsigned int)v12 <= (unsigned int)v9 && v8 < a2[3] && v13 > (unsigned int)v9 )
        {
          v15 = 3;
          return v15 & (unsigned int)-SnapLayoutHelpers::AreQuadrantsEnabled(v9, v12);
        }
        if ( v10 > (unsigned int)v9 || v13 > (unsigned int)v9 || v3 >= a2[2] )
        {
          if ( v5 <= *a2 || (unsigned int)v12 > (unsigned int)v9 )
          {
            if ( v13 <= (unsigned int)v9 && (unsigned int)v12 > (unsigned int)v9 && v10 > (unsigned int)v9 )
              return 9;
          }
          else if ( v13 <= (unsigned int)v9 )
          {
            return 4;
          }
        }
        else
        {
          return 8;
        }
      }
    }
  }
  return v4;
}
