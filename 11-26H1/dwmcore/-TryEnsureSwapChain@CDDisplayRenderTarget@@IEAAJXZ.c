/*
 * XREFs of ?TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ @ 0x1801FC7E4
 * Callers:
 *     ?CheckOcclusionState@CDDisplayRenderTarget@@UEAAJ_N@Z @ 0x180253770 (-CheckOcclusionState@CDDisplayRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x180057900 (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800E1DB8 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F36F0 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?ScheduleCompositionPass@@YAXIW4CompositionReason@@@Z @ 0x1800F3B80 (-ScheduleCompositionPass@@YAXIW4CompositionReason@@@Z.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800F6FC0 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180134858 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Reset@CTargetStats@@QEAAXIPEAVIOverlaySwapChain@@@Z @ 0x180148FEC (-Reset@CTargetStats@@QEAAXIPEAVIOverlaySwapChain@@@Z.c)
 *     ?ReleaseSwapChain@CDDisplayRenderTarget@@UEAAXXZ @ 0x180149160 (-ReleaseSwapChain@CDDisplayRenderTarget@@UEAAXXZ.c)
 *     ?EnsureDXGIOutput@CDDisplayRenderTarget@@IEAAJXZ @ 0x18014A234 (-EnsureDXGIOutput@CDDisplayRenderTarget@@IEAAJXZ.c)
 *     ??$?8V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@YA_NAEBV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@0@$$T@Z @ 0x180150AA8 (--$-8V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     ?HardwareProtectionRequired@CDeviceManager@@QEBA_NU_LUID@@@Z @ 0x180178B70 (-HardwareProtectionRequired@CDeviceManager@@QEBA_NU_LUID@@@Z.c)
 *     ??1CFailFastError@@QEAA@XZ @ 0x1801ABF10 (--1CFailFastError@@QEAA@XZ.c)
 *     ?UpdateMPOCaps@CDDisplayRenderTarget@@UEAAJXZ @ 0x1801D4930 (-UpdateMPOCaps@CDDisplayRenderTarget@@UEAAJXZ.c)
 *     ?HandleDDAArrivalOrDeparture@CDDisplayRenderTarget@@UEAAJXZ @ 0x1801D7880 (-HandleDDAArrivalOrDeparture@CDDisplayRenderTarget@@UEAAJXZ.c)
 *     ?EnsureDisplayBuffers@CDDisplaySwapChain@@QEAAJXZ @ 0x1801DD2EC (-EnsureDisplayBuffers@CDDisplaySwapChain@@QEAAJXZ.c)
 *     ?GetSwapChainCreationError@CD3DDevice@@SAJI_N@Z @ 0x18021CFFC (-GetSwapChainCreationError@CD3DDevice@@SAJI_N@Z.c)
 *     ?OnSwapChainCreated@COverlayContext@@QEAAXXZ @ 0x18023D3BC (-OnSwapChainCreated@COverlayContext@@QEAAXXZ.c)
 *     ?ResizeSwapChainBuffers@CDDisplayRenderTarget@@UEAAJXZ @ 0x180254870 (-ResizeSwapChainBuffers@CDDisplayRenderTarget@@UEAAJXZ.c)
 *     ?CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBVRenderTargetInfo@@IAEBUPixelFormatInfo@@PEAXPEAPEAVCDDisplaySwapChain@@@Z @ 0x18029DEBC (-CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBVRenderTargetInfo@@I.c)
 */

