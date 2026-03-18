/*
 * XREFs of EtwTraceFlipManagerPresentCanceled @ 0x1401B7EE0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qxxxxxi_EtwWriteTransfer @ 0x140131734 (McTemplateK0qxxxxxi_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceFlipManagerPresentCanceled(
        int a1,
        char a2,
        char a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  char v6; // r10
  int v10; // r10d
  double v11; // xmm1_8
  unsigned __int64 v12; // rax
  double v13; // xmm1_8
  double LowPart; // xmm1_8
  double v15; // xmm0_8
  unsigned __int64 v16; // rax
  double v17; // xmm0_8
  __int64 v18; // r8
  double v19; // xmm0_8
  double v20; // xmm0_8
  char v21; // dl
  double v22; // xmm0_8
  __int64 v23; // rcx
  double v24; // xmm0_8

  v6 = 0;
  if ( a6 )
  {
    v10 = a6 - a4;
    if ( (__int64)(a6 - a4) < 0 )
    {
      v12 = v10 & 1 | ((a6 - a4) >> 1);
      v11 = (double)(int)v12 + (double)(int)v12;
    }
    else
    {
      v11 = (double)v10;
    }
    v13 = v11 / (double)(int)gliQpcFreq.LowPart * 10000000.0;
    if ( v13 >= 9.223372036854776e18 )
      v13 = v13 - 9.223372036854776e18;
    v6 = (int)v13;
  }
  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
  {
    LowPart = (double)(int)gliQpcFreq.LowPart;
    if ( (a5 & 0x8000000000000000uLL) != 0LL )
      v15 = (double)(int)(a5 & 1 | (a5 >> 1)) + (double)(int)(a5 & 1 | (a5 >> 1));
    else
      v15 = (double)(int)a5;
    v16 = 0LL;
    v17 = v15 / LowPart * 10000000.0;
    if ( v17 >= 9.223372036854776e18 )
    {
      v17 = v17 - 9.223372036854776e18;
      if ( v17 < 9.223372036854776e18 )
        v16 = 0x8000000000000000uLL;
    }
    v18 = v16 + (unsigned int)(int)v17;
    if ( a4 < 0 )
      v19 = (double)(int)(a4 & 1 | ((unsigned __int64)a4 >> 1)) + (double)(int)(a4 & 1 | ((unsigned __int64)a4 >> 1));
    else
      v19 = (double)(int)a4;
    v20 = v19 / LowPart * 10000000.0;
    if ( v20 >= 9.223372036854776e18 )
      v20 = v20 - 9.223372036854776e18;
    v21 = (int)v20;
    if ( (a6 & 0x8000000000000000uLL) != 0LL )
      v22 = (double)(int)(a6 & 1 | (a6 >> 1)) + (double)(int)(a6 & 1 | (a6 >> 1));
    else
      v22 = (double)(int)a6;
    v23 = 0LL;
    v24 = v22 / LowPart * 10000000.0;
    if ( v24 >= 9.223372036854776e18 )
    {
      v24 = v24 - 9.223372036854776e18;
      if ( v24 < 9.223372036854776e18 )
        v23 = 0x8000000000000000uLL;
    }
    McTemplateK0qxxxxxi_EtwWriteTransfer(
      v23,
      &FlipManagerPresentCanceled,
      v18,
      a1,
      a2,
      a3,
      v23 + (int)v24,
      v21,
      v18,
      v6);
  }
}
