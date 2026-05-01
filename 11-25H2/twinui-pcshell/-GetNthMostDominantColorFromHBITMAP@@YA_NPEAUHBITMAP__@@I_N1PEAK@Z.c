/*
 * XREFs of ?GetNthMostDominantColorFromHBITMAP@@YA_NPEAUHBITMAP__@@I_N1PEAK@Z @ 0x1806A2CD8
 * Callers:
 *     ?CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00K_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z @ 0x1801F9AD0 (-CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00K_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     CoTaskMemFree_0 @ 0x1802D3631 (CoTaskMemFree_0.c)
 *     ?GetInfoFor32BitHBITMAP@@YAJPEAUHBITMAP__@@PEAH1PEAPEAUtagRGBQUAD@@1@Z @ 0x1806A2AD8 (-GetInfoFor32BitHBITMAP@@YAJPEAUHBITMAP__@@PEAH1PEAPEAUtagRGBQUAD@@1@Z.c)
 *     ?_GetNthMostDominantColorFromBits@@YA_NPEAUtagRGBQUAD@@HHHI_N1PEAK@Z @ 0x1806A2D5C (-_GetNthMostDominantColorFromBits@@YA_NPEAUtagRGBQUAD@@HHHI_N1PEAK@Z.c)
 */

bool __fastcall GetNthMostDominantColorFromHBITMAP(HBITMAP a1, __int64 a2, __int64 a3, __int64 a4, unsigned int *a5)
{
  bool NthMostDominantColorFromBits; // bl
  unsigned int v7; // [rsp+20h] [rbp-30h]
  bool v8; // [rsp+28h] [rbp-28h]
  bool v9; // [rsp+30h] [rbp-20h]
  LPVOID pv; // [rsp+40h] [rbp-10h] BYREF
  int v11; // [rsp+68h] [rbp+18h] BYREF
  int v12; // [rsp+70h] [rbp+20h] BYREF
  unsigned int v13; // [rsp+78h] [rbp+28h] BYREF

  NthMostDominantColorFromBits = 0;
  pv = 0LL;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  if ( (int)GetInfoFor32BitHBITMAP(a1, &v11, &v12, (struct tagRGBQUAD **)&pv, (int *)&v13) >= 0 )
  {
    NthMostDominantColorFromBits = _GetNthMostDominantColorFromBits(
                                     (struct tagRGBQUAD *)pv,
                                     v11,
                                     v12,
                                     v13,
                                     v7,
                                     v8,
                                     v9,
                                     a5);
    CoTaskMemFree_0(pv);
  }
  return NthMostDominantColorFromBits;
}
