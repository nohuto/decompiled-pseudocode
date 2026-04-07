/*
 * XREFs of ?GetCurrentStyle@CTopLevelWindow@@SA?AW4NCAREA_FLAGS@@PEBVCWindowData@@_N@Z @ 0x18000E320
 * Callers:
 *     ?UpdateStyle@CTopLevelWindow@@AEAA_NXZ @ 0x18000E200 (-UpdateStyle@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?GetCaptionButtonBounds@CWindowList@@AEAAJPEAUHWND__@@_NPEAUtagRECT@@@Z @ 0x1800658CC (-GetCaptionButtonBounds@CWindowList@@AEAAJPEAUHWND__@@_NPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?GetMetricsForCaptionBar@CWindowData@@QEBAHH@Z @ 0x18000CC08 (-GetMetricsForCaptionBar@CWindowData@@QEBAHH@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001ABD8 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 */

__int64 __fastcall CTopLevelWindow::GetCurrentStyle(__int64 a1, char a2)
{
  int v2; // esi
  unsigned int v3; // ebx
  int v5; // ebp
  int v6; // r12d
  unsigned int v7; // edx
  int MetricsForCaptionBar; // eax
  int v9; // r15d
  int v10; // r14d
  int v11; // eax
  int v12; // eax
  char v13; // dl
  int v14; // ecx
  char v15; // dl
  __int64 result; // rax

  v2 = 1;
  v3 = 1;
  if ( (*(_BYTE *)(a1 + 672) & 8) != 0 )
  {
    v5 = *(_DWORD *)(a1 + 116);
    v6 = *(_DWORD *)(a1 + 120);
    if ( *(_DWORD *)(a1 + 64)
      || *(_DWORD *)(a1 + 72)
      || *(_DWORD *)(a1 + 68)
      || *(_DWORD *)(a1 + 76)
      || *(_DWORD *)(a1 + 96)
      || *(_DWORD *)(a1 + 104)
      || *(_DWORD *)(a1 + 100)
      || *(_DWORD *)(a1 + 108)
      || a2 )
    {
      v7 = 53;
      if ( (v5 & 0x80u) == 0 )
        v7 = 31;
      MetricsForCaptionBar = CWindowData::GetMetricsForCaptionBar((CWindowData *)a1, v7);
      v9 = *(_DWORD *)(a1 + 72);
      v10 = MetricsForCaptionBar;
      if ( (v5 & 0xC00000) == 0xC00000 )
      {
        v11 = *(_DWORD *)(a1 + 412);
        if ( (v11 & 1) == 0 && v9 >= v10 )
          v3 = 9;
        if ( (v5 & 0x80000) != 0 )
        {
          if ( (v11 & 0x10000) == 0 )
          {
            v3 |= 0x400u;
            if ( (*(_DWORD *)(a1 + 124) & 0x10000) == 0 )
              v3 |= 0x4000u;
          }
          if ( (v6 & 0x80u) == 0 )
          {
            if ( !CWindowData::IsImmersiveWindow((CWindowData *)a1) )
            {
              v12 = *(_DWORD *)(a1 + 412);
              if ( (v12 & 2) == 0 && v9 >= v10 )
                v3 |= 0x10000u;
              if ( (v12 & 4) == 0 && v9 >= v10 )
                v3 |= 0x80u;
              if ( (v12 & 0x10000) == 0 )
              {
                if ( (v5 & 0x30000) != 0 )
                {
                  if ( (v5 & 0x20000) != 0 )
                    v3 |= 0x1300u;
                  if ( (v5 & 0x10000) != 0 )
                    v3 |= 0x2300u;
                }
                else if ( (v6 & 0x400) != 0 )
                {
                  v3 |= 0x8800u;
                }
              }
            }
          }
          else
          {
            v2 = 0;
          }
        }
      }
      v3 |= 2 * v2 + 2;
    }
    if ( (v5 & 0x1000000) != 0 )
      v3 |= 0x20u;
    if ( (v5 & 0x20000000) != 0 )
      v3 |= 0x40000u;
    v13 = *(_BYTE *)(a1 + 672);
    v14 = v3 | 0x40;
    if ( (v13 & 2) == 0 )
      v14 = v3;
    if ( (v6 & 0x400000) != 0 || v13 < 0 )
    {
      v15 = 1;
      v14 |= 0x20000u;
    }
    else
    {
      v15 = 0;
    }
    v3 = v14 | 0x80000;
    if ( ((v6 & 0x2000) != 0) == v15 )
      v3 = v14;
    if ( (v6 & 0x1000) != 0 )
      v3 |= 0x400000u;
  }
  else if ( *((int *)CDesktopManager::s_pDesktopManagerInstance + 8) >= 4 && (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
  {
    v3 = 2097153;
  }
  result = v3 | 4;
  if ( (*(_DWORD *)(a1 + 124) & 0x20000) == 0 )
    return v3;
  return result;
}
