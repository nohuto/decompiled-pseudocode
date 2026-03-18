/*
 * XREFs of ??1CLegacyRenderTarget@@MEAA@XZ @ 0x1801A3EFC
 * Callers:
 *     ??_GCLegacyRenderTarget@@MEAAPEAXI@Z @ 0x1801A3EB0 (--_GCLegacyRenderTarget@@MEAAPEAXI@Z.c)
 *     ??1CLegacyStereoRenderTarget@@UEAA@XZ @ 0x180246010 (--1CLegacyStereoRenderTarget@@UEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800925C0 (--1-$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x18013194C (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ??1?$CTargetDirtyBase@$07@@QEAA@XZ @ 0x18014B068 (--1-$CTargetDirtyBase@$07@@QEAA@XZ.c)
 *     ?ReleaseSwapChain@CLegacyRenderTarget@@UEAAXXZ @ 0x18020A120 (-ReleaseSwapChain@CLegacyRenderTarget@@UEAAXXZ.c)
 *     ??1COverlayContext@@QEAA@XZ @ 0x18020A1B4 (--1COverlayContext@@QEAA@XZ.c)
 *     ??1CFSVPProvider@@QEAA@XZ @ 0x18021BBB4 (--1CFSVPProvider@@QEAA@XZ.c)
 */

void __fastcall CLegacyRenderTarget::~CLegacyRenderTarget(CLegacyRenderTarget *this)
{
  CLegacyRenderTarget *v2; // rcx

  *(_QWORD *)this = &CLegacyRenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 10) = &CLegacyRenderTarget::`vftable'{for `IPixelFormat's `CRenderTarget'};
  *((_QWORD *)this + 11) = &CLegacyStereoRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 12) = &CLegacyStereoRenderTarget::`vftable'{for `IRenderTarget's `CRenderTarget'};
  v2 = (CLegacyRenderTarget *)((char *)this + 160);
  *(_QWORD *)v2 = &CLegacyRenderTarget::`vftable'{for `IPixelFormat's `IOverlayMonitorTarget'};
  *((_QWORD *)this + 21) = &CLegacyStereoRenderTarget::`vftable'{for `IRenderTarget's `IOverlayMonitorTarget'};
  *((_QWORD *)this + 22) = &CLegacyStereoRenderTarget::`vftable';
  CLegacyRenderTarget::ReleaseSwapChain(v2);
  CFSVPProvider::~CFSVPProvider((CLegacyRenderTarget *)((char *)this + 32424));
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)this + 4052);
  CTargetDirtyBase<8>::~CTargetDirtyBase<8>((__int64)this + 30208);
  COverlayContext::~COverlayContext((CLegacyRenderTarget *)((char *)this + 216));
  wil::com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>::~com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>((CResource **)this + 26);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 25);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 24);
  wil::com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>::~com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>((CResource **)this + 23);
  CRenderTarget::~CRenderTarget(this);
}
