/*
 * XREFs of ?GetBorderRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N@Z @ 0x180011884
 * Callers:
 *     ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x18000B03C (-GetActualWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N00@Z.c)
 *     ?GetMarginAdjustedWindowRect@CAcrylicSheet@@CA?AUtagRECT@@PEAVCWindowData@@@Z @ 0x18000F7E8 (-GetMarginAdjustedWindowRect@CAcrylicSheet@@CA-AUtagRECT@@PEAVCWindowData@@@Z.c)
 *     ?OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ @ 0x1800116B8 (-OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18007DF14 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z @ 0x1800BEC2C (-UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x1800204DC (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 */

struct tagRECT *__fastcall CTopLevelWindow::GetBorderRect(
        CTopLevelWindow *this,
        struct tagRECT *__return_ptr retstr,
        char a3)
{
  bool v3; // zf
  struct tagRECT *v5; // r9
  CTopLevelWindow *v6; // r10
  __m128i v7; // xmm2
  LONG v8; // edi
  int v9; // ebx
  int v10; // r8d
  int v11; // r11d
  __int64 v12; // rcx
  _DWORD *v13; // rcx
  unsigned int v14; // edx
  _DWORD *v15; // rdx
  int v16; // eax
  int v17; // ecx

  v3 = (*((_BYTE *)this + 568) & 0x20) == 0;
  *retstr = 0LL;
  v5 = retstr;
  v6 = this;
  if ( v3 )
  {
    if ( CDesktopManager::IsHighContrastMode() )
    {
      v9 = 0;
      v8 = 0;
      v11 = 0;
      v10 = 0;
    }
    else
    {
      v13 = *(_DWORD **)(v12 + 696);
      if ( (v13[31] & 0x20000) != 0 )
      {
        v9 = v13[20];
        v11 = v13[21];
        v8 = v13[22];
        v10 = v13[23];
      }
      else
      {
        v9 = 0;
        v14 = (v13[87] + 48) / 0x60u;
        if ( (int)(*((_DWORD *)v6 + 143) - v14) >= 0 )
          v9 = *((_DWORD *)v6 + 143) - v14;
        v8 = 0;
        v11 = 0;
        v10 = 0;
        if ( (int)(*((_DWORD *)v6 + 144) - v14) >= 0 )
          v11 = *((_DWORD *)v6 + 144) - v14;
        if ( (int)(*((_DWORD *)v6 + 146) - v14) >= 0 )
          v10 = *((_DWORD *)v6 + 146) - v14;
      }
    }
  }
  else
  {
    v7 = *(__m128i *)((char *)this + 620);
    v8 = *((_DWORD *)this + 157);
    v9 = _mm_cvtsi128_si32(v7);
    v10 = _mm_cvtsi128_si32(_mm_srli_si128(v7, 12));
    v11 = _mm_cvtsi128_si32(_mm_srli_si128(v7, 4));
  }
  v15 = (_DWORD *)*((_QWORD *)v6 + 87);
  v16 = v15[15];
  if ( a3 )
  {
    v5->left = v9 + v15[12];
    v5->top = v8 + v15[13];
    v17 = v15[14];
  }
  else
  {
    v16 -= v15[13];
    v17 = v15[14] - v15[12];
    v5->left = v9;
    v5->top = v8;
  }
  v5->right = v17 - v11;
  v5->bottom = v16 - v10;
  return v5;
}
