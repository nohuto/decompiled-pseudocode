/*
 * XREFs of ?Make@NineGridLayout@@SA?AU1@AEBU_MARGINS@@AEBUD2D_POINTANDSIZE_L@@@Z @ 0x1800683F0
 * Callers:
 *     ?Make@NineGridLayout@@SA?AU1@PEAVCBitmapSource@@@Z @ 0x18008CEF4 (-Make@NineGridLayout@@SA-AU1@PEAVCBitmapSource@@@Z.c)
 *     ?Generate@CNineGridImagePrimitive@@UEAAJPEBUtagRECT@@@Z @ 0x1800BD100 (-Generate@CNineGridImagePrimitive@@UEAAJPEBUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall NineGridLayout::Make(_DWORD *a1, int *a2, int *a3)
{
  int v3; // eax
  __int64 v4; // r9
  int v5; // r11d
  int v7; // edx
  int v8; // r10d
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // eax
  int v13; // edx
  int v14; // eax

  v3 = *a2;
  v4 = 0LL;
  v5 = a3[2];
  v7 = a2[1];
  v8 = a3[3];
  *a1 = 0;
  if ( v7 + v3 > v5 )
  {
    v9 = v5 * v3 / (v7 + v3);
    a1[1] = v9;
  }
  else
  {
    a1[1] = v3;
    v9 = v5 - v7;
  }
  v10 = a2[3];
  a1[2] = v9;
  v11 = a2[2];
  a1[3] = v5;
  a1[4] = 0;
  if ( v10 + v11 > v8 )
  {
    v12 = v8 * v11 / (v10 + v11);
    a1[5] = v12;
  }
  else
  {
    a1[5] = v11;
    v12 = v8 - v10;
  }
  v13 = *a3;
  a1[6] = v12;
  v14 = a3[1];
  a1[7] = v8;
  do
  {
    a1[v4 + 4] += v14;
    a1[v4++] += v13;
  }
  while ( v4 <= 3 );
  return a1;
}
