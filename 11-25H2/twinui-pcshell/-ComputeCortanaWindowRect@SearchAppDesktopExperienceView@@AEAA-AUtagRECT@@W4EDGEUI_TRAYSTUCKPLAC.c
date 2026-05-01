/*
 * XREFs of ?ComputeCortanaWindowRect@SearchAppDesktopExperienceView@@AEAA?AUtagRECT@@W4EDGEUI_TRAYSTUCKPLACE@@HHU2@1_N@Z @ 0x1803BF120
 * Callers:
 *     ?PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z @ 0x1803C2500 (-PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     ?Mirror_IsThreadRTL@@YAHXZ @ 0x1801B8A5C (-Mirror_IsThreadRTL@@YAHXZ.c)
 */

__int64 __fastcall SearchAppDesktopExperienceView::ComputeCortanaWindowRect(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        _DWORD *a6,
        int *a7,
        char a8)
{
  int v10; // r8d
  int v11; // ecx
  int v12; // edx
  int v13; // edx
  _DWORD *v14; // rax

  *(_OWORD *)a2 = 0LL;
  if ( !a3 )
  {
    v14 = a6;
    v11 = a6[2];
    goto LABEL_17;
  }
  v10 = a3 - 1;
  if ( v10 )
  {
    if ( v10 != 1 )
    {
      if ( (unsigned int)Mirror_IsThreadRTL() )
        v11 = a7[2] - a4;
      else
        v11 = *a7;
      *(_DWORD *)a2 = v11;
      if ( a8 )
        v12 = a6[3];
      else
        v12 = a6[1];
      v13 = v12 - a5;
      goto LABEL_18;
    }
    v14 = a6;
    v11 = *a6 - a4;
LABEL_17:
    *(_DWORD *)a2 = v11;
    v13 = v14[1];
    goto LABEL_18;
  }
  if ( (unsigned int)Mirror_IsThreadRTL() )
    v11 = a7[2] - a4;
  else
    v11 = *a7;
  *(_DWORD *)a2 = v11;
  v13 = a6[3];
LABEL_18:
  *(_DWORD *)(a2 + 4) = v13;
  *(_DWORD *)(a2 + 8) = v11 + a4;
  *(_DWORD *)(a2 + 12) = v13 + a5;
  return a2;
}
