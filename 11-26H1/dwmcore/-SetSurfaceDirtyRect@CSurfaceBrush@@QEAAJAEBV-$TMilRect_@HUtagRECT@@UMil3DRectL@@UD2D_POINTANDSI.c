/*
 * XREFs of ?SetSurfaceDirtyRect@CSurfaceBrush@@QEAAJAEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180284774
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180022630 (-NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800BAF10 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?ApplyDirty@CSurfaceBrush@@AEAAXPEAVCRectanglesShape@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18020EA24 (-ApplyDirty@CSurfaceBrush@@AEAAXPEAVCRectanglesShape@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

__int64 __fastcall CSurfaceBrush::SetSurfaceDirtyRect(__int64 a1, __int64 a2)
{
  __m128i v3; // xmm2
  __int64 v4; // rcx
  __m128i v5; // xmm3
  float v6; // xmm1_4
  __int64 i; // rax
  float v9[4]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v10[5]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v11[16]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v12; // [rsp+68h] [rbp-18h] BYREF

  v3 = _mm_cvtsi32_si128(*(_DWORD *)(a2 + 8));
  v4 = a1 + 200;
  v5 = _mm_cvtsi32_si128(*(_DWORD *)(a2 + 12));
  v6 = (float)*(int *)(a2 + 4);
  *(float *)v4 = (float)*(int *)a2;
  *(float *)(v4 + 4) = v6;
  *(_DWORD *)(v4 + 8) = _mm_cvtepi32_ps(v3).m128_u32[0];
  *(_DWORD *)(v4 + 12) = _mm_cvtepi32_ps(v5).m128_u32[0];
  v10[0] = &CRectanglesShape::`vftable';
  v10[2] = v11;
  v10[3] = v11;
  v10[4] = &v12;
  v10[1] = 0LL;
  v12 = 0LL;
  if ( !IsEmpty((const struct D2D_RECT_F *)v4) )
  {
    for ( i = 0LL; i < 4; ++i )
      v9[i] = (float)*(int *)(a1 + 4 * i + 108);
    CSurfaceBrush::ApplyDirty(a1, (CRectanglesShape *)v10, v9);
    CBrush::NotifyOnChanged(a1, 1u, a1);
    *(_QWORD *)(a1 + 256) = 0LL;
  }
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v10);
  return 0LL;
}
