/*
 * XREFs of _ScaleSystemMetricForDPIWithoutCache @ 0x1401FB3DC
 * Callers:
 *     ?GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z @ 0x140042FDC (-GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z.c)
 *     ?RealGetSystemMetricsForDpi@@YAHHI@Z @ 0x140049A78 (-RealGetSystemMetricsForDpi@@YAHHI@Z.c)
 *     GetWindowBordersForDpiWithCompatFlags2 @ 0x140049D18 (GetWindowBordersForDpiWithCompatFlags2.c)
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x140049E90 (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1401FB300 (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     NtUserScaleSystemMetricForDPIWithoutCache @ 0x1401FB390 (NtUserScaleSystemMetricForDPIWithoutCache.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1401FB3DC (_ScaleSystemMetricForDPIWithoutCache.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     GetDPIServerInfoForDpi @ 0x140041CA8 (GetDPIServerInfoForDpi.c)
 *     GetDPIMETRICSForDpi @ 0x140042E30 (GetDPIMETRICSForDpi.c)
 *     GetDpiDependentMetric @ 0x14004B938 (GetDpiDependentMetric.c)
 *     GetCursorSizesIndexFromDpi @ 0x14004DCB4 (GetCursorSizesIndexFromDpi.c)
 *     GetCursorSizeFromIndex @ 0x14004E6AC (GetCursorSizeFromIndex.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1401FB3DC (_ScaleSystemMetricForDPIWithoutCache.c)
 */

