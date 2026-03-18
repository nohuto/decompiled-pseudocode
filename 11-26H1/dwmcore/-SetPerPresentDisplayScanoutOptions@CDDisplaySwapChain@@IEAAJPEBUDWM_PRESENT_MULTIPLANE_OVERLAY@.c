/*
 * XREFs of ?SetPerPresentDisplayScanoutOptions@CDDisplaySwapChain@@IEAAJPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IPEAUIDisplayScanout@Core@Display@Devices@Windows@@_NW4DXGI_HDR_METADATA_TYPE@@PEBX@Z @ 0x180209884
 * Callers:
 *     ?PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x180034920 (-PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_.c)
 * Callees:
 *     ??1?$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ @ 0x18000A17C (--1-$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsDesktopOverlayPlaneResource@@YA_NPEBVIOverlayPlaneResource@@@Z @ 0x180034104 (-IsDesktopOverlayPlaneResource@@YA_NPEBVIOverlayPlaneResource@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$vector_facade@URectInt32@Graphics@Windows@@V?$buffer_impl@URectInt32@Graphics@Windows@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x18009ED28 (--1-$vector_facade@URectInt32@Graphics@Windows@@V-$buffer_impl@URectInt32@Graphics@Windows@@$07$.c)
 *     ?reserve_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_RECT_F@@_K0@Z @ 0x1801430B4 (-reserve_region@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansio.c)
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBUtagRECT@@@Z @ 0x18018CEC4 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBUtag.c)
 *     ?clear_region@?$vector_facade@URectInt32@Graphics@Windows@@V?$buffer_impl@URectInt32@Graphics@Windows@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180191610 (-clear_region@-$vector_facade@URectInt32@Graphics@Windows@@V-$buffer_impl@URectInt32@Graphics@Wi.c)
 *     ?ComputeCachedHdrMetadata@CDDisplaySwapChain@@IEAAJW4DXGI_HDR_METADATA_TYPE@@PEBX@Z @ 0x1801A4940 (-ComputeCachedHdrMetadata@CDDisplaySwapChain@@IEAAJW4DXGI_HDR_METADATA_TYPE@@PEBX@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDisplaySwapChain::SetPerPresentDisplayScanoutOptions(
        CDDisplaySwapChain *this,
        const struct DWM_PRESENT_MULTIPLANE_OVERLAY *a2,
        unsigned int a3,
        void (__fastcall ***a4)(struct Windows::Devices::Display::Core::IDisplayScanout *, GUID *, __int64 *),
        bool a5,
        enum DXGI_HDR_METADATA_TYPE a6,
        void *a7)
{
  void (__fastcall **v7)(struct Windows::Devices::Display::Core::IDisplayScanout *, GUID *, __int64 *); // rax
  unsigned int v8; // r14d
  void (__fastcall *v10)(struct Windows::Devices::Display::Core::IDisplayScanout *, GUID *, __int64 *); // rax
  unsigned int v11; // r13d
  __int64 v12; // rdx
  _BYTE *v13; // rax
  unsigned int v14; // edi
  _BYTE *v15; // r8
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r15
  BOOL v18; // ebx
  int v19; // eax
  unsigned int v20; // ebx
  int v21; // esi
  int v22; // edi
  int v23; // ebx
  int v24; // r14d
  _DWORD *v25; // rax
  int v26; // eax
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rdx
  unsigned __int64 v30; // r8
  CDDisplaySwapChain *v31; // rsi
  __int64 v33; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v34; // [rsp+38h] [rbp-C8h]
  __int64 v35; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v36; // [rsp+48h] [rbp-B8h]
  __int128 v37; // [rsp+50h] [rbp-B0h] BYREF
  void *v38; // [rsp+60h] [rbp-A0h]
  CDDisplaySwapChain *v39; // [rsp+68h] [rbp-98h]
  __int128 v40; // [rsp+70h] [rbp-90h] BYREF
  _BYTE *v41; // [rsp+80h] [rbp-80h] BYREF
  _BYTE *v42; // [rsp+88h] [rbp-78h]
  char *v43; // [rsp+90h] [rbp-70h]
  _BYTE v44[128]; // [rsp+98h] [rbp-68h] BYREF
  char v45; // [rsp+118h] [rbp+18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+68h]

  v7 = *a4;
  v8 = a3;
  v36 = a3;
  v39 = this;
  v10 = *v7;
  v11 = 0;
  v38 = a7;
  v33 = 0LL;
  v10((struct Windows::Devices::Display::Core::IDisplayScanout *)a4, &GUID_2e5eba29_7eb8_5e77_a328_83a2ab9877d7, &v33);
  v13 = v44;
  v14 = 0;
  v15 = v44;
  v41 = v44;
  v42 = v44;
  v43 = &v45;
  while ( 1 )
  {
    v34 = v14;
    if ( v14 >= v8 )
    {
      v31 = v39;
      v19 = CDDisplaySwapChain::ComputeCachedHdrMetadata(v39, a6, v38);
      v20 = v19;
      if ( v19 >= 0 )
      {
        v19 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v33 + 120LL))(v33, *((_QWORD *)v31 + 74));
        v20 = v19;
        if ( v19 >= 0 )
        {
          v20 = 0;
          goto LABEL_34;
        }
        v28 = 1643LL;
      }
      else
      {
        v28 = 1642LL;
      }
LABEL_20:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v28,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\ddisplayswapchain.cpp",
        (const char *)(unsigned int)v19);
LABEL_34:
      detail::vector_facade<Windows::Graphics::RectInt32,detail::buffer_impl<Windows::Graphics::RectInt32,8,1,detail::liberal_expansion_policy>>::~vector_facade<Windows::Graphics::RectInt32,detail::buffer_impl<Windows::Graphics::RectInt32,8,1,detail::liberal_expansion_policy>>((__int64 *)&v41);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v33);
      return v20;
    }
    v16 = (v15 - v13) >> 4;
    if ( v16 )
      detail::vector_facade<Windows::Graphics::RectInt32,detail::buffer_impl<Windows::Graphics::RectInt32,8,1,detail::liberal_expansion_policy>>::clear_region(
        (__int64 *)&v41,
        v12,
        v16);
    v17 = (unsigned __int64)v14 << 7;
    if ( *((_BYTE *)a2 + v17 + 4) )
    {
      v18 = 1;
      if ( !a5 )
        v18 = IsDesktopOverlayPlaneResource(*(const struct IOverlayPlaneResource **)((char *)a2 + v17 + 8)) == 0;
      v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, BOOL))(*(_QWORD *)v33 + 144LL))(
              v33,
              *(unsigned int *)((char *)a2 + v17),
              v18);
      v20 = v19;
      if ( v19 < 0 )
      {
        v28 = 1608LL;
        goto LABEL_20;
      }
      v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v33 + 136LL))(
              v33,
              *(unsigned int *)((char *)a2 + v17),
              *(unsigned int *)((char *)a2 + v17 + 120));
      v20 = v19;
      if ( v19 < 0 )
      {
        v28 = 1612LL;
        goto LABEL_20;
      }
      if ( *(_DWORD *)((char *)a2 + v17 + 76) )
      {
        v40 = *(_OWORD *)((char *)a2 + v17 + 20);
        do
        {
          v37 = *(_OWORD *)(*(_QWORD *)((char *)a2 + v17 + 80) + 16LL * v11);
          if ( TMilRect<int,tagRECT,Mil3DRectL,RectUniqueness::_CMilRectL_>::IntersectUnsafe((int *)&v37, (int *)&v40) )
          {
            v21 = DWORD1(v37);
            v22 = HIDWORD(v37) - DWORD1(v37);
            v23 = v37;
            v24 = DWORD2(v37) - v37;
            v25 = (_DWORD *)detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,3,1,detail::liberal_expansion_policy>>::reserve_region(
                              (__int64 *)&v41,
                              (v42 - v41) >> 4);
            *v25 = v23;
            v25[1] = v21;
            v25[2] = v24;
            v25[3] = v22;
          }
          ++v11;
        }
        while ( v11 < *(_DWORD *)((char *)a2 + v17 + 76) );
        v14 = v34;
        v11 = 0;
        v8 = v36;
      }
    }
    v35 = 0LL;
    v26 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v33)(
            v33,
            &GUID_aac1aa85_b883_5c29_b7c1_c2eaaeb3da75,
            &v35);
    v20 = v26;
    if ( v26 < 0 )
      break;
    v27 = (*(__int64 (__fastcall **)(__int64, _QWORD, signed __int64))(*(_QWORD *)v35 + 48LL))(
            v35,
            *(unsigned int *)((char *)a2 + v17),
            (v42 - v41) >> 4);
    v20 = v27;
    if ( v27 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x666,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\ddisplayswapchain.cpp",
        (const char *)(unsigned int)v27);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v35);
      goto LABEL_34;
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v35);
    v15 = v42;
    ++v14;
    v13 = v41;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x662,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\ddisplayswapchain.cpp",
    (const char *)(unsigned int)v26);
  if ( v35 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  v30 = (v42 - v41) >> 4;
  if ( v30 )
    detail::vector_facade<Windows::Graphics::RectInt32,detail::buffer_impl<Windows::Graphics::RectInt32,8,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)&v41,
      v29,
      v30);
  detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>((void **)&v41);
  if ( v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  return v20;
}
