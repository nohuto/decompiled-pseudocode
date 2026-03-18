/*
 * XREFs of ?SetDirtyRects@CCompositionDynamicTexture@@QEAAJAEBV?$span@$$CBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@$0?0@gsl@@@Z @ 0x1801FE400
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 *     ?AppendDirtyRects@CCompositionDynamicTexture@@QEAAJAEBV?$span@$$CBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@$0?0@gsl@@@Z @ 0x18021FD64 (-AppendDirtyRects@CCompositionDynamicTexture@@QEAAJAEBV-$span@$$CBV-$TMilRect_@HUtagRECT@@UMil3D.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800224D0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?IsWellOrdered@?$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x18005F788 (-IsWellOrdered@-$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?clear@?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18009E454 (-clear@-$vector_facade@URampEntry@CoordMap@@V-$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_e.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800BAF10 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?reserve_region@?$vector_facade@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_K0@Z @ 0x1800BF9A0 (-reserve_region@-$vector_facade@V-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNo.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180104A24 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?AddRect@CRectanglesShape@@QEAAXAEBUD2D_RECT_F@@@Z @ 0x1801888BC (-AddRect@CRectanglesShape@@QEAAXAEBUD2D_RECT_F@@@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

__int64 __fastcall CCompositionDynamicTexture::SetDirtyRects(__int64 *a1, __int64 *a2)
{
  unsigned int v4; // esi
  __int128 *v5; // r15
  __int128 *v6; // rbx
  detail::liberal_expansion_policy *v7; // r10
  _OWORD *v8; // rax
  __int128 v9; // xmm0
  __int64 v10; // rbx
  __int128 *v11; // rdi
  __int128 *v12; // rbx
  __int64 i; // rax
  __int128 v15; // [rsp+20h] [rbp-39h] BYREF
  struct D2D_RECT_F v16; // [rsp+30h] [rbp-29h] BYREF
  void **v17; // [rsp+40h] [rbp-19h] BYREF
  __int64 v18; // [rsp+48h] [rbp-11h] BYREF
  __int128 *v19; // [rsp+50h] [rbp-9h] BYREF
  __int128 *v20; // [rsp+58h] [rbp-1h]
  __int64 *v21; // [rsp+60h] [rbp+7h]
  _BYTE v22[16]; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v23; // [rsp+78h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v17 = &CRectanglesShape::`vftable';
  v19 = (__int128 *)v22;
  v4 = 0;
  v18 = 0LL;
  v20 = (__int128 *)v22;
  v23 = 0LL;
  v21 = &v23;
  Microsoft::WRL::ComPtr<CPathData>::operator=(a1 + 12, &v18);
  if ( &v19 != (__int128 **)(a1 + 13) )
  {
    v5 = v20;
    v6 = v19;
    detail::vector_facade<CoordMap::RampEntry,detail::buffer_impl<CoordMap::RampEntry,10,1,detail::liberal_expansion_policy>>::clear(a1 + 13);
    v8 = (_OWORD *)detail::vector_facade<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,1,1,detail::liberal_expansion_policy>>::reserve_region(
                     v7,
                     0LL,
                     v5 - v6);
    while ( v6 != v5 )
    {
      v9 = *v6++;
      *v8++ = v9;
    }
  }
  a1[18] = v23;
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v17);
  v10 = *a2;
  if ( *a2 != 1 || TMilRect<int,tagRECT,Mil3DRectL,RectUniqueness::_CMilRectL_>::IsWellOrdered((_DWORD *)a2[1]) )
  {
    v11 = (__int128 *)a2[1];
    v12 = &v11[v10];
    while ( v11 != v12 )
    {
      v15 = *v11;
      if ( !TMilRect<int,tagRECT,Mil3DRectL,RectUniqueness::_CMilRectL_>::IsWellOrdered(&v15) )
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x1C,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositiondynamictexture.cpp",
          (const char *)0x8007029CLL,
          v15);
      for ( i = 0LL; i < 16; i += 4LL )
        *(float *)((char *)&v16.left + i) = (float)*(int *)((char *)&v15 + i);
      CRectanglesShape::AddRect((CRectanglesShape *)(a1 + 11), (const __m128i *)&v16);
      ++v11;
    }
    v4 = 16;
  }
  CResource::NotifyOnChanged((__int64)a1, v4, (__int64)a1);
  return 0LL;
}
