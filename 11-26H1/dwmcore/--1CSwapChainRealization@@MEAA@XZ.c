/*
 * XREFs of ??1CSwapChainRealization@@MEAA@XZ @ 0x1802AC8EC
 * Callers:
 *     ??_ECSwapChainRealization@@MEAAPEAXI@Z @ 0x1802AC990 (--_ECSwapChainRealization@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCDxHandleStereoBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800F586C (--1-$com_ptr_t@VCDxHandleStereoBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ReleaseTexture@CSwapChainRealization@@IEAAXXZ @ 0x1802AE240 (-ReleaseTexture@CSwapChainRealization@@IEAAXXZ.c)
 */

void __fastcall CSwapChainRealization::~CSwapChainRealization(CSwapChainRealization *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &CSwapChainRealization::`vftable'{for `IDeviceResource'};
  *((_QWORD *)this + 1) = &CSwapChainRealization::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)this + 2) = &CSwapChainRealization::`vftable'{for `IOverlayPlaneResource'};
  *((_QWORD *)this + 7) = &CSwapChainRealization::`vftable';
  v2 = (void *)*((_QWORD *)this + 29);
  if ( v2 )
    CloseHandle(v2);
  CSwapChainRealization::ReleaseTexture(this);
  wil::com_ptr_t<CDxHandleStereoBitmapRealization,wil::err_returncode_policy>::~com_ptr_t<CDxHandleStereoBitmapRealization,wil::err_returncode_policy>((volatile signed __int32 **)this + 36);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 35);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 34);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 33);
  CDeviceResourceT<CMILCOMBaseT<ISwapChainRealization,IDeviceResource,CMilObjectDeleter>>::~CDeviceResourceT<CMILCOMBaseT<ISwapChainRealization,IDeviceResource,CMilObjectDeleter>>(this);
}
