/*
 * XREFs of ?GetRoundedBorderColor@CTopLevelWindow@@AEAA?AU_D3DCOLORVALUE@@XZ @ 0x18004B548
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18007DF14 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x1800204DC (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 *     ?GetAccentColor@CDesktopManager@@QEAA_N_NPEAK@Z @ 0x1800204F0 (-GetAccentColor@CDesktopManager@@QEAA_N_NPEAK@Z.c)
 *     ?HasNonClientArea@CTopLevelWindow@@QEBA_NXZ @ 0x18004B6FC (-HasNonClientArea@CTopLevelWindow@@QEBA_NXZ.c)
 *     ?TreatAsActiveWindow@CTopLevelWindow@@AEBA_NXZ @ 0x18004BE00 (-TreatAsActiveWindow@CTopLevelWindow@@AEBA_NXZ.c)
 */

struct _D3DCOLORVALUE *__fastcall CTopLevelWindow::GetRoundedBorderColor(
        CTopLevelWindow *this,
        struct _D3DCOLORVALUE *__return_ptr retstr)
{
  __int128 v2; // xmm0
  __int64 v5; // rdx
  int v6; // ecx
  __int64 v7; // rdx
  char v8; // r8
  unsigned __int8 v9; // r9
  __m128i v11; // xmm3
  __m128i v12; // xmm1
  signed int SysColor; // eax
  D3DVALUE v14; // xmm1_4
  bool active; // al
  unsigned int v16; // ecx
  unsigned int v17; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  v17 = 0;
  *(_OWORD *)&retstr->r = 0LL;
  v5 = *((_QWORD *)this + 87);
  v6 = *(_DWORD *)(v5 + 188);
  if ( v6 != 1 && (*((_DWORD *)this + 142) & 0x20) == 0 )
  {
    if ( v6 )
    {
      v14 = (float)*(unsigned __int8 *)(v5 + 189) / 255.0;
      retstr->r = (float)*(unsigned __int8 *)(v5 + 188) / 255.0;
      retstr->g = v14;
      retstr->b = (float)BYTE2(v6) / 255.0;
      goto LABEL_16;
    }
    if ( CDesktopManager::IsHighContrastMode() )
    {
      active = CTopLevelWindow::TreatAsActiveWindow(this);
      SysColor = GetSysColor(active ? 9 : 19);
      v11 = _mm_cvtsi32_si128(BYTE1(SysColor));
      v16 = BYTE2(SysColor);
      SysColor = (unsigned __int8)SysColor;
      v12 = _mm_cvtsi32_si128(v16);
      goto LABEL_15;
    }
    if ( (v8 & 0x40) == 0 && (*(_BYTE *)(v7 + 739) & 0x10) == 0 )
      v9 = 0;
    if ( CDesktopManager::GetAccentColor(CDesktopManager::s_pDesktopManagerInstance, v9, &v17)
      && CTopLevelWindow::HasNonClientArea(this) )
    {
      v11 = _mm_cvtsi32_si128(BYTE1(v17));
      v12 = _mm_cvtsi32_si128(BYTE2(v17));
      SysColor = (unsigned __int8)v17;
LABEL_15:
      retstr->r = (float)SysColor / 255.0;
      retstr->g = _mm_cvtepi32_ps(v11).m128_f32[0] / 255.0;
      retstr->b = _mm_cvtepi32_ps(v12).m128_f32[0] / 255.0;
LABEL_16:
      retstr->a = 1.0;
      return retstr;
    }
    if ( (*(_DWORD *)(*((_QWORD *)this + 87) + 124LL) & 0x1000) != 0 )
      v2 = *(__int128 *)&CTopLevelWindow::SNAPPED_BORDER_COLOR.r;
    else
      v2 = *(__int128 *)&CTopLevelWindow::OVERLAPPED_BORDER_COLOR.r;
  }
  *(_OWORD *)&retstr->r = v2;
  return retstr;
}
