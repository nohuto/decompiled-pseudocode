/*
 * XREFs of ?HandleDDAArrivalOrDeparture@CLegacyRenderTarget@@UEAAJXZ @ 0x1801D3630
 * Callers:
 *     ?EnsureSwapChain@CLegacyRenderTarget@@MEAAJXZ @ 0x1801FC1D0 (-EnsureSwapChain@CLegacyRenderTarget@@MEAAJXZ.c)
 *     ?EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJXZ @ 0x1802588A0 (-EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x180057900 (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180149134 (-reset@-$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBVRenderTargetInfo@@AEBVCMonitorTransform@@PEAPEAV1@@Z @ 0x18025935C (-Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBVRenderTargetInfo@@AEBVCMo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacyRenderTarget::HandleDDAArrivalOrDeparture(CLegacyRenderTarget *this)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rdx
  CResource **v7; // rcx
  int v8; // eax

  v2 = 0;
  v3 = *((_QWORD *)this + 4);
  if ( v3 && *((_BYTE *)this + 32354) )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
    v5 = *((_QWORD *)this + 6);
    if ( (v4 != 0) == (v5 != 0) )
    {
      if ( v5 )
        CTargetDirtyBase<8>::SetFullDirty(v5 + 504);
    }
    else
    {
      v7 = (CResource **)((char *)this + 48);
      if ( v5 )
      {
        wil::com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>::reset(v7);
      }
      else
      {
        wil::com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>::reset(v7);
        v8 = CDDARenderTarget::Create(
               *((struct IDXGIOutputDWM **)this + 4),
               *((struct CDesktopTree **)this + 3),
               (CLegacyRenderTarget *)((char *)this + 31944),
               (CLegacyRenderTarget *)((char *)this + 29760),
               (struct CDDARenderTarget **)this + 6);
        v2 = v8;
        if ( v8 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x316u, 0LL);
      }
    }
  }
  return v2;
}
