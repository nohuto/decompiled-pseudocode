/*
 * XREFs of ??1CDDASwapChain@@MEAA@XZ @ 0x18020DD88
 * Callers:
 *     ??_ECDDASwapChain@@MEAAPEAXI@Z @ 0x1801DBAB0 (--_ECDDASwapChain@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180074C60 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDDASwapChain::~CDDASwapChain(CDDASwapChain *this)
{
  _QWORD *v2; // rdx
  __int64 v3; // rcx

  *(_QWORD *)this = &CDDASwapChain::`vftable'{for `IDeviceResource'};
  v2 = (_QWORD *)((char *)this + 48);
  *((_QWORD *)this + 1) = &CDDASwapChain::`vftable'{for `IPixelFormat'};
  v3 = *((_QWORD *)this + 8);
  *v2 = &CDDASwapChain::`vftable';
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 80LL))(v3);
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion **)this + 14);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 8);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 7);
  CDeviceResourceT<CMILCOMBaseT<ISwapChain,IDeviceResource,CMilObjectDeleter>>::~CDeviceResourceT<CMILCOMBaseT<ISwapChain,IDeviceResource,CMilObjectDeleter>>(this);
}
