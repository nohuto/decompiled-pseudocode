/*
 * XREFs of ??1MPCConstantManagerClientPrincipal@@UEAA@XZ @ 0x180178434
 * Callers:
 *     ??_EMPCConstantManagerClientPrincipal@@UEAAPEAXI@Z @ 0x180178460 (--_EMPCConstantManagerClientPrincipal@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VMPCConstantManagerClient@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180178414 (--1-$com_ptr_t@VMPCConstantManagerClient@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall MPCConstantManagerClientPrincipal::~MPCConstantManagerClientPrincipal(
        MPCConstantManagerClientPrincipal *this,
        volatile int *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  const char *v5; // r9

  wil::com_ptr_t<MPCConstantManagerClient,wil::err_exception_policy>::~com_ptr_t<MPCConstantManagerClient,wil::err_exception_policy>(
    (__int64 *)this + 7,
    a2);
  wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>(
    (volatile signed __int32 **)this + 4,
    v3,
    v4,
    v5);
}
