/*
 * XREFs of _lambda_b344cb29cbcca53182114ed25d377543_::operator() @ 0x1800C04F0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_b344cb29cbcca53182114ed25d377543__long_IAudioProcessingObject____GUID_unsigned_int_::_Do_call @ 0x1800C0770 (std--_Func_impl_no_alloc__lambda_b344cb29cbcca53182114ed25d377543__long_IAudioProce_ea_1800C0770.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@UIAudioSystemEffects3@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAudioSystemEffects3@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioSystemEffects3@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UIAudioSystemEffects3@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1800C0150 (--$_Emplace_reallocate@V-$com_ptr_t@UIAudioSystemEffects3@@Uerr_returncode_policy@wil@@@wil@@@-$.c)
 *     ??$try_com_query_to@UIAudioSystemEffects3@@AEAPEAUIAudioProcessingObject@@@wil@@YA_NAEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects3@@@Z @ 0x1800C0284 (--$try_com_query_to@UIAudioSystemEffects3@@AEAPEAUIAudioProcessingObject@@@wil@@YA_NAEAPEAUIAudi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_b344cb29cbcca53182114ed25d377543_::operator()(__int64 ***a1, __int64 a2)
{
  __int64 **v3; // rbx
  __int64 v4; // rdi
  __int64 *v5; // rdx
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v7 = a2;
  v8 = 0LL;
  if ( a2 )
  {
    v8 = 0LL;
    if ( wil::try_com_query_to<IAudioSystemEffects3,IAudioProcessingObject * &>(&v7, (__int64)&v8) )
    {
      v3 = *a1;
      v4 = v8;
      v7 = v8;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      v5 = v3[12];
      if ( v5 == v3[13] )
      {
        std::vector<wil::com_ptr_t<IAudioSystemEffects3,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IAudioSystemEffects3,wil::err_returncode_policy>>(
          v3 + 11,
          v5,
          &v7);
      }
      else
      {
        v7 = 0LL;
        *v5 = v4;
        ++v3[12];
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v7);
    }
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v8);
  return 0LL;
}
