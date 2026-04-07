/*
 * XREFs of ??1CVisualProxy@@UEAA@XZ @ 0x18006969C
 * Callers:
 *     ??_GCVisualProxy@@UEAAPEAXI@Z @ 0x180069650 (--_GCVisualProxy@@UEAAPEAXI@Z.c)
 *     ??_ECRedirectVisualProxy@@UEAAPEAXI@Z @ 0x1800A9E80 (--_ECRedirectVisualProxy@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180065BD0 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CVisualProxy::~CVisualProxy(CVisualProxy *this)
{
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)this + 3);
  CResourceProxy::~CResourceProxy(this);
}
