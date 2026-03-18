/*
 * XREFs of ?ReleaseSwapChain@CLegacyRenderTarget@@UEAAXXZ @ 0x18020A120
 * Callers:
 *     ??1CLegacyRenderTarget@@MEAA@XZ @ 0x1801A3EFC (--1CLegacyRenderTarget@@MEAA@XZ.c)
 *     ?ReleaseSwapChain@CLegacyStereoRenderTarget@@MEAAXXZ @ 0x180249B80 (-ReleaseSwapChain@CLegacyStereoRenderTarget@@MEAAXXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Reset@CTargetStats@@QEAAXIPEAVIOverlaySwapChain@@@Z @ 0x180148FEC (-Reset@CTargetStats@@QEAAXIPEAVIOverlaySwapChain@@@Z.c)
 *     ?reset@?$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180149134 (-reset@-$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?RemoveRenderTarget@CSyncLockGroup@@QEAAXPEAVIMonitorTarget@@@Z @ 0x1802066B0 (-RemoveRenderTarget@CSyncLockGroup@@QEAAXPEAVIMonitorTarget@@@Z.c)
 *     ?Reset@COverlayContext@@QEAAXXZ @ 0x18020A23C (-Reset@COverlayContext@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CLegacyRenderTarget::ReleaseSwapChain(CLegacyRenderTarget *this, __int64 a2)
{
  CSyncLockGroup *v3; // rcx

  LOBYTE(a2) = 1;
  (*(void (__fastcall **)(CLegacyRenderTarget *, __int64))(*(_QWORD *)this + 248LL))(this, a2);
  COverlayContext::Reset((CLegacyRenderTarget *)((char *)this + 56));
  CTargetStats::Reset((CLegacyRenderTarget *)((char *)this + 31968), *((_DWORD *)this + 7984), 0LL);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 4);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 5);
  wil::com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>::reset((CResource **)this + 6);
  v3 = (CSyncLockGroup *)*((_QWORD *)this + 4043);
  if ( v3 )
  {
    CSyncLockGroup::RemoveRenderTarget(
      v3,
      (struct IMonitorTarget *)((unsigned __int64)this & ((unsigned __int128)-(__int128)((unsigned __int64)this - 160) >> 64)));
    *((_QWORD *)this + 4043) = 0LL;
  }
  *((_BYTE *)this + 32352) = 0;
}
