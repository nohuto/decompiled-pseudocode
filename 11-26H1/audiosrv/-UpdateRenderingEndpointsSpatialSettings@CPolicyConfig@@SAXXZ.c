/*
 * XREFs of ?UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ @ 0x18010CCF8
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_65e9a6d7f64f8b4ca9838a0c7b29edbf__void_::_Do_call @ 0x18010CEE0 (std--_Func_impl_no_alloc__lambda_65e9a6d7f64f8b4ca9838a0c7b29edbf__void_--_Do_call.c)
 *     std::_Func_impl_no_alloc__lambda_98875cb7b650817bfd28d2b98d662752__void_::_Do_call @ 0x18010CEF0 (std--_Func_impl_no_alloc__lambda_98875cb7b650817bfd28d2b98d662752__void_--_Do_call.c)
 *     std::_Func_impl_no_alloc__lambda_b6b344f51bd20fdb0c730f08461ce397__void_::_Do_call @ 0x18010CF50 (std--_Func_impl_no_alloc__lambda_b6b344f51bd20fdb0c730f08461ce397__void_--_Do_call.c)
 *     PolicyConfigSetAccessibilityAudioMonoMixState @ 0x18010DAD0 (PolicyConfigSetAccessibilityAudioMonoMixState.c)
 * Callees:
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z @ 0x1800121EC (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?GetEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18006ECBC (-GetEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z.c)
 *     ?DisconnectHelper@CPolicyConfig@@SAXPEBG@Z @ 0x18010BA94 (-DisconnectHelper@CPolicyConfig@@SAXPEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void CPolicyConfig::UpdateRenderingEndpointsSpatialSettings(void)
{
  void *v0; // rcx
  unsigned int v1; // ebx
  __int64 v2; // [rsp+30h] [rbp-18h] BYREF
  struct CEndpointCharacteristics *v3[2]; // [rsp+38h] [rbp-10h] BYREF
  unsigned int v4; // [rsp+60h] [rbp+18h] BYREF
  int v5; // [rsp+68h] [rbp+20h] BYREF
  LPVOID pv; // [rsp+70h] [rbp+28h] BYREF
  __int64 v7; // [rsp+78h] [rbp+30h] BYREF

  v4 = 0;
  v7 = 0LL;
  if ( ((int (__fastcall *)(struct IMMDeviceEnumerator *, _QWORD, __int64, __int64 *))g_DeviceEnumerator->lpVtbl->EnumAudioEndpoints)(
         g_DeviceEnumerator,
         0LL,
         1LL,
         &v7) >= 0
    && (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v7 + 24LL))(v7, &v4) >= 0 )
  {
    v3[0] = 0LL;
    v0 = 0LL;
    pv = 0LL;
    v1 = 0;
    if ( v4 )
    {
      do
      {
        v2 = 0LL;
        if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v7 + 32LL))(v7, v1, &v2) >= 0
          && (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v2 + 40LL))(v2, &pv) >= 0
          && (int)GetEndpointCharacteristics((const unsigned __int16 *)pv, 1u, v3) >= 0 )
        {
          v5 = 0;
          CEndpointCharacteristics::ProcessPropertyChange(v3[0], &PKEY_SpatialAudio_Signaling_Key, &v5);
          if ( v5 )
            CPolicyConfig::DisconnectHelper((RTL_SRWLOCK *)pv);
        }
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v2);
        ++v1;
      }
      while ( v1 < v4 );
      v0 = pv;
    }
    CoTaskMemFree(v0);
    pv = 0LL;
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v3);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v7);
}
