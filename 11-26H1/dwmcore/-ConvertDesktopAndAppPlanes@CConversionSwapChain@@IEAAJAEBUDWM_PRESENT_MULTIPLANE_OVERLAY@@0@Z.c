/*
 * XREFs of ?ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@0@Z @ 0x18012F9DC
 * Callers:
 *     ?PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x1800363C0 (-PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLAN.c)
 * Callees:
 *     ?BeginIterator@CRegion@FastRegion@@QEBA?AVIterator@12@XZ @ 0x180035FFC (-BeginIterator@CRegion@FastRegion@@QEBA-AVIterator@12@XZ.c)
 *     ?Subtract@CRegion@@QEAAXAEBV1@@Z @ 0x1800747C4 (-Subtract@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180074C60 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x180075B50 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetRectangle@CRegion@FastRegion@@QEAAXHHHH@Z @ 0x18009DE60 (-SetRectangle@CRegion@FastRegion@@QEAAXHHHH@Z.c)
 *     ?ConvertSingleResource@CConversionSwapChain@@IEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@33@Z @ 0x180104FC0 (-ConvertSingleResource@CConversionSwapChain@@IEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x180105210 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18012DEDC (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Copy@CRegion@@QEAAXAEBV1@@Z @ 0x18012F7D8 (-Copy@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?HDRConvertWithFakeOverlay@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatInfo@@0AEBUD2D_SIZE_U@@1AEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@3PEAUID3D11RenderTargetView@@2W4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x18012FFC8 (-HDRConvertWithFakeOverlay@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatInfo@@0.c)
 *     ?GetAppOverlayShaderResourceView@CConversionSwapChain@@IEAAJPEAVIOverlayPlaneResource@@PEAUD2D_SIZE_U@@PEAW4DXGI_FORMAT@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180130B50 (-GetAppOverlayShaderResourceView@CConversionSwapChain@@IEAAJPEAVIOverlayPlaneResource@@PEAUD2D_S.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x180130FA0 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802014C4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CConversionSwapChain::ConvertDesktopAndAppPlanes(
        CConversionSwapChain *this,
        const struct DWM_PRESENT_MULTIPLANE_OVERLAY *a2,
        const struct DWM_PRESENT_MULTIPLANE_OVERLAY *a3)
{
  CConversionSwapChain *v3; // rsi
  __int64 v4; // rcx
  const struct DWM_PRESENT_MULTIPLANE_OVERLAY *v6; // r12
  __int128 v7; // xmm1
  int *v8; // rdi
  int AppOverlayShaderResourceView; // eax
  unsigned int v10; // ebx
  _DWORD **v11; // r14
  int v12; // eax
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, __int64, __int64 *); // r13
  __int64 v15; // rax
  int v16; // eax
  int v17; // eax
  char *v18; // r8
  _DWORD *v19; // rdx
  int v20; // ecx
  __int64 v21; // r13
  __int128 v22; // xmm0
  int v23; // r15d
  __int128 v24; // xmm1
  int v25; // r12d
  __int64 v26; // rcx
  int v27; // r14d
  __int64 v28; // rsi
  char v29; // bl
  float v30; // xmm6_4
  int v31; // edi
  __int64 v32; // rax
  int v33; // eax
  _DWORD *v34; // rcx
  __int64 v35; // r13
  _DWORD *v36; // r9
  int v38; // eax
  __int128 v39; // xmm0
  int v40; // ebx
  __int128 v41; // xmm1
  __int64 v42; // rdx
  __int64 v43; // rax
  int v44; // eax
  FastRegion::Internal::CRgnData *v45; // rcx
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int64 v48; // rdx
  int v49; // eax
  FastRegion::Internal::CRgnData *v50; // rcx
  int v51; // [rsp+28h] [rbp-E0h]
  int v52; // [rsp+28h] [rbp-E0h]
  int v53; // [rsp+28h] [rbp-E0h]
  int v54; // [rsp+88h] [rbp-80h]
  __int128 v55; // [rsp+98h] [rbp-70h] BYREF
  struct ID3D11ShaderResourceView *v56; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v57; // [rsp+B0h] [rbp-58h] BYREF
  CConversionSwapChain *v58; // [rsp+B8h] [rbp-50h]
  struct D2D_SIZE_U v59; // [rsp+C0h] [rbp-48h] BYREF
  const struct DWM_PRESENT_MULTIPLANE_OVERLAY *v60; // [rsp+C8h] [rbp-40h]
  char v61[8]; // [rsp+D0h] [rbp-38h] BYREF
  unsigned __int64 v62; // [rsp+D8h] [rbp-30h]
  _DWORD *v63; // [rsp+E0h] [rbp-28h]
  char *v64; // [rsp+E8h] [rbp-20h]
  int v65; // [rsp+F0h] [rbp-18h]
  int v66; // [rsp+F4h] [rbp-14h]
  _DWORD *v67; // [rsp+100h] [rbp-8h]
  char *v68; // [rsp+108h] [rbp+0h]
  int v69[4]; // [rsp+110h] [rbp+8h] BYREF
  __int128 v70; // [rsp+120h] [rbp+18h] BYREF
  char v71[8]; // [rsp+130h] [rbp+28h] BYREF
  __int64 v72[2]; // [rsp+138h] [rbp+30h] BYREF
  __int64 v73[2]; // [rsp+148h] [rbp+40h] BYREF
  int v74[6]; // [rsp+158h] [rbp+50h] BYREF
  enum DXGI_FORMAT v75[2]; // [rsp+170h] [rbp+68h] BYREF
  int v76; // [rsp+178h] [rbp+70h]
  int v77[6]; // [rsp+180h] [rbp+78h] BYREF
  FastRegion::Internal::CRgnData *v78; // [rsp+198h] [rbp+90h] BYREF
  int v79; // [rsp+1A0h] [rbp+98h] BYREF
  int *v80; // [rsp+1E8h] [rbp+E0h] BYREF
  int v81; // [rsp+1F0h] [rbp+E8h] BYREF
  FastRegion::CRegion *v82[10]; // [rsp+238h] [rbp+130h] BYREF
  FastRegion::CRegion *v83[10]; // [rsp+288h] [rbp+180h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+330h] [rbp+228h]

  v3 = this;
  v58 = this;
  v4 = *((_QWORD *)this + 65) + 8LL;
  v57 = 0LL;
  v56 = 0LL;
  v60 = a3;
  v6 = a3;
  (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 32LL))(v4, v71);
  (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)(*((_QWORD *)v3 + 65) + 8LL) + 24LL))(
    *((_QWORD *)v3 + 65) + 8LL,
    v77);
  v76 = *((_DWORD *)v6 + 23);
  v59 = 0LL;
  v75[0] = DXGI_FORMAT_UNKNOWN;
  v75[1] = DXGI_FORMAT_R32G32B32A32_UINT;
  FastRegion::CRegion::CRegion((FastRegion::CRegion *)v82, (const struct tagRECT *)((char *)a2 + 52));
  FastRegion::CRegion::CRegion((FastRegion::CRegion *)v83, (const struct tagRECT *)((char *)v6 + 52));
  v7 = *(_OWORD *)((char *)v6 + 52);
  v80 = &v81;
  v81 = 0;
  v8 = (int *)((char *)v3 + 888);
  v55 = 0LL;
  *(_OWORD *)((char *)v3 + 888) = v7;
  AppOverlayShaderResourceView = CConversionSwapChain::GetAppOverlayShaderResourceView(
                                   v3,
                                   *((struct IOverlayPlaneResource **)v6 + 1),
                                   &v59,
                                   v75,
                                   &v56);
  v10 = AppOverlayShaderResourceView;
  if ( AppOverlayShaderResourceView < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, AppOverlayShaderResourceView, 0x2DDu, 0LL);
  }
  else
  {
    v11 = (_DWORD **)((char *)v3 + 800);
    v12 = FastRegion::CRegion::Intersect((const struct FastRegion::Internal::CRgnData **)v3 + 100, v82);
    if ( v12 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1B1,
        (unsigned int)"onecoreuap\\windows\\DWM\\common\\shared\\Region.h",
        (const char *)(unsigned int)v12,
        v51);
    v13 = *((_QWORD *)v3 + 65);
    v14 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)(v13 + 8) + 112LL);
    if ( v57 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
    v15 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)v3 + 65) + 88LL))(*((_QWORD *)v3 + 65), v74);
    v16 = v14(v13 + 8, v15, &v57);
    v10 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x2E3u, 0LL);
    }
    else if ( **v11 )
    {
      v79 = 0;
      v78 = (FastRegion::Internal::CRgnData *)&v79;
      CRegion::Copy(&v78, (FastRegion::CRegion **)v3 + 100);
      CRegion::Subtract(&v78, v83);
      FastRegion::Internal::CRgnData::BeginIterator(v78, (struct FastRegion::CRegion::Iterator *)v61);
      while ( 1 )
      {
        if ( (unsigned __int64)v63 >= v62 )
        {
          FastRegion::CRegion::FreeMemory(&v78);
          goto LABEL_10;
        }
        v39 = *(_OWORD *)((char *)a2 + 36);
        v40 = *((_DWORD *)a2 + 17);
        v41 = *(_OWORD *)((char *)a2 + 20);
        DWORD1(v55) = *v63;
        HIDWORD(v55) = v63[2];
        v42 = 2 * v65;
        v70 = v39;
        *(_OWORD *)v69 = v41;
        LODWORD(v55) = *(_DWORD *)&v64[4 * v42];
        DWORD2(v55) = *(_DWORD *)&v64[4 * v42 + 4];
        v43 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v57 + 128LL))(v57);
        v44 = CConversionSwapChain::ConvertSingleResource(
                (__int64)v3,
                v43,
                (__int64)v71,
                (__int64)v77,
                (__int64)v69,
                v40,
                (__int64)&v70,
                &v55);
        v10 = v44;
        if ( v44 < 0 )
          break;
        FastRegion::Internal::CRgnData::StepIterator(v45, (struct FastRegion::CRegion::Iterator *)v61);
      }
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v44, 0x2FBu, 0LL);
LABEL_41:
      FastRegion::CRegion::FreeMemory(&v78);
    }
    else
    {
LABEL_10:
      if ( *((_BYTE *)v3 + 904) )
      {
        FastRegion::CRegion::CRegion((FastRegion::CRegion *)&v78, (const struct tagRECT *)((char *)v3 + 888));
        CRegion::Subtract(&v78, v82);
        FastRegion::CRegion::BeginIterator((int **)&v78, (__int64)v61);
        while ( (unsigned __int64)v63 < v62 )
        {
          v46 = *(_OWORD *)((char *)v6 + 36);
          DWORD1(v55) = *v63;
          v47 = *(_OWORD *)((char *)v6 + 20);
          HIDWORD(v55) = v63[2];
          v48 = 2 * v65;
          v70 = v46;
          *(_OWORD *)v69 = v47;
          LODWORD(v55) = *(_DWORD *)&v64[4 * v48];
          DWORD2(v55) = *(_DWORD *)&v64[4 * v48 + 4];
          v49 = CConversionSwapChain::ConvertSingleResource(
                  (__int64)v3,
                  (__int64)v56,
                  (__int64)&v59,
                  (__int64)v75,
                  (__int64)v69,
                  *((_DWORD *)v6 + 17),
                  (__int64)&v70,
                  &v55);
          v10 = v49;
          if ( v49 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v49, 0x312u, 0LL);
            goto LABEL_41;
          }
          FastRegion::Internal::CRgnData::StepIterator(v50, (struct FastRegion::CRegion::Iterator *)v61);
        }
        FastRegion::CRegion::FreeMemory(&v78);
        if ( !*((_BYTE *)v3 + 904) )
          goto LABEL_32;
        FastRegion::CRegion::SetRectangle(
          (FastRegion::CRegion *)&v80,
          *v8,
          *((_DWORD *)v3 + 223),
          *((_DWORD *)v3 + 224),
          *((_DWORD *)v3 + 225));
        v17 = FastRegion::CRegion::Intersect((const struct FastRegion::Internal::CRgnData **)&v80, v82);
        if ( v17 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x1B1,
            (unsigned int)"onecoreuap\\windows\\DWM\\common\\shared\\Region.h",
            (const char *)(unsigned int)v17,
            v52);
      }
      else
      {
LABEL_32:
        if ( **v11 )
        {
          FastRegion::CRegion::SetRectangle(
            (FastRegion::CRegion *)&v80,
            *v8,
            *((_DWORD *)v3 + 223),
            *((_DWORD *)v3 + 224),
            *((_DWORD *)v3 + 225));
          v38 = FastRegion::CRegion::Intersect(
                  (const struct FastRegion::Internal::CRgnData **)&v80,
                  (const struct FastRegion::Internal::CRgnData **)v3 + 100);
          if ( v38 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x1B1,
              (unsigned int)"onecoreuap\\windows\\DWM\\common\\shared\\Region.h",
              (const char *)(unsigned int)v38,
              v53);
        }
      }
      FastRegion::CRegion::BeginIterator(&v80, (__int64)v61);
      v18 = v64;
      v19 = v63;
      v20 = v65;
      LODWORD(v21) = v66;
      v68 = v64;
      v67 = v63;
      v54 = v65;
LABEL_16:
      while ( (unsigned __int64)v19 < v62 )
      {
        v22 = *(_OWORD *)((char *)v6 + 36);
        v23 = *((_DWORD *)v6 + 17);
        v24 = *(_OWORD *)((char *)v6 + 20);
        v25 = (int)v56;
        DWORD1(v55) = *v19;
        *(_QWORD *)&v70 = v19 + 2;
        HIDWORD(v55) = v19[2];
        v26 = 2 * v20;
        *(_OWORD *)v73 = v22;
        *(_OWORD *)v74 = v24;
        LODWORD(v55) = *(_DWORD *)&v18[4 * v26];
        DWORD2(v55) = *(_DWORD *)&v18[4 * v26 + 4];
        v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v57 + 128LL))(v57);
        (*(void (__fastcall **)(_QWORD, int *))(**((_QWORD **)v3 + 37) + 88LL))(*((_QWORD *)v3 + 37), v69);
        v28 = *((_QWORD *)v3 + 8);
        *(_OWORD *)v72 = v55;
        v29 = *((_BYTE *)v58 + 124);
        v30 = *((float *)v58 + 30);
        v31 = *((_DWORD *)v58 + 25);
        v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)v58 + 37) + 16LL) + 176LL))(*((_QWORD *)v58 + 37) + 16LL);
        v33 = CD3DDevice::HDRConvertWithFakeOverlay(
                v28,
                v27,
                (int)v77,
                v25,
                (int)&v59,
                (__int64)v75,
                (int)v74,
                v23,
                (__int64)v73,
                v32,
                (int)v69,
                v31,
                v30,
                v29,
                (__int64)v72);
        v10 = v33;
        if ( v33 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v33, 0x39Fu, 0LL);
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x337u, 0LL);
          break;
        }
        v3 = v58;
        v20 = v54 + 1;
        v6 = v60;
        v19 = v67;
        v18 = v68;
        v54 = v20;
        if ( v20 >= (int)v21 )
        {
          v34 = (_DWORD *)v70;
          do
          {
            v18 = (char *)v34 + (int)v34[1];
            v35 = (int)v34[3] - (_QWORD)v18;
            v67 = v34;
            v68 = v18;
            v21 = ((__int64)v34 + v35 + 8) >> 3;
            v36 = v34;
            v19 = v34;
            v34 += 2;
            if ( (_DWORD)v21 )
            {
              v20 = 0;
              v54 = 0;
              goto LABEL_16;
            }
          }
          while ( (unsigned __int64)v36 < v62 );
          v20 = v54;
        }
      }
    }
  }
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion **)&v80);
  FastRegion::CRegion::FreeMemory(v83);
  FastRegion::CRegion::FreeMemory(v82);
  if ( v56 )
    ((void (__fastcall *)(struct ID3D11ShaderResourceView *))v56->lpVtbl->Release)(v56);
  if ( v57 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
  return v10;
}
