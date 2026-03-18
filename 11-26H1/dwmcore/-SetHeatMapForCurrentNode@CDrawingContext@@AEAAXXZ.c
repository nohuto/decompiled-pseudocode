/*
 * XREFs of ?SetHeatMapForCurrentNode@CDrawingContext@@AEAAXXZ @ 0x180214534
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800831C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x1800105B0 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     ?SetHeatMapProperties@CVisual@@QEAAXUHeatMapProperty@1@@Z @ 0x18020C960 (-SetHeatMapProperties@CVisual@@QEAAXUHeatMapProperty@1@@Z.c)
 */

void __fastcall CDrawingContext::SetHeatMapForCurrentNode(CDrawingContext *this)
{
  struct CVisual *CurrentVisual; // rax
  int v2; // ecx
  __int64 v3; // rbx
  CComposition *v4; // rdx
  char v5; // al
  char v6; // r8
  char v7; // al
  __m128i si128; // xmm6
  char v9; // al
  __m128i v10; // [rsp+20h] [rbp-38h] BYREF
  int v11; // [rsp+30h] [rbp-28h]

  CurrentVisual = CDrawingContext::GetCurrentVisual(this);
  v2 = g_HeatMaps_Type;
  v3 = (__int64)CurrentVisual;
  v4 = g_pComposition;
  v5 = *((_BYTE *)CurrentVisual + 101);
  if ( (v5 & 4) != 0 && g_HeatMaps_Type != 1 )
  {
    --*((_DWORD *)g_pComposition + 1594);
    *(_BYTE *)(v3 + 101) &= ~4u;
    v5 = *(_BYTE *)(v3 + 101);
  }
  v6 = v5;
  if ( (v5 & 2) != 0 && v2 != 2 )
  {
    v6 = v5 & 0xFD;
    g_HeatMaps_OverdrawContentKinds = 0;
    *(_BYTE *)(v3 + 101) = v5 & 0xFD;
  }
  v7 = *(_BYTE *)(v3 + 100);
  if ( v7 < 0 && v2 != 3 )
  {
    *(_BYTE *)(v3 + 100) = v7 & 0x7F;
    *(_BYTE *)(v3 + 101) = v6 & 0xFE;
    --*((_DWORD *)v4 + 1592);
  }
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  if ( v2 == 1 )
  {
    if ( (*(_BYTE *)(v3 + 101) & 4) != 0 )
      return;
    ++*((_DWORD *)v4 + 1594);
    *(_BYTE *)(v3 + 101) |= 4u;
    v10 = si128;
    v11 = 0;
    CVisual::SetHeatMapProperties(v3, &v10);
    v2 = g_HeatMaps_Type;
    v4 = g_pComposition;
  }
  if ( v2 == 2 )
  {
    *(_BYTE *)(v3 + 101) |= 2u;
    v10 = si128;
    v11 = g_HeatMaps_OverdrawContentKinds;
    CVisual::SetHeatMapProperties(v3, &v10);
    v2 = g_HeatMaps_Type;
    v4 = g_pComposition;
  }
  if ( v2 == 3 )
  {
    v9 = *(_BYTE *)(v3 + 101);
    if ( (v9 & 1) == 0 )
    {
      *(_BYTE *)(v3 + 100) |= 0x80u;
      *(_BYTE *)(v3 + 101) = v9 | 1;
      ++*((_DWORD *)v4 + 1592);
    }
  }
}
