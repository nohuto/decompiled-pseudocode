/*
 * XREFs of ?push_front@?$forward_list@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXAEBV?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180014FF4
 * Callers:
 *     ?UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NAEBV?$shared_ptr@VDuckingDescriptor@@@std@@HPEAUIDuckingController@@PEAH@Z @ 0x18000D010 (-UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NAEBV-$shared_ptr@VDuckingDescriptor.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180008500 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180015160 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::forward_list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>::push_front(
        _QWORD *a1,
        __int64 *a2)
{
  _QWORD *result; // rax
  volatile int *v5; // rdx
  _QWORD *v6; // r8
  __int64 v7; // rcx

  result = operator new(0x10uLL);
  v6 = result;
  v7 = *a2;
  result[1] = *a2;
  if ( v7 )
    result = (_QWORD *)Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v7 + 52), v5);
  *v6 = *a1;
  *a1 = v6;
  return result;
}
