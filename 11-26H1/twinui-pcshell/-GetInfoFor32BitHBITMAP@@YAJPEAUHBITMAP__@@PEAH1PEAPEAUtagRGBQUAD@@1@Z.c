/*
 * XREFs of ?GetInfoFor32BitHBITMAP@@YAJPEAUHBITMAP__@@PEAH1PEAPEAUtagRGBQUAD@@1@Z @ 0x1806CAB70
 * Callers:
 *     ?GetNthMostDominantColorFromHBITMAP@@YA_NPEAUHBITMAP__@@I_N1PEAK@Z @ 0x1806CAD84 (-GetNthMostDominantColorFromHBITMAP@@YA_NPEAUHBITMAP__@@I_N1PEAK@Z.c)
 * Callees:
 *     CoTaskMemFree_0 @ 0x1802CA554 (CoTaskMemFree_0.c)
 *     __Platform_CoTaskMemAlloc @ 0x1802CA560 (__Platform_CoTaskMemAlloc.c)
 */

__int64 __fastcall GetInfoFor32BitHBITMAP(HBITMAP hbm, int *a2, int *a3, struct tagRGBQUAD **a4, int *a5)
{
  unsigned int v9; // ebp
  struct tagBITMAPINFO *lpbmi; // rbx
  HDC CompatibleDC; // rax
  HDC v12; // rsi
  struct tagRGBQUAD *lpvBits; // rax
  struct tagRGBQUAD *v14; // rdi
  int biHeight; // r9d
  int v16; // eax
  int v17; // r11d
  char v18; // cl
  int v19; // edx
  unsigned int v20; // r8d
  __int64 v21; // rax
  BYTE *v22; // r9
  LONG v23; // ecx
  LONG v24; // edx
  BYTE *v25; // rax

  v9 = -2147024882;
  lpbmi = (struct tagBITMAPINFO *)LocalAlloc(0x40u, 0x42CuLL);
  if ( lpbmi )
  {
    CompatibleDC = CreateCompatibleDC(0LL);
    v12 = CompatibleDC;
    if ( CompatibleDC )
    {
      lpbmi->bmiHeader.biSize = 40;
      if ( GetDIBits(CompatibleDC, hbm, 0, 0, 0LL, lpbmi, 0) )
      {
        lpvBits = (struct tagRGBQUAD *)_Platform_CoTaskMemAlloc(lpbmi->bmiHeader.biSizeImage);
        v14 = lpvBits;
        if ( lpvBits )
        {
          biHeight = lpbmi->bmiHeader.biHeight;
          if ( biHeight > 0 )
          {
            biHeight = -biHeight;
            lpbmi->bmiHeader.biHeight = biHeight;
          }
          if ( GetDIBits(v12, hbm, 0, -biHeight, lpvBits, lpbmi, 0) )
          {
            v16 = lpbmi->bmiHeader.biWidth * lpbmi->bmiHeader.biBitCount;
            v17 = -lpbmi->bmiHeader.biHeight;
            lpbmi->bmiHeader.biHeight = v17;
            v18 = 0;
            v19 = 0;
            v20 = ((v16 + 7) / 8 + 3) & 0xFFFFFFFC;
            while ( v19 < v17 )
            {
              v21 = 0LL;
              v22 = &v14->rgbReserved + v20 * v19;
              do
              {
                if ( v21 >= lpbmi->bmiHeader.biWidth )
                  break;
                if ( *v22 )
                  v18 = 1;
                ++v21;
                v22 += 4;
              }
              while ( !v18 );
              ++v19;
              if ( v18 )
                goto LABEL_23;
            }
            v23 = 0;
            if ( v17 > 0 )
            {
              do
              {
                v24 = 0;
                if ( lpbmi->bmiHeader.biWidth > 0 )
                {
                  v25 = &v14->rgbReserved + v20 * v23;
                  do
                  {
                    *v25 = -1;
                    ++v24;
                    v25 += 4;
                  }
                  while ( v24 < lpbmi->bmiHeader.biWidth );
                }
                ++v23;
              }
              while ( v23 < lpbmi->bmiHeader.biHeight );
            }
LABEL_23:
            v9 = 0;
            *a4 = v14;
            v14 = 0LL;
            *a5 = v20 >> 2;
            *a2 = lpbmi->bmiHeader.biWidth;
            *a3 = lpbmi->bmiHeader.biHeight;
          }
          CoTaskMemFree_0(v14);
        }
      }
      DeleteDC(v12);
    }
    LocalFree(lpbmi);
  }
  return v9;
}