__int64 __fastcall ScaleSystemMetricForDPIWithoutCache(int a1, __int64 a2)
{
  unsigned int v2; // esi
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  __int64 v8; // rax
  INT v9; // edi
  __int64 v10; // rcx
  int CursorSizesIndexFromDpi; // eax
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  int v16; // eax
  int v17; // edi
  int v18; // eax
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  INT DpiDependentMetric; // eax
  __int64 v24; // rdx
  int v25; // ebx
  int v26; // ebx
  int v27; // ebx
  int v28; // ebx
  __int64 v29; // rdx
  int v30; // edi
  int v31; // ebx
  int v32; // ebx
  int v33; // ebx
  int v34; // ebx
  int v35; // ebx
  int v36; // ebx
  __int64 v37; // rcx
  __int64 DPIMETRICSForDpi; // rax
  int v39; // ebx
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rcx
  int v44; // ebx
  int v45; // eax
  int v46; // ebx

  v2 = a2;
  if ( (unsigned int)a1 <= 0x1D && (int)a2 > 0 )
  {
    if ( a1 <= 16 )
    {
      if ( a1 != 16 )
      {
        v4 = a1 - 2;
        if ( v4 )
        {
          v5 = v4 - 5;
          if ( !v5 || (v6 = v5 - 1) == 0 )
          {
            CursorSizesIndexFromDpi = GetCursorSizesIndexFromDpi(a2);
            return (unsigned int)GetCursorSizeFromIndex(CursorSizesIndexFromDpi);
          }
          v7 = v6 - 1;
          if ( v7 )
          {
            if ( (unsigned int)(v7 - 5) <= 1 )
            {
              v8 = Get96DpiServerInfo();
              return (unsigned int)(EngMulDiv(*(_DWORD *)(v8 + 4), v2, 96) + 3);
            }
            goto LABEL_21;
          }
          v10 = 26LL;
        }
        else
        {
          v10 = 13LL;
        }
        return (unsigned int)(ScaleSystemMetricForDPIWithoutCache(v10, a2) + 1);
      }
      v13 = 2 * *(_DWORD *)(GetDPIServerInfoForDpi((unsigned int)a2, a2) + 16);
      v14 = ScaleSystemMetricForDPIWithoutCache(29LL, v2) + v13;
      v15 = 2 * (ScaleSystemMetricForDPIWithoutCache(14LL, v2) + v14);
      v16 = ScaleSystemMetricForDPIWithoutCache(12LL, v2);
      v17 = v16 + v15 + 2 * v16;
      v18 = ScaleSystemMetricForDPIWithoutCache(13LL, v2) + 4;
      return (unsigned int)(v18 + v17);
    }
    v19 = a1 - 17;
    if ( !v19 )
    {
      v46 = ScaleSystemMetricForDPIWithoutCache(29LL, a2);
      v17 = 2 * (ScaleSystemMetricForDPIWithoutCache(15LL, v2) + v46);
      v18 = ScaleSystemMetricForDPIWithoutCache(2LL, v2);
      return (unsigned int)(v18 + v17);
    }
    v20 = v19 - 3;
    if ( v20 )
    {
      v21 = v20 - 1;
      if ( v21 )
      {
        v22 = v21 - 1;
        if ( v22 )
        {
          if ( (unsigned int)(v22 - 5) < 2 )
          {
            DPIMETRICSForDpi = GetDPIMETRICSForDpi(a2);
            return (unsigned int)(((*(_DWORD *)(DPIMETRICSForDpi + 20) + *(_DWORD *)(DPIMETRICSForDpi + 12) + 1) & 0xFFFE)
                                - 1);
          }
LABEL_21:
          DpiDependentMetric = GetDpiDependentMetric(a1, 0x60u);
          v9 = EngMulDiv(DpiDependentMetric, v2, 96);
          if ( a1 <= 13 )
          {
            if ( a1 != 13 )
            {
              if ( a1 )
              {
                v25 = a1 - 1;
                if ( v25 )
                {
                  v26 = v25 - 2;
                  if ( v26 )
                  {
                    v27 = v26 - 1;
                    if ( v27 )
                    {
                      v28 = v27 - 6;
                      if ( v28 )
                      {
                        if ( (unsigned int)(v28 - 1) > 1 )
                          return (unsigned int)v9;
                      }
                    }
                  }
                }
              }
              goto LABEL_29;
            }
            if ( v9 > *(_DWORD *)(GetDPIServerInfoForDpi(v2, v24) + 20) + 2 )
              return (unsigned int)v9;
            v30 = *(_DWORD *)(GetDPIServerInfoForDpi(v2, v29) + 20);
            return (unsigned int)(v30 + 2);
          }
          v31 = a1 - 18;
          if ( v31 )
          {
            v32 = v31 - 1;
            if ( v32 )
            {
              v33 = v32 - 4;
              if ( v33 )
              {
                v34 = v33 - 1;
                if ( !v34 )
                {
                  if ( v9 > *(_DWORD *)(GetDPIMETRICSForDpi(v2) + 44) + 2 )
                    return (unsigned int)v9;
                  v30 = *(_DWORD *)(GetDPIMETRICSForDpi(v2) + 44);
                  return (unsigned int)(v30 + 2);
                }
                v35 = v34 - 1;
                if ( v35 )
                {
                  v36 = v35 - 1;
                  if ( v36 )
                  {
                    if ( v36 == 3 )
                    {
                      if ( v9 >= 100 )
                      {
                        return 100;
                      }
                      else if ( v9 <= 0 )
                      {
                        return 0;
                      }
                    }
                  }
                  else if ( v9 <= *(_DWORD *)(GetDPIMETRICSForDpi(v2) + 28) )
                  {
                    return *(unsigned int *)(GetDPIMETRICSForDpi(v2) + 28);
                  }
                  return (unsigned int)v9;
                }
              }
LABEL_29:
              if ( v9 <= 8 )
                return 8;
              return (unsigned int)v9;
            }
            if ( v9 > (int)ScaleSystemMetricForDPIWithoutCache(6LL, v2) )
              return (unsigned int)v9;
            v37 = 6LL;
          }
          else
          {
            if ( v9 > (int)ScaleSystemMetricForDPIWithoutCache(5LL, v2) )
              return (unsigned int)v9;
            v37 = 5LL;
          }
          return (unsigned int)ScaleSystemMetricForDPIWithoutCache(v37, v2);
        }
        v10 = 24LL;
        return (unsigned int)(ScaleSystemMetricForDPIWithoutCache(v10, a2) + 1);
      }
      v39 = ScaleSystemMetricForDPIWithoutCache(13LL, a2) - 2;
      v40 = ScaleSystemMetricForDPIWithoutCache(6LL, v2);
      v41 = v2;
      if ( v39 < v40 / 2 )
      {
        v42 = 13LL;
        return (unsigned int)(ScaleSystemMetricForDPIWithoutCache(v42, v41) - 2);
      }
      v43 = 6LL;
    }
    else
    {
      v44 = ScaleSystemMetricForDPIWithoutCache(12LL, a2) - 2;
      v45 = ScaleSystemMetricForDPIWithoutCache(5LL, v2);
      v41 = v2;
      if ( v44 < v45 / 2 )
      {
        v42 = 12LL;
        return (unsigned int)(ScaleSystemMetricForDPIWithoutCache(v42, v41) - 2);
      }
      v43 = 5LL;
    }
    return (unsigned int)((int)ScaleSystemMetricForDPIWithoutCache(v43, v41) / 2);
  }
  UserSetLastError(87);
  return 0LL;
}
