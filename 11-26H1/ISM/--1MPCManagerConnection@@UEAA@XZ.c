/*
 * XREFs of ??1MPCManagerConnection@@UEAA@XZ @ 0x1800B602C
 * Callers:
 *     ??_EMPCManagerConnection@@UEAAPEAXI@Z @ 0x1800B6230 (--_EMPCManagerConnection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VMPCManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800B5E0C (--1-$com_ptr_t@VMPCManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall MPCManagerConnection::~MPCManagerConnection(MPCManagerConnection *this)
{
  wil::com_ptr_t<MPCManager,wil::err_exception_policy>::~com_ptr_t<MPCManager,wil::err_exception_policy>((__int64 *)this + 32);
  wil::com_ptr_t<MPCManager,wil::err_exception_policy>::~com_ptr_t<MPCManager,wil::err_exception_policy>((__int64 *)this + 31);
  Microsoft::BamoImpl::BaseBamoConnectionImpl::~BaseBamoConnectionImpl((MPCManagerConnection *)((char *)this + 8));
}
