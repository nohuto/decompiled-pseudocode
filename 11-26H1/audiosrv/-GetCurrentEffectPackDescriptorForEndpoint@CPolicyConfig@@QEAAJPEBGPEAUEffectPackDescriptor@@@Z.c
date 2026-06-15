/*
 * XREFs of ?GetCurrentEffectPackDescriptorForEndpoint@CPolicyConfig@@QEAAJPEBGPEAUEffectPackDescriptor@@@Z @ 0x18006EBFC
 * Callers:
 *     s_epmGetCurrentEffectPackDescriptorForEndpoint @ 0x18006EAC0 (s_epmGetCurrentEffectPackDescriptorForEndpoint.c)
 * Callees:
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x180010D90 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011720 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x18005A368 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 *     ?GetCurrentEffectPack@CEndpointCharacteristics@@QEAAAEAV?$shared_ptr@VEffectPack@@@std@@XZ @ 0x180068700 (-GetCurrentEffectPack@CEndpointCharacteristics@@QEAAAEAV-$shared_ptr@VEffectPack@@@std@@XZ.c)
 *     ?GetEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18006ECBC (-GetEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z.c)
 *     memcpy_0 @ 0x1800B31FC (memcpy_0.c)
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPolicyConfig::GetCurrentEffectPackDescriptorForEndpoint(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        struct EffectPackDescriptor *a3)
{
  HANDLE *CurrentEffectPack; // rax
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v7; // [rsp+28h] [rbp-10h]
  CEndpointCharacteristics *v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0LL;
  if ( (int)GetEndpointCharacteristics(a2, 0, &v8) >= 0 )
  {
    if ( CEndpointCharacteristics::AreEnhancementsEnabled(v8) )
    {
      CurrentEffectPack = CEndpointCharacteristics::GetCurrentEffectPack((struct _RTL_CRITICAL_SECTION *)v8);
      std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(&v6, CurrentEffectPack);
      memcpy_0(a3, *(const void **)(v6 + 1568), 0x520uLL);
      if ( v7 )
        std::_Ref_count_base::_Decref(v7);
    }
    else
    {
      memset_0(a3, 0, 0x520uLL);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v8);
    return 0LL;
  }
  else
  {
    if ( v8 )
      (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v8 + 16LL))(v8);
    return 2147942487LL;
  }
}
