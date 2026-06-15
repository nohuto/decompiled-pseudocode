/*
 * XREFs of ?FindSaDeviceByResourceId@DeviceGraphStore@@YAJ_KPEAPEAUISaDeviceProxy@@@Z @ 0x1801018A4
 * Callers:
 *     ?ReleaseResource@CAudioResourceManager@@UEAAJ_K@Z @ 0x1800CAB50 (-ReleaseResource@CAudioResourceManager@@UEAAJ_K@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D260 (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ?FindFirstEndpoint@CEndpointStoreCache@@QEAA?AV?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@$$QEAV?$function@$$A6A_NAEAV?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@Z@std@@@Z @ 0x180104ABC (-FindFirstEndpoint@CEndpointStoreCache@@QEAA-AV-$com_ptr_t@VCEndpointStore@@Uerr_returncode_poli.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DeviceGraphStore::FindSaDeviceByResourceId(
        DeviceGraphStore *this,
        _QWORD *a2,
        struct ISaDeviceProxy **a3)
{
  _QWORD *v3; // rdx
  unsigned int v4; // ebx
  volatile signed __int32 *v6; // [rsp+20h] [rbp-60h] BYREF
  _QWORD *v7; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v8[7]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD *v9; // [rsp+68h] [rbp-18h]
  DeviceGraphStore *v10; // [rsp+90h] [rbp+10h] BYREF

  v10 = this;
  v7 = a2;
  *a2 = 0LL;
  v8[0] = off_180177328;
  v8[1] = &v10;
  v8[2] = &v7;
  v9 = v8;
  CEndpointStoreCache::FindFirstEndpoint(this, &v6, v8);
  if ( v9 )
  {
    v3 = v8;
    LOBYTE(v3) = v9 != v8;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v9 + 32LL))(v9, v3);
  }
  v4 = v6 == 0LL ? 0x887C001A : 0;
  wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>(&v6);
  return v4;
}
