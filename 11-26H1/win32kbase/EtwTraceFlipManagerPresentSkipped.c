/*
 * XREFs of EtwTraceFlipManagerPresentSkipped @ 0x14014DDC0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qxxxxxi_EtwWriteTransfer @ 0x14014E1D8 (McTemplateK0qxxxxxi_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceFlipManagerPresentSkipped(
        int a1,
        char a2,
        char a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  char v6; // r10
  double LowPart; // xmm1_8
  double v10; // xmm0_8
  double v11; // xmm0_8
  int v12; // r8d
  double v13; // xmm0_8
  double v14; // xmm0_8
  char v15; // dl
  double v16; // xmm0_8
  double v17; // xmm0_8
  int v18; // r10d
  double v19; // xmm1_8
  unsigned __int64 v20; // rax
  double v21; // xmm1_8

  v6 = 0;
  if ( a6 )
  {
    v18 = a6 - a4;
    if ( (__int64)(a6 - a4) < 0 )
    {
      v20 = v18 & 1 | ((a6 - a4) >> 1);
      v19 = (double)(int)v20 + (double)(int)v20;
    }
    else
    {
      v19 = (double)v18;
    }
    v21 = v19 / (double)(int)gliQpcFreq.LowPart * 10000000.0;
    if ( v21 >= 9.223372036854776e18 )
      v21 = v21 - 9.223372036854776e18;
    v6 = (int)v21;
  }
  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
  {
    LowPart = (double)(int)gliQpcFreq.LowPart;
    if ( (a5 & 0x8000000000000000uLL) != 0LL )
      v10 = (double)(int)(a5 & 1 | (a5 >> 1)) + (double)(int)(a5 & 1 | (a5 >> 1));
    else
      v10 = (double)(int)a5;
    v11 = v10 / LowPart * 10000000.0;
    if ( v11 >= 9.223372036854776e18 )
      v11 = v11 - 9.223372036854776e18;
    v12 = (int)v11;
    if ( a4 < 0 )
      v13 = (double)(int)(a4 & 1 | ((unsigned __int64)a4 >> 1)) + (double)(int)(a4 & 1 | ((unsigned __int64)a4 >> 1));
    else
      v13 = (double)(int)a4;
    v14 = v13 / LowPart * 10000000.0;
    if ( v14 >= 9.223372036854776e18 )
      v14 = v14 - 9.223372036854776e18;
    v15 = (int)v14;
    if ( (a6 & 0x8000000000000000uLL) != 0LL )
      v16 = (double)(int)(a6 & 1 | (a6 >> 1)) + (double)(int)(a6 & 1 | (a6 >> 1));
    else
      v16 = (double)(int)a6;
    v17 = v16 / LowPart * 10000000.0;
    if ( v17 >= 9.223372036854776e18 )
      v17 = v17 - 9.223372036854776e18;
    McTemplateK0qxxxxxi_EtwWriteTransfer(
      0,
      (unsigned int)&FlipManagerPresentSkipped,
      v12,
      a1,
      a2,
      a3,
      (int)v17,
      v15,
      v12,
      v6);
  }
}
