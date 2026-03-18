/*
 * XREFs of ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z @ 0x18006AAF0
 * Callers:
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x1800ED0CC (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180194650 (-RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?RenderDirtyRegion@CLegacyStereoRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180258C00 (-RenderDirtyRegion@CLegacyStereoRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?ProduceRealization@CStockBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x1802597C0 (-ProduceRealization@CStockBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CC.c)
 * Callees:
 *     ??4?$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@@@Z @ 0x1800452B4 (--4-$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@.c)
 *     ?UpdateRenderTargetInfo@CDrawingContext@@AEAAXXZ @ 0x180064268 (-UpdateRenderTargetInfo@CDrawingContext@@AEAAXXZ.c)
 *     ?PushTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAVIDeviceTarget@@@Z @ 0x1800698E0 (-PushTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAVIDeviceTarget@@@Z.c)
 *     ??$emplace_back@$$V@?$vector_facade@UClippingScopeState@CScopedClipStack@@V?$buffer_impl@UClippingScopeState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18006AFB0 (--$emplace_back@$$V@-$vector_facade@UClippingScopeState@CScopedClipStack@@V-$buffer_impl@UClippi.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x1800F2550 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F36F0 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::PushRenderTarget(CDrawingContext *this, struct IDeviceTarget *a2)
{
  __int64 v2; // rbx
  int v5; // r15d
  __int64 v6; // rsi
  CD3DDevice **v7; // r12
  __int64 v8; // rax
  CD3DDevice *v9; // rdi
  __int64 v10; // rax
  CD3DDevice *v11; // rcx
  struct ID2DContextOwner *v12; // rdx
  struct IDeviceTarget *v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rax
  unsigned int v18; // eax
  unsigned int v19; // [rsp+20h] [rbp-58h]
  _BYTE v20[8]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v21[24]; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v2 = *((_QWORD *)this + 3);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v5 = (*(__int64 (__fastcall **)(struct IDeviceTarget *))(*(_QWORD *)a2 + 24LL))(a2);
  if ( v5 < 0 )
  {
    v7 = (CD3DDevice **)((char *)this + 32);
    v18 = 108;
LABEL_23:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, v18, 0LL);
    wil::com_ptr_t<CDeviceTexture,wil::err_returncode_policy>::operator=((__int64 *)this + 3, v2);
    if ( *((_QWORD *)this + 3) )
      CDrawingContext::UpdateRenderTargetInfo(this);
    else
      wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset(v7);
    goto LABEL_19;
  }
  *((_BYTE *)this + 8065) = 1;
  v6 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = a2;
  (*(void (__fastcall **)(struct IDeviceTarget *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = (CD3DDevice **)((char *)this + 32);
  if ( !*((_QWORD *)this + 4) )
  {
    v8 = (*(__int64 (__fastcall **)(struct IDeviceTarget *))(*(_QWORD *)a2 + 40LL))(a2);
    v9 = *v7;
    *v7 = (CD3DDevice *)v8;
    if ( v8 && _InterlockedAdd((volatile signed __int32 *)(v8 + 8), 1u) <= 0 )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x18,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v19);
    if ( v9 )
      CD3DDevice::Release(v9);
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 3) + 120LL))(*((_QWORD *)this + 3), v21);
  v11 = *v7;
  v12 = (CDrawingContext *)((char *)this + 16);
  v13 = (struct IDeviceTarget *)*((_QWORD *)this + 3);
  if ( !this )
    v12 = 0LL;
  *((_OWORD *)this + 3) = *(_OWORD *)v10;
  *((_QWORD *)this + 8) = *(_QWORD *)(v10 + 16);
  v5 = CD2DContext::PushTarget((CD3DDevice *)((char *)v11 + 16), v12, v13);
  if ( v5 < 0 )
  {
    v18 = 133;
    goto LABEL_23;
  }
  *((_DWORD *)this + 1995) = 0;
  *((_BYTE *)this + 7984) = 0;
  v14 = *((_QWORD *)this + 93);
  if ( v14 != *((_QWORD *)this + 92) && !*(_QWORD *)(v14 - 184) )
    (*(void (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(v14 - 192) + 88LL))(*(_QWORD *)(v14 - 192), v20);
  v15 = *((_QWORD *)this + 3);
  detail::vector_facade<CScopedClipStack::ClippingScopeState,detail::buffer_impl<CScopedClipStack::ClippingScopeState,10,1,detail::liberal_expansion_policy>>::emplace_back<>((char *)this + 736);
  v16 = *((_QWORD *)this + 93);
  v5 = 0;
  *(_BYTE *)(v16 - 8) = 0;
  *(_QWORD *)(v16 - 192) = v15;
  *(_QWORD *)(v16 - 152) = 1065353216LL;
  *(_QWORD *)(v16 - 144) = 0LL;
  *(_DWORD *)(v16 - 136) = 0;
  *(_QWORD *)(v16 - 132) = 1065353216LL;
  *(_QWORD *)(v16 - 124) = 0LL;
  *(_DWORD *)(v16 - 116) = 0;
  *(_QWORD *)(v16 - 112) = 1065353216LL;
  *(_QWORD *)(v16 - 104) = 0LL;
  *(_DWORD *)(v16 - 96) = 0;
  *(_DWORD *)(v16 - 92) = 1065353216;
  *(_BYTE *)(v16 - 87) &= 0xE9u;
  *(_BYTE *)(v16 - 87) |= 0x29u;
  *(_BYTE *)(v16 - 88) = -86;
  *(_QWORD *)(v16 - 84) = 1065353216LL;
  *(_QWORD *)(v16 - 76) = 0LL;
  *(_DWORD *)(v16 - 68) = 0;
  *(_QWORD *)(v16 - 64) = 1065353216LL;
  *(_QWORD *)(v16 - 56) = 0LL;
  *(_DWORD *)(v16 - 48) = 0;
  *(_QWORD *)(v16 - 44) = 1065353216LL;
  *(_QWORD *)(v16 - 36) = 0LL;
  *(_DWORD *)(v16 - 28) = 0;
  *(_DWORD *)(v16 - 24) = 1065353216;
  *(_BYTE *)(v16 - 19) &= 0xE9u;
  *(_BYTE *)(v16 - 19) |= 0x29u;
  *(_BYTE *)(v16 - 20) = -86;
  *((_BYTE *)this + 8066) = 0;
LABEL_19:
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return (unsigned int)v5;
}
