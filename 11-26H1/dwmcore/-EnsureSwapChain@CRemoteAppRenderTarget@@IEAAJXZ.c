/*
 * XREFs of ?EnsureSwapChain@CRemoteAppRenderTarget@@IEAAJXZ @ 0x180255B18
 * Callers:
 *     ?CheckOcclusionState@CRemoteAppRenderTarget@@UEAAJ_N@Z @ 0x180255A00 (-CheckOcclusionState@CRemoteAppRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x180057900 (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VCDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E0AF4 (-reset@-$com_ptr_t@VCDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F36F0 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800F6FC0 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@AEAAPEAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@QEAPEAV234@AEBQEAV234@@Z @ 0x1800F9E7C (--$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@-$vector@PEAVBamoPrincipalI.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180134858 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ReleaseSwapChain@CRemoteAppRenderTarget@@IEAAXXZ @ 0x1802064A4 (-ReleaseSwapChain@CRemoteAppRenderTarget@@IEAAXXZ.c)
 *     ?GetRenderTargetInfo@COffScreenRenderTarget@@UEBA?AVRenderTargetInfo@@XZ @ 0x180254CE0 (-GetRenderTargetInfo@COffScreenRenderTarget@@UEBA-AVRenderTargetInfo@@XZ.c)
 *     ?IsValid@CCompSwapChain@@UEBAJXZ @ 0x180255CF0 (-IsValid@CCompSwapChain@@UEBAJXZ.c)
 *     ?CreateCompositionSwapChain@CD3DDevice@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IPEAPEAVCCompSwapChain@@@Z @ 0x18029904C (-CreateCompositionSwapChain@CD3DDevice@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTarg.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::EnsureSwapChain(CRemoteAppRenderTarget *this)
{
  unsigned int v1; // edi
  __int64 *v3; // rsi
  CCompSwapChain *v4; // rcx
  int Device; // eax
  int CompositionSwapChain; // eax
  _QWORD *v7; // rcx
  _QWORD *v8; // rdx
  unsigned int v10; // [rsp+20h] [rbp-30h]
  struct _LUID v11; // [rsp+30h] [rbp-20h] BYREF
  struct CD3DDevice *v12; // [rsp+70h] [rbp+20h] BYREF
  __int64 v13; // [rsp+78h] [rbp+28h] BYREF

  v1 = 0;
  if ( *(_DWORD *)(*((_QWORD *)this + 3) + 6256LL) == 7 )
  {
    v3 = (__int64 *)((char *)this + 176);
    v4 = (CCompSwapChain *)*((_QWORD *)this + 22);
    if ( !v4 || (int)CCompSwapChain::IsValid(v4) < 0 )
    {
      CRemoteAppRenderTarget::ReleaseSwapChain(this);
      COffScreenRenderTarget::GetRenderTargetInfo((CRemoteAppRenderTarget *)((char *)this + 96), (__int64)&v11);
      v12 = 0LL;
      wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((__int64 *)&v12);
      Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, v11, &v12);
      v1 = Device;
      if ( Device < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Device, 0x1D2u, 0LL);
      }
      else
      {
        wil::com_ptr_t<CDDASwapChain,wil::err_returncode_policy>::reset(v3);
        CompositionSwapChain = CD3DDevice::CreateCompositionSwapChain(
                                 v12,
                                 (const struct D2D_SIZE_U *)this + 15,
                                 (CRemoteAppRenderTarget *)((char *)this + 128),
                                 (const struct RenderTargetInfo *)&v11,
                                 v10,
                                 (struct CCompSwapChain **)v3);
        v1 = CompositionSwapChain;
        if ( CompositionSwapChain < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, CompositionSwapChain, 0x1D8u, 0LL);
        }
        else
        {
          v7 = (_QWORD *)(*v3 + 24);
          v13 = (__int64)this + 160;
          v8 = (_QWORD *)v7[1];
          if ( v8 == (_QWORD *)v7[2] )
          {
            std::vector<Microsoft::BamoImpl::BamoPrincipalImpl *>::_Emplace_reallocate<Microsoft::BamoImpl::BamoPrincipalImpl * const &>(
              v7,
              (__int64)v8,
              &v13);
          }
          else
          {
            *v8 = (char *)this + 160;
            v7[1] += 8LL;
          }
          *((_QWORD *)this + 23) = *(_QWORD *)(*v3 + 72);
          *((_BYTE *)this + 2190) = 1;
          CTargetDirtyBase<8>::SetFullDirty((__int64)this + 280);
        }
      }
      wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v12);
    }
  }
  return v1;
}
