/*
 * XREFs of ?GetCurrentStyle@CTopLevelWindow@@SA?AW4NCAREA_FLAGS@@PEBVCWindowData@@_N@Z @ 0x18001F2B4
 * Callers:
 *     ?UpdateStyle@CTopLevelWindow@@AEAA_NXZ @ 0x18001F1A0 (-UpdateStyle@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?GetCaptionButtonBounds@CWindowList@@AEAAJPEAUHWND__@@_NPEAUtagRECT@@@Z @ 0x18002165C (-GetCaptionButtonBounds@CWindowList@@AEAAJPEAUHWND__@@_NPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001AA00 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?GetMetricsForCaptionBar@CWindowData@@QEBAHH@Z @ 0x180020790 (-GetMetricsForCaptionBar@CWindowData@@QEBAHH@Z.c)
 *     ?AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z @ 0x18004E050 (-AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow::GetCurrentStyle(__int64 a1)
{
  unsigned int v1; // ebx
  int v3; // ebp
  unsigned int v4; // r12d
  char v5; // dl
  int MetricsForCaptionBar; // eax
  int v7; // r15d
  int v8; // r14d
  int v9; // eax
  int v10; // edi
  int v11; // eax
  char v12; // dl
  int v13; // ecx
  int v14; // edx
  __int64 result; // rax

  v1 = 1;
  if ( (*(_BYTE *)(a1 + 736) & 8) != 0 )
  {
    v3 = *(_DWORD *)(a1 + 116);
    v4 = *(_DWORD *)(a1 + 120);
    if ( !AreAllMarginsZero((const struct _MARGINS *)(a1 + 64))
      || !AreAllMarginsZero((const struct _MARGINS *)(a1 + 96))
      || v5 )
    {
      MetricsForCaptionBar = CWindowData::GetMetricsForCaptionBar((CWindowData *)a1, (v3 & 0x80u) != 0 ? 53 : 31);
      v7 = *(_DWORD *)(a1 + 72);
      v8 = MetricsForCaptionBar;
      if ( (v3 & 0xC00000) != 0xC00000 )
        goto LABEL_10;
      v9 = *(_DWORD *)(a1 + 412);
      if ( (v9 & 1) == 0 && v7 >= v8 )
        v1 = 9;
      if ( (v3 & 0x80000) != 0 )
      {
        if ( (v9 & 0x10000) == 0 )
        {
          v1 |= 0x400u;
          if ( (*(_DWORD *)(a1 + 124) & 0x10000) == 0 )
            v1 |= 0x4000u;
        }
        if ( (v4 & 0x80u) == 0 )
        {
          v10 = 1;
          if ( !CWindowData::IsImmersiveWindow((CWindowData *)a1) )
          {
            v11 = *(_DWORD *)(a1 + 412);
            if ( (v11 & 2) == 0 && v7 >= v8 )
              v1 |= 0x10000u;
            if ( (v11 & 4) == 0 && v7 >= v8 )
              v1 |= 0x80u;
            if ( (v11 & 0x10000) == 0 )
            {
              if ( (v3 & 0x30000) != 0 )
              {
                if ( (v3 & 0x20000) != 0 )
                  v1 |= 0x1300u;
                if ( (v3 & 0x10000) != 0 )
                  v1 |= 0x2300u;
              }
              else if ( (v4 & 0x400) != 0 )
              {
                v1 |= 0x8800u;
              }
            }
          }
        }
        else
        {
          v10 = 0;
        }
      }
      else
      {
LABEL_10:
        v10 = 1;
      }
      v1 |= 2 * v10 + 2;
    }
    if ( (v3 & 0x1000000) != 0 )
      v1 |= 0x20u;
    if ( (v3 & 0x20000000) != 0 )
      v1 |= 0x40000u;
    v12 = *(_BYTE *)(a1 + 736);
    v13 = v1 | 0x40;
    if ( (v12 & 2) == 0 )
      v13 = v1;
    if ( (v4 & 0x400000) != 0 || v12 < 0 )
    {
      v13 |= 0x20000u;
      v14 = 1;
    }
    else
    {
      v14 = 0;
    }
    v1 = v13 | 0x80000;
    if ( ((v4 >> 13) & 1) == v14 )
      v1 = v13;
    if ( (v4 & 0x1000) != 0 )
      v1 |= 0x400000u;
  }
  else if ( *((int *)CDesktopManager::s_pDesktopManagerInstance + 8) >= 4 && (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
  {
    v1 = 2097153;
  }
  result = v1 | 4;
  if ( (*(_DWORD *)(a1 + 124) & 0x20000) == 0 )
    return v1;
  return result;
}
