/*
 * XREFs of ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@IRenderTarget@@PEAVCOverlayContext@@@Z @ 0x1800F0E50
 * Callers:
 *     ?RenderTargetDirty@COffScreenRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180056BA0 (-RenderTargetDirty@COffScreenRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18005714C (-Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?BeginFrame@CSubDrawingContext@@AEAAJAEBVCMILMatrix@@@Z @ 0x1800D1420 (-BeginFrame@CSubDrawingContext@@AEAAJAEBVCMILMatrix@@@Z.c)
 *     ?Render@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800EDCF8 (-Render@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800F0A20 (-Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x180128124 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x1801A0388 (-Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ?EnsureDeviceTexture@CStockBitmapProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1801C5500 (-EnsureDeviceTexture@CStockBitmapProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?Render@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180255400 (-Render@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@AEBVCMILMatrix@@PEAW4ProtectionMode@1@@Z @ 0x1802563F0 (-RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@AEBVCMILMat.c)
 *     _CCaptureRenderTarget::RenderCursors_::_18_::_lambda_2_::operator() @ 0x180256BFC (_CCaptureRenderTarget--RenderCursors_--_18_--_lambda_2_--operator().c)
 *     ?AddShadowToShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z @ 0x180290C5C (-AddShadowToShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     ??4?$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@@@Z @ 0x1800452B4 (--4-$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@.c)
 *     ?UpdateRenderTargetInfo@CDrawingContext@@AEAAXXZ @ 0x180064268 (-UpdateRenderTargetInfo@CDrawingContext@@AEAAXXZ.c)
 *     ?PushTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAVIDeviceTarget@@@Z @ 0x1800698E0 (-PushTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAVIDeviceTarget@@@Z.c)
 *     ??$emplace_back@$$V@?$vector_facade@UClippingScopeState@CScopedClipStack@@V?$buffer_impl@UClippingScopeState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18006AFB0 (--$emplace_back@$$V@-$vector_facade@UClippingScopeState@CScopedClipStack@@V-$buffer_impl@UClippi.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18007F840 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Grow@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x1800C90E8 (-Grow@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x1800F2210 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x1800F2550 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800F33F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F36F0 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CreateNullProcessAttribution@CProcessAttributionManager@@AEAAPEAVCProcessAttribution@@XZ @ 0x180192AC4 (-CreateNullProcessAttribution@CProcessAttributionManager@@AEAAPEAVCProcessAttribution@@XZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x180220B50 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180220BB8 (_Init_thread_header.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 *     ?NotifyBeginFrame@CRenderPerf@@QEAAXW4Type@IRenderTarget@@@Z @ 0x180236934 (-NotifyBeginFrame@CRenderPerf@@QEAAXW4Type@IRenderTarget@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::BeginFrame(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        _OWORD *a4,
        unsigned int a5,
        __int64 a6)
{
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  CD3DDevice *v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rax
  int v16; // edi
  _OWORD *v17; // rcx
  char v18; // al
  __int64 v19; // rax
  char v20; // al
  __int64 v21; // rax
  __int64 v22; // rcx
  void **v23; // rbx
  unsigned int v24; // r15d
  unsigned int v25; // eax
  void *v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  _DWORD *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // r15
  __int64 *v34; // rbx
  int v35; // eax
  __int64 v36; // rax
  __int64 v37; // rcx
  __int128 v38; // xmm0
  unsigned int v39; // eax
  __int64 v40; // rsi
  unsigned int v41; // eax
  unsigned int v42; // edx
  __int64 v44; // rax
  CD3DDevice *v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rcx
  struct ID2DContextOwner *v48; // rdx
  struct IDeviceTarget *v49; // r8
  __int64 v50; // rdx
  int v51; // edi
  int v52; // ebx
  unsigned int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx
  unsigned int v56; // ebx
  unsigned int v57; // edi
  void *v58; // rax
  void *v59; // r15
  int v60; // eax
  unsigned int v61; // eax
  bool v62; // al
  int v63; // ebx
  __int64 v64; // rax
  float v65; // xmm0_4
  __int64 (__fastcall *v66)(__int64 *, _BYTE *); // rax
  int *v67; // rax
  int v68; // ecx
  __int64 v69; // r8
  int v70; // eax
  int v71; // r12d
  detail::liberal_expansion_policy **v72; // rcx
  CProcessAttributionManager *v73; // rcx
  int v74; // [rsp+20h] [rbp-E0h]
  char v75; // [rsp+30h] [rbp-D0h] BYREF
  CD3DDevice *v76; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v77; // [rsp+40h] [rbp-C0h]
  int v78; // [rsp+48h] [rbp-B8h] BYREF
  int v79; // [rsp+50h] [rbp-B0h] BYREF
  float v80; // [rsp+58h] [rbp-A8h] BYREF
  float v81; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v82; // [rsp+68h] [rbp-98h] BYREF
  __int64 v83; // [rsp+78h] [rbp-88h]
  __int64 v84; // [rsp+88h] [rbp-78h] BYREF
  __int64 *v85; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v86[8]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v87[8]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v88[8]; // [rsp+A8h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v89; // [rsp+B0h] [rbp-50h] BYREF
  __int64 *v90; // [rsp+C0h] [rbp-40h]
  __int64 v91; // [rsp+C8h] [rbp-38h]
  __int64 **v92; // [rsp+D0h] [rbp-30h]
  __int64 v93; // [rsp+D8h] [rbp-28h]
  int *v94; // [rsp+E0h] [rbp-20h]
  __int64 v95; // [rsp+E8h] [rbp-18h]
  int *v96; // [rsp+F0h] [rbp-10h]
  __int64 v97; // [rsp+F8h] [rbp-8h]
  float *v98; // [rsp+100h] [rbp+0h]
  __int64 v99; // [rsp+108h] [rbp+8h]
  float *v100; // [rsp+110h] [rbp+10h]
  __int64 v101; // [rsp+118h] [rbp+18h]
  char *v102; // [rsp+120h] [rbp+20h]
  __int64 v103; // [rsp+128h] [rbp+28h]
  __int64 v104; // [rsp+130h] [rbp+30h]
  int v105; // [rsp+138h] [rbp+38h]
  int v106; // [rsp+13Ch] [rbp+3Ch]
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  *(_DWORD *)(a1 + 7980) = 0;
  *(_BYTE *)(a1 + 7984) = 0;
  *(_OWORD *)(a1 + 7936) = 0LL;
  *(_OWORD *)(a1 + 7952) = 0LL;
  *(_QWORD *)(a1 + 7968) = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(*a2 + 120))(a2, &v82);
  v77 = 20;
  *(_OWORD *)(a1 + 48) = *(_OWORD *)v10;
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(v10 + 16);
  v11 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(a1 + 200) )
  {
    *(_QWORD *)(a1 + 24) = a2;
    (*(void (__fastcall **)(__int64 *))(*a2 + 8))(a2);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    v12 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 40))(a2);
    v13 = *(CD3DDevice **)(a1 + 32);
    *(_QWORD *)(a1 + 32) = v12;
    if ( v12 && _InterlockedAdd((volatile signed __int32 *)(v12 + 8), 1u) <= 0 )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x18,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v74);
    if ( v13 )
      CD3DDevice::Release(v13);
    goto LABEL_15;
  }
  if ( v11 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v11 + 8LL))(*(_QWORD *)(a1 + 24));
  v16 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 24))(a2);
  if ( v16 < 0 )
  {
    v61 = 108;
LABEL_79:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, v61, 0LL);
    wil::com_ptr_t<CDeviceTexture,wil::err_returncode_policy>::operator=((__int64 *)(a1 + 24), v11);
    if ( *(_QWORD *)(a1 + 24) )
      CDrawingContext::UpdateRenderTargetInfo((CDrawingContext *)a1);
    else
      wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset(a1 + 32);
    goto LABEL_12;
  }
  *(_BYTE *)(a1 + 8065) = 1;
  v76 = *(CD3DDevice **)(a1 + 24);
  *(_QWORD *)(a1 + 24) = a2;
  (*(void (__fastcall **)(__int64 *))(*a2 + 8))(a2);
  if ( v76 )
    (*(void (__fastcall **)(CD3DDevice *))(*(_QWORD *)v76 + 16LL))(v76);
  if ( !*(_QWORD *)(a1 + 32) )
  {
    v44 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 40))(a2);
    v45 = *(CD3DDevice **)(a1 + 32);
    v76 = v45;
    *(_QWORD *)(a1 + 32) = v44;
    if ( v44 && _InterlockedAdd((volatile signed __int32 *)(v44 + 8), 1u) <= 0 )
    {
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x18,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v74);
      v45 = v76;
    }
    if ( v45 )
      CD3DDevice::Release(v45);
  }
  v46 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(a1 + 24) + 120LL))(*(_QWORD *)(a1 + 24), &v82);
  v47 = *(_QWORD *)(a1 + 32);
  v48 = (struct ID2DContextOwner *)(a1 + 16);
  v49 = *(struct IDeviceTarget **)(a1 + 24);
  if ( !a1 )
    v48 = 0LL;
  *(_OWORD *)(a1 + 48) = *(_OWORD *)v46;
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(v46 + 16);
  v16 = CD2DContext::PushTarget((CD2DContext *)(v47 + 16), v48, v49);
  if ( v16 < 0 )
  {
    v61 = 133;
    goto LABEL_79;
  }
  v72 = (detail::liberal_expansion_policy **)(a1 + 736);
  *(_DWORD *)(a1 + 7980) = 0;
  *(_BYTE *)(a1 + 7984) = 0;
  v50 = *(_QWORD *)(a1 + 744);
  if ( v50 != *(_QWORD *)(a1 + 736) && !*(_QWORD *)(v50 - 184) )
  {
    (*(void (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(v50 - 192) + 88LL))(*(_QWORD *)(v50 - 192), v86);
    v72 = (detail::liberal_expansion_policy **)(a1 + 736);
  }
  v14 = *(_QWORD *)(a1 + 24);
  detail::vector_facade<CScopedClipStack::ClippingScopeState,detail::buffer_impl<CScopedClipStack::ClippingScopeState,10,1,detail::liberal_expansion_policy>>::emplace_back<>(v72);
  v15 = *(_QWORD *)(a1 + 744);
  *(_QWORD *)(v15 - 192) = v14;
  v16 = 0;
  *(_BYTE *)(v15 - 8) = 0;
  *(_QWORD *)(v15 - 152) = 1065353216LL;
  *(_QWORD *)(v15 - 144) = 0LL;
  *(_DWORD *)(v15 - 136) = 0;
  *(_QWORD *)(v15 - 132) = 1065353216LL;
  *(_QWORD *)(v15 - 124) = 0LL;
  *(_DWORD *)(v15 - 116) = 0;
  *(_QWORD *)(v15 - 112) = 1065353216LL;
  *(_QWORD *)(v15 - 104) = 0LL;
  *(_DWORD *)(v15 - 96) = 0;
  *(_DWORD *)(v15 - 92) = 1065353216;
  *(_BYTE *)(v15 - 87) &= 0xE9u;
  *(_BYTE *)(v15 - 87) |= 0x29u;
  *(_BYTE *)(v15 - 88) = -86;
  *(_QWORD *)(v15 - 84) = 1065353216LL;
  *(_QWORD *)(v15 - 76) = 0LL;
  *(_DWORD *)(v15 - 68) = 0;
  *(_QWORD *)(v15 - 64) = 1065353216LL;
  *(_QWORD *)(v15 - 56) = 0LL;
  *(_DWORD *)(v15 - 48) = 0;
  *(_QWORD *)(v15 - 44) = 1065353216LL;
  *(_QWORD *)(v15 - 36) = 0LL;
  *(_DWORD *)(v15 - 28) = 0;
  *(_DWORD *)(v15 - 24) = 1065353216;
  *(_BYTE *)(v15 - 19) &= 0xE9u;
  *(_BYTE *)(v15 - 19) |= 0x29u;
  *(_BYTE *)(v15 - 20) = -86;
  *(_BYTE *)(a1 + 8066) = 0;
LABEL_12:
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0xF6u, 0LL);
    return (unsigned int)v16;
  }
LABEL_15:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000) != 0 )
  {
    v62 = a3 && !(unsigned __int8)CMILMatrix::IsIdentity<0>(a3);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000) != 0 )
    {
      v63 = v62 ? 0x44 : 0;
      v64 = *a2;
      v75 = v63;
      v65 = (float)*(int *)((*(__int64 (__fastcall **)(__int64 *, _BYTE *))(v64 + 88))(a2, v87) + 4);
      v66 = *(__int64 (__fastcall **)(__int64 *, _BYTE *))(*a2 + 88);
      v81 = v65;
      v67 = (int *)v66(a2, v88);
      v79 = 0;
      v78 = 0;
      v85 = a2;
      v68 = *v67;
      v90 = &v84;
      v92 = &v85;
      v94 = &v78;
      v96 = &v79;
      v98 = &v80;
      v100 = &v81;
      v84 = a1;
      v102 = &v75;
      v91 = 8LL;
      v93 = 8LL;
      v80 = (float)v68;
      v95 = 4LL;
      v97 = 4LL;
      v99 = 4LL;
      v101 = 4LL;
      v103 = 1LL;
      v104 = a3;
      v105 = v63;
      v106 = 0;
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DRAWING_CONTEXT_FRAME_Start,
        v69,
        9u,
        &v89);
    }
  }
  v17 = (_OWORD *)(a1 + 88);
  if ( a3 )
  {
    *v17 = *(_OWORD *)a3;
    *(_OWORD *)(a1 + 104) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(a1 + 120) = *(_OWORD *)(a3 + 32);
    *(_OWORD *)(a1 + 136) = *(_OWORD *)(a3 + 48);
    *(_DWORD *)(a1 + 152) = *(_DWORD *)(a3 + 64);
    v18 = CMILMatrix::IsIdentity<0>(v17);
  }
  else
  {
    *(_QWORD *)(a1 + 148) = 1065353216LL;
    v18 = 1;
    *(_QWORD *)v17 = 1065353216LL;
    *(_QWORD *)(a1 + 96) = 0LL;
    *(_DWORD *)(a1 + 104) = 0;
    *(_QWORD *)(a1 + 108) = 1065353216LL;
    *(_QWORD *)(a1 + 116) = 0LL;
    *(_DWORD *)(a1 + 124) = 0;
    *(_QWORD *)(a1 + 128) = 1065353216LL;
    *(_QWORD *)(a1 + 136) = 0LL;
    *(_DWORD *)(a1 + 144) = 0;
    *(_BYTE *)(a1 + 153) &= 0xE9u;
    *(_BYTE *)(a1 + 153) |= 0x29u;
    *(_BYTE *)(a1 + 152) = -86;
  }
  *(_BYTE *)(a1 + 8064) = v18;
  if ( a4 )
  {
    *(_OWORD *)(a1 + 72) = *a4;
  }
  else
  {
    *(_QWORD *)(a1 + 72) = 0LL;
    *(_QWORD *)(a1 + 80) = 0LL;
  }
  *(_QWORD *)(a1 + 40) = a6;
  if ( a6 )
  {
    v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a6 + 56) + 8LL) + 32LL))(*(_QWORD *)(a6 + 56) + 8LL);
    *(_OWORD *)(a1 + 156) = *(_OWORD *)v19;
    *(_QWORD *)(a1 + 172) = *(_QWORD *)(v19 + 16);
    *(_DWORD *)(a1 + 180) = *(_DWORD *)(v19 + 24);
    v20 = 1;
  }
  else
  {
    v20 = 0;
    *(_OWORD *)(a1 + 156) = 0LL;
    v83 = 0LL;
    *(_QWORD *)(a1 + 172) = 0LL;
    *(_DWORD *)(a1 + 180) = 0;
  }
  *(_BYTE *)(a1 + 184) = v20;
  *(_DWORD *)(a1 + 232) = 1;
  *(_QWORD *)(a1 + 236) = 1LL;
  *(_QWORD *)(a1 + 244) = 0LL;
  v21 = *(unsigned int *)(a1 + 3284);
  v22 = *(unsigned int *)(a1 + 3280);
  *(_QWORD *)&v82 = 0LL;
  BYTE8(v82) = 1;
  if ( (_DWORD)v22 == (_DWORD)v21 )
  {
    if ( (unsigned __int64)(2 * v21) <= 0xFFFFFFFF )
    {
      v56 = 64;
      if ( (unsigned int)(2 * v21) > 0x40 )
        v56 = 2 * v21;
      v57 = 16 * v22;
      if ( (unsigned __int64)(16 * v22) <= 0xFFFFFFFF )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / v56 <= 0x10 )
        {
          v16 = -2147024809;
        }
        else
        {
          v58 = MIDL_user_allocate(16LL * v56);
          v59 = v58;
          if ( v58 )
          {
            memcpy_0(v58, *(const void **)(a1 + 3272), v57);
            operator delete(*(void **)(a1 + 3272));
            *(_QWORD *)(a1 + 3272) = v59;
            *(_DWORD *)(a1 + 3284) = v56;
            goto LABEL_23;
          }
          v16 = -2147024882;
        }
        v54 = 104LL;
LABEL_61:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v54,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)(unsigned int)v16);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x83,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)(unsigned int)v16);
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x13Au, 0LL);
        return (unsigned int)v16;
      }
      v54 = 101LL;
    }
    else
    {
      v54 = 98LL;
    }
    v16 = -2147024362;
    goto LABEL_61;
  }
LABEL_23:
  v23 = (void **)(a1 + 424);
  v16 = 0;
  v24 = 0;
  *(_OWORD *)(*(_QWORD *)(a1 + 3272) + 16LL * (unsigned int)(*(_DWORD *)(a1 + 3280))++) = v82;
  v25 = *(_DWORD *)(a1 + 3292);
  if ( v25 <= *(_DWORD *)(a1 + 3280) )
    v25 = *(_DWORD *)(a1 + 3280);
  *(_DWORD *)(a1 + 3292) = v25;
  if ( *(_DWORD *)(a1 + 448) )
  {
    do
    {
      v55 = *((_QWORD *)*v23 + 2 * v24);
      if ( v55 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
      ++v24;
    }
    while ( v24 < *(_DWORD *)(a1 + 448) );
  }
  v26 = *v23;
  *(_DWORD *)(a1 + 448) = 0;
  if ( v26 != *(void **)(a1 + 432) )
  {
    operator delete(v26);
    *(_QWORD *)(a1 + 424) = *(_QWORD *)(a1 + 432);
    *(_DWORD *)(a1 + 444) = *(_DWORD *)(a1 + 440);
  }
  v27 = *(_QWORD *)(a1 + 416);
  if ( v27 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
    *(_QWORD *)(a1 + 416) = 0LL;
  }
  *(_DWORD *)(a1 + 544) = 0;
  DynArrayImpl<0>::ShrinkToSize(a1 + 520, 8LL);
  v30 = *(_DWORD **)(a1 + 7992);
  v31 = (unsigned int)tls_index;
  *(_QWORD *)(a1 + 3296) = 0LL;
  v32 = 4LL;
  *v30 = 0;
  if ( dword_1803E2688 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v31) + 4LL) )
  {
    Init_thread_header(&dword_1803E2688);
    if ( dword_1803E2688 == -1 )
    {
      qword_1803E2690 = (__int64)CProcessAttributionManager::CreateNullProcessAttribution(v73);
      Init_thread_footer(&dword_1803E2688);
    }
  }
  v33 = qword_1803E2690;
  v34 = (__int64 *)(a1 + 256);
  v35 = *(_DWORD *)(a1 + 268);
  v82 = 0xBuLL;
  if ( *(_DWORD *)(a1 + 264) == v35 )
  {
    v70 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Grow(
            a1 + 256,
            v32,
            v28,
            v29,
            (const void **)(a1 + 256));
    v71 = v70;
    if ( v70 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x83,
        (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
        (const char *)(unsigned int)v70);
      ModuleFailFastForHRESULT(v71, retaddr);
    }
  }
  v36 = *v34;
  v37 = 2LL * *(unsigned int *)(a1 + 264);
  v38 = v82;
  *(_QWORD *)&v82 = v33;
  *(_OWORD *)(v36 + 8 * v37) = v38;
  ++*(_DWORD *)(a1 + 264);
  v39 = *(_DWORD *)(a1 + 276);
  if ( v39 <= *(_DWORD *)(a1 + 264) )
    v39 = *(_DWORD *)(a1 + 264);
  v40 = a1 + 648;
  *((_DWORD *)v34 + 5) = v39;
  v41 = *(_DWORD *)(v40 + 24);
  v42 = v41 + 1;
  if ( v41 + 1 < v41 )
  {
    v51 = -2147024362;
    v77 = 20;
    v52 = -2147024362;
    v53 = 183;
    goto LABEL_57;
  }
  if ( v42 <= *(_DWORD *)(v40 + 20) )
  {
    *(_QWORD *)(*(_QWORD *)v40 + 8LL * v41) = v33;
    *(_DWORD *)(v40 + 24) = v42;
    goto LABEL_37;
  }
  v76 = (CD3DDevice *)&v82;
  v60 = DynArrayImpl<0>::Grow(v40, 8u, 1, 0, (unsigned __int64 *)&v76);
  v52 = v60;
  if ( v60 < 0 )
  {
    v51 = v60;
    v53 = 194;
LABEL_57:
    MilInstrumentationCheckHR_MaybeFailFast(v77, 0LL, 0, v51, v53, 0LL);
    ModuleFailFastForHRESULT(v52, retaddr);
  }
  *(_QWORD *)((unsigned int)(8 * (*(_DWORD *)(v40 + 24))++) + *(_QWORD *)v40) = *(_QWORD *)v76;
LABEL_37:
  if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
    CRenderPerf::NotifyBeginFrame((char *)g_pComposition + 16, a5);
  return (unsigned int)v16;
}
