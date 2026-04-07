/*
 * XREFs of ?Make@NineGridLayout@@SA?AU1@PEAVCBitmapSource@@@Z @ 0x18008CEF4
 * Callers:
 *     ?UpdateBitmap@CImage@@AEAAJXZ @ 0x180009530 (-UpdateBitmap@CImage@@AEAAJXZ.c)
 * Callees:
 *     ?Make@NineGridLayout@@SA?AU1@AEBU_MARGINS@@AEBUD2D_POINTANDSIZE_L@@@Z @ 0x1800683F0 (-Make@NineGridLayout@@SA-AU1@AEBU_MARGINS@@AEBUD2D_POINTANDSIZE_L@@@Z.c)
 */

__int64 __fastcall NineGridLayout::Make(_DWORD *a1, _DWORD *a2)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+28h] [rbp-10h]
  int v7; // [rsp+2Ch] [rbp-Ch]

  v6 = a2[32];
  v2 = a2[33];
  v5 = 0LL;
  v7 = v2;
  NineGridLayout::Make(a1, a2 + 34, (int *)&v5);
  return v3;
}
