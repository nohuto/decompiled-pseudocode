/*
 * XREFs of ??$ApplyRangeColorKey@U_D3DCOLORVALUE@@@@YAXAEBUWICRect@@IIPEAEAEAU_D3DCOLORVALUE@@2PEBU1@@Z @ 0x1802B0EB4
 * Callers:
 *     ?ApplyColorKeyToBuffer@CColorKeyBitmap@@IEBAJAEBUWICRect@@IIPEAE@Z @ 0x1800E20F4 (-ApplyColorKeyToBuffer@CColorKeyBitmap@@IEBAJAEBUWICRect@@IIPEAE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ApplyRangeColorKey<_D3DCOLORVALUE>(__int64 a1, int a2, __int64 a3, __int64 a4, float *a5, float *a6)
{
  unsigned int i; // r8d
  unsigned int j; // edx
  __int64 v9; // rax
  float v10; // xmm1_4
  float v11; // xmm1_4
  float v12; // xmm1_4
  float v13; // xmm1_4

  for ( i = 0; i < *(_DWORD *)(a1 + 12); ++i )
  {
    for ( j = 0; j < *(_DWORD *)(a1 + 8); ++j )
    {
      v9 = a2 * i + 16LL * j;
      v10 = *(float *)(v9 + a4 + 12);
      if ( v10 >= a5[3] && a6[3] >= v10 )
      {
        v11 = *(float *)(v9 + a4);
        if ( v11 >= *a5 && *a6 >= v11 )
        {
          v12 = *(float *)(v9 + a4 + 4);
          if ( v12 >= a5[1] && a6[1] >= v12 )
          {
            v13 = *(float *)(v9 + a4 + 8);
            if ( v13 >= a5[2] && a6[2] >= v13 )
              *(_OWORD *)(v9 + a4) = 0LL;
          }
        }
      }
    }
  }
}
