/*
 * XREFs of ??1CCompositor@@MEAA@XZ @ 0x1800A7EA8
 * Callers:
 *     ??_GCCompositor@@MEAAPEAXI@Z @ 0x1800A7F20 (--_GCCompositor@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Shutdown@CCompositor@@IEAAXXZ @ 0x1800A80A4 (-Shutdown@CCompositor@@IEAAXXZ.c)
 */

void __fastcall CCompositor::~CCompositor(CCompositor *this)
{
  *(_QWORD *)this = &CCompositor::`vftable'{for `Windows::UI::Composition::IInteropCompositorPartnerCallback'};
  *((_QWORD *)this + 1) = &CCompositor::`vftable'{for `CBaseObject'};
  CCompositor::Shutdown(this);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)this + 5);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)this + 4);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)this + 3);
  CBaseObject::~CBaseObject((CCompositor *)((char *)this + 8));
}
