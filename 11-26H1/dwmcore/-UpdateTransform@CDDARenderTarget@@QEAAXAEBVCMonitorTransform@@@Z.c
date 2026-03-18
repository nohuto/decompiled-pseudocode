/*
 * XREFs of ?UpdateTransform@CDDARenderTarget@@QEAAXAEBVCMonitorTransform@@@Z @ 0x1802594EC
 * Callers:
 *     ?ProcessUpdateTransform@CRemoteRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTERENDERTARGET_UPDATETRANSFORM@@@Z @ 0x180148BBC (-ProcessUpdateTransform@CRemoteRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTERENDER.c)
 *     ?ProcessUpdateTransform@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDERTARGET_UPDATETRANSFORM@@@Z @ 0x1801FC5DC (-ProcessUpdateTransform@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDER.c)
 *     ?ProcessUpdateTransform@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYRENDERTARGET_UPDATETRANSFORM@@@Z @ 0x180254208 (-ProcessUpdateTransform@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYRE.c)
 *     ?Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBVRenderTargetInfo@@AEBVCMonitorTransform@@PEAPEAV1@@Z @ 0x18025935C (-Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBVRenderTargetInfo@@AEBVCMo.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x180057900 (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@VCDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E0AF4 (-reset@-$com_ptr_t@VCDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MMW4DXGI_MODE_ROTATION@@PEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180204064 (-Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@U.c)
 *     ?UpdateSize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@@Z @ 0x1802041E8 (-UpdateSize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDDARenderTarget::UpdateTransform(CDDARenderTarget *this, const struct CMonitorTransform *a2)
{
  int v2; // esi
  int (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rcx
  float v6; // xmm3_4
  int v7; // eax
  struct D2D_SIZE_U v8; // rbx
  UINT32 v9; // eax
  UINT32 v10; // ecx
  int v11; // [rsp+20h] [rbp-A8h]
  unsigned __int64 v12; // [rsp+40h] [rbp-88h] BYREF
  __int64 v13; // [rsp+48h] [rbp-80h] BYREF
  _BYTE v14[84]; // [rsp+50h] [rbp-78h] BYREF
  int v15; // [rsp+A4h] [rbp-24h]

  v2 = *((_DWORD *)a2 + 16);
  v4 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 21);
  v13 = 0LL;
  if ( v4 )
  {
    if ( (**v4)(v4, &GUID_ae02eedb_c735_4690_8d52_5a8dc20213aa, &v13) >= 0 )
    {
      memset_0(v14, 0, 0x60uLL);
      if ( (*(int (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v13 + 56LL))(v13, v14) >= 0 )
        v2 = v15;
    }
  }
  v6 = *(float *)a2;
  v11 = *((_DWORD *)a2 + 1);
  v12 = 0LL;
  CMonitorTransform::Initialize(
    (__int64)this + 216,
    (const struct D2D_SIZE_U *)&v12,
    (__int128 *)((char *)a2 + 8),
    v6,
    v11,
    v2,
    0LL);
  v7 = *((_DWORD *)this + 70);
  v8 = (struct D2D_SIZE_U)*((_QWORD *)this + 32);
  v12 = (unsigned __int64)v8;
  if ( v7 == 2 || v7 == 4 )
  {
    v9 = v12;
    v10 = HIDWORD(v12);
    v12 = __PAIR64__(v12, HIDWORD(v12));
    v8 = (struct D2D_SIZE_U)v12;
  }
  else
  {
    v9 = HIDWORD(v12);
    v10 = v12;
  }
  if ( v10 != *((_DWORD *)this + 30) || v9 != *((_DWORD *)this + 31) )
  {
    wil::com_ptr_t<CDDASwapChain,wil::err_returncode_policy>::reset((__int64 *)this + 22);
    *((struct D2D_SIZE_U *)this + 15) = v8;
  }
  CMonitorTransform::UpdateSize((CDDARenderTarget *)((char *)this + 216), (const struct D2D_SIZE_U *)this + 15);
  CTargetDirtyBase<8>::SetFullDirty((__int64)this + 504);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v13);
}
