/*
 * XREFs of ?GetBorderRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N@Z @ 0x180024A4C
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18000D460 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?GetMarginAdjustedWindowRect@CAcrylicSheet@@CA?AUtagRECT@@PEAVCWindowData@@@Z @ 0x180024868 (-GetMarginAdjustedWindowRect@CAcrylicSheet@@CA-AUtagRECT@@PEAVCWindowData@@@Z.c)
 *     ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x1800248D0 (-GetActualWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N00@Z.c)
 *     ?OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ @ 0x1800942A0 (-OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     ?UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z @ 0x1800C5340 (-UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x18000F520 (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
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
  LONG v16; // ecx
  int v17; // r8d
  _DWORD *v18; // rax
  struct tagRECT *result; // rax

  v3 = (*((_BYTE *)this + 584) & 0x20) == 0;
  v5 = retstr;
  v6 = this;
  *retstr = 0LL;
  if ( !v3 )
  {
    v7 = *(__m128i *)((char *)this + 636);
    v8 = *((_DWORD *)this + 161);
    v9 = _mm_cvtsi128_si32(v7);
    v10 = _mm_cvtsi128_si32(_mm_srli_si128(v7, 12));
    v11 = _mm_cvtsi128_si32(_mm_srli_si128(v7, 4));
    goto LABEL_14;
  }
  if ( CDesktopManager::IsHighContrastMode() )
  {
    v9 = 0;
    v11 = 0;
    v10 = 0;
  }
  else
  {
    v13 = *(_DWORD **)(v12 + 712);
    if ( (v13[31] & 0x20000) != 0 )
    {
      v9 = v13[20];
      v11 = v13[21];
      v8 = v13[22];
      v10 = v13[23];
      goto LABEL_14;
    }
    v14 = (v13[87] + 48) / 0x60u;
    v9 = *((_DWORD *)v6 + 147) - v14;
    if ( v9 < 0 )
      v9 = 0;
    v11 = *((_DWORD *)v6 + 148) - v14;
    if ( v11 < 0 )
      v11 = 0;
    v10 = *((_DWORD *)v6 + 150) - v14;
    if ( v10 < 0 )
      v10 = 0;
  }
  v8 = 0;
LABEL_14:
  if ( a3 )
  {
    v15 = (_DWORD *)*((_QWORD *)v6 + 89);
    v5->left = v9 + v15[12];
    v5->top = v8 + v15[13];
    v16 = v15[15] - v10;
    v17 = v15[14];
  }
  else
  {
    v18 = (_DWORD *)*((_QWORD *)v6 + 89);
    v5->left = v9;
    v5->top = v8;
    v16 = v18[15] - v18[13] - v10;
    v17 = v18[14] - v18[12];
  }
  result = v5;
  v5->right = v17 - v11;
  v5->bottom = v16;
  return result;
}
