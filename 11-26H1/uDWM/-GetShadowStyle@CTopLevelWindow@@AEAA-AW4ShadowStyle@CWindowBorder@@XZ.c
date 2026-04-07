/*
 * XREFs of ?GetShadowStyle@CTopLevelWindow@@AEAA?AW4ShadowStyle@CWindowBorder@@XZ @ 0x180062BF4
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18007DF14 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?GetEffectiveCornerStyle@CTopLevelWindow@@AEAA?AW4CORNER_STYLE@@XZ @ 0x180020704 (-GetEffectiveCornerStyle@CTopLevelWindow@@AEAA-AW4CORNER_STYLE@@XZ.c)
 */

__int64 __fastcall CTopLevelWindow::GetShadowStyle(__int64 a1)
{
  int EffectiveCornerStyle; // eax
  int v3; // ecx
  bool v4; // dl
  bool v5; // zf
  __int64 v6; // rcx
  char v7; // cl

  EffectiveCornerStyle = CTopLevelWindow::GetEffectiveCornerStyle(a1);
  v3 = *(_DWORD *)(a1 + 568);
  if ( (v3 & 0x20) != 0 )
    return 0LL;
  v4 = 1;
  if ( (unsigned int)(EffectiveCornerStyle - 3) <= 1 )
    return 1LL;
  v5 = (v3 & 0x40) == 0;
  v6 = a1 + 696;
  if ( v5 )
    v4 = (*(_BYTE *)(*(_QWORD *)v6 + 739LL) & 0x10) != 0;
  v7 = *(_BYTE *)(*(_QWORD *)v6 + 741LL) & 2;
  if ( v4 )
    return (unsigned int)(v7 != 0) + 2;
  else
    return (unsigned int)(v7 != 0) + 4;
}
