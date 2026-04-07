/*
 * XREFs of ?GetRectAtIndex@NineGridLayout@@QEBA?AUD2D_POINTANDSIZE_L@@I@Z @ 0x18006C900
 * Callers:
 *     ?Generate@CNineGridImagePrimitive@@UEAAJPEBUtagRECT@@@Z @ 0x1800BD100 (-Generate@CNineGridImagePrimitive@@UEAAJPEBUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall NineGridLayout::GetRectAtIndex(__int64 a1, _DWORD *a2, unsigned int a3)
{
  __int64 v4; // rdx
  int v5; // r9d
  int v6; // eax
  __int64 v7; // r8
  __int64 v8; // rax

  v4 = a3 / 3;
  v5 = v4;
  v6 = 3 * v4;
  LODWORD(v4) = *(_DWORD *)(a1 + 4 * v4 + 16);
  v7 = a3 - v6;
  a2[1] = v4;
  v8 = (unsigned int)(v7 + 1);
  LODWORD(v7) = *(_DWORD *)(a1 + 4 * v7);
  *a2 = v7;
  a2[2] = *(_DWORD *)(a1 + 4 * v8) - v7;
  a2[3] = *(_DWORD *)(a1 + 4LL * (unsigned int)(v5 + 1) + 16) - v4;
  return a2;
}