__int64 __fastcall CDDisplayRenderTarget::TryEnsureSwapChain(CDDisplayRenderTarget *this)
{
  struct CDDisplaySwapChain **v1; // rsi
  __int64 v2; // rax
  struct _LUID *v4; // r14
  CDDisplayRenderTarget *v5; // r15
  int Device; // eax
  struct CD3DDevice *v7; // rbx
  int v8; // eax
  unsigned int v9; // ecx
  int SwapChainCreationError; // eax
  struct CDDisplaySwapChain *v11; // rcx
  int DDisplaySwapchainForSource; // eax
  int updated; // eax
  int v14; // eax
  CComposition *v15; // rdx
  int v16; // eax
  char v17; // al
  struct CDDisplaySwapChain *v18; // rcx
  int v20; // [rsp+40h] [rbp-10h] BYREF
  int *v21; // [rsp+48h] [rbp-8h]
  int v22; // [rsp+90h] [rbp+40h] BYREF
  struct CD3DDevice *v23; // [rsp+98h] [rbp+48h] BYREF

  v1 = (struct CDDisplaySwapChain **)((char *)this + 216);
  v2 = *((_QWORD *)this + 27);
  v22 = 0;
  if ( !v2 || *(_DWORD *)(*(_QWORD *)(v2 + 64) + 1124LL) )
  {
    v5 = (CDDisplayRenderTarget *)((char *)this + 160);
    CDDisplayRenderTarget::ReleaseSwapChain((CDDisplayRenderTarget *)((char *)this + 160));
    v23 = 0LL;
    wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((__int64 *)&v23);
    v4 = (struct _LUID *)((char *)this + 32112);
    Device = CDeviceManager::GetDevice(
               (CDeviceManager *)&g_DeviceManager,
               *(struct _LUID *)((char *)this + 32112),
               &v23);
    v22 = Device;
    if ( Device < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Device, 0xF0u, 0LL);
      goto LABEL_33;
    }
    v7 = v23;
    if ( *((_BYTE *)v23 + 1492) )
    {
      ScheduleCompositionPass(0, 0x2000u);
    }
    else if ( *((_DWORD *)this + 46)
           && *((_DWORD *)this + 47)
           && !wil::operator==<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>((_QWORD *)this + 24) )
    {
      v8 = CDDisplayRenderTarget::EnsureDXGIOutput(this);
      v22 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x105u, 0LL);
      }
      else
      {
        v9 = *((_DWORD *)v7 + 226);
        v21 = &v22;
        v20 = g_hrNoHardwareDeviceOverride;
        SwapChainCreationError = CD3DDevice::GetSwapChainCreationError(v9, 0);
        v11 = *v1;
        g_hrNoHardwareDeviceOverride = SwapChainCreationError;
        *v1 = 0LL;
        if ( v11 )
          CMILCOMBaseWeakRefSource<CMilObjectDeleter>::InternalRelease((__int64)v11);
        DDisplaySwapchainForSource = CDDisplayManager::CreateDDisplaySwapchainForSource(
                                       (CDDisplayRenderTarget *)((char *)this + 128),
                                       v7,
                                       (CDDisplayRenderTarget *)((char *)this + 32112),
                                       *((_DWORD *)this + 8034),
                                       (CDDisplayRenderTarget *)((char *)this + 128),
                                       *((void **)this + 24),
                                       v1);
        v22 = DDisplaySwapchainForSource;
        if ( DDisplaySwapchainForSource < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, DDisplaySwapchainForSource, 0x110u, 0LL);
        }
        else
        {
          COverlayContext::OnSwapChainCreated((CDDisplayRenderTarget *)((char *)this + 232));
          updated = CDDisplayRenderTarget::UpdateMPOCaps(v5);
          v22 = updated;
          if ( updated < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, 0x115u, 0LL);
          }
          else
          {
            v14 = CDDisplayRenderTarget::ResizeSwapChainBuffers(v5);
            v22 = v14;
            if ( v14 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x117u, 0LL);
            }
            else
            {
              CTargetStats::Reset(
                (CDDisplayRenderTarget *)((char *)this + 32152),
                *((_DWORD *)this + 8035),
                (struct IOverlaySwapChain *)(((unsigned __int64)*v1 + 24) & -(__int64)(*v1 != 0LL)));
              v15 = g_pComposition;
              *(_BYTE *)(*((_QWORD *)g_pComposition + 77) + 750LL) = 1;
              *(_BYTE *)(*((_QWORD *)v15 + 77) + 749LL) = 1;
              v16 = CDDisplayRenderTarget::HandleDDAArrivalOrDeparture(v5);
              v22 = v16;
              if ( v16 >= 0 )
              {
                *((_BYTE *)this + 32528) = 1;
                CFailFastError::~CFailFastError((CFailFastError *)&v20);
                wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v23);
                v1 = (struct CDDisplaySwapChain **)((char *)this + 216);
                goto LABEL_19;
              }
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x121u, 0LL);
            }
          }
        }
        CFailFastError::~CFailFastError((CFailFastError *)&v20);
      }
LABEL_33:
      wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v23);
      goto LABEL_34;
    }
    v22 = 142213121;
    goto LABEL_33;
  }
  v4 = (struct _LUID *)((char *)this + 32112);
LABEL_19:
  v17 = CDeviceManager::HardwareProtectionRequired(this, *v4);
  v18 = *v1;
  if ( v17 != *((_BYTE *)*v1 + 124) )
  {
    *((_BYTE *)v18 + 124) = v17;
    *((_BYTE *)v18 + 664) = 1;
    v18 = *v1;
    *((_BYTE *)this + 32132) = v17;
  }
  v22 = CDDisplaySwapChain::EnsureDisplayBuffers(v18);
  if ( v22 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v22, 0x13Au, 0LL);
  }
  else if ( *((_BYTE *)*v1 + 665) )
  {
    CTargetDirtyBase<8>::SetFullDirty((__int64)this + 30224);
    if ( *((_BYTE *)this + 30216) )
      *((_BYTE *)this + 30217) = 1;
  }
LABEL_34:
  if ( v22 < 0 )
    CDDisplayRenderTarget::ReleaseSwapChain((CDDisplayRenderTarget *)((char *)this + 160));
  return (unsigned int)v22;
}
