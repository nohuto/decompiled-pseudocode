/*
 * XREFs of ?DisconnectSessionsForTsSession@AudioSessionManagerProvider@@YAXKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x180086088
 * Callers:
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEAVCEndpointCharacteristics@@PEBU_GUID@@KPEAPEAG@Z @ 0x180016410 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEAVCEndpointCharacteristics@@PEBU_GUID@@K.c)
 *     PolicyConfigSetAccessibilityAudioMonoMixState @ 0x18010DAD0 (PolicyConfigSetAccessibilityAudioMonoMixState.c)
 * Callees:
 *     ?ForEachEndpoint@CEndpointStoreCache@@QEAAJ$$QEAV?$function@$$A6AJAEAV?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@Z@std@@@Z @ 0x18001D138 (-ForEachEndpoint@CEndpointStoreCache@@QEAAJ$$QEAV-$function@$$A6AJAEAV-$com_ptr_t@VCEndpointStor.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AudioSessionManagerProvider::DisconnectSessionsForTsSession(
        AudioSessionManagerProvider *this,
        __int64 a2,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a3)
{
  _QWORD *v3; // rdx
  int v4; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v5[7]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD *v6; // [rsp+68h] [rbp-18h]
  int v7; // [rsp+90h] [rbp+10h] BYREF

  v7 = (int)this;
  v4 = 0;
  v5[0] = off_180174188;
  v5[1] = &v7;
  v5[2] = &v4;
  v6 = v5;
  CEndpointStoreCache::ForEachEndpoint(this, (__int64)v5);
  if ( v6 )
  {
    v3 = v5;
    LOBYTE(v3) = v6 != v5;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v6 + 32LL))(v6, v3);
  }
}
