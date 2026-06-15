/*
 * XREFs of ?ResetApoTelemetryPublishingState@CPolicyConfig@@UEAAXPEBG@Z @ 0x18007F120
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D260 (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x18001DBC0 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 */

void __fastcall CPolicyConfig::ResetApoTelemetryPublishingState(RTL_SRWLOCK *this, const unsigned __int16 *a2)
{
  struct CEndpointStore *v2; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0LL;
  if ( (int)CEndpointStoreCache::GetEndpointStore(this, a2, &v2) >= 0 )
    _InterlockedExchange((volatile __int32 *)v2 + 65, 0);
  wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v2);
}
