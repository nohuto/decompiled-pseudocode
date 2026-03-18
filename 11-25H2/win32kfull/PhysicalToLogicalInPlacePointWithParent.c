/*
 * XREFs of PhysicalToLogicalInPlacePointWithParent @ 0x14015470C
 * Callers:
 *     ?AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z @ 0x140220DBC (-AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1402210AC (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027D2B8 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z @ 0x1400335CC (-GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z.c)
 *     FixedPointSubPixel @ 0x1401551F8 (FixedPointSubPixel.c)
 */

__int64 __fastcall PhysicalToLogicalInPlacePointWithParent(const struct tagWND *a1, int *a2, int *a3)
{
  __int64 result; // rax
  __int64 v6; // rdi
  float *v7; // rdx
  float v8; // xmm3_4
  float v9; // xmm2_4
  double v10; // xmm0_8
  __int64 v11; // rdx
  double v12; // xmm0_8
  float v13; // xmm0_4
  __m128i v14; // xmm0

  result = (__int64)GetTopLevelOrDpiBoundaryWindow(a1);
  v6 = result;
  if ( result )
  {
    result = IsWindowDesktopComposed(result);
    if ( (_DWORD)result )
    {
      v7 = *(float **)(v6 + 216);
      if ( v7 )
      {
        v8 = 1.0 / *v7;
        v9 = 1.0 / v7[5];
        if ( a3 )
        {
          v10 = FixedPointSubPixel(*a3);
          *a2 = (int)(float)((float)((float)(*(float *)&v10 + (float)*a2) - *(float *)(v11 + 48)) * v8);
          v12 = FixedPointSubPixel(a3[1]);
          v13 = *(float *)&v12 + (float)a2[1];
        }
        else
        {
          v14 = _mm_cvtsi32_si128(a2[1]);
          *a2 = (int)(float)((float)((float)*a2 - v7[12]) * v8);
          LODWORD(v13) = _mm_cvtepi32_ps(v14).m128_u32[0];
        }
        result = (unsigned int)(int)(float)(v9 * (float)(v13 - v7[13]));
        a2[1] = result;
      }
    }
  }
  return result;
}
