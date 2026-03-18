/*
 * XREFs of ?ProcessUpdateTransform@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYRENDERTARGET_UPDATETRANSFORM@@@Z @ 0x180254208
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x180057900 (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?UpdateMPOCaps@CDDisplayRenderTarget@@UEAAJXZ @ 0x1801D4930 (-UpdateMPOCaps@CDDisplayRenderTarget@@UEAAJXZ.c)
 *     ?Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MMW4DXGI_MODE_ROTATION@@PEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180204064 (-Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@U.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18022C75C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResizeSwapChainBuffers@CDDisplayRenderTarget@@UEAAJXZ @ 0x180254870 (-ResizeSwapChainBuffers@CDDisplayRenderTarget@@UEAAJXZ.c)
 *     ?SetDisplayId@CDDisplaySwapChain@@UEAAXVDisplayId@@@Z @ 0x180254940 (-SetDisplayId@CDDisplaySwapChain@@UEAAXVDisplayId@@@Z.c)
 *     ?UpdateTransform@CDDARenderTarget@@QEAAXAEBVCMonitorTransform@@@Z @ 0x1802594EC (-UpdateTransform@CDDARenderTarget@@QEAAXAEBVCMonitorTransform@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDisplayRenderTarget::ProcessUpdateTransform(
        const struct D2D_SIZE_U *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_DDISPLAYRENDERTARGET_UPDATETRANSFORM *a3)
{
  UINT32 v3; // edx
  struct D2D_SIZE_U v6; // rcx
  __int128 v7; // xmm0
  float v8; // xmm3_4
  int v9; // eax
  int v10; // eax
  struct D2D_SIZE_U v11; // rax
  CDDARenderTarget *v12; // rcx
  struct D2D_SIZE_U v13; // rbx
  __int64 result; // rax
  __int128 v15; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v16; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v17[208]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+58h]

  v3 = *((_DWORD *)a3 + 2);
  if ( this[4015].width != v3 )
  {
    this[4015].width = v3;
    v6 = this[27];
    if ( v6 )
      CDDisplaySwapChain::SetDisplayId(*(_QWORD *)&v6 + 24LL);
  }
  CDDisplayRenderTarget::UpdateMPOCaps((CDDisplayRenderTarget *)&this[20]);
  BYTE2(this[3777].width) = 0;
  v7 = *((_OWORD *)a3 + 1);
  LODWORD(v15) = *((_DWORD *)a3 + 10);
  v8 = *((float *)a3 + 8);
  *(_QWORD *)((char *)&v15 + 4) = *(_QWORD *)((char *)a3 + 44);
  HIDWORD(v15) = *((_DWORD *)a3 + 13);
  v9 = *((_DWORD *)a3 + 14);
  v16 = v7;
  CMonitorTransform::Initialize((__int64)&this[3742], this + 23, &v16, v8, *((_DWORD *)a3 + 9), v9, &v15);
  v10 = CDDisplayRenderTarget::ResizeSwapChainBuffers((CDDisplayRenderTarget *)&this[20]);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      119LL,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\ddisplayrendertarget.cpp",
      (const char *)(unsigned int)v10);
  CTargetDirtyBase<8>::SetFullDirty((__int64)&this[3778]);
  v11 = this[25];
  if ( v11 )
    *(_BYTE *)(*(_QWORD *)&v11 + 2628LL) = 1;
  v12 = (CDDARenderTarget *)this[28];
  if ( v12 )
    CDDARenderTarget::UpdateTransform(v12, (const struct CMonitorTransform *)&this[3742]);
  v13 = this[26];
  if ( v13 )
  {
    memset_0(v17, 0, 0xC8uLL);
    if ( (*(int (__fastcall **)(struct D2D_SIZE_U, _BYTE *))(**(_QWORD **)&v13 + 32LL))(v13, v17) >= 0 )
      BYTE1(this[4066].width) = (v17[108] & 8) != 0;
  }
  result = 0LL;
  *(_BYTE *)(*(_QWORD *)(*(_QWORD *)&this[3] + 616LL) + 747LL) = 1;
  return result;
}
