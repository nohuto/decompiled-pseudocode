/*
 * XREFs of ?NotifySessionTerminate@AudioSessionManagerProvider@@YAXK@Z @ 0x1800D37C0
 * Callers:
 *     VADServerUserSessionChanged @ 0x18001CD2C (VADServerUserSessionChanged.c)
 * Callees:
 *     ?ForEachEndpoint@CEndpointStoreCache@@QEAAJ$$QEAV?$function@$$A6AJAEAV?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@Z@std@@@Z @ 0x18001D138 (-ForEachEndpoint@CEndpointStoreCache@@QEAAJ$$QEAV-$function@$$A6AJAEAV-$com_ptr_t@VCEndpointStor.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AudioSessionManagerProvider::NotifySessionTerminate(AudioSessionManagerProvider *this)
{
  _QWORD *v1; // rdx
  _QWORD v2[7]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+80h] [rbp+8h] BYREF

  v4 = (int)this;
  v2[0] = off_180175290;
  v2[1] = &v4;
  v3 = v2;
  CEndpointStoreCache::ForEachEndpoint(this, (__int64)v2);
  if ( v3 )
  {
    v1 = v2;
    LOBYTE(v1) = v3 != v2;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v3 + 32LL))(v3, v1);
  }
}
