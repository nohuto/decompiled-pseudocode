/*
 * XREFs of ??1CDDisplayManager@@EEAA@XZ @ 0x1800ABDBC
 * Callers:
 *     ??_GCDDisplayManager@@EEAAPEAXI@Z @ 0x1800ABDF0 (--_GCDDisplayManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180065BD0 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CDDisplayManager::~CDDisplayManager(CDDisplayManager *this)
{
  *(_QWORD *)this = &CDDisplayManager::`vftable';
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)this + 2);
  CBaseObject::~CBaseObject(this);
}
