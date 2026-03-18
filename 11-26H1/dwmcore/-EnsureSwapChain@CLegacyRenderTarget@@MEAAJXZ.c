/*
 * XREFs of ?EnsureSwapChain@CLegacyRenderTarget@@MEAAJXZ @ 0x1801FC1D0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x180057900 (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F36F0 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800F6FC0 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180134858 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Reset@CTargetStats@@QEAAXIPEAVIOverlaySwapChain@@@Z @ 0x180148FEC (-Reset@CTargetStats@@QEAAXIPEAVIOverlaySwapChain@@@Z.c)
 *     ?EnsureDXGIOutput@CLegacyRenderTarget@@IEAAJXZ @ 0x18014921C (-EnsureDXGIOutput@CLegacyRenderTarget@@IEAAJXZ.c)
 *     ?UpdateMPOCaps@CLegacyRenderTarget@@UEAAJXZ @ 0x18014ACF0 (-UpdateMPOCaps@CLegacyRenderTarget@@UEAAJXZ.c)
 *     ?HardwareProtectionRequired@CDeviceManager@@QEBA_NU_LUID@@@Z @ 0x180178B70 (-HardwareProtectionRequired@CDeviceManager@@QEBA_NU_LUID@@@Z.c)
 *     ?HandleDDAArrivalOrDeparture@CLegacyRenderTarget@@UEAAJXZ @ 0x1801D3630 (-HandleDDAArrivalOrDeparture@CLegacyRenderTarget@@UEAAJXZ.c)
 *     ?CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@I_NPEAPEAVCLegacySwapChain@@@Z @ 0x1801FED6C (-CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AE.c)
 *     ?Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MMW4DXGI_MODE_ROTATION@@PEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180204064 (-Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@U.c)
 *     ?OnBufferResize@COverlayContext@@QEAAXXZ @ 0x18023D35C (-OnBufferResize@COverlayContext@@QEAAXXZ.c)
 *     ?OnSwapChainCreated@COverlayContext@@QEAAXXZ @ 0x18023D3BC (-OnSwapChainCreated@COverlayContext@@QEAAXXZ.c)
 *     ?CreateConversionSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IPEAPEAVCLegacySwapChain@@@Z @ 0x18029659C (-CreateConversionSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacyRenderTarget::EnsureSwapChain(CLegacyRenderTarget *this)
{
  __int64 *v1; // rsi
  unsigned int v3; // ebx
  __int64 v4; // rcx
  CDeviceManager *v5; // rcx
  char v6; // r14
  __int64 v7; // rdx
  int v8; // eax
  int v9; // r9d
  int v10; // eax
  int v11; // eax
  int Device; // eax
  int ConversionSwapChain; // eax
  int LegacySwapChain; // eax
  int updated; // eax
  int v16; // eax
  CComposition *v17; // rdx
  int v18; // eax
  __int128 v20; // [rsp+40h] [rbp-10h] BYREF
  struct IDXGIOutput *v21; // [rsp+80h] [rbp+30h] BYREF
  struct CD3DDevice *v22; // [rsp+88h] [rbp+38h] BYREF

  v1 = (__int64 *)((char *)this + 200);
  v3 = 0;
  v4 = *((_QWORD *)this + 25);
  if ( !v4 )
  {
    v21 = 0LL;
    v22 = 0LL;
    v8 = CLegacyRenderTarget::EnsureDXGIOutput(this);
    v3 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180377B38, 4u, v8, 0x3D9u, 0LL);
      goto LABEL_29;
    }
    v10 = *((_DWORD *)this + 7496);
    v20 = *(_OWORD *)((char *)this + 29944);
    CMonitorTransform::Initialize(
      (_DWORD)this + 29920,
      (_DWORD)this + 120,
      (_DWORD)this + 29928,
      v9,
      *((_DWORD *)this + 7481),
      v10,
      (__int64)&v20);
    if ( v21 )
      ((void (__fastcall *)(struct IDXGIOutput *))v21->lpVtbl->Release)(v21);
    v11 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IDXGIOutput **))this + 24))(
            *((_QWORD *)this + 24),
            &GUID_ae02eedb_c735_4690_8d52_5a8dc20213aa,
            &v21);
    v3 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180377B38, 4u, v11, 0x3E6u, 0LL);
      goto LABEL_29;
    }
    wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((__int64 *)&v22);
    Device = CDeviceManager::GetDevice(
               (CDeviceManager *)&g_DeviceManager,
               *(struct _LUID *)((char *)this + 32104),
               &v22);
    v3 = Device;
    if ( Device < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180377B38, 4u, Device, 0x3E8u, 0LL);
      goto LABEL_29;
    }
    if ( *((_DWORD *)this + 34) < 2u )
    {
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v1);
      LegacySwapChain = CD3DDevice::CreateLegacySwapChain(
                          v22,
                          v21,
                          (const struct D2D_SIZE_U *)this + 15,
                          (CLegacyRenderTarget *)((char *)this + 128),
                          (CLegacyRenderTarget *)((char *)this + 32104),
                          *((_DWORD *)this + 8025),
                          *((_BYTE *)this + 32515),
                          (struct CLegacySwapChain **)v1);
      v3 = LegacySwapChain;
      if ( LegacySwapChain < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180377B38, 4u, LegacySwapChain, 0x3F7u, 0LL);
        goto LABEL_29;
      }
    }
    else
    {
      *((_BYTE *)this + 32515) = 0;
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v1);
      ConversionSwapChain = CD3DDevice::CreateConversionSwapChain(
                              v22,
                              v21,
                              (const struct D2D_SIZE_U *)this + 15,
                              (CLegacyRenderTarget *)((char *)this + 128),
                              (CLegacyRenderTarget *)((char *)this + 32104),
                              *((_DWORD *)this + 8025),
                              (struct CLegacySwapChain **)v1);
      v3 = ConversionSwapChain;
      if ( ConversionSwapChain < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180377B38, 4u, ConversionSwapChain, 0x404u, 0LL);
LABEL_29:
        wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v22);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v21);
        if ( (v3 & 0x80000000) == 0 )
          return v3;
        if ( v3 == -2003304306 && *((_BYTE *)this + 32515) )
          *((_BYTE *)this + 32515) = 0;
LABEL_33:
        (*(void (__fastcall **)(char *))(*((_QWORD *)this + 20) + 232LL))((char *)this + 160);
        return v3;
      }
    }
    COverlayContext::OnSwapChainCreated((CLegacyRenderTarget *)((char *)this + 216));
    COverlayContext::OnBufferResize((CLegacyRenderTarget *)((char *)this + 216));
    CTargetDirtyBase<8>::SetFullDirty((__int64)this + 30208);
    updated = CLegacyRenderTarget::UpdateMPOCaps((CLegacyRenderTarget *)((char *)this + 160));
    v3 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180377B38, 4u, updated, 0x40Cu, 0LL);
    }
    else
    {
      CTargetStats::Reset(
        (CLegacyRenderTarget *)((char *)this + 32128),
        *((_DWORD *)this + 8024),
        (struct IOverlaySwapChain *)((*v1 + 24) & -(__int64)(*v1 != 0)));
      v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*v1 + 24) + 296LL))(*v1 + 24);
      if ( v16 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180377B38, 4u, v16, 0x410u, 0LL);
      v17 = g_pComposition;
      *(_BYTE *)(*((_QWORD *)g_pComposition + 77) + 750LL) = 1;
      *(_BYTE *)(*((_QWORD *)v17 + 77) + 749LL) = 1;
      v18 = CLegacyRenderTarget::HandleDDAArrivalOrDeparture((CLegacyRenderTarget *)((char *)this + 160));
      v3 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180377B38, 4u, v18, 0x416u, 0LL);
      else
        *((_BYTE *)this + 32512) = 1;
    }
    goto LABEL_29;
  }
  if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)(v4 + 24) + 24LL))(v4 + 24) < 0 )
  {
    v3 = -2003304442;
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180377B38, 4u, -2003304442, 0x3D1u, 0LL);
    goto LABEL_33;
  }
  v6 = CDeviceManager::HardwareProtectionRequired(v5, *(struct _LUID *)((char *)this + 32104));
  if ( v6 != (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(*v1 + 24) + 56LL))(*v1 + 24) )
  {
    LOBYTE(v7) = v6;
    if ( (*(int (__fastcall **)(__int64, __int64))(*(_QWORD *)(*v1 + 24) + 192LL))(*v1 + 24, v7) >= 0 )
    {
      *((_BYTE *)this + 32124) = v6;
      if ( *((_BYTE *)this + 30200) )
        *((_BYTE *)this + 30201) = 1;
      CTargetDirtyBase<8>::SetFullDirty((__int64)this + 30208);
    }
  }
  return v3;
}
