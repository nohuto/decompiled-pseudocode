/*
 * XREFs of std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion_______lambda_cda502361e0058b7021093fff9ed1a73___ @ 0x1805BDCD4
 * Callers:
 *     ?Initialize@GuidedSnapAssistData@@AEAAXAEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@AEBV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@3@AEBUCRect@Geometry@@H@Z @ 0x1802B3DF8 (-Initialize@GuidedSnapAssistData@@AEAAXAEBV-$vector@V-$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?IsEqualWithErrorThreshold@SnapRectHelpers@@YA_NAEBUCRect@Geometry@@0H@Z @ 0x1805B1694 (-IsEqualWithErrorThreshold@SnapRectHelpers@@YA_NAEBUCRect@Geometry@@0H@Z.c)
 */

float **__fastcall std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion_______lambda_cda502361e0058b7021093fff9ed1a73___(
        float **a1,
        float *a2,
        float *a3,
        __int64 a4)
{
  float *v4; // r11
  const struct Geometry::CRect *v6; // rdx
  const struct Geometry::CRect *v7; // r8
  float v8; // xmm0_4
  float v9; // xmm1_4
  int v10; // eax
  float v11; // xmm0_4
  int v12; // eax
  float v13; // xmm1_4
  float *v14; // r10
  _DWORD v16[4]; // [rsp+20h] [rbp-28h] BYREF

  v4 = a2;
  if ( a2 != a3 )
  {
    v6 = *(const struct Geometry::CRect **)a4;
    v7 = (const struct Geometry::CRect *)**(unsigned int **)(a4 + 8);
    do
    {
      v8 = v4[2];
      v9 = v4[3];
      v10 = (int)v8;
      v11 = v8 + v4[4];
      v16[0] = v10;
      v12 = (int)v9;
      v13 = v9 + v4[5];
      v16[1] = v12;
      v16[2] = (int)v11;
      v16[3] = (int)v13;
      if ( SnapRectHelpers::IsEqualWithErrorThreshold((SnapRectHelpers *)v16, v6, v7) )
        break;
      v4 += 8;
    }
    while ( v4 != v14 );
  }
  *a1 = v4;
  return a1;
}
