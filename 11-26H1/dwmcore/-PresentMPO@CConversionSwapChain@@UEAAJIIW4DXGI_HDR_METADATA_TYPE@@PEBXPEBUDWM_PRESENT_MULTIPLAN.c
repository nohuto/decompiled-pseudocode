/*
 * XREFs of ?PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x1800363C0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDesktopOverlayPlaneResource@@YA_NPEBVIOverlayPlaneResource@@@Z @ 0x180034104 (-IsDesktopOverlayPlaneResource@@YA_NPEBVIOverlayPlaneResource@@@Z.c)
 *     ?Present@CLegacySwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x180034610 (-Present@CLegacySwapChain@@UEAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@I@Z.c)
 *     ?CalcPresentMode@CConversionSwapChain@@IEAAJPEAI@Z @ 0x180036788 (-CalcPresentMode@CConversionSwapChain@@IEAAJPEAI@Z.c)
 *     ?GetRectangles@CRegion@@QEBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1800566F0 (-GetRectangles@CRegion@@QEBAIPEAV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180074C60 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x180075B50 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?Union@CRegion@@QEAAXAEBV1@@Z @ 0x1800ECDBC (-Union@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?ConvertSingleDesktopPlane@CConversionSwapChain@@IEAAJXZ @ 0x180104DB8 (-ConvertSingleDesktopPlane@CConversionSwapChain@@IEAAJXZ.c)
 *     ?Copy@CRegion@@QEAAXAEBV1@@Z @ 0x18012F7D8 (-Copy@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@0@Z @ 0x18012F9DC (-ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@0@Z.c)
 *     ?PresentDFlip@CLegacySwapChain@@UEAAJII_NIPEAVIOverlayPlaneResource@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_METADATA_TYPE@@PEBXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@5@Z @ 0x1801A8440 (-PresentDFlip@CLegacySwapChain@@UEAAJII_NIPEAVIOverlayPlaneResource@@W4DXGI_COLOR_SPACE_TYPE@@W4.c)
 *     ??$_Emplace_reallocate@UtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAPEAUtagRECT@@QEAU2@$$QEAU2@@Z @ 0x1801E57D0 (--$_Emplace_reallocate@UtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAPEAU.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?ConvertSingleAppPlane@CConversionSwapChain@@IEAAJAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x1802A72A8 (-ConvertSingleAppPlane@CConversionSwapChain@@IEAAJAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@Z.c)
 */

