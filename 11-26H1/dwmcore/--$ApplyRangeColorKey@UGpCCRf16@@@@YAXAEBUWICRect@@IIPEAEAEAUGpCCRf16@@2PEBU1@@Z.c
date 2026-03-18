/*
 * XREFs of ??$ApplyRangeColorKey@UGpCCRf16@@@@YAXAEBUWICRect@@IIPEAEAEAUGpCCRf16@@2PEBU1@@Z @ 0x180215328
 * Callers:
 *     ?ApplyColorKeyToBuffer@CColorKeyBitmap@@IEBAJAEBUWICRect@@IIPEAE@Z @ 0x1800E20F4 (-ApplyColorKeyToBuffer@CColorKeyBitmap@@IEBAJAEBUWICRect@@IIPEAE@Z.c)
 * Callees:
 *     ??BCFloat16@@QEAAMXZ @ 0x1802B0F7C (--BCFloat16@@QEAAMXZ.c)
 */

void __fastcall ApplyRangeColorKey<GpCCRf16>(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // r10d
  __int64 i; // r11
  __int64 v10; // r9
  __int64 v11; // r15
  char *v12; // rbx
  double v13; // xmm0_8
  float v14; // xmm1_4
  int v15; // r9d
  double v16; // xmm0_8
  double v17; // xmm0_8
  float v18; // xmm1_4
  double v19; // xmm0_8
  double v20; // xmm0_8
  float v21; // xmm1_4
  double v22; // xmm0_8
  double v23; // xmm0_8
  float v24; // xmm1_4
  double v25; // xmm0_8
  double v26; // xmm0_8
  float v27; // xmm1_4
  double v28; // xmm0_8
  double v29; // xmm0_8
  float v30; // xmm1_4
  double v31; // xmm0_8
  double v32; // xmm0_8
  float v33; // xmm1_4
  double v34; // xmm0_8
  double v35; // xmm0_8
  float v36; // xmm1_4
  double v37; // xmm0_8

  v6 = 0;
  for ( i = a1; v6 < *(_DWORD *)(i + 12); ++v6 )
  {
    v10 = 0LL;
    if ( *(_DWORD *)(i + 8) )
    {
      v11 = a2 * v6;
      do
      {
        v12 = (char *)(a4 + v11 + 8 * v10);
        v13 = CFloat16::operator float(a5 + 6);
        v14 = *(float *)&v13;
        v16 = CFloat16::operator float(v12 + 6);
        if ( *(float *)&v16 >= v14 )
        {
          v17 = CFloat16::operator float(v12 + 6);
          v18 = *(float *)&v17;
          v19 = CFloat16::operator float(a6 + 6);
          if ( *(float *)&v19 >= v18 )
          {
            v20 = CFloat16::operator float(a5);
            v21 = *(float *)&v20;
            v22 = CFloat16::operator float(v12);
            if ( *(float *)&v22 >= v21 )
            {
              v23 = CFloat16::operator float(v12);
              v24 = *(float *)&v23;
              v25 = CFloat16::operator float(a6);
              if ( *(float *)&v25 >= v24 )
              {
                v26 = CFloat16::operator float(a5 + 2);
                v27 = *(float *)&v26;
                v28 = CFloat16::operator float(v12 + 2);
                if ( *(float *)&v28 >= v27 )
                {
                  v29 = CFloat16::operator float(v12 + 2);
                  v30 = *(float *)&v29;
                  v31 = CFloat16::operator float(a6 + 2);
                  if ( *(float *)&v31 >= v30 )
                  {
                    v32 = CFloat16::operator float(a5 + 4);
                    v33 = *(float *)&v32;
                    v34 = CFloat16::operator float(v12 + 4);
                    if ( *(float *)&v34 >= v33 )
                    {
                      v35 = CFloat16::operator float(v12 + 4);
                      v36 = *(float *)&v35;
                      v37 = CFloat16::operator float(a6 + 4);
                      if ( *(float *)&v37 >= v36 )
                        *(_QWORD *)v12 = 0LL;
                    }
                  }
                }
              }
            }
          }
        }
        v10 = (unsigned int)(v15 + 1);
      }
      while ( (unsigned int)v10 < *(_DWORD *)(i + 8) );
    }
  }
}
