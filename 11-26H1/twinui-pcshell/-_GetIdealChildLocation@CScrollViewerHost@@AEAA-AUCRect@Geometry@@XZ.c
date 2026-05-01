/*
 * XREFs of ?_GetIdealChildLocation@CScrollViewerHost@@AEAA?AUCRect@Geometry@@XZ @ 0x1804C8F0C
 * Callers:
 *     ?_LayoutWithScrollButtons@CScrollViewerHost@@AEAAXXZ @ 0x1804C8F88 (-_LayoutWithScrollButtons@CScrollViewerHost@@AEAAXXZ.c)
 *     ?_LayoutWithoutScrollButtons@CScrollViewerHost@@AEAAXXZ @ 0x1804C91D4 (-_LayoutWithoutScrollButtons@CScrollViewerHost@@AEAAXXZ.c)
 * Callees:
 *     ?ApplyMargins@RelativeMargins@@QEAA?AUCRect@Geometry@@AEBU23@@Z @ 0x1804C861C (-ApplyMargins@RelativeMargins@@QEAA-AUCRect@Geometry@@AEBU23@@Z.c)
 */

__int64 __fastcall CScrollViewerHost::_GetIdealChildLocation(__int64 a1, _DWORD *a2)
{
  int v2; // eax
  _OWORD *v3; // rax
  __int64 v4; // r8
  _DWORD *v5; // r9
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_DWORD *)(a1 + 68) - *(_DWORD *)(a1 + 60);
  a2[2] = *(_DWORD *)(a1 + 64) - *(_DWORD *)(a1 + 56);
  *(_QWORD *)a2 = 0LL;
  a2[3] = v2;
  v3 = (_OWORD *)RelativeMargins::ApplyMargins((double *)(a1 + 416), (__int64)v7, a2);
  *(_OWORD *)v4 = *v3;
  *(_DWORD *)v4 += v5[99];
  *(_DWORD *)(v4 + 8) -= v5[100];
  *(_DWORD *)(v4 + 4) += v5[101];
  *(_DWORD *)(v4 + 12) -= v5[102];
  return v4;
}
