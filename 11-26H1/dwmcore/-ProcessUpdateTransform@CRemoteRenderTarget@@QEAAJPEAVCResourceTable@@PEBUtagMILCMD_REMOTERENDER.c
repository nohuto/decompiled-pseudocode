/*
 * XREFs of ?ProcessUpdateTransform@CRemoteRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTERENDERTARGET_UPDATETRANSFORM@@@Z @ 0x180148BBC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x180057900 (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18005C4A4 (-InferAffineMatrix@CMILMatrix@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE.c)
 *     ?reset@?$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180149134 (-reset@-$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MMW4DXGI_MODE_ROTATION@@PEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180204064 (-Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@U.c)
 *     ??0CMonitorTransform@@QEAA@XZ @ 0x180209CC4 (--0CMonitorTransform@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?UpdateTransform@CDDARenderTarget@@QEAAXAEBVCMonitorTransform@@@Z @ 0x1802594EC (-UpdateTransform@CDDARenderTarget@@QEAAXAEBVCMonitorTransform@@@Z.c)
 */

__int64 __fastcall CRemoteRenderTarget::ProcessUpdateTransform(
        CRemoteRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_REMOTERENDERTARGET_UPDATETRANSFORM *a3)
{
  float v3; // xmm1_4
  int v4; // r14d
  float v6; // xmm2_4
  float v8; // xmm0_4
  _DWORD *v9; // rdi
  float v10; // xmm3_4
  float v11; // xmm3_4
  int v12; // ecx
  __int64 *v13; // rbp
  __int64 v14; // rax
  CDDARenderTarget **v15; // rsi
  __int64 v16; // r10
  int v17; // r9d
  int v18; // eax
  float v19; // xmm1_4
  __int64 v21; // [rsp+40h] [rbp-158h] BYREF
  float v22; // [rsp+48h] [rbp-150h]
  float v23; // [rsp+4Ch] [rbp-14Ch]
  _BYTE v24[288]; // [rsp+50h] [rbp-148h] BYREF

  v3 = *((float *)a3 + 4);
  v4 = (_DWORD)this + 224;
  *((float *)this + 56) = v3;
  v6 = *((float *)a3 + 5);
  *((float *)this + 57) = v6;
  v8 = *((float *)a3 + 6);
  *((float *)this + 58) = v8;
  v9 = (_DWORD *)((char *)this + 124);
  v10 = *((float *)a3 + 7);
  *((float *)this + 59) = v10;
  v11 = v10 - v6;
  v12 = (int)(float)(v8 - v3);
  if ( __PAIR64__(*v9, *((_DWORD *)this + 30)) == __PAIR64__((int)v11, v12) )
  {
    v13 = (__int64 *)((char *)this + 192);
  }
  else
  {
    *((_DWORD *)this + 30) = v12;
    v13 = (__int64 *)((char *)this + 192);
    *v9 = (int)v11;
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 24);
  }
  v14 = *((_QWORD *)a3 + 1);
  v15 = (CDDARenderTarget **)((char *)this + 200);
  if ( *((_QWORD *)this + 27) == v14 )
  {
    if ( *v15 )
    {
      CMonitorTransform::CMonitorTransform((CMonitorTransform *)v24);
      v21 = v16;
      CMonitorTransform::Initialize((unsigned int)v24, (unsigned int)&v21, v4, v17, LODWORD(FLOAT_1_0), 1, v16);
      CDDARenderTarget::UpdateTransform(*v15, (const struct CMonitorTransform *)v24);
    }
  }
  else
  {
    *((_QWORD *)this + 27) = v14;
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 23);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v13);
    wil::com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>::reset((char *)this + 200);
  }
  v18 = *((_DWORD *)this + 30);
  v21 = 0LL;
  v19 = (float)(int)*v9;
  v22 = (float)v18;
  v23 = v19;
  CMILMatrix::InferAffineMatrix((__int64)this + 240, (float *)this + 56, (float *)&v21);
  CTargetDirtyBase<8>::SetFullDirty((__int64)this + 336);
  return 0LL;
}
