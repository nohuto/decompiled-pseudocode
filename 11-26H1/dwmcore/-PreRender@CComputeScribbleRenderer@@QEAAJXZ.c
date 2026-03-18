/*
 * XREFs of ?PreRender@CComputeScribbleRenderer@@QEAAJXZ @ 0x180130340
 * Callers:
 *     ?GetComputeScribbleInvalidRects@CScribbleSwapChain@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCMergedRect@@@Z @ 0x18012F240 (-GetComputeScribbleInvalidRects@CScribbleSwapChain@@UEAAJAEBVCMILMatrix@@AEBV-$TMilRect@IUMilRec.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SaveDirtyForPreRender@CComputeScribbleFramebuffer@@QEAAXXZ @ 0x18012F764 (-SaveDirtyForPreRender@CComputeScribbleFramebuffer@@QEAAXXZ.c)
 *     ?GetOverlaySwapChain@CComputeScribbleRenderer@@AEAAPEAVIOverlaySwapChain@@XZ @ 0x180130534 (-GetOverlaySwapChain@CComputeScribbleRenderer@@AEAAPEAVIOverlaySwapChain@@XZ.c)
 *     ?ProcessDelayedActivation@CComputeScribbleRenderer@@AEAA_NXZ @ 0x1801305B0 (-ProcessDelayedActivation@CComputeScribbleRenderer@@AEAA_NXZ.c)
 *     ?reset@?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180130610 (-reset@-$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?PreRender@CComputeScribbleFramebuffer@@QEAAX_K@Z @ 0x180130638 (-PreRender@CComputeScribbleFramebuffer@@QEAAX_K@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     McTemplateU0xddddd_EventWriteTransfer @ 0x18023E668 (McTemplateU0xddddd_EventWriteTransfer.c)
 *     ?SetScannedOutBuffer@CComputeScribbleScheduler@@QEAAXII@Z @ 0x18025D1BC (-SetScannedOutBuffer@CComputeScribbleScheduler@@QEAAXII@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComputeScribbleRenderer::PreRender(CComputeScribbleRenderer *this)
{
  struct IOverlaySwapChain *OverlaySwapChain; // rax
  struct IOverlaySwapChain *v3; // r14
  __int64 v4; // rbx
  int v5; // r12d
  CComputeScribbleFramebuffer *v6; // rbx
  bool v7; // r13
  unsigned int v9; // eax
  unsigned int v10; // r15d
  int v11; // eax
  unsigned int v12; // ebp
  int v13; // eax
  unsigned int v14[4]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v15; // [rsp+50h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  OverlaySwapChain = CComputeScribbleRenderer::GetOverlaySwapChain(this);
  v3 = OverlaySwapChain;
  if ( !OverlaySwapChain )
    return 2291662854LL;
  ++*((_QWORD *)this + 3);
  v4 = (*(__int64 (__fastcall **)(struct IOverlaySwapChain *))(*(_QWORD *)OverlaySwapChain + 208LL))(OverlaySwapChain);
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 88LL))(v4);
  v6 = (CComputeScribbleFramebuffer *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 200LL))(v4);
  v7 = CComputeScribbleRenderer::ProcessDelayedActivation(this);
  if ( !*((_BYTE *)this + 48) )
  {
    if ( v6 )
      CComputeScribbleFramebuffer::SaveDirtyForPreRender(v6);
    return 0LL;
  }
  wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>::reset((char *)this + 40);
  v9 = (*(__int64 (__fastcall **)(struct IOverlaySwapChain *))(*(_QWORD *)v3 + 104LL))(v3);
  *(_OWORD *)v14 = 0LL;
  v10 = v9;
  v15 = 0LL;
  v11 = (*(__int64 (__fastcall **)(struct IOverlaySwapChain *, unsigned int *))(*(_QWORD *)v3 + 144LL))(v3, v14);
  v12 = v11;
  if ( v11 >= 0 )
  {
    CComputeScribbleFramebuffer::PreRender(v6, *((_QWORD *)this + 3));
    if ( !v7 )
    {
      v13 = (*(__int64 (__fastcall **)(struct IOverlaySwapChain *))(*(_QWORD *)v3 + 96LL))(v3);
      CComputeScribbleScheduler::SetScannedOutBuffer(
        *((CComputeScribbleScheduler **)this + 4),
        (v5 + v13 - (v10 - v14[0]) % 3 - 1) % 3,
        v14[0]);
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
      McTemplateU0xddddd_EventWriteTransfer(
        v14[0],
        (unsigned int)&EVTDESC_COMPUTESCRIBBLE_PRERENDER,
        *((_QWORD *)this + 3),
        v5,
        v10,
        v14[0],
        v14[2],
        v10 > v14[0]);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC2,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblerenderer.cpp",
    (const char *)(unsigned int)v11);
  return v12;
}
