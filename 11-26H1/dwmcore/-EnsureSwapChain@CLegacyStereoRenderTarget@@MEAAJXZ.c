/*
 * XREFs of ?EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJXZ @ 0x1802588A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@@@Z @ 0x1800452B4 (--4-$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@.c)
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x180057900 (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VCLegacyStereoSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E149C (-reset@-$com_ptr_t@VCLegacyStereoSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F36F0 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800F6FC0 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180134858 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Reset@CTargetStats@@QEAAXIPEAVIOverlaySwapChain@@@Z @ 0x180148FEC (-Reset@CTargetStats@@QEAAXIPEAVIOverlaySwapChain@@@Z.c)
 *     ?GetDXGIOutput@CDisplayManager@@QEAAJIPEAPEAUIDXGIOutputDWM@@@Z @ 0x18014A368 (-GetDXGIOutput@CDisplayManager@@QEAAJIPEAPEAUIDXGIOutputDWM@@@Z.c)
 *     ??1?$out_param_t@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x1801B60D4 (--1-$out_param_t@V-$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_poli.c)
 *     ?HandleDDAArrivalOrDeparture@CLegacyRenderTarget@@UEAAJXZ @ 0x1801D3630 (-HandleDDAArrivalOrDeparture@CLegacyRenderTarget@@UEAAJXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     ?OnBufferResize@COverlayContext@@QEAAXXZ @ 0x18023D35C (-OnBufferResize@COverlayContext@@QEAAXXZ.c)
 *     ?OnSwapChainCreated@COverlayContext@@QEAAXXZ @ 0x18023D3BC (-OnSwapChainCreated@COverlayContext@@QEAAXXZ.c)
 *     ?UpdateMPOCaps@COverlayContext@@QEAAJXZ @ 0x18023E170 (-UpdateMPOCaps@COverlayContext@@QEAAJXZ.c)
 *     ?ReleaseSwapChain@CLegacyStereoRenderTarget@@MEAAXXZ @ 0x180249B80 (-ReleaseSwapChain@CLegacyStereoRenderTarget@@MEAAXXZ.c)
 *     ?SupportsTemporaryMono@CLegacyStereoSwapChain@@QEBA_NXZ @ 0x180258E00 (-SupportsTemporaryMono@CLegacyStereoSwapChain@@QEBA_NXZ.c)
 *     ?CreateLegacyStereoSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IPEAPEAVCLegacyStereoSwapChain@@@Z @ 0x180297270 (-CreateLegacyStereoSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatIn.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacyStereoRenderTarget::EnsureSwapChain(CLegacyStereoRenderTarget *this)
{
  __int64 *v1; // r15
  __int64 v3; // rcx
  int v4; // eax
  unsigned int DXGIOutput; // ebx
  __int64 v6; // rdx
  unsigned int v7; // edx
  _QWORD *v8; // rsi
  int Device; // eax
  __int16 v10; // cx
  char v11; // al
  struct IDXGIOutput *v12; // rcx
  __int64 *v13; // rsi
  CLegacyStereoSwapChain *v14; // rcx
  int v15; // r9d
  unsigned int v17; // [rsp+28h] [rbp-E0h]
  struct CD3DDevice *v18; // [rsp+48h] [rbp-C0h] BYREF
  struct IDXGIOutput *v19; // [rsp+50h] [rbp-B8h] BYREF
  char *v20; // [rsp+58h] [rbp-B0h] BYREF
  struct IDXGIOutputDWM *v21; // [rsp+60h] [rbp-A8h] BYREF
  char v22; // [rsp+68h] [rbp-A0h]
  _BYTE v23[28]; // [rsp+78h] [rbp-90h] BYREF
  int v24; // [rsp+94h] [rbp-74h]
  int v25; // [rsp+98h] [rbp-70h]
  int v26; // [rsp+E4h] [rbp-24h]

  v1 = (__int64 *)((char *)this + 200);
  v3 = *((_QWORD *)this + 25);
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v3 + 24) + 24LL))(v3 + 24);
    DXGIOutput = v4;
    if ( v4 >= 0 )
      return DXGIOutput;
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180377C70, 3u, v4, 0x1Au, 0LL);
  }
  else
  {
    v7 = *((_DWORD *)this + 8024);
    v8 = (_QWORD *)((char *)this + 192);
    v20 = (char *)this + 192;
    v19 = 0LL;
    v18 = 0LL;
    v21 = 0LL;
    v22 = 1;
    DXGIOutput = CDisplayManager::GetDXGIOutput(0LL, v7, &v21);
    wil::details::out_param_t<wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>>::~out_param_t<wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>>((__int64)&v20);
    if ( (DXGIOutput & 0x80000000) != 0 )
    {
      v15 = DXGIOutput;
      v17 = 36;
    }
    else
    {
      memset_0(v23, 0, 0xC8uLL);
      Device = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*v8 + 32LL))(*v8, v23);
      DXGIOutput = Device;
      if ( Device < 0 )
      {
        v17 = 39;
      }
      else
      {
        v10 = v26;
        *((_DWORD *)this + 30) = v24;
        *((_DWORD *)this + 31) = v25;
        v11 = HIBYTE(v10) & 1;
        *((_BYTE *)this + 32514) = (v10 & 8) != 0;
        v12 = v19;
        *((_BYTE *)this + 32513) = v11;
        *((_BYTE *)this + 32515) = 0;
        if ( v12 )
          ((void (__fastcall *)(struct IDXGIOutput *))v12->lpVtbl->Release)(v12);
        Device = (**(__int64 (__fastcall ***)(_QWORD, GUID *, struct IDXGIOutput **))*v8)(
                   *v8,
                   &GUID_ae02eedb_c735_4690_8d52_5a8dc20213aa,
                   &v19);
        DXGIOutput = Device;
        if ( Device < 0 )
        {
          v17 = 49;
        }
        else
        {
          wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((__int64 *)&v18);
          Device = CDeviceManager::GetDevice(
                     (CDeviceManager *)&g_DeviceManager,
                     *(struct _LUID *)((char *)this + 32104),
                     &v18);
          DXGIOutput = Device;
          if ( Device < 0 )
          {
            v17 = 51;
          }
          else
          {
            v13 = (__int64 *)((char *)this + 32520);
            wil::com_ptr_t<CLegacyStereoSwapChain,wil::err_returncode_policy>::reset((CConversionSwapChain **)this + 4065);
            Device = CD3DDevice::CreateLegacyStereoSwapChain(
                       v18,
                       v19,
                       (const struct D2D_SIZE_U *)this + 15,
                       (CLegacyStereoRenderTarget *)((char *)this + 128),
                       (CLegacyStereoRenderTarget *)((char *)this + 32104),
                       *((_DWORD *)this + 8025),
                       (struct CLegacyStereoSwapChain **)this + 4065);
            DXGIOutput = Device;
            if ( Device < 0 )
            {
              v17 = 58;
            }
            else
            {
              wil::com_ptr_t<CDeviceTexture,wil::err_returncode_policy>::operator=(v1, *v13);
              COverlayContext::OnSwapChainCreated((CLegacyStereoRenderTarget *)((char *)this + 216));
              COverlayContext::OnBufferResize((CLegacyStereoRenderTarget *)((char *)this + 216));
              CTargetDirtyBase<8>::SetFullDirty((__int64)this + 30208);
              COverlayContext::UpdateMPOCaps((CLegacyStereoRenderTarget *)((char *)this + 216));
              CTargetStats::Reset(
                (CLegacyStereoRenderTarget *)((char *)this + 32128),
                *((_DWORD *)this + 8024),
                (struct IOverlaySwapChain *)((*v13 + 24) & -(__int64)(*v13 != 0)));
              Device = CLegacyRenderTarget::HandleDDAArrivalOrDeparture((CLegacyStereoRenderTarget *)((char *)this + 160));
              DXGIOutput = Device;
              if ( Device >= 0 )
              {
                v14 = (CLegacyStereoSwapChain *)*v13;
                *((_BYTE *)this + 32512) = 1;
                *((_BYTE *)this + 32528) = CLegacyStereoSwapChain::SupportsTemporaryMono(v14);
                wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v18);
                wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v19);
                return DXGIOutput;
              }
              v17 = 71;
            }
          }
        }
      }
      v15 = Device;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180377C70, 3u, v15, v17, 0LL);
    wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v18);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v19);
  }
  if ( DXGIOutput == -2003304306 && *((_BYTE *)this + 32515) )
    *((_BYTE *)this + 32515) = 0;
  CLegacyStereoRenderTarget::ReleaseSwapChain((CConversionSwapChain **)this + 20, v6);
  return DXGIOutput;
}
