/*
 * XREFs of ?GetDefaultAudioEndpoint@RemapPolicyRule@@UEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEA_NPEAPEAG@Z @ 0x18012C7F0
 * Callers:
 *     ?GetDefaultAudioEndpoint@CommunicationsRemapPolicyRule@@UEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEA_NPEAPEAG@Z @ 0x18012C7D0 (-GetDefaultAudioEndpoint@CommunicationsRemapPolicyRule@@UEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_00.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?GetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEA_NPEAPEAUIMMDevice@@@Z @ 0x18001611C (-GetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RemapPolicyRule::GetDefaultAudioEndpoint(
        _DWORD *a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        bool *a5,
        __int64 a6)
{
  bool *v9; // rbx
  int DefaultAudioEndpoint; // esi
  struct IMMDevice *v12; // [rsp+40h] [rbp+8h] BYREF

  if ( a4 != a1[16] )
    return 2147943568LL;
  v12 = 0LL;
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v12);
  v9 = a5;
  DefaultAudioEndpoint = DynamicAudioEndpointManager::GetDefaultAudioEndpoint(
                           (__int64)g_DynamicAudioEndpointManager,
                           a2,
                           a3,
                           a1[19],
                           a5,
                           &v12);
  if ( DefaultAudioEndpoint >= 0 )
  {
    DefaultAudioEndpoint = ((__int64 (__fastcall *)(struct IMMDevice *, __int64))v12->lpVtbl->GetId)(v12, a6);
    if ( DefaultAudioEndpoint >= 0 )
    {
      if ( v9 )
      {
        if ( !*v9 )
          *v9 = (a1[20] & 2) != 0;
      }
    }
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v12);
  return (unsigned int)DefaultAudioEndpoint;
}
