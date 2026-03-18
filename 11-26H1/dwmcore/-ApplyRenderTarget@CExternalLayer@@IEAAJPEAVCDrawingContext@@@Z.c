/*
 * XREFs of ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800C9380
 * Callers:
 *     ?ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18005E960 (-ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800C9200 (-ApplyState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??4?$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@@@Z @ 0x1800452B4 (--4-$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@.c)
 *     ?Pop@CBaseClipStack@@QEAAXXZ @ 0x18005CB40 (-Pop@CBaseClipStack@@QEAAXXZ.c)
 *     ?UpdateRenderTargetInfo@CDrawingContext@@AEAAXXZ @ 0x180064268 (-UpdateRenderTargetInfo@CDrawingContext@@AEAAXXZ.c)
 *     ?PushTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAVIDeviceTarget@@@Z @ 0x1800698E0 (-PushTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAVIDeviceTarget@@@Z.c)
 *     ??$emplace_back@$$V@?$vector_facade@UClippingScopeState@CScopedClipStack@@V?$buffer_impl@UClippingScopeState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18006AFB0 (--$emplace_back@$$V@-$vector_facade@UClippingScopeState@CScopedClipStack@@V-$buffer_impl@UClippi.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18006E5F0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800C9860 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_R.c)
 *     ?Clear@CD2DContext@@UEAAXPEBVID2DContextOwner@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800CA0A0 (-Clear@CD2DContext@@UEAAXPEBVID2DContextOwner@@AEBU_D3DCOLORVALUE@@@Z.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x1800F2550 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F36F0 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CExternalLayer::ApplyRenderTarget(CExternalLayer *this, struct CDrawingContext *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rdi
  int v7; // ebp
  __int64 v8; // r14
  char *v9; // r14
  __int64 v10; // rax
  CD3DDevice *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rcx
  struct ID2DContextOwner *v14; // rdx
  struct IDeviceTarget *v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 result; // rax
  __int64 v20; // rcx
  int v21; // ebx
  int v22; // eax
  int v23; // eax
  __int64 v24; // rax
  float v25; // xmm1_4
  unsigned int v26; // eax
  unsigned int v27; // [rsp+20h] [rbp-68h]
  __int64 v28; // [rsp+30h] [rbp-58h] BYREF
  float v29; // [rsp+38h] [rbp-50h]
  float v30; // [rsp+3Ch] [rbp-4Ch]
  _DWORD v31[2]; // [rsp+48h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 144LL))(*((_QWORD *)this + 1));
  v5 = *((_QWORD *)a2 + 3);
  v6 = v4 + 16;
  if ( !v4 )
    v6 = 0LL;
  if ( v5 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 8LL))(*((_QWORD *)a2 + 3));
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 24LL))(v6);
  if ( v7 < 0 )
  {
    v26 = 108;
    v9 = (char *)a2 + 32;
LABEL_34:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, v26, 0LL);
    wil::com_ptr_t<CDeviceTexture,wil::err_returncode_policy>::operator=((__int64 *)a2 + 3, v5);
    if ( *((_QWORD *)a2 + 3) )
      CDrawingContext::UpdateRenderTargetInfo(a2);
    else
      wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset(v9);
    goto LABEL_23;
  }
  *((_BYTE *)a2 + 8065) = 1;
  v8 = *((_QWORD *)a2 + 3);
  *((_QWORD *)a2 + 3) = v6;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v9 = (char *)a2 + 32;
  if ( !*((_QWORD *)a2 + 4) )
  {
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 40LL))(v6);
    v11 = *(CD3DDevice **)v9;
    *(_QWORD *)v9 = v10;
    if ( v10 && _InterlockedAdd((volatile signed __int32 *)(v10 + 8), 1u) <= 0 )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x18,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v27);
    if ( v11 )
      CD3DDevice::Release(v11);
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)a2 + 3) + 120LL))(*((_QWORD *)a2 + 3), &v28);
  v13 = *(_QWORD *)v9;
  v14 = (struct CDrawingContext *)((char *)a2 + 16);
  v15 = (struct IDeviceTarget *)*((_QWORD *)a2 + 3);
  if ( !a2 )
    v14 = 0LL;
  *((_OWORD *)a2 + 3) = *(_OWORD *)v12;
  *((_QWORD *)a2 + 8) = *(_QWORD *)(v12 + 16);
  v7 = CD2DContext::PushTarget((CD2DContext *)(v13 + 16), v14, v15);
  if ( v7 < 0 )
  {
    v26 = 133;
    goto LABEL_34;
  }
  *((_DWORD *)a2 + 1995) = 0;
  *((_BYTE *)a2 + 7984) = 0;
  v16 = *((_QWORD *)a2 + 93);
  if ( v16 != *((_QWORD *)a2 + 92) && !*(_QWORD *)(v16 - 184) )
    (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(v16 - 192) + 88LL))(*(_QWORD *)(v16 - 192), &v28);
  v17 = *((_QWORD *)a2 + 3);
  detail::vector_facade<CScopedClipStack::ClippingScopeState,detail::buffer_impl<CScopedClipStack::ClippingScopeState,10,1,detail::liberal_expansion_policy>>::emplace_back<>((detail::liberal_expansion_policy **)a2 + 92);
  v18 = *((_QWORD *)a2 + 93);
  v7 = 0;
  *(_BYTE *)(v18 - 8) = 0;
  *(_QWORD *)(v18 - 192) = v17;
  *(_QWORD *)(v18 - 152) = 1065353216LL;
  *(_QWORD *)(v18 - 144) = 0LL;
  *(_DWORD *)(v18 - 136) = 0;
  *(_QWORD *)(v18 - 132) = 1065353216LL;
  *(_QWORD *)(v18 - 124) = 0LL;
  *(_DWORD *)(v18 - 116) = 0;
  *(_QWORD *)(v18 - 112) = 1065353216LL;
  *(_QWORD *)(v18 - 104) = 0LL;
  *(_DWORD *)(v18 - 96) = 0;
  *(_DWORD *)(v18 - 92) = 1065353216;
  *(_BYTE *)(v18 - 87) &= 0xE9u;
  *(_BYTE *)(v18 - 87) |= 0x29u;
  *(_BYTE *)(v18 - 88) = -86;
  *(_QWORD *)(v18 - 84) = 1065353216LL;
  *(_QWORD *)(v18 - 76) = 0LL;
  *(_DWORD *)(v18 - 68) = 0;
  *(_QWORD *)(v18 - 64) = 1065353216LL;
  *(_QWORD *)(v18 - 56) = 0LL;
  *(_DWORD *)(v18 - 48) = 0;
  *(_QWORD *)(v18 - 44) = 1065353216LL;
  *(_QWORD *)(v18 - 36) = 0LL;
  *(_DWORD *)(v18 - 28) = 0;
  *(_DWORD *)(v18 - 24) = 1065353216;
  *(_BYTE *)(v18 - 19) &= 0xE9u;
  *(_BYTE *)(v18 - 19) |= 0x29u;
  *(_BYTE *)(v18 - 20) = -86;
  *((_BYTE *)a2 + 8066) = 0;
LABEL_23:
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x64u, 0LL);
    return (unsigned int)v7;
  }
  v20 = *((_QWORD *)this + 1) + 8LL;
  *((_BYTE *)this + 33) = 1;
  (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v20 + 32LL))(v20, v31);
  v28 = 0LL;
  v29 = (float)v31[0];
  v30 = (float)v31[1];
  v21 = CDrawingContext::PushGpuClipRectInternal((_DWORD)a2, 0, (unsigned int)&v28, 1, 1);
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0x77u, 0LL);
  }
  else
  {
    v22 = CDrawingContext::ApplyRenderStateInternal(a2, 0);
    v21 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v22, 0x29Du, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0x7Au, 0LL);
      CBaseClipStack::Pop((struct CDrawingContext *)((char *)a2 + 3104));
      --*(_QWORD *)(*((_QWORD *)a2 + 93) - 184LL);
      *((_BYTE *)a2 + 8065) = 1;
    }
    else
    {
      CD2DContext::Clear(
        (CD2DContext *)(*(_QWORD *)v9 + 16LL),
        (struct CDrawingContext *)((char *)a2 + 16),
        &stru_1802F38D8);
      v23 = *((_DWORD *)a2 + 778);
      if ( v23 )
        *((_DWORD *)a2 + 778) = v23 - 1;
      v24 = *((_QWORD *)a2 + 93);
      v28 = 0LL;
      --*(_QWORD *)(v24 - 184);
      *((_BYTE *)a2 + 8065) = 1;
      v25 = (float)*((int *)this + 7);
      v29 = (float)*((int *)this + 6);
      v30 = v25;
      result = CDrawingContext::PushGpuClipRectInternal((_DWORD)a2, 0, (unsigned int)&v28, 1, 1);
      v21 = result;
      if ( (int)result >= 0 )
      {
        *((_BYTE *)this + 34) = 1;
        return result;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, result, 0x87u, 0LL);
    }
  }
  return (unsigned int)v21;
}
