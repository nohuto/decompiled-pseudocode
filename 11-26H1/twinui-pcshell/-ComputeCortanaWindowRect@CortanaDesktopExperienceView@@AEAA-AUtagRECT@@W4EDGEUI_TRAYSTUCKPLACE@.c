/*
 * XREFs of ?ComputeCortanaWindowRect@CortanaDesktopExperienceView@@AEAA?AUtagRECT@@W4EDGEUI_TRAYSTUCKPLACE@@HHU2@_N@Z @ 0x1803D1D18
 * Callers:
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x1803D5B64 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     ?Mirror_IsThreadRTL@@YAHXZ @ 0x180082308 (-Mirror_IsThreadRTL@@YAHXZ.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::ComputeCortanaWindowRect(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        _DWORD *a6,
        char a7)
{
  int v9; // r8d
  __m128 v10; // xmm6
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  int v14; // ecx
  _DWORD *v15; // rax
  __m128 v16; // xmm6
  int IsThreadRTL; // eax

  *(_OWORD *)a2 = 0LL;
  if ( !a3 )
  {
    v15 = a6;
    v12 = a6[2];
    goto LABEL_15;
  }
  v9 = a3 - 1;
  if ( !v9 )
  {
    v16 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 196));
    IsThreadRTL = Mirror_IsThreadRTL();
    v12 = (int)(float)(_mm_shuffle_ps(v16, v16, 170).m128_f32[0] + v16.m128_f32[0]) - a4;
    if ( !IsThreadRTL )
      v12 = (int)v16.m128_f32[0];
    v14 = a6[3];
    goto LABEL_16;
  }
  if ( v9 == 1 )
  {
    v15 = a6;
    v12 = *a6 - a4;
LABEL_15:
    v14 = v15[1];
LABEL_16:
    *(_DWORD *)a2 = v12;
    goto LABEL_17;
  }
  v10 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 196));
  v11 = Mirror_IsThreadRTL();
  v12 = (int)(float)(_mm_shuffle_ps(v10, v10, 170).m128_f32[0] + v10.m128_f32[0]) - a4;
  if ( !v11 )
    v12 = (int)v10.m128_f32[0];
  *(_DWORD *)a2 = v12;
  if ( a7 )
    v13 = a6[3];
  else
    v13 = a6[1];
  v14 = v13 - a5;
LABEL_17:
  *(_DWORD *)(a2 + 4) = v14;
  *(_DWORD *)(a2 + 8) = v12 + a4;
  *(_DWORD *)(a2 + 12) = v14 + a5;
  return a2;
}