__int64 __fastcall CConversionSwapChain::PresentMPO(
        CConversionSwapChain *this,
        unsigned int a2,
        unsigned int a3,
        enum DXGI_HDR_METADATA_TYPE a4,
        const void *a5,
        const struct DWM_PRESENT_MULTIPLANE_OVERLAY *a6,
        unsigned int a7)
{
  __int64 v12; // r14
  unsigned __int64 v13; // rcx
  int v14; // eax
  int v15; // r9d
  unsigned int v16; // ebx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  int v23; // r9d
  _OWORD *v24; // r8
  unsigned __int64 v25; // rcx
  unsigned int v26; // [rsp+20h] [rbp-E0h]
  unsigned int v27; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v28; // [rsp+68h] [rbp-98h] BYREF
  __int64 v29; // [rsp+78h] [rbp-88h]
  __int64 v30; // [rsp+80h] [rbp-80h] BYREF
  int v31; // [rsp+88h] [rbp-78h]
  int v32; // [rsp+8Ch] [rbp-74h]
  __int64 v33; // [rsp+90h] [rbp-70h] BYREF
  int v34; // [rsp+98h] [rbp-68h]
  int v35; // [rsp+9Ch] [rbp-64h]
  int *v36; // [rsp+A0h] [rbp-60h] BYREF
  int v37; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v38[80]; // [rsp+F0h] [rbp-10h] BYREF

  v29 = 0LL;
  v28 = 0LL;
  if ( a7 )
  {
    v12 = a7;
    do
    {
      v13 = (unsigned __int64)*(unsigned int *)a6 << 7;
      *(_OWORD *)((char *)this + v13 + 520) = *(_OWORD *)a6;
      *(_OWORD *)((char *)this + v13 + 536) = *((_OWORD *)a6 + 1);
      *(_OWORD *)((char *)this + v13 + 552) = *((_OWORD *)a6 + 2);
      *(_OWORD *)((char *)this + v13 + 568) = *((_OWORD *)a6 + 3);
      *(_OWORD *)((char *)this + v13 + 584) = *((_OWORD *)a6 + 4);
      *(_OWORD *)((char *)this + v13 + 600) = *((_OWORD *)a6 + 5);
      *(_OWORD *)((char *)this + v13 + 616) = *((_OWORD *)a6 + 6);
      *(_OWORD *)((char *)this + v13 + 632) = *((_OWORD *)a6 + 7);
      if ( *((_BYTE *)this + v13 + 524)
        && !IsDesktopOverlayPlaneResource(*(const struct IOverlayPlaneResource **)((char *)this + v13 + 528)) )
      {
        *((_BYTE *)this + 880) = 1;
        a3 &= ~2u;
      }
      a6 = (const struct DWM_PRESENT_MULTIPLANE_OVERLAY *)((char *)a6 + 128);
      --v12;
    }
    while ( v12 );
  }
  if ( (a3 & 2) != 0 )
  {
    v14 = CLegacySwapChain::Present((__int64)this, a2, a3, (__int64 *)&v28, 0);
    v16 = v14;
    if ( v14 >= 0 )
      goto LABEL_19;
    v26 = 432;
    goto LABEL_43;
  }
  v27 = 0;
  v14 = CConversionSwapChain::CalcPresentMode((CConversionSwapChain *)((char *)this - 24), &v27);
  v16 = v14;
  if ( v14 < 0 )
  {
    v26 = 335;
LABEL_43:
    v23 = v14;
    goto LABEL_30;
  }
  v17 = *((_DWORD *)this + 129);
  if ( !v17 )
  {
    v14 = CConversionSwapChain::ConvertSingleDesktopPlane((CConversionSwapChain *)((char *)this - 24));
    v16 = v14;
    if ( v14 < 0 )
    {
      v26 = 343;
    }
    else
    {
      CRegion::GetRectangles((char *)this + 776, &v28);
      v14 = CLegacySwapChain::Present((__int64)this, a2, a3, (__int64 *)&v28, 0);
      v16 = v14;
      if ( v14 >= 0 )
        goto LABEL_18;
      v26 = 350;
    }
    goto LABEL_43;
  }
  v18 = v17 - 1;
  if ( !v18 )
  {
    v14 = CConversionSwapChain::ConvertSingleAppPlane(
            (CConversionSwapChain *)((char *)this - 24),
            (CConversionSwapChain *)((char *)this + 128 * (unsigned __int64)v27 + 520));
    v16 = v14;
    if ( v14 < 0 )
    {
      v26 = 354;
    }
    else
    {
      v24 = (_OWORD *)((char *)this + 864);
      if ( *((_QWORD *)&v28 + 1) == v29 )
      {
        std::vector<tagRECT>::_Emplace_reallocate<tagRECT>(&v28, *((_QWORD *)&v28 + 1), v24);
      }
      else
      {
        **((_OWORD **)&v28 + 1) = *v24;
        *((_QWORD *)&v28 + 1) += 16LL;
      }
      v14 = CLegacySwapChain::Present((__int64)this, a2, a3, (__int64 *)&v28, 0);
      v16 = v14;
      if ( v14 >= 0 )
        goto LABEL_18;
      v26 = 360;
    }
    goto LABEL_43;
  }
  v19 = v18 - 1;
  if ( !v19 )
  {
    LOBYTE(v15) = 1;
    v25 = (unsigned __int64)v27 << 7;
    v33 = *(_QWORD *)((char *)this + v25 + 540);
    v34 = *(_DWORD *)((char *)this + v25 + 548);
    v35 = *(_DWORD *)((char *)this + v25 + 552);
    v30 = *(_QWORD *)((char *)this + v25 + 556);
    v31 = *(_DWORD *)((char *)this + v25 + 564);
    v32 = *(_DWORD *)((char *)this + v25 + 568);
    v14 = CLegacySwapChain::PresentDFlip(
            (int)this,
            a2,
            a3,
            v15,
            0,
            *(struct IOverlayPlaneResource **)((char *)this + v25 + 528),
            (enum DXGI_COLOR_SPACE_TYPE)*(_DWORD *)((char *)this + v25 + 612),
            a4,
            (__int64)a5,
            (__int64)&v33,
            (__int64)&v30);
    v16 = v14;
    if ( v14 >= 0 )
      goto LABEL_18;
    v26 = 391;
    goto LABEL_43;
  }
  if ( v19 != 1 )
  {
    v16 = -2003292412;
    v23 = -2003292412;
    v26 = 419;
LABEL_30:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, v26, 0LL);
    goto LABEL_19;
  }
  v37 = 0;
  v36 = &v37;
  CRegion::Copy((CRegion *)&v36, (CConversionSwapChain *)((char *)this + 776));
  if ( *((_BYTE *)this + 880) )
  {
    FastRegion::CRegion::CRegion((FastRegion::CRegion *)v38, (const struct tagRECT *)this + 54);
    CRegion::Union((CRegion *)&v36, (const struct CRegion *)v38);
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v38);
  }
  CRegion::GetRectangles(&v36, &v28);
  v20 = CConversionSwapChain::ConvertDesktopAndAppPlanes(
          (CConversionSwapChain *)((char *)this - 24),
          (CConversionSwapChain *)((char *)this + 520),
          (CConversionSwapChain *)((char *)this + 648));
  v16 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x199u, 0LL);
  }
  else
  {
    v21 = CLegacySwapChain::Present((__int64)this, a2, a3, (__int64 *)&v28, 0);
    v16 = v21;
    if ( v21 >= 0 )
    {
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v36);
LABEL_18:
      **((_DWORD **)this + 97) = 0;
      *((_BYTE *)this + 880) = 0;
      goto LABEL_19;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x19Eu, 0LL);
  }
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v36);
LABEL_19:
  if ( (_QWORD)v28 )
    std::_Deallocate<16>(v28, (v29 - v28) & 0xFFFFFFFFFFFFFFF0uLL);
  return v16;
}
