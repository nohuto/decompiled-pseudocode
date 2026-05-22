/*
 * XREFs of ??0SystemContextEndpoint@@AEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180088F10
 * Callers:
 *     ??0DeviceInputHost@@AEAA@XZ @ 0x180088C68 (--0DeviceInputHost@@AEAA@XZ.c)
 * Callees:
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x180026AC8 (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ??0?$com_ptr_t@VDeviceDockServer@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVDeviceDockServer@@@Z @ 0x18007DFAC (--0-$com_ptr_t@VDeviceDockServer@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVDeviceDockServer@@@.c)
 *     ??1?$com_ptr_t@VSystemContextManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18007F710 (--1-$com_ptr_t@VSystemContextManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?DeferUntilBootstrapped@InputSystemInternalClientConnection@@QEAAXV?$function@$$A6AXAEAV?$ComPtr@VBamoInputSystemInternalProxy@@@WRL@Microsoft@@@Z@std@@@Z @ 0x180130B5C (-DeferUntilBootstrapped@InputSystemInternalClientConnection@@QEAAXV-$function@$$A6AXAEAV-$ComPtr.c)
 */

// Hidden C++ exception states: #wind=3
SystemContextEndpoint *__fastcall SystemContextEndpoint::SystemContextEndpoint(
        SystemContextEndpoint *this,
        struct ISMBamos_AutoBamos::BamoConnection *a2)
{
  __int64 *v4; // rax
  __int64 v5; // rcx
  _QWORD v7[11]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v8; // [rsp+88h] [rbp+10h] BYREF
  __int64 v9; // [rsp+90h] [rbp+18h] BYREF

  *(_QWORD *)this = &BamoSystemContextEndpointPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &SystemContextEndpoint::`vftable'{for `ISystemContextEndpointPrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((SystemContextEndpoint *)((char *)this + 16), a2);
  *((_QWORD *)this + 2) = &BamoImpl::BamoSystemContextEndpointPrincipalImpl::`vftable';
  *(_QWORD *)this = &SystemContextEndpoint::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &SystemContextEndpoint::`vftable'{for `ISystemContextEndpointPrincipal'};
  v4 = wil::com_ptr_t<DeviceDockServer,wil::err_returncode_policy>::com_ptr_t<DeviceDockServer,wil::err_returncode_policy>(
         &v9,
         (__int64)this);
  v5 = *v4;
  *v4 = 0LL;
  v7[0] = off_1801E5C88;
  v8 = 0LL;
  v7[1] = v5;
  v7[7] = v7;
  InputSystemInternalClientConnection::DeferUntilBootstrapped(a2);
  wil::com_ptr_t<SystemContextManager,wil::err_exception_policy>::~com_ptr_t<SystemContextManager,wil::err_exception_policy>(&v8);
  wil::com_ptr_t<SystemContextManager,wil::err_exception_policy>::~com_ptr_t<SystemContextManager,wil::err_exception_policy>(&v9);
  return this;
}
