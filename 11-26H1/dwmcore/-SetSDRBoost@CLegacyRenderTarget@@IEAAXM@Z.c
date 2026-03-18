/*
 * XREFs of ?SetSDRBoost@CLegacyRenderTarget@@IEAAXM@Z @ 0x180206CF0
 * Callers:
 *     ?ProcessUpdateSDRToHDRMultiplier@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDERTARGET_UPDATESDRTOHDRMULTIPLIER@@@Z @ 0x180206BB8 (-ProcessUpdateSDRToHDRMultiplier@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEG.c)
 *     ?ProcessCreate@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDERTARGET_CREATE@@@Z @ 0x180206C80 (-ProcessCreate@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDERTARGET_CR.c)
 * Callees:
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x180057900 (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?ValidateSDRBoost@@YAMMAEBUPixelFormatInfo@@@Z @ 0x180206D80 (-ValidateSDRBoost@@YAMMAEBUPixelFormatInfo@@@Z.c)
 *     ?SetSDRBoost@CDDARenderTarget@@QEAAXM@Z @ 0x180253388 (-SetSDRBoost@CDDARenderTarget@@QEAAXM@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CLegacyRenderTarget::SetSDRBoost(CLegacyRenderTarget *this, float a2)
{
  float v3; // xmm0_4
  CDDARenderTarget *v4; // rcx
  __int64 v5; // rcx

  v3 = ValidateSDRBoost(CCommonRegistryData::m_flSDRBoostOverride, (CLegacyRenderTarget *)((char *)this + 128));
  if ( *((float *)this + 8030) != v3 )
  {
    v4 = (CDDARenderTarget *)*((_QWORD *)this + 26);
    *((float *)this + 8030) = v3;
    if ( v4 )
      CDDARenderTarget::SetSDRBoost(v4, v3);
    v5 = *((_QWORD *)this + 25);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v5 + 24) + 176LL))(v5 + 24);
    CTargetDirtyBase<8>::SetFullDirty((__int64)this + 30208);
  }
}
