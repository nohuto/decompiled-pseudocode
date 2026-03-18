/*
 * XREFs of ?CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x180124370
 * Callers:
 *     ?TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x180123DDC (-TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x18014E468 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSW.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071BF0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F36F0 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800F6FC0 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ??0?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z @ 0x1800F80BC (--0-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x18012452C (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_.c)
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180128A30 (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180134858 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Emplace@U?$pair@PEAUIDXGIResource@@V?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@@std@@@?$_Tree@V?$_Tmap_traits@PEAUIDXGIResource@@V?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAUIDXGIResource@@@std@@V?$allocator@U?$pair@QEAUIDXGIResource@@V?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAUIDXGIResource@@V?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@$$QEAU?$pair@PEAUIDXGIResource@@V?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@@1@@Z @ 0x180258240 (--$_Emplace@U-$pair@PEAUIDXGIResource@@V-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::CreateRenderTargetForAcquiredBuffer(
        CIndirectSwapchainRenderTarget *this)
{
  __int64 *v1; // rdx
  __int64 v3; // rbx
  __int64 *v4; // rcx
  __int64 *i; // rax
  int v6; // eax
  unsigned int v7; // edi
  struct CD3DDevice *v9; // rbx
  char *v10; // r10
  unsigned int v11; // eax
  unsigned int v12; // edx
  int v13; // esi
  unsigned int v14; // eax
  int Device; // eax
  __int64 v16; // r9
  float v17; // xmm0_4
  int v18; // eax
  __int64 v19; // [rsp+40h] [rbp-30h] BYREF
  __int64 v20; // [rsp+48h] [rbp-28h] BYREF
  _BYTE v21[12]; // [rsp+50h] [rbp-20h] BYREF
  int v22; // [rsp+5Ch] [rbp-14h]
  struct CD3DDevice *v23; // [rsp+90h] [rbp+20h] BYREF
  struct CD3DDevice *v24; // [rsp+98h] [rbp+28h] BYREF
  __int64 v25; // [rsp+A0h] [rbp+30h] BYREF

  v1 = (__int64 *)*((_QWORD *)this + 300);
  v25 = 0LL;
  v3 = 0LL;
  v22 = 0;
  v24 = 0LL;
  v4 = v1;
  for ( i = (__int64 *)v1[1]; !*((_BYTE *)i + 25); i = (__int64 *)*i )
  {
    if ( (unsigned __int64)i[4] >= *((_QWORD *)this + 308) )
      v4 = i;
    else
      i += 2;
  }
  if ( !*((_BYTE *)v4 + 25) && *((_QWORD *)this + 308) >= (unsigned __int64)v4[4] && v4 != v1 )
  {
    v9 = (struct CD3DDevice *)v4[5];
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v4[5]);
    goto LABEL_18;
  }
  v6 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 308))(
         *((_QWORD *)this + 308),
         &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
         &v25);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x14Cu, 0LL);
    goto LABEL_9;
  }
  v23 = 0LL;
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((__int64 *)&v23);
  Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, *(struct _LUID *)((char *)this + 2472), &v23);
  v7 = Device;
  if ( Device < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Device, 0x14Fu, 0LL);
    wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v23);
    goto LABEL_11;
  }
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v24);
  if ( IsDXGIColorSpaceHDR(*((enum DXGI_COLOR_SPACE_TYPE *)this + 34)) )
    v17 = FLOAT_1_0;
  else
    v17 = 0.0;
  v18 = CD3DDevice::CreateRenderTargetBitmap(v23, v25, *((unsigned int *)this + 33), v16, -3, LODWORD(v17), &v24);
  v7 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x156u, 0LL);
    wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v23);
    v3 = (__int64)v24;
LABEL_9:
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    goto LABEL_11;
  }
  v9 = v24;
  (*(void (__fastcall **)(struct CD3DDevice *, unsigned __int64))(*(_QWORD *)v24 + 72LL))(
    v24,
    ((unsigned __int64)this + 2392) & -(__int64)(this != 0LL));
  v19 = *((_QWORD *)this + 308);
  wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>::com_ptr_t<CCachedTexture,wil::err_returncode_policy>(
    &v20,
    (__int64)v9);
  std::_Tree<std::_Tmap_traits<IDXGIResource *,wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>,std::less<IDXGIResource *>,std::allocator<std::pair<IDXGIResource * const,wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>>>,0>>::_Emplace<std::pair<IDXGIResource *,wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>>>(
    (char *)this + 2400,
    v21,
    &v19);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v20);
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v23);
LABEL_18:
  v10 = (char *)this + 2288;
  v23 = v9;
  v11 = *((_DWORD *)this + 578);
  v12 = v11 + 1;
  if ( v11 + 1 < v11 )
  {
    v7 = -2147024362;
    v14 = 183;
    v13 = -2147024362;
  }
  else
  {
    v13 = 0;
    if ( v12 <= *((_DWORD *)v10 + 5) )
    {
      *(_QWORD *)(*(_QWORD *)v10 + 8LL * v11) = v9;
      *((_DWORD *)v10 + 6) = v12;
LABEL_21:
      v7 = v13;
      goto LABEL_11;
    }
    v13 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v10, 8, 1, &v23);
    v7 = v13;
    if ( v13 >= 0 )
      goto LABEL_21;
    v14 = 194;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, v14, 0LL);
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x162u, 0LL);
LABEL_11:
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  return v7;
}
